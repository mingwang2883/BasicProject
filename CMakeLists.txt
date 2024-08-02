project(BasicPro)
cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
add_definitions("-Wall -Os -fno-strict-aliasing -rdynamic -funwind-tables -ffunction-sections")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include_directories(Common/ComTimeFunc)
include_directories(Application/AppShowTime)

add_subdirectory(Common)
add_subdirectory(Application)

aux_source_directory(${PROJECT_SOURCE_DIR} src_main)

add_executable(basic_pro ${src_main} ${cache_src_com} ${cache_src_app})
target_link_libraries(basic_pro pthread)
