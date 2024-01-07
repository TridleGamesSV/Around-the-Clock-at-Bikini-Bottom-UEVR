#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "SkeletalMaterial.hpp"
void* _Script_Engine::SkeletalMaterial::get_MaterialSlotName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::MaterialInterface*& _Script_Engine::SkeletalMaterial::get_MaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
bool _Script_Engine::SkeletalMaterial::get_bEnableShadowCasting() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMaterial::set_bEnableShadowCasting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMaterial::get_bRecomputeTangent() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMaterial::set_bRecomputeTangent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkeletalMaterial::get_UVChannelData() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMaterial");
    return result;
}
