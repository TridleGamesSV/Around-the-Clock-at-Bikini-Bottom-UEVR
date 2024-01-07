#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundAttenuation.hpp"
#include "SoundBase.hpp"
#include "SoundClass.hpp"
#include "SoundConcurrency.hpp"
#include "SoundEffectSourcePresetChain.hpp"
#include "SoundSubmix.hpp"
_Script_Engine::SoundClass*& _Script_Engine::SoundBase::get_SoundClassObject() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x28);
}
bool _Script_Engine::SoundBase::get_bDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::SoundBase::set_bOverrideConcurrency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SoundBase::set_bDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundBase::get_bOutputToBusOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
bool _Script_Engine::SoundBase::get_bOverrideConcurrency() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
bool _Script_Engine::SoundBase::get_bIgnoreFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 8 != 0;
}
void _Script_Engine::SoundBase::set_bOutputToBusOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SoundBase::set_bIgnoreFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_Engine::SoundConcurrency*& _Script_Engine::SoundBase::get_SoundConcurrencySettings() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundBase::get_ConcurrencyOverrides() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SoundBase::get_MaxConcurrentResolutionRule() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::SoundBase::get_MaxConcurrentPlayCount() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::SoundBase::get_Duration() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundAttenuation*& _Script_Engine::SoundBase::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x60);
}
float& _Script_Engine::SoundBase::get_Priority() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_Engine::SoundSubmix*& _Script_Engine::SoundBase::get_SoundSubmixObject() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x70);
}
void* _Script_Engine::SoundBase::get_SoundSubmixSends() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_Engine::SoundBase::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x88);
}
void* _Script_Engine::SoundBase::get_BusSends() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::SoundBase::get_PreEffectBusSends() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundBase");
    return result;
}
