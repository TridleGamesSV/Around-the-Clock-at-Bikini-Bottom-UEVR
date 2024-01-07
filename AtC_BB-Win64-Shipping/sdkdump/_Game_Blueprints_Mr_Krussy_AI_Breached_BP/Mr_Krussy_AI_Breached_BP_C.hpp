#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Mr_Krussy_AI_Breached_BP {
#pragma pack(push, 1)
struct Mr_Krussy_AI_Breached_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Krussy_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_E2F96C774C8F7F0452D1C89C0DEBE372(void* MovementResult);
    void OnSuccess_E2F96C774C8F7F0452D1C89C0DEBE372(void* MovementResult);
    void OnFail_9E26B79B4FABD3622C2C878CBB2C1562(void* MovementResult);
    void OnSuccess_9E26B79B4FABD3622C2C878CBB2C1562(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Mr_Krussy_AI_Breached_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
