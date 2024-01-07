#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompositeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimMontage : public AnimCompositeBase {
    void* get_BlendIn();
    float& get_BlendInTime();
    void* get_BlendOut();
    float& get_BlendOutTime();
    float& get_BlendOutTriggerTime();
    void* get_SyncGroup();
    int32_t& get_SyncSlotIndex();
    void* get_MarkerData();
    void* get_CompositeSections();
    void* get_SlotAnimTracks();
    void* get_BranchingPoints();
    bool get_bEnableRootMotionTranslation();
    void set_bEnableRootMotionTranslation(bool value);
    bool get_bEnableRootMotionRotation();
    void set_bEnableRootMotionRotation(bool value);
    void* get_RootMotionRootLock();
    void* get_BranchingPointMarkers();
    void* get_BranchingPointStateNotifyIndices();
    void* get_TimeStretchCurve();
    void* get_TimeStretchCurveName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
