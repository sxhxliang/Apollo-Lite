find_package(fastrtps REQUIRED CONFIG)
message(STATUS "Found fastrtps ${fastrtps_FIND_VERSION}")
message(STATUS "${fastrtps_LIB_DIR}, ${fastrtps_INCLUDE_DIR}")
include_directories(${fastrtps_INCLUDE_DIR})
link_directories(${fastrtps_LIB_DIR})

find_package(fastcdr REQUIRED CONFIG)
message(STATUS "Found fastcdr ${fastcdr_FIND_VERSION}")
message(STATUS "${fastcdr_LIB_DIR}, ${fastcdr_INCLUDE_DIR}")
include_directories(${fastcdr_INCLUDE_DIR})
link_directories(${fastcdr_LIB_DIR})
# include_directories(/usr/local/include)

find_package(Protobuf REQUIRED)
if(PROTOBUF_FOUND)
	message(STATUS "Protobuf library found")
else()
	message(FATAL_ERROR "Protobuf library is needed but cant be found")
endif()

include_directories(${PROTOBUF_INCLUDE_DIR})
link_directories(${PROTOBUF_LIBRARIES})

find_package(Poco REQUIRED COMPONENTS Foundation CONFIG)
message(STATUS "Found Poco: ${Poco_LIBRARIES}")

# for modules

include_directories(/usr/local/cuda/include)

# Try to find Boost
find_package(Boost COMPONENTS program_options REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
else ()
    message(FATAL_ERROR "Could not locate Boost")
endif()

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

