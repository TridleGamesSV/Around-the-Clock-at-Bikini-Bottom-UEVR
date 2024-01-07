#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MediaPlaneParameters {
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_TextureParameterName();
    bool get_bFillScreen();
    void set_bFillScreen(bool value);
    void* get_FillScreenAmount();
    void* get_FixedSize();
    _Script_Engine::Texture*& get_RenderTexture();
    _Script_Engine::MaterialInstanceDynamic*& get_DynamicMaterial();
    _Script_Engine::Texture*& get_MediaTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
