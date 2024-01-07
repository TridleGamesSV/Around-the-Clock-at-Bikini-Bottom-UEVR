#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HTML5Networking {
#pragma pack(push, 1)
struct WebSocketConnection : public _Script_Engine::NetConnection {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
