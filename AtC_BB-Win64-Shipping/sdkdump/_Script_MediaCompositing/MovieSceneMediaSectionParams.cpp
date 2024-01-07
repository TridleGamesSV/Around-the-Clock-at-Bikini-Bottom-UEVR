#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_MediaAssets\MediaTexture.hpp"
#include "MovieSceneMediaSectionParams.hpp"
_Script_MediaAssets::MediaSoundComponent*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaSoundComponent() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0x0);
}
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x8);
}
float& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_SectionStartTime() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_MediaAssets::MediaTexture*& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_MediaTexture() {
    return *(_Script_MediaAssets::MediaTexture**)((uintptr_t)this + 0x10);
}
void* _Script_MediaCompositing::MovieSceneMediaSectionParams::get_Proxy() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_MediaCompositing::MovieSceneMediaSectionParams::get_SectionEndTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaSectionParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaCompositing.MovieSceneMediaSectionParams");
    return result;
}
