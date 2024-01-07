#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CineCameraComponent : public _Script_Engine::CameraComponent {
    void* get_FilmbackSettings();
    void* get_LensSettings();
    void* get_FocusSettings();
    float& get_CurrentFocalLength();
    float& get_CurrentAperture();
    float& get_CurrentFocusDistance();
    void* get_FilmbackPresets();
    void* get_LensPresets();
    void* get_DefaultFilmbackPresetName();
    void* get_DefaultLensPresetName();
    float& get_DefaultLensFocalLength();
    float& get_DefaultLensFStop();
    static _Script_CoreUObject::Class* static_class();
    void SetLensPresetByName(void* InPresetName);
    void SetFilmbackPresetByName(void* InPresetName);
    float GetVerticalFieldOfView();
    void* GetLensPresetName();
    float GetHorizontalFieldOfView();
    void* GetFilmbackPresetName();
}; // Size: 0x28
#pragma pack(pop)
}
