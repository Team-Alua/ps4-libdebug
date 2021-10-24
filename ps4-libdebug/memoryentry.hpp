#include <stdint.h>
#include <string>


#pragma once

namespace PS4Debug 
{
    class MemoryEntry 
    {
    public:
        char m_Name[32];
        uint64_t m_StartAddress;
        uint64_t m_EndAddress;
        uint64_t m_FileOffset;
        uint32_t m_Protection;
    };
};
