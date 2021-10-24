#include <stdint.h>
#include <vector>
#include <string>
#include <memory>

#include "memoryentry.hpp"

#pragma once


namespace PS4 {
    class ProcessApi {
        private:
            int m_SockFileDescriptor;
            uint32_t m_Pid;
            uint64_t m_RPCStub;

        public:
            
            ProcessApi(int p_SockFileDescriptor, uint32_t p_Pid);
           
            ~ProcessApi();
            
            std::vector<std::shared_ptr<PS4::MemoryEntry>> GetMemoryMaps();
            
            uint64_t InstallRPC();

            void SetStub(uint64_t p_RPCStub);

            uint64_t Call(uint64_t p_Address, const std::vector<uint8_t> &p_Data);

            std::vector<uint8_t> ReadMemory(uint64_t p_Address, int32_t p_Length);

            void WriteMemory(uint64_t p_Address, const std::vector<uint8_t> &p_Data);

            uint64_t AllocateMemory(uint32_t p_Length);

            void FreeMemory(uint64_t p_Address, uint32_t p_Length);
    };

}
