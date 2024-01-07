#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ExponentialHeightFogComponent.hpp"
#include "SceneComponent.hpp"
#include "TextureCube.hpp"
_Script_Engine::TextureCube*& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x2a8);
}
void _Script_Engine::ExponentialHeightFogComponent::SetStartDistance(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogDensity() {
    return *(float*)((uintptr_t)this + 0x290);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_FogInscatteringColor() {
    return (void*)((uintptr_t)this + 0x294);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_InscatteringTextureTint() {
    return (void*)((uintptr_t)this + 0x2b4);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FullyDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void _Script_Engine::ExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_NonDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringStartDistance() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringColor() {
    return (void*)((uintptr_t)this + 0x2d4);
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogAlbedo(_Script_CoreUObject::Color NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::set_bOverrideLightColorsWithFogInscatteringColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31c + 0);
    *(uint8_t*)((uintptr_t)this + 0x31c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogHeightFalloff() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogMaxOpacity() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Script_Engine::ExponentialHeightFogComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ExponentialHeightFogComponent");
    return result;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_StartDistance() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogCutoffDistance() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogEmissive(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bEnableVolumetricFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFogComponent::set_bEnableVolumetricFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogAlbedo() {
    return (void*)((uintptr_t)this + 0x2fc);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogEmissive() {
    return (void*)((uintptr_t)this + 0x300);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x310);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogDistance() {
    return *(float*)((uintptr_t)this + 0x314);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogStaticLightingScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x318);
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bOverrideLightColorsWithFogInscatteringColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x31c + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogDistance(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringTextureTint(_Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemap(_Script_Engine::TextureCube* Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogDensity(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
