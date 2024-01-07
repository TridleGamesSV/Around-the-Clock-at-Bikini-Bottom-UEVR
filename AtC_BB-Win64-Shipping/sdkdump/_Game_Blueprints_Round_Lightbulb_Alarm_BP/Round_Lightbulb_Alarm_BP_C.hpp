#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Round_Lightbulb_Alarm_BP {
#pragma pack(push, 1)
struct Round_Lightbulb_Alarm_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::SpotLightComponent*& get_SpotLight1();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::AudioComponent*& get_Alarm();
    _Script_Engine::PointLightComponent*& get_PointLight();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Round_Lightbulb_Alarm_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
