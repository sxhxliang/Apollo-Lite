
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(./proto)


FILE(GLOB PROTO_SRCS proto/*.cc)
message(STATUS ${PROTO_SRCS})

add_library(modules_perception_camera_app_proto SHARED ${PROTO_SRCS}) 
target_link_libraries(modules_perception_camera_app_proto protobuf)

# FILE(GLOB CAMERA_APP_SRCS *.cc)

set(CAMERA_APP_SRCS
    debug_info.cc
    lane_camera_perception.cc
    obstacle_camera_perception.cc
    traffic_light_camera_perception.cc
)

message(STATUS ${PROTO_SRCS})

add_library(modules_perception_camera_app SHARED ${CAMERA_APP_SRCS}) 
target_link_libraries(modules_perception_camera_app 
            modules_perception_camera_app_proto
            protobuf
        )