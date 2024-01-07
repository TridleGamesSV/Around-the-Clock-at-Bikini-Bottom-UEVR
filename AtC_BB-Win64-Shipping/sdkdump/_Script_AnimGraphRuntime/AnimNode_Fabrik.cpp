#include "..\FUObjectArray.hpp"
#include "AnimNode_Fabrik.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_TipBone() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTransform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTransformSpace() {
    return (void*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_Fabrik::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0x15c);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTransformBone() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_EffectorRotationSource() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_Fabrik::get_RootBone() {
    return (void*)((uintptr_t)this + 0x140);
}
float& _Script_AnimGraphRuntime::AnimNode_Fabrik::get_Precision() {
    return *(float*)((uintptr_t)this + 0x158);
}
bool _Script_AnimGraphRuntime::AnimNode_Fabrik::get_bEnableDebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Fabrik::set_bEnableDebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Fabrik::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Fabrik");
    return result;
}
