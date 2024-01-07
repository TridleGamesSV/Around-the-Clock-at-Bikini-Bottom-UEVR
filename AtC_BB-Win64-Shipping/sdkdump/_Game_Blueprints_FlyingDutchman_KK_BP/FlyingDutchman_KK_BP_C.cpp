#include "..\FUObjectArray.hpp"
#include "FlyingDutchman_KK_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Attack() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x728);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
float& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Timeline_0_Walk_C544A1A24DBA8C3B456D22981B3D8BD2() {
    return *(float*)((uintptr_t)this + 0x758);
}
void* _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Timeline_0__Direction_C544A1A24DBA8C3B456D22981B3D8BD2() {
    return (void*)((uintptr_t)this + 0x75c);
}
_Script_CoreUObject::Class* _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/FlyingDutchman_KK_BP.FlyingDutchman_KK_BP_C");
    return result;
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x760);
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_FlyingDutchman_KK_BP::FlyingDutchman_KK_BP_C::ExecuteUbergraph_FlyingDutchman_KK_BP(int32_t EntryPoint) {
    return;
}
