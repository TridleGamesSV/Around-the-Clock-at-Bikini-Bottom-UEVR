#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCaptureComponent.hpp"
namespace _Script_Engine {
struct DrawSphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SphereReflectionCaptureComponent : public ReflectionCaptureComponent {
    float& get_InfluenceRadius();
    float& get_CaptureDistanceScale();
    _Script_Engine::DrawSphereComponent*& get_PreviewInfluenceRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
