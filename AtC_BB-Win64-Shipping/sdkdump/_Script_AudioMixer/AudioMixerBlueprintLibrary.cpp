#include "..\FUObjectArray.hpp"
#include "AudioMixerBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SoundEffectSourcePresetChain.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
_Script_CoreUObject::Class* _Script_AudioMixer::AudioMixerBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.AudioMixerBlueprintLibrary");
    return result;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
int32_t _Script_AudioMixer::AudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
