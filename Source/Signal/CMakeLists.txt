include_directories("${PROJECT_SOURCE_DIR}")
file(GLOB source_files [^.]*.h [^.]*.cpp "Source/[^.]*.h" "Source/[^.]*.cpp")
add_library(Signal ${source_files})

include(${PROJECT_SOURCE_DIR}/CMakeSupport/CMakeLists.CompilerSettings.txt)

add_subdirectory(UT)

set_target_properties(Signal PROPERTIES FOLDER Libs)

