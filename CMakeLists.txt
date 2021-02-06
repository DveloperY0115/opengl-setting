cmake_minimum_required(VERSION 3.17)
project(opengl_setting)

set(CMAKE_CXX_STANDARD 14)

if (APPLE)
    # Find OpenGL
    find_package(OpenGL REQUIRED)
    if (${OpenGL_FOUND})
        MESSAGE(STATUS "Found OpenGL.")
    else(${OpenGL_FOUND})
        MESSAGE(STATUS "Could not locate OpenGL.")
    endif (${OpenGL_FOUND})

    # Find GLUT
    find_package(GLUT REQUIRED)
    if (${GLUT_FOUND})
        MESSAGE(STATUS "Found GLUT.")
    else(${GLUT_FOUND})
        MESSAGE(STATUS "Could not locate GLUT.")
    endif (${GLUT_FOUND})
endif()

if (MSVC)
    # Find OpenGL
    find_package(OpenGL REQUIRED)
    if (${OpenGL_FOUND})
        MESSAGE(STATUS "Found OpenGL.")
    else(${OpenGL_FOUND})
        MESSAGE(STATUS "Could not locate OpenGL.")
    endif (${OpenGL_FOUND})

    # Find GLUT
    find_package(GLUT REQUIRED)
    if (${GLUT_FOUND})
        MESSAGE(STATUS "Found GLUT.")
    else(${GLUT_FOUND})
        MESSAGE(STATUS "Could not locate GLUT.")
    endif (${GLUT_FOUND})
endif()

add_executable(opengl_setting main.cpp)

if (APPLE)
    target_link_libraries(opengl_setting "-framework OpenGL")
    target_link_libraries(opengl_setting "-framework GLUT")
endif()

if (MSVC)
    target_link_libraries(opengl_setting ${OPENGL_LIBRARIES})
    target_link_libraries(opengl_setting ${GLUT_LIBRARIES})
endif()