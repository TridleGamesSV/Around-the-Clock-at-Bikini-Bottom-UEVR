#include "..\FUObjectArray.hpp"
#include "Patrick_Die_Surveillance_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_Patrick() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
void _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::UserConstructionScript() {
    return;
}
float& _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_Timeline_0_Walk_29E0F1C84BA2310339F6B0AE2676034B() {
    return *(float*)((uintptr_t)this + 0x730);
}
_Script_CoreUObject::Class* _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Patrick_Die_Surveillance.Patrick_Die_Surveillance_C");
    return result;
}
void* _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_Timeline_0__Direction_29E0F1C84BA2310339F6B0AE2676034B() {
    return (void*)((uintptr_t)this + 0x734);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Patrick_Die_Surveillance::Patrick_Die_Surveillance_C::ExecuteUbergraph_Patrick_Die_Surveillance(int32_t EntryPoint) {
    return;
}
