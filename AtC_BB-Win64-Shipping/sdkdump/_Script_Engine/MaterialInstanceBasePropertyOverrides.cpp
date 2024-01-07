#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInstanceBasePropertyOverrides.hpp"
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_OpacityMaskClipValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_ShadingModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialInstanceBasePropertyOverrides::get_BlendMode() {
    return (void*)((uintptr_t)this + 0xc);
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_OpacityMaskClipValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_BlendMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_BlendMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_ShadingModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_DitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_DitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_CastDynamicShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_CastDynamicShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bOverride_TwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x5 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bOverride_TwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MaterialInstanceBasePropertyOverrides::get_OpacityMaskClipValue() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::MaterialInstanceBasePropertyOverrides::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0xd);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_TwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_TwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_DitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_DitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialInstanceBasePropertyOverrides::get_bCastDynamicShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_Engine::MaterialInstanceBasePropertyOverrides::set_bCastDynamicShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInstanceBasePropertyOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialInstanceBasePropertyOverrides");
    return result;
}
