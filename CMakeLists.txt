# CMake 最低版本要求
# 指定项目所需的最低 CMake 版本为 4.0
cmake_minimum_required(VERSION 4.0)

# 项目名称和版本
# 定义项目名称为 "cai"，版本号为 1.0
project(cai VERSION 1.0)

# 设置 C++ 标准
# 指定使用的 C++ 标准为 C++17
set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

# 查找所需的包
# pkg-config 是一个在编译时查询已安装库的工具
# 如果需要使用 pkg-config 来查找库，则取消下面一行的注释
#find_package(PkgConfig REQUIRED)

# 查找 SDL2 库
# 查找 SDL2 库，如果系统中安装了 SDL2，则会设置 SDL2_LIBRARIES 和 SDL2_INCLUDE_DIRS 变量
# 如果需要使用 SDL2，则取消下面一行的注释
#find_package(SDL2 REQUIRED)

# 包含头文件目录
# 将 SDL2 的头文件路径添加到包含目录中
# 如果使用了 find_package(SDL2 REQUIRED)，则取消下面一行的注释以包含 SDL2 头文件
#include_directories(${SDL2_INCLUDE_DIRS})

# 添加可执行文件
# 定义要构建的可执行文件 "cai" 及其源文件
# 当前只包含 main.cpp，可以添加更多源文件
add_executable(cai
        main.cpp
        # 在此处添加更多源文件
)

# 链接库文件
# 将 SDL2 库链接到可执行文件 "cai"
# 如果使用了 find_package(SDL2 REQUIRED)，则取消下面一行的注释以链接 SDL2 库
#target_link_libraries(cai ${SDL2_LIBRARIES})

# 设置编译选项
# 为可执行文件 "cai" 添加额外的编译器警告选项
# -Wall: 启用大多数常用警告
# -Wextra: 启用额外的警告
# 如果需要启用这些编译选项，则取消下面一行的注释
#target_compile_options(cai PRIVATE -Wall -Wextra)

# 安装规则
# 定义安装目标，将可执行文件 "cai" 安装到 bin 目录下
# 如果需要定义安装规则，则取消下面一行的注释
#install(TARGETS cai DESTINATION bin)