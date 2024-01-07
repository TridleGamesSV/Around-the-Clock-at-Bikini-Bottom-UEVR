#include "..\FUObjectArray.hpp"
#include "PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
float& _Script_AIModule::PawnSensingComponent::get_HearingThreshold() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_AIModule::PawnSensingComponent::get_SensingInterval() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_AIModule::PawnSensingComponent::get_LOSHearingThreshold() {
    return *(float*)((uintptr_t)this + 0xf4);
}
bool _Script_AIModule::PawnSensingComponent::get_bEnableSensingUpdates() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
float& _Script_AIModule::PawnSensingComponent::get_SightRadius() {
    return *(float*)((uintptr_t)this + 0xf8);
}
bool _Script_AIModule::PawnSensingComponent::get_bOnlySensePlayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 2 != 0;
}
float& _Script_AIModule::PawnSensingComponent::get_HearingMaxSoundAge() {
    return *(float*)((uintptr_t)this + 0x100);
}
void _Script_AIModule::PawnSensingComponent::set_bEnableSensingUpdates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::PawnSensingComponent::set_bOnlySensePlayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AIModule::PawnSensingComponent::get_bSeePawns() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 4 != 0;
}
void _Script_AIModule::PawnSensingComponent::set_bSeePawns(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::PawnSensingComponent::get_bHearNoises() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 8 != 0;
}
void _Script_AIModule::PawnSensingComponent::set_bHearNoises(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_AIModule::PawnSensingComponent::get_OnSeePawn() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AIModule::PawnSensingComponent::get_OnHearNoise() {
    return (void*)((uintptr_t)this + 0x120);
}
float& _Script_AIModule::PawnSensingComponent::get_PeripheralVisionAngle() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_AIModule::PawnSensingComponent::get_PeripheralVisionCosine() {
    return *(float*)((uintptr_t)this + 0x134);
}
_Script_CoreUObject::Class* _Script_AIModule::PawnSensingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnSensingComponent");
    return result;
}
void _Script_AIModule::PawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled) {
    return;
}
void _Script_AIModule::PawnSensingComponent::SetSensingInterval(float NewSensingInterval) {
    return;
}
void _Script_AIModule::PawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle) {
    return;
}
float _Script_AIModule::PawnSensingComponent::GetPeripheralVisionCosine() {
    return;
}
float _Script_AIModule::PawnSensingComponent::GetPeripheralVisionAngle() {
    return;
}
