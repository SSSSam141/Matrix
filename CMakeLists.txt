cmake_minimu m_required(VERSION 3.6)
project(final_pro)#改为自己的项目名称
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
# Where to find CMake modules and OpenCV
set(OpenCV_DIR "C:/Users/XiShao/Downloads/opencv/build")#改为mingw-bulid的位置
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(final_pro main.cpp Matrix.h)#当前项目名称和cpp的名称
# add libs you need
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)
# linking
target_link_libraries(final_pro ${OpenCV_LIBS})
