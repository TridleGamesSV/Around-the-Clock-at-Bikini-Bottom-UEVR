#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsSettings : public DeveloperSettings {
    float& get_DefaultGravityZ();
    float& get_DefaultTerminalVelocity();
    float& get_DefaultFluidFriction();
    int32_t& get_SimulateScratchMemorySize();
    int32_t& get_RagdollAggregateThreshold();
    float& get_TriangleMeshTriangleMinAreaThreshold();
    bool get_bEnableAsyncScene();
    void set_bEnableAsyncScene(bool value);
    bool get_bEnableShapeSharing();
    void set_bEnableShapeSharing(bool value);
    bool get_bEnablePCM();
    void set_bEnablePCM(bool value);
    bool get_bEnableStabilization();
    void set_bEnableStabilization(bool value);
    bool get_bWarnMissingLocks();
    void set_bWarnMissingLocks(bool value);
    bool get_bEnable2DPhysics();
    void set_bEnable2DPhysics(bool value);
    void* get_LockedAxis();
    void* get_DefaultDegreesOfFreedom();
    float& get_BounceThresholdVelocity();
    void* get_FrictionCombineMode();
    void* get_RestitutionCombineMode();
    float& get_MaxAngularVelocity();
    float& get_MaxDepenetrationVelocity();
    float& get_ContactOffsetMultiplier();
    float& get_MinContactOffset();
    float& get_MaxContactOffset();
    bool get_bSimulateSkeletalMeshOnDedicatedServer();
    void set_bSimulateSkeletalMeshOnDedicatedServer(bool value);
    void* get_DefaultShapeComplexity();
    bool get_bDefaultHasComplexCollision();
    void set_bDefaultHasComplexCollision(bool value);
    bool get_bSuppressFaceRemapTable();
    void set_bSuppressFaceRemapTable(bool value);
    bool get_bSupportUVFromHitResults();
    void set_bSupportUVFromHitResults(bool value);
    bool get_bDisableActiveActors();
    void set_bDisableActiveActors(bool value);
    bool get_bDisableCCD();
    void set_bDisableCCD(bool value);
    bool get_bEnableEnhancedDeterminism();
    void set_bEnableEnhancedDeterminism(bool value);
    float& get_MaxPhysicsDeltaTime();
    bool get_bSubstepping();
    void set_bSubstepping(bool value);
    bool get_bSubsteppingAsync();
    void set_bSubsteppingAsync(bool value);
    float& get_MaxSubstepDeltaTime();
    int32_t& get_MaxSubsteps();
    float& get_SyncSceneSmoothingFactor();
    float& get_AsyncSceneSmoothingFactor();
    float& get_InitialAverageFrameRate();
    int32_t& get_PhysXTreeRebuildRate();
    void* get_PhysicalSurfaces();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
