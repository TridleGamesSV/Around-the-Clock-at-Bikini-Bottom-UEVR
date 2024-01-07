#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MeshComponent.hpp"
#include "PrimitiveComponent.hpp"
void* _Script_Engine::MeshComponent::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Script_Engine::MeshComponent::GetMaterials() {
    return;
}
bool _Script_Engine::MeshComponent::IsMaterialSlotNameValid(void* MaterialSlotName) {
    return;
}
void _Script_Engine::MeshComponent::SetScalarParameterValueOnMaterials(void* ParameterName, float ParameterValue) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::MeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MeshComponent");
    return result;
}
void _Script_Engine::MeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups) {
    return;
}
int32_t _Script_Engine::MeshComponent::GetMaterialIndex(void* MaterialSlotName) {
    return;
}
void _Script_Engine::MeshComponent::SetVectorParameterValueOnMaterials(void* ParameterName, _Script_CoreUObject::Vector ParameterValue) {
    return;
}
void* _Script_Engine::MeshComponent::GetMaterialSlotNames() {
    return;
}
