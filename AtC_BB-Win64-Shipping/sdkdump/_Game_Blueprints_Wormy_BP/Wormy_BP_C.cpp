#include "..\FUObjectArray.hpp"
#include "Wormy_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Wing_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Wing_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Flap() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
float& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Timeline_1_Walk_4D3AC16E4994CA3995FDFDBB110B0F8C() {
    return *(float*)((uintptr_t)this + 0x750);
}
void* _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Timeline_1__Direction_4D3AC16E4994CA3995FDFDBB110B0F8C() {
    return (void*)((uintptr_t)this + 0x754);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Wormy_BP::Wormy_BP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x758);
}
_Script_CoreUObject::Class* _Game_Blueprints_Wormy_BP::Wormy_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Wormy_BP.Wormy_BP_C");
    return result;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Wormy_BP::Wormy_BP_C::ExecuteUbergraph_Wormy_BP(int32_t EntryPoint) {
    return;
}
