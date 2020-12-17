# - Try to find the antlr4 library.
#
# The following are set after configuration is done: 
#  ANTLR4_FOUND
#  ANTLR4_INCLUDE_DIRS

find_path(ANTLR4_INCLUDE_DIR NAMES antlr4-runtime/antlr4-runtime.h)

message("ANTLR4 include dir = ${ANTLR4_INCLUDE_DIR}/antlr4-runtime")

set(ANTLR4_INCLUDE_DIRS ${ANTLR4_INCLUDE_DIR}/antlr4-runtime)

include(FindPackageHandleStandardArgs)
# Handle the QUIETLY and REQUIRED arguments and set the LM_SENSORS_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(Antlr4 DEFAULT_MSG
                                ANTLR4_INCLUDE_DIR)

mark_as_advanced(ANTLR4_INCLUDE_DIR)