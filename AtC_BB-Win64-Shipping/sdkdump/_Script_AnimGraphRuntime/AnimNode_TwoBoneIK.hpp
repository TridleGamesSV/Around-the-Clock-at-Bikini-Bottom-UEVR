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
struct AnimNode_TwoBoneIK : public AnimNode_SkeletalControlBase {
    void* get_IKBone();
    bool get_bAllowStretching();
    void set_bAllowStretching(bool value);
    float& get_StartStretchRatio();
    float& get_MaxStretchScale();
    void* get_StretchLimits();
    bool get_bTakeRotationFromEffectorSpace();
    void set_bTakeRotationFromEffectorSpace(bool value);
    bool get_bMaintainEffectorRelRot();
    void set_bMaintainEffectorRelRot(bool value);
    void* get_EffectorLocationSpace();
    void* get_EffectorSpaceBoneName();
    void* get_EffectorLocation();
    void* get_EffectorTarget();
    void* get_JointTargetLocationSpace();
    void* get_JointTargetLocation();
    void* get_JointTargetSpaceBoneName();
    void* get_JointTarget();
    bool get_bAllowTwist();
    void set_bAllowTwist(bool value);
    void* get_TwistAxis();
    bool get_bNoTwist();
    void set_bNoTwist(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
