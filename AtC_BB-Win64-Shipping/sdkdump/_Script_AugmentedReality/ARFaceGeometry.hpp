#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARFaceGeometry : public ARTrackedGeometry {
    void* get_BlendShapes();
    static _Script_CoreUObject::Class* static_class();
    float GetBlendShapeValue(void* BlendShape);
    void* GetBlendShapes();
}; // Size: 0x28
#pragma pack(pop)
}
