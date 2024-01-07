#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneCapture2D.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_SceneCapture2D_Krussy_BP_4 {
#pragma pack(push, 1)
struct SceneCapture2D_Krussy_BP_4_C : public _Script_Engine::SceneCapture2D {
    void* get_UberGraphFrame();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SceneCapture2D_Krussy_BP_4(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
