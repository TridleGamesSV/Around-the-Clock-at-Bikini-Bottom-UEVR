#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkInstanceProxy : public _Script_Engine::AnimInstanceProxy {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
