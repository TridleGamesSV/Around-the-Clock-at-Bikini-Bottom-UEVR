#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LightComponent.hpp"
#include "LightComponentBase.hpp"
#include "MaterialInterface.hpp"
#include "TextureLightProfile.hpp"
void _Script_Engine::LightComponent::SetLightFunctionDisabledBrightness(float NewValue) {
    return;
}
float& _Script_Engine::LightComponent::get_ShadowResolutionScale() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
void _Script_Engine::LightComponent::SetShadowBias(float NewValue) {
    return;
}
void _Script_Engine::LightComponent::set_bUseTemperature(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightComponent::get_Temperature() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
float& _Script_Engine::LightComponent::get_MaxDistanceFadeRange() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
bool _Script_Engine::LightComponent::get_bUseRayTracedDistanceFieldShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
float& _Script_Engine::LightComponent::get_MaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
float& _Script_Engine::LightComponent::get_MinRoughness() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
bool _Script_Engine::LightComponent::get_bUseTemperature() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c4 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::LightComponent::get_ShadowMapChannel() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::LightComponent::get_ShadowBias() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::LightComponent::get_ShadowSharpen() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::LightComponent::get_ContactShadowLength() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
bool _Script_Engine::LightComponent::get_InverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 1 != 0;
}
void _Script_Engine::LightComponent::SetIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::LightComponent::set_InverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightComponent::get_CastTranslucentShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 2 != 0;
}
void _Script_Engine::LightComponent::set_CastTranslucentShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightComponent::get_bCastShadowsFromCinematicObjectsOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 4 != 0;
}
void _Script_Engine::LightComponent::set_bCastShadowsFromCinematicObjectsOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LightComponent::get_bAffectDynamicIndirectLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 8 != 0;
}
void _Script_Engine::LightComponent::set_bAffectDynamicIndirectLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::LightComponent::get_bForceCachedShadowsForMovablePrimitives() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 16 != 0;
}
void _Script_Engine::LightComponent::set_bForceCachedShadowsForMovablePrimitives(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::LightComponent::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void _Script_Engine::LightComponent::SetForceCachedShadowsForMovablePrimitives(bool bNewValue) {
    return;
}
_Script_Engine::MaterialInterface*& _Script_Engine::LightComponent::get_LightFunctionMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x2f0);
}
void _Script_Engine::LightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    return;
}
void* _Script_Engine::LightComponent::get_LightFunctionScale() {
    return (void*)((uintptr_t)this + 0x2f8);
}
_Script_Engine::TextureLightProfile*& _Script_Engine::LightComponent::get_IESTexture() {
    return *(_Script_Engine::TextureLightProfile**)((uintptr_t)this + 0x308);
}
bool _Script_Engine::LightComponent::get_bUseIESBrightness() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
void _Script_Engine::LightComponent::set_bUseIESBrightness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightComponent::get_IESBrightnessScale() {
    return *(float*)((uintptr_t)this + 0x314);
}
float& _Script_Engine::LightComponent::get_LightFunctionFadeDistance() {
    return *(float*)((uintptr_t)this + 0x318);
}
float& _Script_Engine::LightComponent::get_BloomThreshold() {
    return *(float*)((uintptr_t)this + 0x328);
}
float& _Script_Engine::LightComponent::get_DisabledBrightness() {
    return *(float*)((uintptr_t)this + 0x31c);
}
bool _Script_Engine::LightComponent::get_bEnableLightShaftBloom() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void _Script_Engine::LightComponent::set_bEnableLightShaftBloom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightComponent::get_BloomScale() {
    return *(float*)((uintptr_t)this + 0x324);
}
void* _Script_Engine::LightComponent::get_BloomTint() {
    return (void*)((uintptr_t)this + 0x32c);
}
void _Script_Engine::LightComponent::set_bUseRayTracedDistanceFieldShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightComponent::get_RayStartOffsetDepthScale() {
    return *(float*)((uintptr_t)this + 0x334);
}
void _Script_Engine::LightComponent::SetEnableLightShaftBloom(bool bNewValue) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::LightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightComponent");
    return result;
}
void _Script_Engine::LightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::LightComponent::SetTemperature(float NewTemperature) {
    return;
}
void _Script_Engine::LightComponent::SetLightFunctionScale(_Script_CoreUObject::Vector NewLightFunctionScale) {
    return;
}
void _Script_Engine::LightComponent::SetLightFunctionMaterial(_Script_Engine::MaterialInterface* NewLightFunctionMaterial) {
    return;
}
void _Script_Engine::LightComponent::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    return;
}
void _Script_Engine::LightComponent::SetLightColor(_Script_CoreUObject::LinearColor NewLightColor, bool bSRGB) {
    return;
}
void _Script_Engine::LightComponent::SetIESTexture(_Script_Engine::TextureLightProfile* NewValue) {
    return;
}
void _Script_Engine::LightComponent::SetBloomTint(_Script_CoreUObject::Color NewValue) {
    return;
}
void _Script_Engine::LightComponent::SetBloomThreshold(float NewValue) {
    return;
}
void _Script_Engine::LightComponent::SetBloomScale(float NewValue) {
    return;
}
void _Script_Engine::LightComponent::SetAffectTranslucentLighting(bool bNewValue) {
    return;
}
void _Script_Engine::LightComponent::SetAffectDynamicIndirectLighting(bool bNewValue) {
    return;
}
