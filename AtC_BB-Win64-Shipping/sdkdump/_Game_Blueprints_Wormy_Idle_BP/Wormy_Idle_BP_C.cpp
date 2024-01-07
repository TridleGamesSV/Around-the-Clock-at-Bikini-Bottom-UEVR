#include "..\FUObjectArray.hpp"
#include "Wormy_Idle_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Wing_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
float& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Timeline_1_Walk_D1D2086D4EB89763AD434E820EAAD30D() {
    return *(float*)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Wing_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Flap() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Timeline_1__Direction_D1D2086D4EB89763AD434E820EAAD30D() {
    return (void*)((uintptr_t)this + 0x74c);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x750);
}
_Script_CoreUObject::Class* _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Wormy_Idle_BP.Wormy_Idle_BP_C");
    return result;
}
void _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Wormy_Idle_BP::Wormy_Idle_BP_C::ExecuteUbergraph_Wormy_Idle_BP(int32_t EntryPoint) {
    return;
}
