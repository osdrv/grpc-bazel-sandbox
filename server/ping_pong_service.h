#ifndef PING_PONG_SERVICE_H
#define PING_PONG_SERVICE_H

#include "proto/service.pb.h"
#include "proto/service.grpc.pb.h"

class PingPongServiceImpl final : public service::PingPong::Service {
public:
    grpc::Status Ping(grpc::ServerContext* context, const service::PingMessage* request, service::PongMessage* response) override {
        return grpc::Status::OK;
    }
};

#endif // PING_PONG_SERVICE_H
