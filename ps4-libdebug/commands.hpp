#include <stdint.h>

#pragma once

namespace PS4Debug
{
    typedef uint32_t Command;

    class ProcessCommand
    {
    public:
        static const uint32_t LIST            = 0xBDAA0001;
        static const uint32_t READ            = 0xBDAA0002;
        static const uint32_t WRITE           = 0xBDAA0003;
        static const uint32_t MAPS            = 0xBDAA0004;
        static const uint32_t INTALL          = 0xBDAA0005;
        static const uint32_t CALL            = 0xBDAA0006;
        static const uint32_t ELF             = 0xBDAA0007;
        static const uint32_t PROTECT         = 0xBDAA0008;
        static const uint32_t SCAN            = 0xBDAA0009;
        static const uint32_t INFO            = 0xBDAA000A;
        static const uint32_t ALLOC           = 0xBDAA000B;
        static const uint32_t FREE            = 0xBDAA000C;
    };

    class DebugCommand
    {
    public:
        static const uint32_t ATTACH        = 0xBDBB0001;
        static const uint32_t DETACH        = 0xBDBB0002;
        static const uint32_t BREAKPT       = 0xBDBB0003;
        static const uint32_t WATCHPT       = 0xBDBB0004;
        static const uint32_t THREADS       = 0xBDBB0005;
        static const uint32_t STOPTHR       = 0xBDBB0006;
        static const uint32_t RESUMETHR     = 0xBDBB0007;
        static const uint32_t GETREGS       = 0xBDBB0008;
        static const uint32_t SETREGS       = 0xBDBB0009;
        static const uint32_t GETFPREGS     = 0xBDBB000A;
        static const uint32_t SETFPREGS     = 0xBDBB000B;
        static const uint32_t GETDBGREGS    = 0xBDBB000C;
        static const uint32_t SETDBGREGS    = 0xBDBB000D;
        static const uint32_t STOPGO        = 0xBDBB0010;
        static const uint32_t THRINFO       = 0xBDBB0011;
        static const uint32_t SINGLESTEP    = 0xBDBB0012;
    };

    class CommandStatus {
    public:
        static const uint32_t SUCCESS              = 0x80000000;
        static const uint32_t ERROR                = 0xF0000001;
        static const uint32_t TOO_MUCH_DATA        = 0xF0000002;
        static const uint32_t DATA_NULL            = 0xF0000003;
        static const uint32_t ALREADY_DEBUG        = 0xF0000004;
        static const uint32_t INVALID_INDEX        = 0xF0000005;
    };
}