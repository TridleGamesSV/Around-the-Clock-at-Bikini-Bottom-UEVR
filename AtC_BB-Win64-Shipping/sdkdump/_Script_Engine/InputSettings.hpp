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
struct InputAxisKeyMapping;
}
namespace _Script_Engine {
struct InputActionKeyMapping;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InputSettings : public _Script_CoreUObject::Object {
    void* get_AxisConfig();
    bool get_bAltEnterTogglesFullscreen();
    void set_bAltEnterTogglesFullscreen(bool value);
    bool get_bF11TogglesFullscreen();
    void set_bF11TogglesFullscreen(bool value);
    bool get_bUseMouseForTouch();
    void set_bUseMouseForTouch(bool value);
    bool get_bEnableMouseSmoothing();
    void set_bEnableMouseSmoothing(bool value);
    bool get_bEnableFOVScaling();
    void set_bEnableFOVScaling(bool value);
    float& get_FOVScale();
    float& get_DoubleClickTime();
    bool get_bCaptureMouseOnLaunch();
    void set_bCaptureMouseOnLaunch(bool value);
    void* get_DefaultViewportMouseCaptureMode();
    bool get_bDefaultViewportMouseLock();
    void set_bDefaultViewportMouseLock(bool value);
    void* get_DefaultViewportMouseLockMode();
    void* get_ActionMappings();
    void* get_AxisMappings();
    bool get_bAlwaysShowTouchInterface();
    void set_bAlwaysShowTouchInterface(bool value);
    bool get_bShowConsoleOnFourFingerTap();
    void set_bShowConsoleOnFourFingerTap(bool value);
    void* get_DefaultTouchInterface();
    void* get_ConsoleKey();
    void* get_ConsoleKeys();
    static _Script_CoreUObject::Class* static_class();
    void SaveKeyMappings();
    void RemoveAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void RemoveActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    _Script_Engine::InputSettings* GetInputSettings();
    void GetAxisNames(void*& AxisNames);
    void GetAxisMappingByName(void* InAxisName, void*& OutMappings);
    void GetActionNames(void*& ActionNames);
    void GetActionMappingByName(void* InActionName, void*& OutMappings);
    void ForceRebuildKeymaps();
    void AddAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void AddActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
}; // Size: 0x28
#pragma pack(pop)
}
