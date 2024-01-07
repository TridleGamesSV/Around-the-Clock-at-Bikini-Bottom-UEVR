#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart {
#pragma pack(push, 1)
struct Mr_Krabs_House_Restart_C : public _Script_Engine::LevelScriptActor {
    void* get_UberGraphFrame();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Mr_Krabs_House_Restart(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
