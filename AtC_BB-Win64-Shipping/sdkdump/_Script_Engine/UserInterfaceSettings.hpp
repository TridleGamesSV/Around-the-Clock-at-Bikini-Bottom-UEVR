#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_Engine {
struct DPICustomScalingRule;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct UserInterfaceSettings : public DeveloperSettings {
    void* get_RenderFocusRule();
    void* get_HardwareCursors();
    void* get_SoftwareCursors();
    void* get_DefaultCursor();
    void* get_TextEditBeamCursor();
    void* get_CrosshairsCursor();
    void* get_HandCursor();
    void* get_GrabHandCursor();
    void* get_GrabHandClosedCursor();
    void* get_SlashedCircleCursor();
    float& get_ApplicationScale();
    void* get_UIScaleRule();
    void* get_CustomScalingRuleClass();
    void* get_UIScaleCurve();
    bool get_bLoadWidgetsOnDedicatedServer();
    void set_bLoadWidgetsOnDedicatedServer(bool value);
    void* get_CursorClasses();
    void* get_CustomScalingRuleClassInstance();
    _Script_Engine::DPICustomScalingRule*& get_CustomScalingRule();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
