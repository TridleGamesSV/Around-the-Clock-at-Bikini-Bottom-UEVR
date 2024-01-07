#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSubSequenceData {
    void* get_Sequence();
    void* get_RootToSequenceTransform();
    void* get_DeterministicSequenceID();
    void* get_PlayRange();
    void* get_PreRollRange();
    void* get_PostRollRange();
    int32_t& get_HierarchicalBias();
    void* get_InstanceData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
