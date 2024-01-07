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
struct AnimLegIKDefinition {
    void* get_IKFootBone();
    void* get_FKFootBone();
    int32_t& get_NumBonesInLimb();
    void* get_FootBoneForwardAxis();
    bool get_bEnableRotationLimit();
    void set_bEnableRotationLimit(bool value);
    float& get_MinRotationAngle();
    bool get_bEnableKneeTwistCorrection();
    void set_bEnableKneeTwistCorrection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
