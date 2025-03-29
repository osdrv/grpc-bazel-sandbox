cc_binary(
    name = "server",
    srcs = ["server.cc"],
    deps = [
        ":ping_pong_service",
        "//proto:service_proto_cc",
        "//proto:service_proto_grpc_cc",
    ],
)

cc_library(
    name = "ping_pong_service",
    srcs = ["ping_pong_service.h"],
    deps = [
        "//proto:service_proto_cc",
        "//proto:service_proto_grpc_cc",
    ],
)
