#include "..\FUObjectArray.hpp"
#include "Basic_Door_Blue_2_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Animation_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x358);
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Close() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Animation_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Open() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Animation_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x348);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::get_Animation_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Basic_Door_Blue_2_BP.Basic_Door_Blue_2_BP_C");
    return result;
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Basic_Door_Blue_2_BP::Basic_Door_Blue_2_BP_C::ExecuteUbergraph_Basic_Door_Blue_2_BP(int32_t EntryPoint) {
    return;
}
