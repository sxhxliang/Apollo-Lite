.
├── detector  检测和和识别模块
│   ├── detection 主要是检测信号灯
│   │   ├── BUILD
│   │   ├── cropbox.cc
│   │   ├── cropbox.h
│   │   ├── detection.cc
│   │   ├── detection.h
│   │   ├── select.cc
│   │   └── select.h
│   └── recognition
│       ├── BUILD
│       ├── classify.cc
│       ├── classify.h
│       ├── proto
│       │   ├── BUILD
│       │   └── recognition.proto
│       ├── recognition.cc
│       └── recognition.h
├── preprocessor 图像预处理
│   ├── BUILD
│   ├── multi_camera_projection.cc
│   ├── multi_camera_projection.h
│   ├── pose.cc
│   ├── pose.h
│   ├── proto
│   │   ├── BUILD_
│   │   └── tl_preprocess.proto
│   ├── tl_preprocessor.cc
│   └── tl_preprocessor.h
├── proto
│   ├── BUILD
│   └── detection.proto
└── tracker
    ├── BUILD
    ├── proto
    │   ├── BUILD
    │   └── semantic.proto
    ├── semantic_decision.cc
    └── semantic_decision.h