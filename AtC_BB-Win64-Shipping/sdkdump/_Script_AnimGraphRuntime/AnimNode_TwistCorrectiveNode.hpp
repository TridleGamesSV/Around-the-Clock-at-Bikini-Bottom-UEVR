#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_TwistCorrectiveNode : public AnimNode_SkeletalControlBase {
    void* get_BaseFrame();
    void* get_TwistFrame();
    void* get_TwistPlaneNormalAxis();
    float& get_RangeMax();
    float& get_RemappedMin();
    float& get_RemappedMax();
    void* get_Curve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
