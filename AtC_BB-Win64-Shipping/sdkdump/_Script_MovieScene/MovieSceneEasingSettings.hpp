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
struct MovieSceneEasingSettings {
    float& get_AutoEaseInTime();
    float& get_AutoEaseOutTime();
    void* get_EaseIn();
    bool get_bManualEaseIn();
    void set_bManualEaseIn(bool value);
    float& get_ManualEaseInTime();
    void* get_EaseOut();
    bool get_bManualEaseOut();
    void set_bManualEaseOut(bool value);
    float& get_ManualEaseOutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
