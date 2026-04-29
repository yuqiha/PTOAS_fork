/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::pto::AddressSpaceAttr,
::mlir::pto::PipeAttr,
::mlir::pto::MemBarAttr,
::mlir::pto::PipeEventTypeAttr,
::mlir::pto::SyncOpTypeAttr,
::mlir::pto::LayoutAttr,
::mlir::pto::FunctionKernelKindAttr,
::mlir::pto::TFuncCoreTypeAttr,
::mlir::pto::TModuleCoreTypeAttr,
::mlir::pto::EventAttr,
::mlir::pto::PadModeAttr,
::mlir::pto::VectorFunctionAttr,
::mlir::pto::CmpModeAttr,
::mlir::pto::RoundModeAttr,
::mlir::pto::SaturationModeAttr,
::mlir::pto::STPhaseAttr,
::mlir::pto::AtomicTypeAttr,
::mlir::pto::ReluPreModeAttr,
::mlir::pto::GatherOOBAttr,
::mlir::pto::ScatterAtomicOpAttr,
::mlir::pto::ScatterOOBAttr,
::mlir::pto::AccToVecModeAttr,
::mlir::pto::MaskPatternAttr,
::mlir::pto::BLayoutAttr,
::mlir::pto::SLayoutAttr,
::mlir::pto::PadValueAttr,
::mlir::pto::CompactModeAttr,
::mlir::pto::TileBufConfigAttr,
::mlir::pto::QuantTypeAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::pto::AddressSpaceAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::AddressSpaceAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::PipeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::PipeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::MemBarAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::MemBarAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::PipeEventTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::PipeEventTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::SyncOpTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::SyncOpTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::LayoutAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::LayoutAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::FunctionKernelKindAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::FunctionKernelKindAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::TFuncCoreTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::TFuncCoreTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::TModuleCoreTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::TModuleCoreTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::EventAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::EventAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::PadModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::PadModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::VectorFunctionAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::VectorFunctionAttr::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::CmpModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::CmpModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::RoundModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::RoundModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::SaturationModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::SaturationModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::STPhaseAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::STPhaseAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::AtomicTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::AtomicTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::ReluPreModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::ReluPreModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::GatherOOBAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::GatherOOBAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::ScatterAtomicOpAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::ScatterAtomicOpAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::ScatterOOBAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::ScatterOOBAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::AccToVecModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::AccToVecModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::MaskPatternAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::MaskPatternAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::BLayoutAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::BLayoutAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::SLayoutAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::SLayoutAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::PadValueAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::PadValueAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::CompactModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::CompactModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::TileBufConfigAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::TileBufConfigAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::pto::QuantTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::pto::QuantTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::llvm::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::llvm::LogicalResult>(def)    .Case<::mlir::pto::AddressSpaceAttr>([&](auto t) {
      printer << ::mlir::pto::AddressSpaceAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::PipeAttr>([&](auto t) {
      printer << ::mlir::pto::PipeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::MemBarAttr>([&](auto t) {
      printer << ::mlir::pto::MemBarAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::PipeEventTypeAttr>([&](auto t) {
      printer << ::mlir::pto::PipeEventTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::SyncOpTypeAttr>([&](auto t) {
      printer << ::mlir::pto::SyncOpTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::LayoutAttr>([&](auto t) {
      printer << ::mlir::pto::LayoutAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::FunctionKernelKindAttr>([&](auto t) {
      printer << ::mlir::pto::FunctionKernelKindAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::TFuncCoreTypeAttr>([&](auto t) {
      printer << ::mlir::pto::TFuncCoreTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::TModuleCoreTypeAttr>([&](auto t) {
      printer << ::mlir::pto::TModuleCoreTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::EventAttr>([&](auto t) {
      printer << ::mlir::pto::EventAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::PadModeAttr>([&](auto t) {
      printer << ::mlir::pto::PadModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::VectorFunctionAttr>([&](auto t) {
      printer << ::mlir::pto::VectorFunctionAttr::getMnemonic();
      return ::mlir::success();
    })
    .Case<::mlir::pto::CmpModeAttr>([&](auto t) {
      printer << ::mlir::pto::CmpModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::RoundModeAttr>([&](auto t) {
      printer << ::mlir::pto::RoundModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::SaturationModeAttr>([&](auto t) {
      printer << ::mlir::pto::SaturationModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::STPhaseAttr>([&](auto t) {
      printer << ::mlir::pto::STPhaseAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::AtomicTypeAttr>([&](auto t) {
      printer << ::mlir::pto::AtomicTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::ReluPreModeAttr>([&](auto t) {
      printer << ::mlir::pto::ReluPreModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::GatherOOBAttr>([&](auto t) {
      printer << ::mlir::pto::GatherOOBAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::ScatterAtomicOpAttr>([&](auto t) {
      printer << ::mlir::pto::ScatterAtomicOpAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::ScatterOOBAttr>([&](auto t) {
      printer << ::mlir::pto::ScatterOOBAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::AccToVecModeAttr>([&](auto t) {
      printer << ::mlir::pto::AccToVecModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::MaskPatternAttr>([&](auto t) {
      printer << ::mlir::pto::MaskPatternAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::BLayoutAttr>([&](auto t) {
      printer << ::mlir::pto::BLayoutAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::SLayoutAttr>([&](auto t) {
      printer << ::mlir::pto::SLayoutAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::PadValueAttr>([&](auto t) {
      printer << ::mlir::pto::PadValueAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::CompactModeAttr>([&](auto t) {
      printer << ::mlir::pto::CompactModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::TileBufConfigAttr>([&](auto t) {
      printer << ::mlir::pto::TileBufConfigAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::pto::QuantTypeAttr>([&](auto t) {
      printer << ::mlir::pto::QuantTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace pto {
namespace detail {
struct AddressSpaceAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::AddressSpace>;
  AddressSpaceAttrStorage(::mlir::pto::AddressSpace address_space) : address_space(std::move(address_space)) {}

  KeyTy getAsKey() const {
    return KeyTy(address_space);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (address_space == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static AddressSpaceAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto address_space = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<AddressSpaceAttrStorage>()) AddressSpaceAttrStorage(std::move(address_space));
  }

  ::mlir::pto::AddressSpace address_space;
};
} // namespace detail
AddressSpaceAttr AddressSpaceAttr::get(::mlir::MLIRContext *context, ::mlir::pto::AddressSpace address_space) {
  return Base::get(context, std::move(address_space));
}

::mlir::Attribute AddressSpaceAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::AddressSpace> _result_address_space;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'address_space'
  _result_address_space = [&]() -> ::mlir::FailureOr<::mlir::pto::AddressSpace> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeAddressSpace(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::AddressSpace" << " to be one of: " << "zero" << ", " << "gm" << ", " << "mat" << ", " << "left" << ", " << "right" << ", " << "acc" << ", " << "vec" << ", " << "bias" << ", " << "scaling")};
    }();
  if (::mlir::failed(_result_address_space)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_AddressSpaceAttr parameter 'address_space' which is to be a `::mlir::pto::AddressSpace`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_address_space));
  return AddressSpaceAttr::get(odsParser.getContext(),
      ::mlir::pto::AddressSpace((*_result_address_space)));
}

void AddressSpaceAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyAddressSpace(getAddressSpace());
  }
  odsPrinter << ">";
}

::mlir::pto::AddressSpace AddressSpaceAttr::getAddressSpace() const {
  return getImpl()->address_space;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::AddressSpaceAttr)
namespace mlir {
namespace pto {
namespace detail {
struct PipeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::PIPE>;
  PipeAttrStorage(::mlir::pto::PIPE pipe) : pipe(std::move(pipe)) {}

  KeyTy getAsKey() const {
    return KeyTy(pipe);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (pipe == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PipeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto pipe = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PipeAttrStorage>()) PipeAttrStorage(std::move(pipe));
  }

  ::mlir::pto::PIPE pipe;
};
} // namespace detail
PipeAttr PipeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::PIPE pipe) {
  return Base::get(context, std::move(pipe));
}

::mlir::Attribute PipeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::PIPE> _result_pipe;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'pipe'
  _result_pipe = [&]() -> ::mlir::FailureOr<::mlir::pto::PIPE> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizePIPE(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::PIPE" << " to be one of: " << "PIPE_S" << ", " << "PIPE_V" << ", " << "PIPE_M" << ", " << "PIPE_MTE1" << ", " << "PIPE_MTE2" << ", " << "PIPE_MTE3" << ", " << "PIPE_ALL" << ", " << "PIPE_MTE4" << ", " << "PIPE_MTE5" << ", " << "PIPE_V2" << ", " << "PIPE_FIX" << ", " << "VIRTUAL_PIPE_MTE2_L1A" << ", " << "VIRTUAL_PIPE_MTE2_L1B" << ", " << "PIPE_NUM" << ", " << "PIPE_UNASSIGNED")};
    }();
  if (::mlir::failed(_result_pipe)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_PipeAttr parameter 'pipe' which is to be a `::mlir::pto::PIPE`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_pipe));
  return PipeAttr::get(odsParser.getContext(),
      ::mlir::pto::PIPE((*_result_pipe)));
}

void PipeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyPIPE(getPipe());
  }
  odsPrinter << ">";
}

::mlir::pto::PIPE PipeAttr::getPipe() const {
  return getImpl()->pipe;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::PipeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct MemBarAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::MemBarKind>;
  MemBarAttrStorage(::mlir::pto::MemBarKind kind) : kind(std::move(kind)) {}

  KeyTy getAsKey() const {
    return KeyTy(kind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (kind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MemBarAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto kind = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MemBarAttrStorage>()) MemBarAttrStorage(std::move(kind));
  }

  ::mlir::pto::MemBarKind kind;
};
} // namespace detail
MemBarAttr MemBarAttr::get(::mlir::MLIRContext *context, ::mlir::pto::MemBarKind kind) {
  return Base::get(context, std::move(kind));
}

::mlir::Attribute MemBarAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::MemBarKind> _result_kind;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'kind'
  _result_kind = [&]() -> ::mlir::FailureOr<::mlir::pto::MemBarKind> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeMemBarKind(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::MemBarKind" << " to be one of: " << "VV_ALL" << ", " << "VST_VLD" << ", " << "VLD_VST" << ", " << "VST_VST" << ", " << "VS_ALL" << ", " << "VST_LD" << ", " << "VLD_ST" << ", " << "VST_ST" << ", " << "SV_ALL" << ", " << "ST_VLD" << ", " << "LD_VST" << ", " << "ST_VST" << ", " << "SS_ALL" << ", " << "ST_LD" << ", " << "LD_ST" << ", " << "ST_ST")};
    }();
  if (::mlir::failed(_result_kind)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_MemBarAttr parameter 'kind' which is to be a `::mlir::pto::MemBarKind`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_kind));
  return MemBarAttr::get(odsParser.getContext(),
      ::mlir::pto::MemBarKind((*_result_kind)));
}

void MemBarAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyMemBarKind(getKind());
  }
  odsPrinter << ">";
}

::mlir::pto::MemBarKind MemBarAttr::getKind() const {
  return getImpl()->kind;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::MemBarAttr)
namespace mlir {
namespace pto {
namespace detail {
struct PipeEventTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::SyncOpType>;
  PipeEventTypeAttrStorage(::mlir::pto::SyncOpType op_type) : op_type(std::move(op_type)) {}

  KeyTy getAsKey() const {
    return KeyTy(op_type);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (op_type == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PipeEventTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto op_type = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PipeEventTypeAttrStorage>()) PipeEventTypeAttrStorage(std::move(op_type));
  }

  ::mlir::pto::SyncOpType op_type;
};
} // namespace detail
PipeEventTypeAttr PipeEventTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::SyncOpType op_type) {
  return Base::get(context, std::move(op_type));
}

::mlir::Attribute PipeEventTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::SyncOpType> _result_op_type;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'op_type'
  _result_op_type = [&]() -> ::mlir::FailureOr<::mlir::pto::SyncOpType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeSyncOpType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::SyncOpType" << " to be one of: " << "TLOAD" << ", " << "TSTORE_ACC" << ", " << "TSTORE_VEC" << ", " << "TMOV_M2L" << ", " << "TMOV_M2S" << ", " << "TMOV_M2B" << ", " << "TMOV_M2V" << ", " << "TMOV_V2M" << ", " << "TMATMUL" << ", " << "TVEC" << ", " << "TVECWAIT_EVENT")};
    }();
  if (::mlir::failed(_result_op_type)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_PipeEventTypeAttr parameter 'op_type' which is to be a `::mlir::pto::SyncOpType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_op_type));
  return PipeEventTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::SyncOpType((*_result_op_type)));
}

void PipeEventTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifySyncOpType(getOpType());
  }
  odsPrinter << ">";
}

::mlir::pto::SyncOpType PipeEventTypeAttr::getOpType() const {
  return getImpl()->op_type;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::PipeEventTypeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct SyncOpTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::SyncOpType>;
  SyncOpTypeAttrStorage(::mlir::pto::SyncOpType op_type) : op_type(std::move(op_type)) {}

  KeyTy getAsKey() const {
    return KeyTy(op_type);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (op_type == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static SyncOpTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto op_type = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<SyncOpTypeAttrStorage>()) SyncOpTypeAttrStorage(std::move(op_type));
  }

  ::mlir::pto::SyncOpType op_type;
};
} // namespace detail
SyncOpTypeAttr SyncOpTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::SyncOpType op_type) {
  return Base::get(context, std::move(op_type));
}

::mlir::Attribute SyncOpTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::SyncOpType> _result_op_type;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'op_type'
  _result_op_type = [&]() -> ::mlir::FailureOr<::mlir::pto::SyncOpType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeSyncOpType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::SyncOpType" << " to be one of: " << "TLOAD" << ", " << "TSTORE_ACC" << ", " << "TSTORE_VEC" << ", " << "TMOV_M2L" << ", " << "TMOV_M2S" << ", " << "TMOV_M2B" << ", " << "TMOV_M2V" << ", " << "TMOV_V2M" << ", " << "TMATMUL" << ", " << "TVEC" << ", " << "TVECWAIT_EVENT")};
    }();
  if (::mlir::failed(_result_op_type)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_SyncOpTypeAttr parameter 'op_type' which is to be a `::mlir::pto::SyncOpType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_op_type));
  return SyncOpTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::SyncOpType((*_result_op_type)));
}

void SyncOpTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifySyncOpType(getOpType());
  }
  odsPrinter << ">";
}

::mlir::pto::SyncOpType SyncOpTypeAttr::getOpType() const {
  return getImpl()->op_type;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::SyncOpTypeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct LayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::Layout>;
  LayoutAttrStorage(::mlir::pto::Layout layout) : layout(std::move(layout)) {}

  KeyTy getAsKey() const {
    return KeyTy(layout);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (layout == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static LayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto layout = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<LayoutAttrStorage>()) LayoutAttrStorage(std::move(layout));
  }

  ::mlir::pto::Layout layout;
};
} // namespace detail
LayoutAttr LayoutAttr::get(::mlir::MLIRContext *context, ::mlir::pto::Layout layout) {
  return Base::get(context, std::move(layout));
}

::mlir::Attribute LayoutAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::Layout> _result_layout;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'layout'
  _result_layout = [&]() -> ::mlir::FailureOr<::mlir::pto::Layout> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeLayout(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::Layout" << " to be one of: " << "nd" << ", " << "dn" << ", " << "nz")};
    }();
  if (::mlir::failed(_result_layout)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_LayoutAttr parameter 'layout' which is to be a `::mlir::pto::Layout`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_layout));
  return LayoutAttr::get(odsParser.getContext(),
      ::mlir::pto::Layout((*_result_layout)));
}

void LayoutAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyLayout(getLayout());
  }
  odsPrinter << ">";
}

::mlir::pto::Layout LayoutAttr::getLayout() const {
  return getImpl()->layout;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::LayoutAttr)
namespace mlir {
namespace pto {
namespace detail {
struct FunctionKernelKindAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::FunctionKernelKind>;
  FunctionKernelKindAttrStorage(::mlir::pto::FunctionKernelKind kernelKind) : kernelKind(std::move(kernelKind)) {}

  KeyTy getAsKey() const {
    return KeyTy(kernelKind);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (kernelKind == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static FunctionKernelKindAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto kernelKind = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<FunctionKernelKindAttrStorage>()) FunctionKernelKindAttrStorage(std::move(kernelKind));
  }

  ::mlir::pto::FunctionKernelKind kernelKind;
};
} // namespace detail
FunctionKernelKindAttr FunctionKernelKindAttr::get(::mlir::MLIRContext *context, ::mlir::pto::FunctionKernelKind kernelKind) {
  return Base::get(context, std::move(kernelKind));
}

::mlir::Attribute FunctionKernelKindAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::FunctionKernelKind> _result_kernelKind;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'kernelKind'
  _result_kernelKind = [&]() -> ::mlir::FailureOr<::mlir::pto::FunctionKernelKind> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeFunctionKernelKind(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::FunctionKernelKind" << " to be one of: " << "cube" << ", " << "vector")};
    }();
  if (::mlir::failed(_result_kernelKind)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_FunctionKernelKindAttr parameter 'kernelKind' which is to be a `::mlir::pto::FunctionKernelKind`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_kernelKind));
  return FunctionKernelKindAttr::get(odsParser.getContext(),
      ::mlir::pto::FunctionKernelKind((*_result_kernelKind)));
}

void FunctionKernelKindAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyFunctionKernelKind(getKernelKind());
  }
  odsPrinter << ">";
}

::mlir::pto::FunctionKernelKind FunctionKernelKindAttr::getKernelKind() const {
  return getImpl()->kernelKind;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::FunctionKernelKindAttr)
namespace mlir {
namespace pto {
namespace detail {
struct TFuncCoreTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::TFuncCoreType>;
  TFuncCoreTypeAttrStorage(::mlir::pto::TFuncCoreType funcCoreType) : funcCoreType(std::move(funcCoreType)) {}

  KeyTy getAsKey() const {
    return KeyTy(funcCoreType);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (funcCoreType == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TFuncCoreTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto funcCoreType = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<TFuncCoreTypeAttrStorage>()) TFuncCoreTypeAttrStorage(std::move(funcCoreType));
  }

  ::mlir::pto::TFuncCoreType funcCoreType;
};
} // namespace detail
TFuncCoreTypeAttr TFuncCoreTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::TFuncCoreType funcCoreType) {
  return Base::get(context, std::move(funcCoreType));
}

::mlir::Attribute TFuncCoreTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::TFuncCoreType> _result_funcCoreType;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'funcCoreType'
  _result_funcCoreType = [&]() -> ::mlir::FailureOr<::mlir::pto::TFuncCoreType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeTFuncCoreType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::TFuncCoreType" << " to be one of: " << "AIC" << ", " << "AIV" << ", " << "MIX" << ", " << "AIC_OR_AIV")};
    }();
  if (::mlir::failed(_result_funcCoreType)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_TFuncCoreTypeAttr parameter 'funcCoreType' which is to be a `::mlir::pto::TFuncCoreType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_funcCoreType));
  return TFuncCoreTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::TFuncCoreType((*_result_funcCoreType)));
}

void TFuncCoreTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyTFuncCoreType(getFuncCoreType());
  }
  odsPrinter << ">";
}

::mlir::pto::TFuncCoreType TFuncCoreTypeAttr::getFuncCoreType() const {
  return getImpl()->funcCoreType;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::TFuncCoreTypeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct TModuleCoreTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::TModuleCoreType>;
  TModuleCoreTypeAttrStorage(::mlir::pto::TModuleCoreType moduleCoreType) : moduleCoreType(std::move(moduleCoreType)) {}

  KeyTy getAsKey() const {
    return KeyTy(moduleCoreType);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (moduleCoreType == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TModuleCoreTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto moduleCoreType = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<TModuleCoreTypeAttrStorage>()) TModuleCoreTypeAttrStorage(std::move(moduleCoreType));
  }

  ::mlir::pto::TModuleCoreType moduleCoreType;
};
} // namespace detail
TModuleCoreTypeAttr TModuleCoreTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::TModuleCoreType moduleCoreType) {
  return Base::get(context, std::move(moduleCoreType));
}

::mlir::Attribute TModuleCoreTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::TModuleCoreType> _result_moduleCoreType;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'moduleCoreType'
  _result_moduleCoreType = [&]() -> ::mlir::FailureOr<::mlir::pto::TModuleCoreType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeTModuleCoreType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::TModuleCoreType" << " to be one of: " << "AIC" << ", " << "AIV" << ", " << "MIX")};
    }();
  if (::mlir::failed(_result_moduleCoreType)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_TModuleCoreTypeAttr parameter 'moduleCoreType' which is to be a `::mlir::pto::TModuleCoreType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_moduleCoreType));
  return TModuleCoreTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::TModuleCoreType((*_result_moduleCoreType)));
}

void TModuleCoreTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyTModuleCoreType(getModuleCoreType());
  }
  odsPrinter << ">";
}

::mlir::pto::TModuleCoreType TModuleCoreTypeAttr::getModuleCoreType() const {
  return getImpl()->moduleCoreType;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::TModuleCoreTypeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct EventAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::EVENT>;
  EventAttrStorage(::mlir::pto::EVENT event) : event(std::move(event)) {}

  KeyTy getAsKey() const {
    return KeyTy(event);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (event == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static EventAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto event = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<EventAttrStorage>()) EventAttrStorage(std::move(event));
  }

  ::mlir::pto::EVENT event;
};
} // namespace detail
EventAttr EventAttr::get(::mlir::MLIRContext *context, ::mlir::pto::EVENT event) {
  return Base::get(context, std::move(event));
}

::mlir::Attribute EventAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::EVENT> _result_event;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'event'
  _result_event = [&]() -> ::mlir::FailureOr<::mlir::pto::EVENT> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeEVENT(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::EVENT" << " to be one of: " << "EVENT_ID0" << ", " << "EVENT_ID1" << ", " << "EVENT_ID2" << ", " << "EVENT_ID3" << ", " << "EVENT_ID4" << ", " << "EVENT_ID5" << ", " << "EVENT_ID6" << ", " << "EVENT_ID7")};
    }();
  if (::mlir::failed(_result_event)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_EventAttr parameter 'event' which is to be a `::mlir::pto::EVENT`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_event));
  return EventAttr::get(odsParser.getContext(),
      ::mlir::pto::EVENT((*_result_event)));
}

void EventAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyEVENT(getEvent());
  }
  odsPrinter << ">";
}

::mlir::pto::EVENT EventAttr::getEvent() const {
  return getImpl()->event;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::EventAttr)
namespace mlir {
namespace pto {
namespace detail {
struct PadModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::PadMode>;
  PadModeAttrStorage(::mlir::pto::PadMode padmode) : padmode(std::move(padmode)) {}

  KeyTy getAsKey() const {
    return KeyTy(padmode);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (padmode == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PadModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto padmode = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PadModeAttrStorage>()) PadModeAttrStorage(std::move(padmode));
  }

  ::mlir::pto::PadMode padmode;
};
} // namespace detail
PadModeAttr PadModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::PadMode padmode) {
  return Base::get(context, std::move(padmode));
}

::mlir::Attribute PadModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::PadMode> _result_padmode;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'padmode'
  _result_padmode = [&]() -> ::mlir::FailureOr<::mlir::pto::PadMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizePadMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::PadMode" << " to be one of: " << "PadNull" << ", " << "PadFirstElem" << ", " << "PadValue")};
    }();
  if (::mlir::failed(_result_padmode)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_PadModeAttr parameter 'padmode' which is to be a `::mlir::pto::PadMode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_padmode));
  return PadModeAttr::get(odsParser.getContext(),
      ::mlir::pto::PadMode((*_result_padmode)));
}

void PadModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyPadMode(getPadmode());
  }
  odsPrinter << ">";
}

::mlir::pto::PadMode PadModeAttr::getPadmode() const {
  return getImpl()->padmode;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::PadModeAttr)
namespace mlir {
namespace pto {
} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::VectorFunctionAttr)
namespace mlir {
namespace pto {
namespace detail {
struct CmpModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::CmpMode>;
  CmpModeAttrStorage(::mlir::pto::CmpMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CmpModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CmpModeAttrStorage>()) CmpModeAttrStorage(std::move(value));
  }

  ::mlir::pto::CmpMode value;
};
} // namespace detail
CmpModeAttr CmpModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::CmpMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CmpModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::CmpMode> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::CmpMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeCmpMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::CmpMode" << " to be one of: " << "eq" << ", " << "ne" << ", " << "lt" << ", " << "le" << ", " << "gt" << ", " << "ge")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_CmpModeAttr parameter 'value' which is to be a `::mlir::pto::CmpMode`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return CmpModeAttr::get(odsParser.getContext(),
      ::mlir::pto::CmpMode((*_result_value)));
}

void CmpModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyCmpMode(getValue());
}

::mlir::pto::CmpMode CmpModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::CmpModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct RoundModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::RoundMode>;
  RoundModeAttrStorage(::mlir::pto::RoundMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static RoundModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<RoundModeAttrStorage>()) RoundModeAttrStorage(std::move(value));
  }

  ::mlir::pto::RoundMode value;
};
} // namespace detail
RoundModeAttr RoundModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::RoundMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute RoundModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::RoundMode> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::RoundMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeRoundMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::RoundMode" << " to be one of: " << "NONE" << ", " << "RINT" << ", " << "ROUND" << ", " << "FLOOR" << ", " << "CEIL" << ", " << "TRUNC" << ", " << "ODD" << ", " << "CAST_RINT")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_RoundModeAttr parameter 'value' which is to be a `::mlir::pto::RoundMode`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return RoundModeAttr::get(odsParser.getContext(),
      ::mlir::pto::RoundMode((*_result_value)));
}

void RoundModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyRoundMode(getValue());
}

::mlir::pto::RoundMode RoundModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::RoundModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct SaturationModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::SaturationMode>;
  SaturationModeAttrStorage(::mlir::pto::SaturationMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static SaturationModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<SaturationModeAttrStorage>()) SaturationModeAttrStorage(std::move(value));
  }

  ::mlir::pto::SaturationMode value;
};
} // namespace detail
SaturationModeAttr SaturationModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::SaturationMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute SaturationModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::SaturationMode> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::SaturationMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeSaturationMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::SaturationMode" << " to be one of: " << "ON" << ", " << "OFF")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_SaturationModeAttr parameter 'value' which is to be a `::mlir::pto::SaturationMode`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return SaturationModeAttr::get(odsParser.getContext(),
      ::mlir::pto::SaturationMode((*_result_value)));
}

void SaturationModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifySaturationMode(getValue());
}

::mlir::pto::SaturationMode SaturationModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::SaturationModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct STPhaseAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::STPhase>;
  STPhaseAttrStorage(::mlir::pto::STPhase value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static STPhaseAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<STPhaseAttrStorage>()) STPhaseAttrStorage(std::move(value));
  }

  ::mlir::pto::STPhase value;
};
} // namespace detail
STPhaseAttr STPhaseAttr::get(::mlir::MLIRContext *context, ::mlir::pto::STPhase value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute STPhaseAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::STPhase> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::STPhase> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeSTPhase(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::STPhase" << " to be one of: " << "unspecified" << ", " << "partial" << ", " << "final")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_STPhaseAttr parameter 'value' which is to be a `::mlir::pto::STPhase`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return STPhaseAttr::get(odsParser.getContext(),
      ::mlir::pto::STPhase((*_result_value)));
}

void STPhaseAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifySTPhase(getValue());
}

::mlir::pto::STPhase STPhaseAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::STPhaseAttr)
namespace mlir {
namespace pto {
namespace detail {
struct AtomicTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::AtomicType>;
  AtomicTypeAttrStorage(::mlir::pto::AtomicType value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static AtomicTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<AtomicTypeAttrStorage>()) AtomicTypeAttrStorage(std::move(value));
  }

  ::mlir::pto::AtomicType value;
};
} // namespace detail
AtomicTypeAttr AtomicTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::AtomicType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute AtomicTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::AtomicType> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::AtomicType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeAtomicType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::AtomicType" << " to be one of: " << "atomic_none" << ", " << "atomic_add")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_AtomicTypeAttr parameter 'value' which is to be a `::mlir::pto::AtomicType`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return AtomicTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::AtomicType((*_result_value)));
}

void AtomicTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyAtomicType(getValue());
}

::mlir::pto::AtomicType AtomicTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::AtomicTypeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct ReluPreModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::ReluPreMode>;
  ReluPreModeAttrStorage(::mlir::pto::ReluPreMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ReluPreModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ReluPreModeAttrStorage>()) ReluPreModeAttrStorage(std::move(value));
  }

  ::mlir::pto::ReluPreMode value;
};
} // namespace detail
ReluPreModeAttr ReluPreModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::ReluPreMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ReluPreModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::ReluPreMode> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::ReluPreMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeReluPreMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::ReluPreMode" << " to be one of: " << "no_relu" << ", " << "normal_relu")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_ReluPreModeAttr parameter 'value' which is to be a `::mlir::pto::ReluPreMode`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return ReluPreModeAttr::get(odsParser.getContext(),
      ::mlir::pto::ReluPreMode((*_result_value)));
}

void ReluPreModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyReluPreMode(getValue());
}

::mlir::pto::ReluPreMode ReluPreModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::ReluPreModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct GatherOOBAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::GatherOOB>;
  GatherOOBAttrStorage(::mlir::pto::GatherOOB value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static GatherOOBAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<GatherOOBAttrStorage>()) GatherOOBAttrStorage(std::move(value));
  }

  ::mlir::pto::GatherOOB value;
};
} // namespace detail
GatherOOBAttr GatherOOBAttr::get(::mlir::MLIRContext *context, ::mlir::pto::GatherOOB value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute GatherOOBAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::GatherOOB> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::GatherOOB> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeGatherOOB(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::GatherOOB" << " to be one of: " << "undefined" << ", " << "clamp" << ", " << "wrap" << ", " << "zero")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_GatherOOBAttr parameter 'value' which is to be a `::mlir::pto::GatherOOB`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return GatherOOBAttr::get(odsParser.getContext(),
      ::mlir::pto::GatherOOB((*_result_value)));
}

void GatherOOBAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyGatherOOB(getValue());
}

::mlir::pto::GatherOOB GatherOOBAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::GatherOOBAttr)
namespace mlir {
namespace pto {
namespace detail {
struct ScatterAtomicOpAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::ScatterAtomicOp>;
  ScatterAtomicOpAttrStorage(::mlir::pto::ScatterAtomicOp value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ScatterAtomicOpAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ScatterAtomicOpAttrStorage>()) ScatterAtomicOpAttrStorage(std::move(value));
  }

  ::mlir::pto::ScatterAtomicOp value;
};
} // namespace detail
ScatterAtomicOpAttr ScatterAtomicOpAttr::get(::mlir::MLIRContext *context, ::mlir::pto::ScatterAtomicOp value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ScatterAtomicOpAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::ScatterAtomicOp> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::ScatterAtomicOp> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeScatterAtomicOp(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::ScatterAtomicOp" << " to be one of: " << "none" << ", " << "add" << ", " << "max" << ", " << "min")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_ScatterAtomicOpAttr parameter 'value' which is to be a `::mlir::pto::ScatterAtomicOp`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return ScatterAtomicOpAttr::get(odsParser.getContext(),
      ::mlir::pto::ScatterAtomicOp((*_result_value)));
}

void ScatterAtomicOpAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyScatterAtomicOp(getValue());
}

::mlir::pto::ScatterAtomicOp ScatterAtomicOpAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::ScatterAtomicOpAttr)
namespace mlir {
namespace pto {
namespace detail {
struct ScatterOOBAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::ScatterOOB>;
  ScatterOOBAttrStorage(::mlir::pto::ScatterOOB value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ScatterOOBAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ScatterOOBAttrStorage>()) ScatterOOBAttrStorage(std::move(value));
  }

  ::mlir::pto::ScatterOOB value;
};
} // namespace detail
ScatterOOBAttr ScatterOOBAttr::get(::mlir::MLIRContext *context, ::mlir::pto::ScatterOOB value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ScatterOOBAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::ScatterOOB> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::ScatterOOB> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeScatterOOB(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::ScatterOOB" << " to be one of: " << "undefined" << ", " << "skip" << ", " << "clamp" << ", " << "wrap")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_ScatterOOBAttr parameter 'value' which is to be a `::mlir::pto::ScatterOOB`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return ScatterOOBAttr::get(odsParser.getContext(),
      ::mlir::pto::ScatterOOB((*_result_value)));
}

void ScatterOOBAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyScatterOOB(getValue());
}

::mlir::pto::ScatterOOB ScatterOOBAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::ScatterOOBAttr)
namespace mlir {
namespace pto {
namespace detail {
struct AccToVecModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::AccToVecMode>;
  AccToVecModeAttrStorage(::mlir::pto::AccToVecMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static AccToVecModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<AccToVecModeAttrStorage>()) AccToVecModeAttrStorage(std::move(value));
  }

  ::mlir::pto::AccToVecMode value;
};
} // namespace detail
AccToVecModeAttr AccToVecModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::AccToVecMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute AccToVecModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::AccToVecMode> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::AccToVecMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeAccToVecMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::AccToVecMode" << " to be one of: " << "single_mode_vec0" << ", " << "single_mode_vec1" << ", " << "dual_mode_split_m" << ", " << "dual_mode_split_n")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_AccToVecModeAttr parameter 'value' which is to be a `::mlir::pto::AccToVecMode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return AccToVecModeAttr::get(odsParser.getContext(),
      ::mlir::pto::AccToVecMode((*_result_value)));
}

void AccToVecModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyAccToVecMode(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::AccToVecMode AccToVecModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::AccToVecModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct MaskPatternAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::MaskPattern>;
  MaskPatternAttrStorage(::mlir::pto::MaskPattern value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MaskPatternAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MaskPatternAttrStorage>()) MaskPatternAttrStorage(std::move(value));
  }

  ::mlir::pto::MaskPattern value;
};
} // namespace detail
MaskPatternAttr MaskPatternAttr::get(::mlir::MLIRContext *context, ::mlir::pto::MaskPattern value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute MaskPatternAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::MaskPattern> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::MaskPattern> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeMaskPattern(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::MaskPattern" << " to be one of: " << "P0101" << ", " << "P1010" << ", " << "P0001" << ", " << "P0010" << ", " << "P0100" << ", " << "P1000" << ", " << "P1111")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_MaskPatternAttr parameter 'value' which is to be a `::mlir::pto::MaskPattern`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return MaskPatternAttr::get(odsParser.getContext(),
      ::mlir::pto::MaskPattern((*_result_value)));
}

void MaskPatternAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyMaskPattern(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::MaskPattern MaskPatternAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::MaskPatternAttr)
namespace mlir {
namespace pto {
namespace detail {
struct BLayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::BLayout>;
  BLayoutAttrStorage(::mlir::pto::BLayout value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static BLayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<BLayoutAttrStorage>()) BLayoutAttrStorage(std::move(value));
  }

  ::mlir::pto::BLayout value;
};
} // namespace detail
BLayoutAttr BLayoutAttr::get(::mlir::MLIRContext *context, ::mlir::pto::BLayout value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute BLayoutAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::BLayout> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::BLayout> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeBLayout(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::BLayout" << " to be one of: " << "row_major" << ", " << "col_major")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_BLayoutAttr parameter 'value' which is to be a `::mlir::pto::BLayout`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return BLayoutAttr::get(odsParser.getContext(),
      ::mlir::pto::BLayout((*_result_value)));
}

void BLayoutAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyBLayout(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::BLayout BLayoutAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::BLayoutAttr)
namespace mlir {
namespace pto {
namespace detail {
struct SLayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::SLayout>;
  SLayoutAttrStorage(::mlir::pto::SLayout value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static SLayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<SLayoutAttrStorage>()) SLayoutAttrStorage(std::move(value));
  }

  ::mlir::pto::SLayout value;
};
} // namespace detail
SLayoutAttr SLayoutAttr::get(::mlir::MLIRContext *context, ::mlir::pto::SLayout value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute SLayoutAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::SLayout> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::SLayout> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeSLayout(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::SLayout" << " to be one of: " << "none_box" << ", " << "row_major" << ", " << "col_major")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_SLayoutAttr parameter 'value' which is to be a `::mlir::pto::SLayout`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return SLayoutAttr::get(odsParser.getContext(),
      ::mlir::pto::SLayout((*_result_value)));
}

void SLayoutAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifySLayout(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::SLayout SLayoutAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::SLayoutAttr)
namespace mlir {
namespace pto {
namespace detail {
struct PadValueAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::PadValue>;
  PadValueAttrStorage(::mlir::pto::PadValue value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PadValueAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PadValueAttrStorage>()) PadValueAttrStorage(std::move(value));
  }

  ::mlir::pto::PadValue value;
};
} // namespace detail
PadValueAttr PadValueAttr::get(::mlir::MLIRContext *context, ::mlir::pto::PadValue value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute PadValueAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::PadValue> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::PadValue> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizePadValue(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::PadValue" << " to be one of: " << "null" << ", " << "zero" << ", " << "max" << ", " << "min")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_PadValueAttr parameter 'value' which is to be a `::mlir::pto::PadValue`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return PadValueAttr::get(odsParser.getContext(),
      ::mlir::pto::PadValue((*_result_value)));
}

void PadValueAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyPadValue(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::PadValue PadValueAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::PadValueAttr)
namespace mlir {
namespace pto {
namespace detail {
struct CompactModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::CompactMode>;
  CompactModeAttrStorage(::mlir::pto::CompactMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CompactModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CompactModeAttrStorage>()) CompactModeAttrStorage(std::move(value));
  }

  ::mlir::pto::CompactMode value;
};
} // namespace detail
CompactModeAttr CompactModeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::CompactMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CompactModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::CompactMode> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter list

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::CompactMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeCompactMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::CompactMode" << " to be one of: " << "null" << ", " << "normal" << ", " << "row_plus_one")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_CompactModeAttr parameter 'value' which is to be a `::mlir::pto::CompactMode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CompactModeAttr::get(odsParser.getContext(),
      ::mlir::pto::CompactMode((*_result_value)));
}

void CompactModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << stringifyCompactMode(getValue());
  }
  odsPrinter << ">";
}

::mlir::pto::CompactMode CompactModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::CompactModeAttr)
namespace mlir {
namespace pto {
namespace detail {
struct TileBufConfigAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<BLayoutAttr, SLayoutAttr, mlir::IntegerAttr, PadValueAttr, CompactModeAttr>;
  TileBufConfigAttrStorage(BLayoutAttr bLayout, SLayoutAttr sLayout, mlir::IntegerAttr sFractalSize, PadValueAttr pad, CompactModeAttr compactMode) : bLayout(std::move(bLayout)), sLayout(std::move(sLayout)), sFractalSize(std::move(sFractalSize)), pad(std::move(pad)), compactMode(std::move(compactMode)) {}

  KeyTy getAsKey() const {
    return KeyTy(bLayout, sLayout, sFractalSize, pad, compactMode);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (bLayout == std::get<0>(tblgenKey)) && (sLayout == std::get<1>(tblgenKey)) && (sFractalSize == std::get<2>(tblgenKey)) && (pad == std::get<3>(tblgenKey)) && (compactMode == std::get<4>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey));
  }

  static TileBufConfigAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto bLayout = std::move(std::get<0>(tblgenKey));
    auto sLayout = std::move(std::get<1>(tblgenKey));
    auto sFractalSize = std::move(std::get<2>(tblgenKey));
    auto pad = std::move(std::get<3>(tblgenKey));
    auto compactMode = std::move(std::get<4>(tblgenKey));
    return new (allocator.allocate<TileBufConfigAttrStorage>()) TileBufConfigAttrStorage(std::move(bLayout), std::move(sLayout), std::move(sFractalSize), std::move(pad), std::move(compactMode));
  }

  BLayoutAttr bLayout;
  SLayoutAttr sLayout;
  mlir::IntegerAttr sFractalSize;
  PadValueAttr pad;
  CompactModeAttr compactMode;
};
} // namespace detail
TileBufConfigAttr TileBufConfigAttr::get(::mlir::MLIRContext *context, BLayoutAttr bLayout, SLayoutAttr sLayout, mlir::IntegerAttr sFractalSize, PadValueAttr pad, CompactModeAttr compactMode) {
  return Base::get(context, std::move(bLayout), std::move(sLayout), std::move(sFractalSize), std::move(pad), std::move(compactMode));
}

BLayoutAttr TileBufConfigAttr::getBLayout() const {
  return getImpl()->bLayout;
}

SLayoutAttr TileBufConfigAttr::getSLayout() const {
  return getImpl()->sLayout;
}

mlir::IntegerAttr TileBufConfigAttr::getSFractalSize() const {
  return getImpl()->sFractalSize;
}

PadValueAttr TileBufConfigAttr::getPad() const {
  return getImpl()->pad;
}

CompactModeAttr TileBufConfigAttr::getCompactMode() const {
  return getImpl()->compactMode;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::TileBufConfigAttr)
namespace mlir {
namespace pto {
namespace detail {
struct QuantTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::pto::QuantType>;
  QuantTypeAttrStorage(::mlir::pto::QuantType value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static QuantTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<QuantTypeAttrStorage>()) QuantTypeAttrStorage(std::move(value));
  }

  ::mlir::pto::QuantType value;
};
} // namespace detail
QuantTypeAttr QuantTypeAttr::get(::mlir::MLIRContext *context, ::mlir::pto::QuantType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute QuantTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::pto::QuantType> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::pto::QuantType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::pto::symbolizeQuantType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::pto::QuantType" << " to be one of: " << "INT8_SYM" << ", " << "INT8_ASYM")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse PTO_QuantTypeAttr parameter 'value' which is to be a `::mlir::pto::QuantType`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return QuantTypeAttr::get(odsParser.getContext(),
      ::mlir::pto::QuantType((*_result_value)));
}

void QuantTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyQuantType(getValue());
}

::mlir::pto::QuantType QuantTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace pto
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::pto::QuantTypeAttr)
namespace mlir {
namespace pto {

/// Parse an attribute registered to this dialect.
::mlir::Attribute PTODialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void PTODialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace pto
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

