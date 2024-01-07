#include "..\FUObjectArray.hpp"
#include "Sandy_Chase_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Taunt() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
void* _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Footsteps() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x758);
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Sandy_Roar() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Attack() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x748);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x760);
}
float& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Timeline_1_Walk_FD1E7F37403D5DC3A36F30BC146977FB() {
    return *(float*)((uintptr_t)this + 0x768);
}
void* _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Timeline_1__Direction_FD1E7F37403D5DC3A36F30BC146977FB() {
    return (void*)((uintptr_t)this + 0x76c);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x778);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sandy_Chase_BP.Sandy_Chase_BP_C");
    return result;
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Sandy_Chase_BP::Sandy_Chase_BP_C::ExecuteUbergraph_Sandy_Chase_BP(int32_t EntryPoint) {
    return;
}
