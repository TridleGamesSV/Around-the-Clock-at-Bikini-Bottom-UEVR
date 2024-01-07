#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PointLightComponent : public LightComponent {
    void* get_IntensityUnits();
    float& get_Radius();
    float& get_AttenuationRadius();
    bool get_bUseInverseSquaredFalloff();
    void set_bUseInverseSquaredFalloff(bool value);
    float& get_LightFalloffExponent();
    float& get_SourceRadius();
    float& get_SoftSourceRadius();
    float& get_SourceLength();
    void* get_LightmassSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetSoftSourceRadius(float bNewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    void SetAttenuationRadius(float NewRadius);
    float GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle);
}; // Size: 0x28
#pragma pack(pop)
}
