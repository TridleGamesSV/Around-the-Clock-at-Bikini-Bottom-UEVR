#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_BlendSpacePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RotationOffsetBlendSpace : public AnimNode_BlendSpacePlayer {
    void* get_BasePose();
    int32_t& get_LODThreshold();
    bool get_bIsLODEnabled();
    void set_bIsLODEnabled(bool value);
    float& get_Alpha();
    void* get_AlphaScaleBias();
    float& get_ActualAlpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
