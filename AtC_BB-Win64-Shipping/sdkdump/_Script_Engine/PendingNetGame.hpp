#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_Engine {
struct DemoNetDriver;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PendingNetGame : public _Script_CoreUObject::Object {
    _Script_Engine::NetDriver*& get_NetDriver();
    _Script_Engine::DemoNetDriver*& get_DemoNetDriver();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
