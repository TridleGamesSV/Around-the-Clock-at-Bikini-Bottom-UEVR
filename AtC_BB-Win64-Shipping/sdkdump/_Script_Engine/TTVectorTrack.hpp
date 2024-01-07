#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TTTrackBase.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TTVectorTrack : public TTTrackBase {
    _Script_Engine::CurveVector*& get_CurveVector();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
