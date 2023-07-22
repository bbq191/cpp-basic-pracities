cmake_minimum_required(VERSION 3.27.0)

# 编译器环境制定必须放在project之前否则无效
set(CMAKE_CXX_COMPILER "/opt/homebrew/opt/llvm/bin/clang++")
set(CMAKE_CXX_FLAGS "-Wall -std=c++20")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O4 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

project(
  cpp-basic-practies
  VERSION 0.1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp)

foreach(sourcefile ${SRC_FILES})
  # Cut off the file extension and directory path
  get_filename_component(excfile ${sourcefile} NAME_WE)
  add_executable(${excfile} ${sourcefile})
  # Make sure YourLib is linked to each app target_link_libraries( ${testname}
  # YourLib )
endforeach(sourcefile ${SRC_FILES})
