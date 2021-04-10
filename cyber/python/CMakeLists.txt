project(cyber_pyton/)

#set(Python2_LIBRARY /usr/lib/python2.7)
#set(Python2_INCLUDE_DIR /usr/include/python2.7)

#set(Python2_LIBRARY /home/allen/aarch64-depends/python2.7.12/lib)
#set(Python2_INCLUDE_DIR /home/allen/aarch64-depends/python2.7.12/include)

find_package(PythonLibs REQUIRED)

#include cyber directories
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(${cyber_BINARY_DIR})
include_directories(${cyber_SOURCE_DIR})
include_directories(${cyber_BINARY_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/internal)

#build _cyber_init.so
add_library(_cyber_py3 SHARED 
        ${CMAKE_CURRENT_SOURCE_DIR}/internal/py_cyber.cc
    )
target_link_libraries(_cyber_py3 cyber ${PYTHON_LIBRARIES})

# ${CMAKE_CURRENT_SOURCE_DIR}/internal/py_parameter.cc
# ${CMAKE_CURRENT_SOURCE_DIR}/internal/py_record.cc
# ${CMAKE_CURRENT_SOURCE_DIR}/internal/py_time.cc
# ${CMAKE_CURRENT_SOURCE_DIR}/internal/py_timer.cc


install(CODE "file(RENAME ${cyber_BINARY_DIR}/lib_cyber_py3.so ${cyber_BINARY_DIR}/_cyber_wrapper.so)")
install(FILES "${cyber_BINARY_DIR}/_cyber_init.so" DESTINATION ${CMAKE_INSTALL_LIBDIR}/cyber/pyton/cyber_py3)

