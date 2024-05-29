cmake_minimum_required(VERSION 3.10)

# 项目名称和版本号
project(vofa_protocol VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含目录
include_directories(${PROJECT_SOURCE_DIR}/vofa_protocol)

# 添加子目录（如果有其他子项目或需要构建多个目标可以使用）
# add_subdirectory(vofa_protocol)

# 源文件列表
set(SOURCES
    main.cpp
    vofa_protocol/vofa_protocol.cpp
)

# 生成可执行文件
add_executable(vofa_protocol ${SOURCES})

# 如果有需要，可以链接其他库
# target_link_libraries(vofa_protocol <library_name>)
