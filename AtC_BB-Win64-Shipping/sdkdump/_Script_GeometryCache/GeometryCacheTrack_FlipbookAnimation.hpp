#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GeometryCacheTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GeometryCache {
struct GeometryCacheMeshData;
}
namespace _Script_GeometryCache {
#pragma pack(push, 1)
struct GeometryCacheTrack_FlipbookAnimation : public GeometryCacheTrack {
    void* get_NumMeshSamples();
    static _Script_CoreUObject::Class* static_class();
    void AddMeshSample(_Script_GeometryCache::GeometryCacheMeshData& MeshData, float SampleTime);
}; // Size: 0x28
#pragma pack(pop)
}
