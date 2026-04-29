/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace pto {
class AddressSpaceAttr;
class PipeAttr;
class MemBarAttr;
class PipeEventTypeAttr;
class SyncOpTypeAttr;
class LayoutAttr;
class FunctionKernelKindAttr;
class TFuncCoreTypeAttr;
class TModuleCoreTypeAttr;
class EventAttr;
class PadModeAttr;
class VectorFunctionAttr;
class CmpModeAttr;
class RoundModeAttr;
class SaturationModeAttr;
class STPhaseAttr;
class AtomicTypeAttr;
class ReluPreModeAttr;
class GatherOOBAttr;
class ScatterAtomicOpAttr;
class ScatterOOBAttr;
class AccToVecModeAttr;
class MaskPatternAttr;
class BLayoutAttr;
class SLayoutAttr;
class PadValueAttr;
class CompactModeAttr;
class TileBufConfigAttr;
class QuantTypeAttr;
namespace detail {
struct AddressSpaceAttrStorage;
} // namespace detail
class AddressSpaceAttr : public ::mlir::Attribute::AttrBase<AddressSpaceAttr, ::mlir::Attribute, detail::AddressSpaceAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.address_space";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static AddressSpaceAttr get(::mlir::MLIRContext *context, ::mlir::pto::AddressSpace address_space);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"address_space"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::AddressSpace getAddressSpace() const;
};
namespace detail {
struct PipeAttrStorage;
} // namespace detail
class PipeAttr : public ::mlir::Attribute::AttrBase<PipeAttr, ::mlir::Attribute, detail::PipeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.pipe";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static PipeAttr get(::mlir::MLIRContext *context, ::mlir::pto::PIPE pipe);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"pipe"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::PIPE getPipe() const;
};
namespace detail {
struct MemBarAttrStorage;
} // namespace detail
class MemBarAttr : public ::mlir::Attribute::AttrBase<MemBarAttr, ::mlir::Attribute, detail::MemBarAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.membar";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static MemBarAttr get(::mlir::MLIRContext *context, ::mlir::pto::MemBarKind kind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"membar"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::MemBarKind getKind() const;
};
namespace detail {
struct PipeEventTypeAttrStorage;
} // namespace detail
class PipeEventTypeAttr : public ::mlir::Attribute::AttrBase<PipeEventTypeAttr, ::mlir::Attribute, detail::PipeEventTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.pipe_event_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static PipeEventTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::SyncOpType op_type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"pipe_event_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::SyncOpType getOpType() const;
};
namespace detail {
struct SyncOpTypeAttrStorage;
} // namespace detail
class SyncOpTypeAttr : public ::mlir::Attribute::AttrBase<SyncOpTypeAttr, ::mlir::Attribute, detail::SyncOpTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.sync_op_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static SyncOpTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::SyncOpType op_type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"sync_op_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::SyncOpType getOpType() const;
};
namespace detail {
struct LayoutAttrStorage;
} // namespace detail
class LayoutAttr : public ::mlir::Attribute::AttrBase<LayoutAttr, ::mlir::Attribute, detail::LayoutAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.layout";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static LayoutAttr get(::mlir::MLIRContext *context, ::mlir::pto::Layout layout);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"layout"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::Layout getLayout() const;
};
namespace detail {
struct FunctionKernelKindAttrStorage;
} // namespace detail
class FunctionKernelKindAttr : public ::mlir::Attribute::AttrBase<FunctionKernelKindAttr, ::mlir::Attribute, detail::FunctionKernelKindAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.kernel_kind";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static FunctionKernelKindAttr get(::mlir::MLIRContext *context, ::mlir::pto::FunctionKernelKind kernelKind);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"kernel_kind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::FunctionKernelKind getKernelKind() const;
};
namespace detail {
struct TFuncCoreTypeAttrStorage;
} // namespace detail
class TFuncCoreTypeAttr : public ::mlir::Attribute::AttrBase<TFuncCoreTypeAttr, ::mlir::Attribute, detail::TFuncCoreTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.func_core_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static TFuncCoreTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::TFuncCoreType funcCoreType);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"func_core_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::TFuncCoreType getFuncCoreType() const;
};
namespace detail {
struct TModuleCoreTypeAttrStorage;
} // namespace detail
class TModuleCoreTypeAttr : public ::mlir::Attribute::AttrBase<TModuleCoreTypeAttr, ::mlir::Attribute, detail::TModuleCoreTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.module_core_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static TModuleCoreTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::TModuleCoreType moduleCoreType);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"module_core_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::TModuleCoreType getModuleCoreType() const;
};
namespace detail {
struct EventAttrStorage;
} // namespace detail
class EventAttr : public ::mlir::Attribute::AttrBase<EventAttr, ::mlir::Attribute, detail::EventAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.event";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static EventAttr get(::mlir::MLIRContext *context, ::mlir::pto::EVENT event);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"event"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::EVENT getEvent() const;
};
namespace detail {
struct PadModeAttrStorage;
} // namespace detail
class PadModeAttr : public ::mlir::Attribute::AttrBase<PadModeAttr, ::mlir::Attribute, detail::PadModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.padmode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static PadModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::PadMode padmode);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"padmode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::PadMode getPadmode() const;
};
class VectorFunctionAttr : public ::mlir::Attribute::AttrBase<VectorFunctionAttr, ::mlir::Attribute, ::mlir::AttributeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.vector_function";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vector_function"};
  }

};
namespace detail {
struct CmpModeAttrStorage;
} // namespace detail
class CmpModeAttr : public ::mlir::Attribute::AttrBase<CmpModeAttr, ::mlir::Attribute, detail::CmpModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.cmp";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static CmpModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::CmpMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"cmp"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::CmpMode getValue() const;
};
namespace detail {
struct RoundModeAttrStorage;
} // namespace detail
class RoundModeAttr : public ::mlir::Attribute::AttrBase<RoundModeAttr, ::mlir::Attribute, detail::RoundModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.round_mode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static RoundModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::RoundMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"round_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::RoundMode getValue() const;
};
namespace detail {
struct SaturationModeAttrStorage;
} // namespace detail
class SaturationModeAttr : public ::mlir::Attribute::AttrBase<SaturationModeAttr, ::mlir::Attribute, detail::SaturationModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.saturation_mode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static SaturationModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::SaturationMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"saturation_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::SaturationMode getValue() const;
};
namespace detail {
struct STPhaseAttrStorage;
} // namespace detail
class STPhaseAttr : public ::mlir::Attribute::AttrBase<STPhaseAttr, ::mlir::Attribute, detail::STPhaseAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.st_phase";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static STPhaseAttr get(::mlir::MLIRContext *context, ::mlir::pto::STPhase value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"st_phase"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::STPhase getValue() const;
};
namespace detail {
struct AtomicTypeAttrStorage;
} // namespace detail
class AtomicTypeAttr : public ::mlir::Attribute::AttrBase<AtomicTypeAttr, ::mlir::Attribute, detail::AtomicTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.atomic_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static AtomicTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::AtomicType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"atomic_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::AtomicType getValue() const;
};
namespace detail {
struct ReluPreModeAttrStorage;
} // namespace detail
class ReluPreModeAttr : public ::mlir::Attribute::AttrBase<ReluPreModeAttr, ::mlir::Attribute, detail::ReluPreModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.relu_pre_mode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static ReluPreModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::ReluPreMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"relu_pre_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::ReluPreMode getValue() const;
};
namespace detail {
struct GatherOOBAttrStorage;
} // namespace detail
class GatherOOBAttr : public ::mlir::Attribute::AttrBase<GatherOOBAttr, ::mlir::Attribute, detail::GatherOOBAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.gather_oob";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static GatherOOBAttr get(::mlir::MLIRContext *context, ::mlir::pto::GatherOOB value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"gather_oob"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::GatherOOB getValue() const;
};
namespace detail {
struct ScatterAtomicOpAttrStorage;
} // namespace detail
class ScatterAtomicOpAttr : public ::mlir::Attribute::AttrBase<ScatterAtomicOpAttr, ::mlir::Attribute, detail::ScatterAtomicOpAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.scatter_atomic_op";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static ScatterAtomicOpAttr get(::mlir::MLIRContext *context, ::mlir::pto::ScatterAtomicOp value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"scatter_atomic_op"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::ScatterAtomicOp getValue() const;
};
namespace detail {
struct ScatterOOBAttrStorage;
} // namespace detail
class ScatterOOBAttr : public ::mlir::Attribute::AttrBase<ScatterOOBAttr, ::mlir::Attribute, detail::ScatterOOBAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.scatter_oob";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static ScatterOOBAttr get(::mlir::MLIRContext *context, ::mlir::pto::ScatterOOB value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"scatter_oob"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::ScatterOOB getValue() const;
};
namespace detail {
struct AccToVecModeAttrStorage;
} // namespace detail
class AccToVecModeAttr : public ::mlir::Attribute::AttrBase<AccToVecModeAttr, ::mlir::Attribute, detail::AccToVecModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.acc_to_vec_mode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static AccToVecModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::AccToVecMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"acc_to_vec_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::AccToVecMode getValue() const;
};
namespace detail {
struct MaskPatternAttrStorage;
} // namespace detail
class MaskPatternAttr : public ::mlir::Attribute::AttrBase<MaskPatternAttr, ::mlir::Attribute, detail::MaskPatternAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.mask_pattern";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static MaskPatternAttr get(::mlir::MLIRContext *context, ::mlir::pto::MaskPattern value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"mask_pattern"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::MaskPattern getValue() const;
};
namespace detail {
struct BLayoutAttrStorage;
} // namespace detail
class BLayoutAttr : public ::mlir::Attribute::AttrBase<BLayoutAttr, ::mlir::Attribute, detail::BLayoutAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.blayout";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static BLayoutAttr get(::mlir::MLIRContext *context, ::mlir::pto::BLayout value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"blayout"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::BLayout getValue() const;
};
namespace detail {
struct SLayoutAttrStorage;
} // namespace detail
class SLayoutAttr : public ::mlir::Attribute::AttrBase<SLayoutAttr, ::mlir::Attribute, detail::SLayoutAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.slayout";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static SLayoutAttr get(::mlir::MLIRContext *context, ::mlir::pto::SLayout value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"slayout"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::SLayout getValue() const;
};
namespace detail {
struct PadValueAttrStorage;
} // namespace detail
class PadValueAttr : public ::mlir::Attribute::AttrBase<PadValueAttr, ::mlir::Attribute, detail::PadValueAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.pad_value";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static PadValueAttr get(::mlir::MLIRContext *context, ::mlir::pto::PadValue value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"pad_value"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::PadValue getValue() const;
};
namespace detail {
struct CompactModeAttrStorage;
} // namespace detail
class CompactModeAttr : public ::mlir::Attribute::AttrBase<CompactModeAttr, ::mlir::Attribute, detail::CompactModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.compact_mode";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static CompactModeAttr get(::mlir::MLIRContext *context, ::mlir::pto::CompactMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"compact_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::CompactMode getValue() const;
};
namespace detail {
struct TileBufConfigAttrStorage;
} // namespace detail
class TileBufConfigAttr : public ::mlir::Attribute::AttrBase<TileBufConfigAttr, ::mlir::Attribute, detail::TileBufConfigAttrStorage> {
public:
  using Base::Base;
  static TileBufConfigAttr getDefault(MLIRContext *ctx);
  bool isDefault() const;

