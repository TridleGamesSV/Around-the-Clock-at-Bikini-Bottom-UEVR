#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LevelStreaming.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreamingKismet : public LevelStreaming {
    bool get_bInitiallyLoaded();
    void set_bInitiallyLoaded(bool value);
    bool get_bInitiallyVisible();
    void set_bInitiallyVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::LevelStreamingKismet* LoadLevelInstanceBySoftObjectPtr(_Script_CoreUObject::Object* WorldContextObject, void* Level, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess);
    _Script_Engine::LevelStreamingKismet* LoadLevelInstance(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess);
}; // Size: 0x28
#pragma pack(pop)
}
