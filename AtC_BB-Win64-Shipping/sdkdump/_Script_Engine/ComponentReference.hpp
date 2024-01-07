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
struct ComponentReference {
    _Script_Engine::Actor*& get_OtherActor();
    void* get_ComponentProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
