#include "..\FUObjectArray.hpp"
#include "Jellien_Squirter_KK_2_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Slam() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
float& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Timeline_1_Walk_170B011742F198021DB360ACEEE7C8E0() {
    return *(float*)((uintptr_t)this + 0x780);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Body_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Body_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Body_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Body_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
void* _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x790);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Pissed() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x758);
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::Timeline_1__FinishedFunc() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Footsteps() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x760);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x778);
}
void* _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Timeline_1__Direction_170B011742F198021DB360ACEEE7C8E0() {
    return (void*)((uintptr_t)this + 0x784);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x788);
}
int32_t& _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x79c);
}
_Script_CoreUObject::Class* _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jellien_Squirter_KK_2_BP.Jellien_Squirter_KK_2_BP_C");
    return result;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Jellien_Squirter_KK_2_BP::Jellien_Squirter_KK_2_BP_C::ExecuteUbergraph_Jellien_Squirter_KK_2_BP(int32_t EntryPoint) {
    return;
}
