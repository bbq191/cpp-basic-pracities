cmake_minimum_required(VERSION 3.27.0)
project(
  cpp-basic-practies
  VERSION 0.1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)

foreach(testsourcefile ${SRC_FILES})
  # Cut off the file extension and directory path
  get_filename_component(testname ${testsourcefile} NAME_WE)
  add_executable(${testname} ${testsourcefile})
  # Make sure YourLib is linked to each app target_link_libraries( ${testname}
  # YourLib )
endforeach(testsourcefile ${SRC_FILES})