  static LogicalResult verify(function_ref<InFlightDiagnostic()> emitError,
                              mlir::Attribute bLayout,
                              mlir::Attribute sLayout,
                              mlir::IntegerAttr sFractalSize,
                              mlir::Attribute pad,
                              mlir::Attribute compactMode);
  static constexpr ::llvm::StringLiteral name = "pto.tile_buf_config";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static TileBufConfigAttr get(::mlir::MLIRContext *context, BLayoutAttr bLayout, SLayoutAttr sLayout, mlir::IntegerAttr sFractalSize, PadValueAttr pad, CompactModeAttr compactMode);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"tile_buf_config"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  BLayoutAttr getBLayout() const;
  SLayoutAttr getSLayout() const;
  mlir::IntegerAttr getSFractalSize() const;
  PadValueAttr getPad() const;
  CompactModeAttr getCompactMode() const;
};
namespace detail {
struct QuantTypeAttrStorage;
} // namespace detail
class QuantTypeAttr : public ::mlir::Attribute::AttrBase<QuantTypeAttr, ::mlir::Attribute, detail::QuantTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "pto.quant_type";
  static constexpr ::llvm::StringLiteral dialectName = "pto";
  static QuantTypeAttr get(::mlir::MLIRContext *context, ::mlir::pto::QuantType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"quant_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::pto::QuantType getValue() const;
};
} // namespace pto
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::AddressSpaceAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::PipeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::MemBarAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::PipeEventTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::SyncOpTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::LayoutAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::FunctionKernelKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::TFuncCoreTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::TModuleCoreTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::EventAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::PadModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::VectorFunctionAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::CmpModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::RoundModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::SaturationModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::STPhaseAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::AtomicTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::ReluPreModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::GatherOOBAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::ScatterAtomicOpAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::ScatterOOBAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::AccToVecModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::MaskPatternAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::BLayoutAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::SLayoutAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::PadValueAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::CompactModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::TileBufConfigAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::pto::QuantTypeAttr)

#endif  // GET_ATTRDEF_CLASSES

