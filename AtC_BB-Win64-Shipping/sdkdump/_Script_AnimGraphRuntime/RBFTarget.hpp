#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RBFEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct RBFTarget : public RBFEntry {
    float& get_ScaleFactor();
    bool get_bApplyCustomCurve();
    void set_bApplyCustomCurve(bool value);
    void* get_CustomCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
