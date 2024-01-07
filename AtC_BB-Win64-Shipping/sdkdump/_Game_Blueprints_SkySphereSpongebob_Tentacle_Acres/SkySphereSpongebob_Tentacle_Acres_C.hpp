#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_SkySphereSpongebob_Tentacle_Acres {
#pragma pack(push, 1)
struct SkySphereSpongebob_Tentacle_Acres_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SkySphereSpongebob_Tentacle_Acres(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
