#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneBinding {
    void* get_ObjectGuid();
    void* get_BindingName();
    void* get_Tracks();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
