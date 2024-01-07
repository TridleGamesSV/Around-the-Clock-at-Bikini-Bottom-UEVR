#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieSceneMaterialTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MovieSceneWidgetMaterialTrack : public _Script_MovieSceneTracks::MovieSceneMaterialTrack {
    void* get_BrushPropertyNamePath();
    void* get_TrackName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
