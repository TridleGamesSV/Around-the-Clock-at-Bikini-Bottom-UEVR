#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSection : public MovieSceneSignedObject {
    void* get_EvalOptions();
    void* get_Easing();
    float& get_StartTime();
    float& get_EndTime();
    int32_t& get_RowIndex();
    int32_t& get_OverlapPriority();
    bool get_bIsActive();
    void set_bIsActive(bool value);
    bool get_bIsLocked();
    void set_bIsLocked(bool value);
    bool get_bIsInfinite();
    void set_bIsInfinite(bool value);
    float& get_PrerollTime();
    float& get_PostrollTime();
    void* get_BlendType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
