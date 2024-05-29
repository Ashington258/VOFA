# 指定最低CMake版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(vofa_protocol_project)

# 设置C标准
set(CMAKE_C_STANDARD 99)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/vofa_protocol)

# 查找所有源文件
set(SOURCES
    main.c
    vofa_protocol/vofa_protocol.c
)

# 可执行文件输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

# 添加可执行文件
add_executable(vofa_protocol_executable ${SOURCES})
