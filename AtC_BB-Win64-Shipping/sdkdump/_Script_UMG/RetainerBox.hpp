#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RetainerBox : public ContentWidget {
    bool get_RenderOnInvalidation();
    void set_RenderOnInvalidation(bool value);
    bool get_RenderOnPhase();
    void set_RenderOnPhase(bool value);
    int32_t& get_Phase();
    int32_t& get_PhaseCount();
    _Script_Engine::MaterialInterface*& get_EffectMaterial();
    void* get_TextureParameter();
    static _Script_CoreUObject::Class* static_class();
    void SetTextureParameter(void* TextureParameter);
    void SetEffectMaterial(_Script_Engine::MaterialInterface* EffectMaterial);
    void RequestRender();
    _Script_Engine::MaterialInstanceDynamic* GetEffectMaterial();
}; // Size: 0x28
#pragma pack(pop)
}
