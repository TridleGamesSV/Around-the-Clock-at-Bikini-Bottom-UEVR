#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct PhysicalMaterialPropertyBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicalMaterial : public _Script_CoreUObject::Object {
    float& get_Friction();
    void* get_FrictionCombineMode();
    bool get_bOverrideFrictionCombineMode();
    void set_bOverrideFrictionCombineMode(bool value);
    float& get_Restitution();
    void* get_RestitutionCombineMode();
    bool get_bOverrideRestitutionCombineMode();
    void set_bOverrideRestitutionCombineMode(bool value);
    float& get_Density();
    float& get_RaiseMassToPower();
    float& get_DestructibleDamageThresholdScale();
    _Script_Engine::PhysicalMaterialPropertyBase*& get_PhysicalMaterialProperty();
    void* get_SurfaceType();
    float& get_TireFrictionScale();
    void* get_TireFrictionScales();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
