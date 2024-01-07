#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraAnim.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneCameraAnimSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_AnimData() {
    return (void*)((uintptr_t)this + 0x110);
}
bool _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 1 != 0;
}
_Script_Engine::CameraAnim*& _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_CameraAnim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x130);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_PlayScale() {
    return *(float*)((uintptr_t)this + 0x13c);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSection::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x144);
}
void _Script_MovieSceneTracks::MovieSceneCameraAnimSection::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraAnimSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraAnimSection");
    return result;
}
