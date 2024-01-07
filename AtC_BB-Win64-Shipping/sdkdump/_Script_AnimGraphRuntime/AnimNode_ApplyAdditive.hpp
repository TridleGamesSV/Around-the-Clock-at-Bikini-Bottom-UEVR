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
struct AnimNode_ApplyAdditive : public _Script_Engine::AnimNode_Base {
    void* get_Base();
    void* get_Additive();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    int32_t& get_LODThreshold();
    float& get_ActualAlpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
