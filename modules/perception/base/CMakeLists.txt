include_directories(${PROJECT_SOURCE_DIR})

set(BASE_SRCS
    blob.cc
    blob.h
    box.h
    box_test.cc
    camera.cc
    camera.h
    common.h
    comparison_traits.h
    concurrent_object_pool.h
    distortion_model.cc
    distortion_model.h
    frame.h
    frame_supplement.h
    hdmap_struct.h
    image_8u.h
    image.h
    impending_collision_edge.h
    landmark_struct.h
    lane_struct.h
    light_object_pool.h
    object.cc
    object.h
    object_pool.h
    object_pool_types.cc
    object_pool_types.h
    object_supplement.h
    object_types.h
    omnidirectional_model.cc
    omnidirectional_model.h
    point_cloud.h
    point_cloud_util.cc
    point_cloud_util.h
    point.h
    polynomial.cc
    polynomial.h
    sensor_meta.h
    syncedmem.cc
    syncedmem.h
)


add_library(modules_base SHARED 
        ${BASE_SRCS}
    ) 
target_link_libraries(modules_base 
                protobuf 
                ${OpenCV_LIBS})


