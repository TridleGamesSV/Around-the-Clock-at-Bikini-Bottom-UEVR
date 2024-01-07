#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DTransformTemplateData {
    void* get_TranslationCurve();
    void* get_RotationCurve();
    void* get_ScaleCurve();
    void* get_ManualWeight();
    void* get_BlendType();
    void* get_Mask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
