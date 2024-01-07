#include "..\FUObjectArray.hpp"
#include "Patrick_Stand_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Leg1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Leg6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
void* _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Patrick() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Arm2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::get_Arm1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_CoreUObject::Class* _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Patrick_Stand_BP.Patrick_Stand_BP_C");
    return result;
}
void _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Patrick_Stand_BP::Patrick_Stand_BP_C::ExecuteUbergraph_Patrick_Stand_BP(int32_t EntryPoint) {
    return;
}
