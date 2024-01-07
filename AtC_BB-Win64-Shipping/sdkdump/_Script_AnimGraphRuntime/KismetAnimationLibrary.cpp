#include "..\FUObjectArray.hpp"
#include "KismetAnimationLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::KismetAnimationLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.KismetAnimationLibrary");
    return result;
}
void _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_TwoBoneIK(_Script_CoreUObject::Vector& RootPos, _Script_CoreUObject::Vector& JointPos, _Script_CoreUObject::Vector& EndPos, _Script_CoreUObject::Vector& JointTarget, _Script_CoreUObject::Vector& Effector, _Script_CoreUObject::Vector& OutJointPos, _Script_CoreUObject::Vector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale) {
    return;
}
_Script_CoreUObject::Transform _Script_AnimGraphRuntime::KismetAnimationLibrary::K2_LookAt(_Script_CoreUObject::Transform& CurrentTransform, _Script_CoreUObject::Vector& TargetPosition, _Script_CoreUObject::Vector LookAtVector, bool bUseUpVector, _Script_CoreUObject::Vector UpVector, float ClampConeInDegree) {
    return;
}
