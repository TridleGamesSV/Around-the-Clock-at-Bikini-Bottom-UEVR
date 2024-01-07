#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct KismetAnimationLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void K2_TwoBoneIK(_Script_CoreUObject::Vector& RootPos, _Script_CoreUObject::Vector& JointPos, _Script_CoreUObject::Vector& EndPos, _Script_CoreUObject::Vector& JointTarget, _Script_CoreUObject::Vector& Effector, _Script_CoreUObject::Vector& OutJointPos, _Script_CoreUObject::Vector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
    _Script_CoreUObject::Transform K2_LookAt(_Script_CoreUObject::Transform& CurrentTransform, _Script_CoreUObject::Vector& TargetPosition, _Script_CoreUObject::Vector LookAtVector, bool bUseUpVector, _Script_CoreUObject::Vector UpVector, float ClampConeInDegree);
}; // Size: 0x28
#pragma pack(pop)
}
