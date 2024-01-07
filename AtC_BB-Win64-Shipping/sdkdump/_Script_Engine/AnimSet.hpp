#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSet : public _Script_CoreUObject::Object {
    bool get_bAnimRotationOnly();
    void set_bAnimRotationOnly(bool value);
    void* get_TrackBoneNames();
    void* get_LinkupCache();
    void* get_BoneUseAnimTranslation();
    void* get_ForceUseMeshTranslation();
    void* get_UseTranslationBoneNames();
    void* get_ForceMeshTranslationBoneNames();
    void* get_PreviewSkelMeshName();
    void* get_BestRatioSkelMeshName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
