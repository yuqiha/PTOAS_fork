建议改法

我这边更推荐下面这个方向，而不是把 TRandomOp 从 AnySignlessInteger 放宽成 AnyInteger：

保持 TRandomOp 的 6 个输入 operand 仍然是 signless integer
在测试/前端生成 pto.trandom 之前，显式把 ui32 标量做一次 ui32 -> i32 的 signless 归一化
PTO/MLIR 侧可以用 builtin.unrealized_conversion_cast
TileLang trandom.py 模板注册也同步按 (i32, i32, i32, i32, i32, i32, ui32) 来匹配
模板内部如果算法希望按无符号 32-bit word 做位级运算，再在入口把广播出来的 i32 向量 vbitcast 成 ui32 后继续做 vaddc/vaddcs/vmull/vxor/vsts
这样做的好处是：

PTO IR 约束保持统一，不把 trandom 变成一个 signedness 特例
TileLang / VPTO / LLVM 各层的职责边界更清楚
对 Philox 这类本质上按 bit pattern 运算的逻辑，也不会引入数值语义变化
不太建议的修法是：

直接把 TRandomOp operand 从 AnySignlessInteger 放宽到 AnyInteger
或者让 load_scalar 在 !pto.ptr<ui32> 上直接返回 i32，把内存元素语义和 op operand 语义揉在一起



补一个“当前我这边已经改到能过”的最小代码参考，方便后面直接比对。

test/dsl/trandom.pto 里，进入 pto.trandom 前先把 ui32 标量显式归一化成 signless i32
%key0 = pto.load_scalar %key_ptr[%c0] : !pto.ptr<ui32> -> ui32
%key1 = pto.load_scalar %key_ptr[%c1] : !pto.ptr<ui32> -> ui32
%counter0 = pto.load_scalar %counter_ptr[%c0] : !pto.ptr<ui32> -> ui32
%counter1 = pto.load_scalar %counter_ptr[%c1] : !pto.ptr<ui32> -> ui32
%counter2 = pto.load_scalar %counter_ptr[%c2] : !pto.ptr<ui32> -> ui32
%counter3 = pto.load_scalar %counter_ptr[%c3] : !pto.ptr<ui32> -> ui32

%key0_i32 = builtin.unrealized_conversion_cast %key0 : ui32 to i32
%key1_i32 = builtin.unrealized_conversion_cast %key1 : ui32 to i32
%counter0_i32 = builtin.unrealized_conversion_cast %counter0 : ui32 to i32
%counter1_i32 = builtin.unrealized_conversion_cast %counter1 : ui32 to i32
%counter2_i32 = builtin.unrealized_conversion_cast %counter2 : ui32 to i32
%counter3_i32 = builtin.unrealized_conversion_cast %counter3 : ui32 to i32

pto.trandom ins(%key0_i32, %key1_i32, %counter0_i32, %counter1_i32, %counter2_i32, %counter3_i32
                : i32, i32, i32, i32, i32, i32)
            outs(%dst : !pto.tile_buf<loc=vec, dtype=ui32, rows=4, cols=256, v_row=4, v_col=256,
                                      blayout=row_major, slayout=none_box, fractal=512, pad=0>)
lib/TileOps/trandom.py 里，模板 schema 和参数签名改成前 6 个 i32、最后一个 ui32
@pto.vkernel(
    target="a5",
    op="pto.trandom",
    dtypes=[
        (pto.i32, pto.i32, pto.i32, pto.i32, pto.i32, pto.i32, pto.ui32),
    ],
    constraints=[_check_rounds_10, _check_row_major],
    advanced=True,
)
def template_trandom_rounds10(key0: pto.i32, key1: pto.i32,
                              counter0: pto.i32, counter1: pto.i32,
                              counter2: pto.i32, counter3: pto.i32,
                              dst: pto.Tile):
rounds=7 那个模板也是同样改法。

模板内部入口把广播出来的 i32 向量立即 vbitcast 回 ui32，后续 Philox 按无符号 32-bit word 做位级运算
ctr0 = pto.vbitcast(pto.vbr(counter0), pto.ui32)
ctr1 = pto.vbitcast(pto.vbr(counter1), pto.ui32)
ctr2 = pto.vbitcast(pto.vbr(counter2), pto.ui32)
ctr3 = pto.vbitcast(pto.vbr(counter3), pto.ui32)
key0_v = pto.vbitcast(pto.vbr(key0), pto.ui32)
key1_v = pto.vbitcast(pto.vbr(key1), pto.ui32)
zeros = pto.vbr(pto.ui32(0))
const0 = pto.vbr(pto.ui32(TRANDOM_CONST_0))
const1 = pto.vbr(pto.ui32(TRANDOM_CONST_1))
inc_idx = pto.vbr(pto.ui32(0))
按这个方向改完后，我这边下面这条命令已经能完整走通，返回码是 0：

build/tools/ptoas/ptoas \
  --pto-arch=a5 \
  --pto-backend=vpto \
  --enable-insert-sync \
  --enable-tile-op-expand \
  --vpto-emit-hivm-llvm \
  test/dsl/trandom.pto -o /tmp/trandom.ll
所以当前更像是：

PTO IR 层保持 trandom 输入 operand 为 signless i32
前端/测试在进入 op 前负责 ui32 -> i32 归一化
TileLang 模板内部再按位级语义 vbitcast 回 ui32
这条链路是可以工作的。