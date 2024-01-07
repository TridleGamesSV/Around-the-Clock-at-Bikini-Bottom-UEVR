#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseDriver.hpp"
#include "AnimNode_PoseHandler.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_bOnlyDriveSelectedBones() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_SourcePose() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_AnimGraphRuntime::AnimNode_PoseDriver::set_bOnlyDriveSelectedBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_SourceBones() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_OnlyDriveBones() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_EvalSpaceBone() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_DriveSource() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_RBFParams() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_Type() {
    return (void*)((uintptr_t)this + 0x139);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_DriveOutput() {
    return (void*)((uintptr_t)this + 0x109);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_PoseTargets() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_SourceBone() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x138);
}
float& _Script_AnimGraphRuntime::AnimNode_PoseDriver::get_RadialScaling() {
    return *(float*)((uintptr_t)this + 0x13c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseDriver");
    return result;
}
