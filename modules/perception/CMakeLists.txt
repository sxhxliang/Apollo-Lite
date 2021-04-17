include_directories(${PROJECT_SOURCE_DIR})
include_directories(./proto)

FILE(GLOB PROTO_SRCS proto/*.cc)
message(STATUS ${PROTO_SRCS})

add_library(modules_perception_onboard_proto SHARED ${PROTO_SRCS}) 
target_link_libraries(modules_perception_onboard_proto  protobuf)

add_subdirectory(base)


include_directories(base)
add_subdirectory(camera)
add_subdirectory(onboard)

# # camera
# include_directories(modules/perception/camera/app)
# include_directories(modules/perception/camera/app/proto)
# include_directories(modules/perception/camera/app/common)
# # common
# include_directories(modules/perception/camera/app/lib/interface)

# include_directories(modules/perception/camera/app/lib/traffic_light/detector/detection)
# include_directories(modules/perception/camera/app/lib/traffic_light/detector/recognition)
# include_directories(modules/perception/camera/app/lib/traffic_light/detector/recognition/proto)

# include_directories(modules/perception/camera/app/lib/traffic_light/preprocessor/detection)
# include_directories(modules/perception/camera/app/lib/traffic_light/preprocessor/proto)

# include_directories(modules/perception/camera/app/lib/traffic_light/proto)
# include_directories(modules/perception/camera/app/lib/traffic_light/tracker)
# include_directories(modules/perception/camera/app/lib/traffic_light/tracker/proto)

# include_directories(modules/perception/camera/app/lib/traffic_light)
# include_directories(modules/perception/camera/app/lib/traffic_light)


# include_directories(modules/perception/camera/app/lib/traffic_light)
# # lib
# include_directories(modules/perception/lib/config_manager)
# include_directories(modules/perception/lib/registerer)
# include_directories(modules/perception/lib/thread)
# # hdmap