#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
float& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_ComponentPose() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
float& _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase");
    return result;
}
