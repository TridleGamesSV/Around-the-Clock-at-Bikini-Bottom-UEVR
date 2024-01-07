#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Material;
}
namespace _Script_Engine {
struct MaterialFunction;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpression : public _Script_CoreUObject::Object {
    _Script_Engine::Material*& get_Material();
    _Script_Engine::MaterialFunction*& get_Function();
    void* get_Desc();
    bool get_bRealtimePreview();
    void set_bRealtimePreview(bool value);
    bool get_bNeedToUpdatePreview();
    void set_bNeedToUpdatePreview(bool value);
    bool get_bIsParameterExpression();
    void set_bIsParameterExpression(bool value);
    bool get_bCommentBubbleVisible();
    void set_bCommentBubbleVisible(bool value);
    bool get_bShowOutputNameOnPin();
    void set_bShowOutputNameOnPin(bool value);
    bool get_bShowMaskColorsOnPin();
    void set_bShowMaskColorsOnPin(bool value);
    bool get_bHidePreviewWindow();
    void set_bHidePreviewWindow(bool value);
    bool get_bCollapsed();
    void set_bCollapsed(bool value);
    bool get_bShaderInputData();
    void set_bShaderInputData(bool value);
    bool get_bShowInputs();
    void set_bShowInputs(bool value);
    bool get_bShowOutputs();
    void set_bShowOutputs(bool value);
    void* get_Outputs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
