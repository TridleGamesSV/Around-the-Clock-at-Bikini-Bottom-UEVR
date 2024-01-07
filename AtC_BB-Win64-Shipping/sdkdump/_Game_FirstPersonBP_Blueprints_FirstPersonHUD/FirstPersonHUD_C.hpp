#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\HUD.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_FirstPersonBP_Blueprints_FirstPersonHUD {
#pragma pack(push, 1)
struct FirstPersonHUD_C : public _Script_Engine::HUD {
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_HMDEnabled_();
    void set_HMDEnabled_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveDrawHUD0(int32_t SizeX, int32_t SizeY);
    void ExecuteUbergraph_FirstPersonHUD(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
