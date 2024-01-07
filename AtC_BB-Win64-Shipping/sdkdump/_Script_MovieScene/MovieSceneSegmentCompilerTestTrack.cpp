#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSegmentCompilerTestTrack.hpp"
#include "MovieSceneTrack.hpp"
bool _Script_MovieScene::MovieSceneSegmentCompilerTestTrack::get_bHighPassFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSegmentCompilerTestTrack::get_SectionArray() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_MovieScene::MovieSceneSegmentCompilerTestTrack::set_bHighPassFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSegmentCompilerTestTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSegmentCompilerTestTrack");
    return result;
}
