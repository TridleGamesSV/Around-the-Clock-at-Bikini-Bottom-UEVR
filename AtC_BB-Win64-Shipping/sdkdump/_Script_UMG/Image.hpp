#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2DDynamic;
}
namespace _Script_Engine {
struct SlateBrushAsset;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Image : public Widget {
    void* get_Brush();
    void* get_BrushDelegate();
    void* get_ColorAndOpacity();
    void* get_ColorAndOpacityDelegate();
    void* get_OnMouseButtonDownEvent();
    static _Script_CoreUObject::Class* static_class();
    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity);
    void SetBrushFromTextureDynamic(_Script_Engine::Texture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(_Script_Engine::Texture2D* Texture, bool bMatchSize);
    void SetBrushFromMaterial(_Script_Engine::MaterialInterface* Material);
    void SetBrushFromAsset(_Script_Engine::SlateBrushAsset* Asset);
    void SetBrush(_Script_SlateCore::SlateBrush& InBrush);
    _Script_Engine::MaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x28
#pragma pack(pop)
}
