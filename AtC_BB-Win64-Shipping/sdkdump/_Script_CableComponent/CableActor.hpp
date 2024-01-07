#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CableComponent {
struct CableComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CableComponent {
#pragma pack(push, 1)
struct CableActor : public _Script_Engine::Actor {
    _Script_CableComponent::CableComponent*& get_CableComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
