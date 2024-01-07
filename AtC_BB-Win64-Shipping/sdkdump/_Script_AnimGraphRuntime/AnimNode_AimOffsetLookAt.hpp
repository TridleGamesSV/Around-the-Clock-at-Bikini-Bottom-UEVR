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
struct AnimNode_AimOffsetLookAt : public AnimNode_BlendSpacePlayer {
    void* get_BasePose();
    int32_t& get_LODThreshold();
    bool get_bIsLODEnabled();
    void set_bIsLODEnabled(bool value);
    void* get_LookAtLocation();
    void* get_SourceSocketName();
    void* get_PivotSocketName();
    void* get_SocketAxis();
    float& get_Alpha();
    void* get_SocketBoneReference();
    void* get_SocketLocalTransform();
    void* get_PivotSocketBoneReference();
    void* get_PivotSocketLocalTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
