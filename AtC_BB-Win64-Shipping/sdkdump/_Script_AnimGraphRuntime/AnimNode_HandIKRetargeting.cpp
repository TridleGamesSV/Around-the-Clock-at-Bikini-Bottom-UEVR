#include "..\FUObjectArray.hpp"
#include "AnimNode_HandIKRetargeting.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_RightHandFK() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_HandFKWeight() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_LeftHandFK() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_RightHandIK() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_LeftHandIK() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::get_IKBonesToMove() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_HandIKRetargeting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting");
    return result;
}
