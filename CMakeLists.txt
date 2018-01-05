cmake_minimum_required(VERSION 2.8)
project(L-System)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCE_FILES
    "src/*.hpp"
    "src/*.h"
    "src/*.cpp"
    "src/*.C"
    "src/*.c"
)

add_executable(lsystem ${SOURCE_FILES})

#set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )

# set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

#target_link_libraries(TCC ${OPENGL_LIBRARIES} ${SDL2_LIBRARY} ${SOIL_LIBRARY})
#target_link_libraries(ar_test ${OpenCV2_LIBRARIES})
target_link_libraries(lsystem)
