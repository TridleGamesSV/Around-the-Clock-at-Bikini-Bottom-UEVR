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
struct SkeletalMeshOptimizationSettings {
    void* get_ReductionMethod();
    float& get_NumOfTrianglesPercentage();
    float& get_MaxDeviationPercentage();
    float& get_WeldingThreshold();
    bool get_bRecalcNormals();
    void set_bRecalcNormals(bool value);
    float& get_NormalsThreshold();
    void* get_SilhouetteImportance();
    void* get_TextureImportance();
    void* get_ShadingImportance();
    void* get_SkinningImportance();
    float& get_BoneReductionRatio();
    int32_t& get_MaxBonesPerVertex();
    void* get_BonesToRemove();
    int32_t& get_BaseLOD();
    _Script_Engine::AnimSequence*& get_BakePose();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
