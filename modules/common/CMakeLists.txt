
include_directories(${PROJECT_SOURCE_DIR})
include_directories(./proto)

FILE(GLOB PROTO_SRCS proto/*.cc)
message(STATUS ${PROTO_SRCS})

add_library(modules_common_proto SHARED ${PROTO_SRCS}) 
target_link_libraries(modules_common_proto protobuf)