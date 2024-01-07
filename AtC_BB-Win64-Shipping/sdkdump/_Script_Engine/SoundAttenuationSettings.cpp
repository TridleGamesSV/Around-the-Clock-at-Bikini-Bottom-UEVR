#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseAttenuationSettings.hpp"
#include "OcclusionPluginSourceSettingsBase.hpp"
#include "ReverbPluginSourceSettingsBase.hpp"
#include "SoundAttenuationSettings.hpp"
#include "SpatializationPluginSourceSettingsBase.hpp"
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuate() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SoundAttenuationSettings::get_AbsorptionMethod() {
    return (void*)((uintptr_t)this + 0xd8);
}
void _Script_Engine::SoundAttenuationSettings::set_bSpatialize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bSpatialize() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 2 != 0;
}
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuateWithLPF() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 4 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x210);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableListenerFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 8 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuateWithLPF(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableListenerFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableReverbSend() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 128 != 0;
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableFocusInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 16 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableFocusInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 32 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_ManualReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
bool _Script_Engine::SoundAttenuationSettings::get_bUseComplexCollisionForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 64 != 0;
}
void* _Script_Engine::SoundAttenuationSettings::get_PluginSettings() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Script_Engine::SoundAttenuationSettings::set_bUseComplexCollisionForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionInterpolationTime() {
    return *(float*)((uintptr_t)this + 0x214);
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableReverbSend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bApplyNormalizationToStereoSounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xa9 + 0)) & 1 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
void _Script_Engine::SoundAttenuationSettings::set_bApplyNormalizationToStereoSounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMax() {
    return *(float*)((uintptr_t)this + 0x23c);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableLogFrequencyScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0xa9 + 0)) & 2 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableLogFrequencyScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundAttenuationSettings::get_DistanceType() {
    return (void*)((uintptr_t)this + 0xac);
}
float& _Script_Engine::SoundAttenuationSettings::get_OmniRadius() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_Engine::SoundAttenuationSettings::get_StereoSpread() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomReverbSendCurve() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::SoundAttenuationSettings::get_SpatializationAlgorithm() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_Engine::SpatializationPluginSourceSettingsBase*& _Script_Engine::SoundAttenuationSettings::get_SpatializationPluginSettings() {
    return *(_Script_Engine::SpatializationPluginSourceSettingsBase**)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::SoundAttenuationSettings::get_RadiusMin() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Script_Engine::SoundAttenuationSettings::get_RadiusMax() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMin() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMax() {
    return *(float*)((uintptr_t)this + 0xd4);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomLowpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomHighpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0x158);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusReleaseInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAttackInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::SoundAttenuationSettings::get_OcclusionTraceChannel() {
    return (void*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionLowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x20c);
}
void* _Script_Engine::SoundAttenuationSettings::get_ReverbSendMethod() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::OcclusionPluginSourceSettingsBase*& _Script_Engine::SoundAttenuationSettings::get_OcclusionPluginSettings() {
    return *(_Script_Engine::OcclusionPluginSourceSettingsBase**)((uintptr_t)this + 0x218);
}
_Script_Engine::ReverbPluginSourceSettingsBase*& _Script_Engine::SoundAttenuationSettings::get_ReverbPluginSettings() {
    return *(_Script_Engine::ReverbPluginSourceSettingsBase**)((uintptr_t)this + 0x228);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMin() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMax() {
    return *(float*)((uintptr_t)this + 0x234);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMin() {
    return *(float*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_Engine::SoundAttenuationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundAttenuationSettings");
    return result;
}
