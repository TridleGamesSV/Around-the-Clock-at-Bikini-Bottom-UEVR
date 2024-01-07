#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioSettings.hpp"
#include "DeveloperSettings.hpp"
void* _Script_Engine::AudioSettings::get_DefaultSoundClassName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AudioSettings::get_DefaultSoundConcurrencyName() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::AudioSettings::get_DefaultReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::AudioSettings::get_DefaultBaseSoundMix() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::AudioSettings::get_bDisableMasterEQ() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 2 != 0;
}
void* _Script_Engine::AudioSettings::get_VoiPSoundClass() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_Engine::AudioSettings::set_bDisableMasterReverb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::AudioSettings::get_VoiPSampleRate() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::AudioSettings::get_VoipBufferingDelay() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_Engine::AudioSettings::get_LowPassFilterResonance() {
    return *(float*)((uintptr_t)this + 0xa4);
}
int32_t& _Script_Engine::AudioSettings::get_MaximumConcurrentStreams() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::AudioSettings::get_QualityLevels() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::AudioSettings::get_bAllowVirtualizedSounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void _Script_Engine::AudioSettings::set_bAllowVirtualizedSounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AudioSettings::set_bDisableMasterEQ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::AudioSettings::get_bDisableMasterReverb() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 4 != 0;
}
bool _Script_Engine::AudioSettings::get_bAllowCenterChannel3DPanning() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 8 != 0;
}
void _Script_Engine::AudioSettings::set_bAllowCenterChannel3DPanning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::AudioSettings::get_DialogueFilenameFormat() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::AudioSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioSettings");
    return result;
}
