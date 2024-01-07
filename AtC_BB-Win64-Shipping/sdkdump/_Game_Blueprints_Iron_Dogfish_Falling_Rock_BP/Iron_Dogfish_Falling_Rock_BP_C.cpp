#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Falling_Rock_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void* _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::get_Boulder() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Falling_Rock_BP.Iron_Dogfish_Falling_Rock_BP_C");
    return result;
}
void _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Falling_Rock_BP::Iron_Dogfish_Falling_Rock_BP_C::ExecuteUbergraph_Iron_Dogfish_Falling_Rock_BP(int32_t EntryPoint) {
    return;
}
