#include <string.h>

#include <netinet/in.h>

#include <arpa/inet.h>

#include "commands.hpp"

#include <vector>

#pragma once

namespace PS4Debug 
{
    class SocketHelper 
    {
    private:
        int m_SockFileDescriptor;
        struct sockaddr_in m_ServerAddress;
    public:
        /**
         * @brief Sets up the client
         * 
         * @param p_IPv4Addr The address to connect to
         * @param p_Port 
         */
        SocketHelper(const char * p_IPv4Addr, in_port_t p_Port);

        /**
         * @brief Establish a connection to the socket server.
         * 
         * @returns -1 if failed, success otherwise.
         */
        int Connect();

        void SendCommand(PS4Debug::Command p_Command, uint32_t p_PayloadSize);


        void SendPayload(std::vector<uint8_t> & payload);
        
    };
}