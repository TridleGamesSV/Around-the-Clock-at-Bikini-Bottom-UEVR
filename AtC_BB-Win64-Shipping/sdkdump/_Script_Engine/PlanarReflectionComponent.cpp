#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoxComponent.hpp"
#include "PlanarReflectionComponent.hpp"
#include "SceneCaptureComponent.hpp"
_Script_Engine::BoxComponent*& _Script_Engine::PlanarReflectionComponent::get_PreviewBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x318);
}
float& _Script_Engine::PlanarReflectionComponent::get_NormalDistortionStrength() {
    return *(float*)((uintptr_t)this + 0x320);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughnessDistance() {
    return *(float*)((uintptr_t)this + 0x328);
}
float& _Script_Engine::PlanarReflectionComponent::get_PrefilterRoughness() {
    return *(float*)((uintptr_t)this + 0x324);
}
int32_t& _Script_Engine::PlanarReflectionComponent::get_ScreenPercentage() {
    return *(int32_t*)((uintptr_t)this + 0x32c);
}
float& _Script_Engine::PlanarReflectionComponent::get_ExtraFOV() {
    return *(float*)((uintptr_t)this + 0x330);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x334);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x338);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutStart() {
    return *(float*)((uintptr_t)this + 0x33c);
}
float& _Script_Engine::PlanarReflectionComponent::get_DistanceFromPlaneFadeoutEnd() {
    return *(float*)((uintptr_t)this + 0x340);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeStart() {
    return *(float*)((uintptr_t)this + 0x344);
}
float& _Script_Engine::PlanarReflectionComponent::get_AngleFromPlaneFadeEnd() {
    return *(float*)((uintptr_t)this + 0x348);
}
bool _Script_Engine::PlanarReflectionComponent::get_bRenderSceneTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x34c + 0)) & 1 != 0;
}
void _Script_Engine::PlanarReflectionComponent::set_bRenderSceneTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34c + 0);
    *(uint8_t*)((uintptr_t)this + 0x34c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PlanarReflectionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlanarReflectionComponent");
    return result;
}
