#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DecalComponent : public SceneComponent {
    _Script_Engine::MaterialInterface*& get_DecalMaterial();
    int32_t& get_SortOrder();
    float& get_FadeScreenSize();
    float& get_FadeStartDelay();
    float& get_FadeDuration();
    bool get_bDestroyOwnerAfterFade();
    void set_bDestroyOwnerAfterFade(bool value);
    void* get_DecalSize();
    static _Script_CoreUObject::Class* static_class();
    void SetSortOrder(int32_t Value);
    void SetFadeScreenSize(float NewFadeScreenSize);
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    void SetDecalMaterial(_Script_Engine::MaterialInterface* NewDecalMaterial);
    float GetFadeStartDelay();
    float GetFadeDuration();
    _Script_Engine::MaterialInterface* GetDecalMaterial();
    _Script_Engine::MaterialInstanceDynamic* CreateDynamicMaterialInstance();
}; // Size: 0x28
#pragma pack(pop)
}
