#include "..\FUObjectArray.hpp"
#include "Doodle_Patrick_Boss_Phase_End_Thanos_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Doodle_Patrick_Boss_Phase_End_Thanos_BP.Doodle_Patrick_Boss_Phase_End_Thanos_BP_C");
    return result;
}
void* _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
void _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::UserConstructionScript() {
    return;
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x728);
}
int32_t& _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x730);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x74c);
}
_Script_Engine::Actor*& _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x740);
}
float& _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Doodle_Patrick_Boss_Phase_End_Thanos_BP::Doodle_Patrick_Boss_Phase_End_Thanos_BP_C::ExecuteUbergraph_Doodle_Patrick_Boss_Phase_End_Thanos_BP(int32_t EntryPoint) {
    return;
}
