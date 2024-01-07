#include "..\FUObjectArray.hpp"
#include "Dirty_Bubble_Center_2_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
int32_t& _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_CoreUObject::Class* _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Dirty_Bubble_Center_2_BP.Dirty_Bubble_Center_2_BP_C");
    return result;
}
_Script_Engine::SaveGame*& _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x740);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x730);
}
void _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Dirty_Bubble_Center_2_BP::Dirty_Bubble_Center_2_BP_C::ExecuteUbergraph_Dirty_Bubble_Center_2_BP(int32_t EntryPoint) {
    return;
}
