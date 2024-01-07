#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "AnimNode_RotationOffsetBlendSpace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_BasePose() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_bIsLODEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x144 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x14c);
}
void _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::set_bIsLODEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x144 + 0);
    *(uint8_t*)((uintptr_t)this + 0x144 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x148);
}
float& _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x154);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RotationOffsetBlendSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace");
    return result;
}
