#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_ModifyCurve : public _Script_Engine::AnimNode_Base {
    void* get_SourcePose();
    void* get_ApplyMode();
    void* get_CurveValues();
    void* get_CurveNames();
    float& get_Alpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
