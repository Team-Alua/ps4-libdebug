#include <vector>
#include <string>
#include <memory>

#include <stdint.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "processapi.hpp"
#include "utils.hpp"

#pragma once

const in_port_t PS4DEBUG_PORT = 744;

namespace PS4Debug {

    typedef std::vector<std::shared_ptr<PS4Debug::ProcessApi>> ProcessList;
    class DebugApi {
        private:
            std::shared_ptr<SocketHelper> m_SharedSocketHelper;
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
             * @returns  false if failed, true otherwise.
             */
            int Connect();

            /**
             * @brief Disconnects from the ps4debug socket server.
             * 
             * @returns false if it failed, true otherwise.
             */
            int Disconnect();
            
            /**
             * @brief Get the List of Processes running on the PS4.
             * 
             * @return std::vector<std::shared_ptr<PS4::ProcessApi>> 
             */
            ProcessList GetProcessList();
    };
}
