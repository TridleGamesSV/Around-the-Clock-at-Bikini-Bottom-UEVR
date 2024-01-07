#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequencePlayerSnapshot {
    void* get_MasterName();
    float& get_MasterTime();
    void* get_CurrentShotName();
    float& get_CurrentShotLocalTime();
    _Script_Engine::CameraComponent*& get_CameraComponent();
    void* get_Settings();
    void* get_ShotID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
