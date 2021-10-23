#include <stdint.h>
#include <vector>
#include <string>

#include <sys/socket.h>
#include <netinet/in.h>
#include "process.hpp"

#pragma once

namespace PS4 {
    class DebugApi {
        private:
            struct sockaddr_in m_Server;
        public:

            DebugApi(const char * p_IPv4Addr);
            ~DebugApi();
            
            void Connect();
            void Disconnect();
            
            std::vector<PS4::Process> GetProcessList();
    };
}
