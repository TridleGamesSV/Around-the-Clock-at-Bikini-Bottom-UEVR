#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
#include "..\_Script_MediaAssets\MediaSource.hpp"
#include "..\_Script_MediaAssets\MediaTexture.hpp"
#include "MovieSceneMediaSection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
void* _Script_MediaCompositing::MovieSceneMediaSection::get_Proxy() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_MediaAssets::MediaSoundComponent*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaSoundComponent() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0x120);
}
_Script_MediaAssets::MediaTexture*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaTexture() {
    return *(_Script_MediaAssets::MediaTexture**)((uintptr_t)this + 0x128);
}
_Script_MediaAssets::MediaSource*& _Script_MediaCompositing::MovieSceneMediaSection::get_MediaSource() {
    return *(_Script_MediaAssets::MediaSource**)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MovieSceneMediaSection");
    return result;
}
