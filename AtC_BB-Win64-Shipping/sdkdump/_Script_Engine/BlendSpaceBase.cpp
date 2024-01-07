#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "BlendSpaceBase.hpp"
int32_t& _Script_Engine::BlendSpaceBase::get_SampleIndexWithMarkers() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::BlendSpaceBase::get_AnimLength() {
    return *(float*)((uintptr_t)this + 0x84);
}
bool _Script_Engine::BlendSpaceBase::get_bRotationBlendInMeshSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void* _Script_Engine::BlendSpaceBase::get_PerBoneBlend() {
    return (void*)((uintptr_t)this + 0xa8);
}
void _Script_Engine::BlendSpaceBase::set_bRotationBlendInMeshSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BlendSpaceBase::get_InterpolationParam() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::BlendSpaceBase::get_TargetWeightInterpolationSpeedPerSec() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::BlendSpaceBase::get_NotifyTriggerMode() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::BlendSpaceBase::get_SampleData() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::BlendSpaceBase::get_GridSamples() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::BlendSpaceBase::get_BlendParameters() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_Engine::BlendSpaceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlendSpaceBase");
    return result;
}
