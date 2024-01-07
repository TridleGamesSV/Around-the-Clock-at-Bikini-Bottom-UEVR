#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightComponent.hpp"
#include "PointLightComponent.hpp"
void* _Script_Engine::PointLightComponent::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x3c0);
}
float& _Script_Engine::PointLightComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
float& _Script_Engine::PointLightComponent::get_SoftSourceRadius() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
float& _Script_Engine::PointLightComponent::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
float& _Script_Engine::PointLightComponent::get_SourceRadius() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
bool _Script_Engine::PointLightComponent::get_bUseInverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x3cc + 0)) & 1 != 0;
}
void _Script_Engine::PointLightComponent::set_bUseInverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PointLightComponent::get_LightFalloffExponent() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
float& _Script_Engine::PointLightComponent::get_SourceLength() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
void* _Script_Engine::PointLightComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_CoreUObject::Class* _Script_Engine::PointLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PointLightComponent");
    return result;
}
void _Script_Engine::PointLightComponent::SetSourceRadius(float bNewValue) {
    return;
}
void _Script_Engine::PointLightComponent::SetSourceLength(float NewValue) {
    return;
}
void _Script_Engine::PointLightComponent::SetSoftSourceRadius(float bNewValue) {
    return;
}
void _Script_Engine::PointLightComponent::SetLightFalloffExponent(float NewLightFalloffExponent) {
    return;
}
void _Script_Engine::PointLightComponent::SetAttenuationRadius(float NewRadius) {
    return;
}
float _Script_Engine::PointLightComponent::GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle) {
    return;
}
