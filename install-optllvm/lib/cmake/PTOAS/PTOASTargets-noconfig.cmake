#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "PTOAS::PTOIR" for configuration ""
set_property(TARGET PTOAS::PTOIR APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(PTOAS::PTOIR PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libPTOIR.a"
  )

list(APPEND _cmake_import_check_targets PTOAS::PTOIR )
list(APPEND _cmake_import_check_files_for_PTOAS::PTOIR "${_IMPORT_PREFIX}/lib/libPTOIR.a" )

# Import target "PTOAS::PTOTransforms" for configuration ""
set_property(TARGET PTOAS::PTOTransforms APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(PTOAS::PTOTransforms PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libPTOTransforms.a"
  )

list(APPEND _cmake_import_check_targets PTOAS::PTOTransforms )
list(APPEND _cmake_import_check_files_for_PTOAS::PTOTransforms "${_IMPORT_PREFIX}/lib/libPTOTransforms.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
