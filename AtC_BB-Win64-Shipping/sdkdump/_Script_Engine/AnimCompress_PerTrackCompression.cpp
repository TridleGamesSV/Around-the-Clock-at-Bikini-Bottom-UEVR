#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress_PerTrackCompression.hpp"
#include "AnimCompress_RemoveLinearKeys.hpp"
void* _Script_Engine::AnimCompress_PerTrackCompression::get_AllowedRotationFormats() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_MaxZeroingThreshold() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_MaxPosDiffBitwise() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_MaxAngleDiffBitwise() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::AnimCompress_PerTrackCompression::get_bResampleAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void* _Script_Engine::AnimCompress_PerTrackCompression::get_AllowedTranslationFormats() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_MaxScaleDiffBitwise() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::AnimCompress_PerTrackCompression::get_AllowedScaleFormats() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_Engine::AnimCompress_PerTrackCompression::set_bResampleAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_ResampledFramerate() {
    return *(float*)((uintptr_t)this + 0xac);
}
int32_t& _Script_Engine::AnimCompress_PerTrackCompression::get_MinKeysForResampling() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::AnimCompress_PerTrackCompression::get_bUseAdaptiveError() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_Engine::AnimCompress_PerTrackCompression::set_bUseAdaptiveError(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimCompress_PerTrackCompression::get_bUseOverrideForEndEffectors() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 2 != 0;
}
void _Script_Engine::AnimCompress_PerTrackCompression::set_bUseOverrideForEndEffectors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::AnimCompress_PerTrackCompression::get_TrackHeightBias() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_ParentingDivisor() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_ParentingDivisorExponent() {
    return *(float*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::AnimCompress_PerTrackCompression::get_bUseAdaptiveError2() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
void _Script_Engine::AnimCompress_PerTrackCompression::set_bUseAdaptiveError2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_RotationErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_TranslationErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_ScaleErrorSourceRatio() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_MaxErrorPerTrackRatio() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_Engine::AnimCompress_PerTrackCompression::get_PerturbationProbeSize() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_PerTrackCompression::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_PerTrackCompression");
    return result;
}
