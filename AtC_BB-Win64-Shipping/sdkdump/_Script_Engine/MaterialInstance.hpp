#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialInterface.hpp"
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInstance : public MaterialInterface {
    _Script_Engine::PhysicalMaterial*& get_PhysMaterial();
    _Script_Engine::MaterialInterface*& get_Parent();
    bool get_bHasStaticPermutationResource();
    void set_bHasStaticPermutationResource(bool value);
    bool get_bOverrideSubsurfaceProfile();
    void set_bOverrideSubsurfaceProfile(bool value);
    void* get_ScalarParameterValues();
    void* get_VectorParameterValues();
    void* get_TextureParameterValues();
    void* get_FontParameterValues();
    bool get_bOverrideBaseProperties();
    void set_bOverrideBaseProperties(bool value);
    void* get_BasePropertyOverrides();
    void* get_PermutationTextureReferences();
    void* get_StaticParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
