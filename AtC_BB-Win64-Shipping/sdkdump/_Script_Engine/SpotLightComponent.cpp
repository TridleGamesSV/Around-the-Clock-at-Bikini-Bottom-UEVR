#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PointLightComponent.hpp"
#include "SpotLightComponent.hpp"
void _Script_Engine::SpotLightComponent::SetOuterConeAngle(float NewOuterConeAngle) {
    return;
}
float& _Script_Engine::SpotLightComponent::get_InnerConeAngle() {
    return *(float*)((uintptr_t)this + 0x3f0);
}
float& _Script_Engine::SpotLightComponent::get_OuterConeAngle() {
    return *(float*)((uintptr_t)this + 0x3f4);
}
float& _Script_Engine::SpotLightComponent::get_LightShaftConeAngle() {
    return *(float*)((uintptr_t)this + 0x3f8);
}
_Script_CoreUObject::Class* _Script_Engine::SpotLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpotLightComponent");
    return result;
}
void _Script_Engine::SpotLightComponent::SetInnerConeAngle(float NewInnerConeAngle) {
    return;
}
