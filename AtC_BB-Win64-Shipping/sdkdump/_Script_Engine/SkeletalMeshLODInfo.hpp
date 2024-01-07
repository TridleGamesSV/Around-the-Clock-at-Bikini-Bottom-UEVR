#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshLODInfo {
    float& get_ScreenSize();
    float& get_LODHysteresis();
    void* get_LODMaterialMap();
    void* get_bEnableShadowCasting();
    bool get_bHasBeenSimplified();
    void set_bHasBeenSimplified(bool value);
    void* get_ReductionSettings();
    void* get_RemovedBones();
    void* get_BonesToRemove();
    _Script_Engine::AnimSequence*& get_BakePose();
    void* get_SourceImportFilename();
    bool get_bHasPerLODVertexColors();
    void set_bHasPerLODVertexColors(bool value);
    bool get_bAllowCPUAccess();
    void set_bAllowCPUAccess(bool value);
    bool get_bSupportUniformlyDistributedSampling();
    void set_bSupportUniformlyDistributedSampling(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
