#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavLinkRenderingComponent : public PrimitiveComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
