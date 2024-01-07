#include "..\FUObjectArray.hpp"
#include "First_Dollar_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_7() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x358);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Completely_Drawn() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x348);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Erase_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x350);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SaveGame*& _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::get_SaverSubClass() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/First_Dollar_BP.First_Dollar_BP_C");
    return result;
}
void _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_First_Dollar_BP::First_Dollar_BP_C::ExecuteUbergraph_First_Dollar_BP(int32_t EntryPoint) {
    return;
}
