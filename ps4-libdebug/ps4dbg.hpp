#include <stdint.h>
#include <vector>
#include <string>

#include <sys/socket.h>
#include <netinet/in.h>
#include "ps4process.hpp"

#pragma once

class PS4DBG {
    private:
        struct sockaddr_in m_Server;
    public:
        PS4DBG(const std::string &ip);
		~PS4DBG();
        void Connect();
        void Disconnect();
        
        std::vector<PS4Process> GetProcessList();
};
