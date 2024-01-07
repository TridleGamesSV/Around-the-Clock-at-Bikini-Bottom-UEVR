#include "..\FUObjectArray.hpp"
#include "AnimNode_RotateRootBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_BasePose() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_Yaw() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_MeshToComponent() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotateRootBone");
    return result;
}
