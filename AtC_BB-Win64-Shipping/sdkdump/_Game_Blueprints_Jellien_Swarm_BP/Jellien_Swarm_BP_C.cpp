#include "..\FUObjectArray.hpp"
#include "Jellien_Swarm_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x348);
}
_Script_Engine::ArrowComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x330);
}
void* _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
float& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Timeline_0_Walk_EF96BCC0493EA0A43F2A45B0A6752BE3() {
    return *(float*)((uintptr_t)this + 0x350);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Buzz() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Jelliens() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
void* _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Timeline_0__Direction_EF96BCC0493EA0A43F2A45B0A6752BE3() {
    return (void*)((uintptr_t)this + 0x354);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x358);
}
float& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x360);
}
_Script_Engine::Actor*& _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jellien_Swarm_BP.Jellien_Swarm_BP_C");
    return result;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Jellien_Swarm_BP::Jellien_Swarm_BP_C::ExecuteUbergraph_Jellien_Swarm_BP(int32_t EntryPoint) {
    return;
}
