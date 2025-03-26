load("@rules_proto//proto:defs.bzl", "proto_library")
load("@grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

proto_library(
    name = "service_proto",
    srcs = ["service.proto"],
    visibility = ["//visibility:public"],
)

cc_proto_library(
    name = "service_proto_cc",
    deps = [":service_proto"],
    visibility = ["//visibility:public"],
)

cc_grpc_library(
    name = "service_proto_grpc_cc",
    srcs = [":service_proto"],
    deps = [
        ":service_proto_cc",
    ],
    grpc_only = True,
    visibility = ["//visibility:public"],
)
