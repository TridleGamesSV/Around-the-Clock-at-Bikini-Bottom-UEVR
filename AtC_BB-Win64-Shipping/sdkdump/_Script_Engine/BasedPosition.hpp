#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BasedPosition {
    _Script_Engine::Actor*& get_Base();
    void* get_Position();
    void* get_CachedBaseLocation();
    void* get_CachedBaseRotation();
    void* get_CachedTransPosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
