#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneAudioSection.hpp"
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioStartTime() {
    return *(float*)((uintptr_t)this + 0x11c);
}
_Script_Engine::SoundBase*& _Script_MovieSceneTracks::MovieSceneAudioSection::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x110);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_SoundVolume() {
    return (void*)((uintptr_t)this + 0x128);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioVolume() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AudioDilationFactor() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_MovieSceneTracks::MovieSceneAudioSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x118);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_PitchMultiplier() {
    return (void*)((uintptr_t)this + 0x198);
}
bool _Script_MovieSceneTracks::MovieSceneAudioSection::get_bSuppressSubtitles() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::set_bSuppressSubtitles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneAudioSection::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x209 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneAudioSection::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x209 + 0);
    *(uint8_t*)((uintptr_t)this + 0x209 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnAudioFinished() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_Engine::SoundAttenuation*& _Script_MovieSceneTracks::MovieSceneAudioSection::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x210);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnQueueSubtitles() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_MovieSceneTracks::MovieSceneAudioSection::get_OnAudioPlaybackPercent() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneAudioSection");
    return result;
}
