#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HierarchicalSimplification {
    float& get_TransitionScreenSize();
    bool get_bSimplifyMesh();
    void set_bSimplifyMesh(bool value);
    void* get_ProxySetting();
    void* get_MergeSetting();
    float& get_DesiredBoundRadius();
    float& get_DesiredFillingPercentage();
    int32_t& get_MinNumberOfActorsToBuild();
    bool get_bOnlyGenerateClustersForVolumes();
    void set_bOnlyGenerateClustersForVolumes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
