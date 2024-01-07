#include "..\FUObjectArray.hpp"
#include "Mr_Krabs_House_Restart_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
void* _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart::Mr_Krabs_House_Restart_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_Engine::SaveGame*& _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart::Mr_Krabs_House_Restart_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart::Mr_Krabs_House_Restart_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Maps/Mr_Krabs_House_Restart.Mr_Krabs_House_Restart_C");
    return result;
}
void _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart::Mr_Krabs_House_Restart_C::ExecuteUbergraph_Mr_Krabs_House_Restart(int32_t EntryPoint) {
    return;
}
void _Game_FirstPersonBP_Maps_Mr_Krabs_House_Restart::Mr_Krabs_House_Restart_C::ReceiveBeginPlay() {
    return;
}
