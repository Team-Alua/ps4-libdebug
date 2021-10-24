#include <stdint.h>
#include <vector>
#include <string>
#include <memory>

#include <sys/socket.h>
#include <netinet/in.h>
#include "processapi.hpp"

#pragma once

namespace PS4 {
    class DebugApi {
        private:
            struct sockaddr_in m_Server;
        public:

            /**
             * @brief Sets up the client to connect to ps4debug. Assumes the target port is 744.
             * 
             * @param p_IPv4Addr The address to connect to ps4debug. 
             */
            DebugApi(const char * p_IPv4Addr);

            ~DebugApi();
            
            /**
             * @brief Establish a connection to ps4debug socket server.
             * 
             */
            void Connect();

            /**
             * @brief Disconnects from the ps4debug socket server.
             * 
             */
            void Disconnect();
            
            /**
             * @brief Get the List of Processes running on the PS4.
             * 
             * @return std::vector<std::shared_ptr<PS4::ProcessApi>> 
             */
            
            std::vector<std::shared_ptr<PS4::ProcessApi>> GetProcessList();
    };
}
