cmake_minimum_required (VERSION 2.8) #最低要求的CMake版本
project(TestMySo) # 项目名称
#file(GLOB SRC_FILE *.c) # 建立变量SRC_FILE为目录下.c文件列表
aux_source_directory(. DIR_SRCS) #查找当前目录下的所有源文件，并把名称保存在变量DRI_SRCS中

#添加子目录
add_subdirectory(myMath)

#包含的目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/myMath)

#增加可生成目标文件
add_executable (${PROJECT_NAME} ${DIR_SRCS}) # 要求编译可执行文件

#目标链接的库
target_link_libraries(${PROJECT_NAME} myMath)


