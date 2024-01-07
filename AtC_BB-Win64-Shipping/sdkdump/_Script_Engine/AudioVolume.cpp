#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioVolume.hpp"
#include "InteriorSettings.hpp"
#include "ReverbSettings.hpp"
#include "Volume.hpp"
float& _Script_Engine::AudioVolume::get_Priority() {
    return *(float*)((uintptr_t)this + 0x350);
}
void _Script_Engine::AudioVolume::SetPriority(float NewPriority) {
    return;
}
void* _Script_Engine::AudioVolume::get_AmbientZoneSettings() {
    return (void*)((uintptr_t)this + 0x378);
}
bool _Script_Engine::AudioVolume::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x354 + 0)) & 1 != 0;
}
void _Script_Engine::AudioVolume::SetReverbSettings(_Script_Engine::ReverbSettings& NewReverbSettings) {
    return;
}
void _Script_Engine::AudioVolume::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x354 + 0);
    *(uint8_t*)((uintptr_t)this + 0x354 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AudioVolume::get_Settings() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_CoreUObject::Class* _Script_Engine::AudioVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioVolume");
    return result;
}
void _Script_Engine::AudioVolume::SetInteriorSettings(_Script_Engine::InteriorSettings& NewInteriorSettings) {
    return;
}
void _Script_Engine::AudioVolume::SetEnabled(bool bNewEnabled) {
    return;
}
void _Script_Engine::AudioVolume::OnRep_bEnabled() {
    return;
}
