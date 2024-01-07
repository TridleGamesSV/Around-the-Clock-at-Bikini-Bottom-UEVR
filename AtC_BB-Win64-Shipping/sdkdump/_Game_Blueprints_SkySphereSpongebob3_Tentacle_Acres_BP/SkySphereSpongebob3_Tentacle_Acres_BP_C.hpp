#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_SkySphereSpongebob3_Tentacle_Acres_BP {
#pragma pack(push, 1)
struct SkySphereSpongebob3_Tentacle_Acres_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SkySphereSpongebob3_Tentacle_Acres_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
