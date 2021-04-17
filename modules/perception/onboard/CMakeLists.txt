include_directories(${PROJECT_SOURCE_DIR})
# include_directories(./proto)

FILE(GLOB PROTO_SRCS proto/*.cc)
message(STATUS ${PROTO_SRCS})

add_library(modules_perception_proto SHARED ${PROTO_SRCS}) 
target_link_libraries(modules_perception_proto modules_map_proto modules_common_proto protobuf)

include_directories(common_flags)
include_directories(component)
include_directories(proto)
include_directories(transform_wrapper)

FILE(GLOB FLAGS_SRCS common_flags/*.cc)
FILE(GLOB COMPONENT_SRCS component/*.cc)
FILE(GLOB TFW_SRCS transform_wrapper/*.cc)


add_library(modules_perception_onboard SHARED 
        ${FLAGS_SRCS}
        ${COMPONENT_SRCS}
        ${TFW_SRCS}
    ) 
target_link_libraries(modules_perception_onboard 
                modules_perception_proto
                modules_common_proto protobuf 
                ${OpenCV_LIBS})


