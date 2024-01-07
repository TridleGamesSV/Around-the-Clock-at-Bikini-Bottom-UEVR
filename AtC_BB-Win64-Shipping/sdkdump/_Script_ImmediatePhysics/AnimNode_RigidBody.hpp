#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ImmediatePhysics {
#pragma pack(push, 1)
struct AnimNode_RigidBody : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    _Script_Engine::PhysicsAsset*& get_OverridePhysicsAsset();
    void* get_OverrideWorldGravity();
    void* get_ExternalForce();
    void* get_OverlapChannel();
    bool get_bEnableWorldGeometry();
    void set_bEnableWorldGeometry(bool value);
    void* get_SimulationSpace();
    bool get_bOverrideWorldGravity();
    void set_bOverrideWorldGravity(bool value);
    float& get_CachedBoundsScale();
    bool get_bTransferBoneVelocities();
    void set_bTransferBoneVelocities(bool value);
    bool get_bFreezeIncomingPoseOnStart();
    void set_bFreezeIncomingPoseOnStart(bool value);
    bool get_bComponentSpaceSimulation();
    void set_bComponentSpaceSimulation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
