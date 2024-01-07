#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HTML5Networking {
#pragma pack(push, 1)
struct WebSocketNetDriver : public _Script_Engine::NetDriver {
    int32_t& get_WebSocketPort();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
