#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Boulder_2_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::UserConstructionScript() {
    return;
}
void* _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_Boulder() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
float& _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_Timeline_0_Walk_D7BD800A44849B17B7AFDEAEF817E899() {
    return *(float*)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_Timeline_0__Direction_D7BD800A44849B17B7AFDEAEF817E899() {
    return (void*)((uintptr_t)this + 0x73c);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x740);
}
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Boulder_2_BP.Iron_Dogfish_Boulder_2_BP_C");
    return result;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::OnFail_A05159D04795ABA5B6DCE1B7DD7EC7E6(void* MovementResult) {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::OnSuccess_A05159D04795ABA5B6DCE1B7DD7EC7E6(void* MovementResult) {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boulder_2_BP::Iron_Dogfish_Boulder_2_BP_C::ExecuteUbergraph_Iron_Dogfish_Boulder_2_BP(int32_t EntryPoint) {
    return;
}
