#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "LightComponentBase.hpp"
#include "SkyLightComponent.hpp"
#include "TextureCube.hpp"
void* _Script_Engine::SkyLightComponent::get_SourceType() {
    return (void*)((uintptr_t)this + 0x2b8);
}
bool _Script_Engine::SkyLightComponent::get_bLowerHemisphereIsBlack() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d5 + 0)) & 1 != 0;
}
void _Script_Engine::SkyLightComponent::set_bCaptureEmissiveOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextureCube*& _Script_Engine::SkyLightComponent::get_Cubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x2c0);
}
float& _Script_Engine::SkyLightComponent::get_SourceCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
int32_t& _Script_Engine::SkyLightComponent::get_CubemapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
bool _Script_Engine::SkyLightComponent::get_bCaptureEmissiveOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d4 + 0)) & 1 != 0;
}
float& _Script_Engine::SkyLightComponent::get_SkyDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
void _Script_Engine::SkyLightComponent::set_bLowerHemisphereIsBlack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkyLightComponent::get_LowerHemisphereColor() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::SkyLightComponent::get_OcclusionMaxDistance() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
void _Script_Engine::SkyLightComponent::SetCubemapBlend(_Script_Engine::TextureCube* SourceCubemap, _Script_Engine::TextureCube* DestinationCubemap, float InBlendFraction) {
    return;
}
float& _Script_Engine::SkyLightComponent::get_Contrast() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::SkyLightComponent::get_OcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
float& _Script_Engine::SkyLightComponent::get_MinOcclusion() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
void* _Script_Engine::SkyLightComponent::get_OcclusionTint() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_Engine::SkyLightComponent::get_OcclusionCombineMode() {
    return (void*)((uintptr_t)this + 0x2fc);
}
_Script_Engine::TextureCube*& _Script_Engine::SkyLightComponent::get_BlendDestinationCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_Engine::SkyLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkyLightComponent");
    return result;
}
void _Script_Engine::SkyLightComponent::SetVolumetricScatteringIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::SkyLightComponent::SetOcclusionTint(_Script_CoreUObject::Color& InTint) {
    return;
}
void _Script_Engine::SkyLightComponent::SetOcclusionExponent(float InOcclusionExponent) {
    return;
}
void _Script_Engine::SkyLightComponent::SetOcclusionContrast(float InOcclusionContrast) {
    return;
}
void _Script_Engine::SkyLightComponent::SetMinOcclusion(float InMinOcclusion) {
    return;
}
void _Script_Engine::SkyLightComponent::SetLowerHemisphereColor(_Script_CoreUObject::LinearColor& InLowerHemisphereColor) {
    return;
}
void _Script_Engine::SkyLightComponent::SetLightColor(_Script_CoreUObject::LinearColor NewLightColor) {
    return;
}
void _Script_Engine::SkyLightComponent::SetIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::SkyLightComponent::SetIndirectLightingIntensity(float NewIntensity) {
    return;
}
void _Script_Engine::SkyLightComponent::SetCubemap(_Script_Engine::TextureCube* NewCubemap) {
    return;
}
void _Script_Engine::SkyLightComponent::RecaptureSky() {
    return;
}
