#include <iostream>

#include "proto/service.pb.h"
#include "proto/service.grpc.pb.h"

int main(int argc, char* argv[]) {
    std::string server_address("localhost:50051");
    std::cout << "Server address: " << server_address << std::endl;

    service::PingPong::Service service;

    return 0;
}
