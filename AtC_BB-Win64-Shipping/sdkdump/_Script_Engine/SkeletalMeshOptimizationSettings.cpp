#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "SkeletalMeshOptimizationSettings.hpp"
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NormalsThreshold() {
    return *(float*)((uintptr_t)this + 0x14);
}
void _Script_Engine::SkeletalMeshOptimizationSettings::set_bRecalcNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_BaseLOD() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ReductionMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_NumOfTrianglesPercentage() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_WeldingThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxDeviationPercentage() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SilhouetteImportance() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::SkeletalMeshOptimizationSettings::get_bRecalcNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_TextureImportance() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_ShadingImportance() {
    return (void*)((uintptr_t)this + 0x1a);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_SkinningImportance() {
    return (void*)((uintptr_t)this + 0x1b);
}
float& _Script_Engine::SkeletalMeshOptimizationSettings::get_BoneReductionRatio() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::SkeletalMeshOptimizationSettings::get_MaxBonesPerVertex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SkeletalMeshOptimizationSettings::get_BonesToRemove() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Engine::AnimSequence*& _Script_Engine::SkeletalMeshOptimizationSettings::get_BakePose() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshOptimizationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshOptimizationSettings");
    return result;
}
