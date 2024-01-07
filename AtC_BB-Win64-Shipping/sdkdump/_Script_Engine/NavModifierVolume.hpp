#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavModifierVolume : public Volume {
    void* get_AreaClass();
    static _Script_CoreUObject::Class* static_class();
    void SetAreaClass(void* NewAreaClass);
}; // Size: 0x28
#pragma pack(pop)
}
