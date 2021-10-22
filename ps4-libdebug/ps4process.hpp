#include <stdint.h>
#include <vector>
#include <string>

#pragma once

class PS4Process {
    private:

    public:
        PS4Process(int32_t pid);
		~PS4Process();
		
        void GetMemoryMaps();
        
		uint64_t InstallRPC();
        void SetStub(uint64_t rpcstub);

        // Maybe make this a variadic function?
        uint64_t Call(uint64_t address, const std::vector<uint8_t> &data);
        
        std::vector<uint8_t> ReadMemory(uint64_t address, int32_t length);
		void WriteMemory(uint64_t address, const std::vector<uint8_t> &data);
        uint64_t AllocateMemory(uint32_t length);
		void FreeMemory(uint64_t address, uint32_t length);
};
