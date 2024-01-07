#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneBoolPropertySectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneVisibilitySectionTemplate : public MovieSceneBoolPropertySectionTemplate {
    bool get_bTemporarilyHiddenInGame();
    void set_bTemporarilyHiddenInGame(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
