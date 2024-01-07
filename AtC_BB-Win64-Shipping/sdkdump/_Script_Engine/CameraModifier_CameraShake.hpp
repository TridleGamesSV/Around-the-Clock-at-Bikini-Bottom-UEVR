#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CameraModifier.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraModifier_CameraShake : public CameraModifier {
    void* get_ActiveShakes();
    float& get_SplitScreenShakeScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
