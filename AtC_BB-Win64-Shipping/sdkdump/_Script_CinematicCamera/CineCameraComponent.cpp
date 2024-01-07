#include "..\FUObjectArray.hpp"
#include "CineCameraComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
void* _Script_CinematicCamera::CineCameraComponent::get_LensPresets() {
    return (void*)((uintptr_t)this + 0x8b0);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentAperture() {
    return *(float*)((uintptr_t)this + 0x88c);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackSettings() {
    return (void*)((uintptr_t)this + 0x830);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FocusSettings() {
    return (void*)((uintptr_t)this + 0x850);
}
void* _Script_CinematicCamera::CineCameraComponent::get_LensSettings() {
    return (void*)((uintptr_t)this + 0x83c);
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFStop() {
    return *(float*)((uintptr_t)this + 0x8e4);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocalLength() {
    return *(float*)((uintptr_t)this + 0x888);
}
void* _Script_CinematicCamera::CineCameraComponent::get_FilmbackPresets() {
    return (void*)((uintptr_t)this + 0x8a0);
}
float& _Script_CinematicCamera::CineCameraComponent::get_CurrentFocusDistance() {
    return *(float*)((uintptr_t)this + 0x890);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultFilmbackPresetName() {
    return (void*)((uintptr_t)this + 0x8c0);
}
void* _Script_CinematicCamera::CineCameraComponent::get_DefaultLensPresetName() {
    return (void*)((uintptr_t)this + 0x8d0);
}
float& _Script_CinematicCamera::CineCameraComponent::get_DefaultLensFocalLength() {
    return *(float*)((uintptr_t)this + 0x8e0);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CineCameraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CineCameraComponent");
    return result;
}
void _Script_CinematicCamera::CineCameraComponent::SetLensPresetByName(void* InPresetName) {
    return;
}
void _Script_CinematicCamera::CineCameraComponent::SetFilmbackPresetByName(void* InPresetName) {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetVerticalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetLensPresetName() {
    return;
}
float _Script_CinematicCamera::CineCameraComponent::GetHorizontalFieldOfView() {
    return;
}
void* _Script_CinematicCamera::CineCameraComponent::GetFilmbackPresetName() {
    return;
}
