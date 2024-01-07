#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene.hpp"
#include "MovieSceneSignedObject.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieScene::get_Spawnables() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_MovieScene::MovieScene::get_Possessables() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_MovieScene::MovieSceneTrack*& _Script_MovieScene::MovieScene::get_CameraCutTrack() {
    return *(_Script_MovieScene::MovieSceneTrack**)((uintptr_t)this + 0xf0);
}
void* _Script_MovieScene::MovieScene::get_ObjectBindings() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_MovieScene::MovieScene::get_bForceFixedFrameIntervalPlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieScene::get_MasterTracks() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieScene::MovieScene::get_SelectionRange() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_MovieScene::MovieScene::get_InTime() {
    return *(float*)((uintptr_t)this + 0x120);
}
void* _Script_MovieScene::MovieScene::get_PlaybackRange() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_MovieScene::MovieScene::set_bForceFixedFrameIntervalPlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MovieScene::MovieScene::get_FixedFrameInterval() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_MovieScene::MovieScene::get_OutTime() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_MovieScene::MovieScene::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x128);
}
float& _Script_MovieScene::MovieScene::get_EndTime() {
    return *(float*)((uintptr_t)this + 0x12c);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScene::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieScene");
    return result;
}
