#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneSignedObject.hpp"
bool _Script_MovieScene::MovieSceneSection::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
float& _Script_MovieScene::MovieSceneSection::get_EndTime() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void* _Script_MovieScene::MovieSceneSection::get_EvalOptions() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_MovieScene::MovieSceneSection::get_Easing() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_MovieScene::MovieSceneSection::get_StartTime() {
    return *(float*)((uintptr_t)this + 0xf0);
}
int32_t& _Script_MovieScene::MovieSceneSection::get_RowIndex() {
    return *(int32_t*)((uintptr_t)this + 0xf8);
}
int32_t& _Script_MovieScene::MovieSceneSection::get_OverlapPriority() {
    return *(int32_t*)((uintptr_t)this + 0xfc);
}
void _Script_MovieScene::MovieSceneSection::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSection::get_bIsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 2 != 0;
}
float& _Script_MovieScene::MovieSceneSection::get_PrerollTime() {
    return *(float*)((uintptr_t)this + 0x104);
}
void _Script_MovieScene::MovieSceneSection::set_bIsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneSection::get_bIsInfinite() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 4 != 0;
}
void _Script_MovieScene::MovieSceneSection::set_bIsInfinite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_MovieScene::MovieSceneSection::get_PostrollTime() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_MovieScene::MovieSceneSection::get_BlendType() {
    return (void*)((uintptr_t)this + 0x10c);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSection");
    return result;
}
