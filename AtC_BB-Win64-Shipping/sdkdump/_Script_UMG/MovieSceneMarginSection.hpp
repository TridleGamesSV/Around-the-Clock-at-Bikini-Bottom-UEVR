#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MovieSceneMarginSection : public _Script_MovieScene::MovieSceneSection {
    void* get_TopCurve();
    void* get_LeftCurve();
    void* get_RightCurve();
    void* get_BottomCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
