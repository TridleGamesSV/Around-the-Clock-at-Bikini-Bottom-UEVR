#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct RBFParams {
    int32_t& get_TargetDimensions();
    float& get_Radius();
    void* get_Function();
    void* get_DistanceMethod();
    void* get_TwistAxis();
    float& get_WeightThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
