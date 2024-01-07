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
struct AnimNode_Trail : public AnimNode_SkeletalControlBase {
    void* get_TrailBone();
    int32_t& get_ChainLength();
    void* get_ChainBoneAxis();
    bool get_bInvertChainBoneAxis();
    void set_bInvertChainBoneAxis(bool value);
    float& get_TrailRelaxation();
    void* get_TrailRelaxationSpeed();
    bool get_bLimitStretch();
    void set_bLimitStretch(bool value);
    float& get_StretchLimit();
    void* get_FakeVelocity();
    bool get_bActorSpaceFakeVel();
    void set_bActorSpaceFakeVel(bool value);
    void* get_BaseJoint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
