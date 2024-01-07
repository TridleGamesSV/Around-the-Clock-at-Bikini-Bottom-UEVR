#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuationSettings.hpp"
#include "MediaPlayer.hpp"
#include "MediaSoundComponent.hpp"
void* _Script_MediaAssets::MediaSoundComponent::get_Channels() {
    return (void*)((uintptr_t)this + 0x6b0);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaSoundComponent::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x6b8);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaSoundComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaSoundComponent");
    return result;
}
void _Script_MediaAssets::MediaSoundComponent::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaSoundComponent::GetMediaPlayer() {
    return;
}
bool _Script_MediaAssets::MediaSoundComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings) {
    return;
}
