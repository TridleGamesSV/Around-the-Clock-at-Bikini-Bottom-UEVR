#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieScenePropertyTrack.hpp"
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneByteTrack : public MovieScenePropertyTrack {
    _Script_CoreUObject::Enum*& get_Enum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
