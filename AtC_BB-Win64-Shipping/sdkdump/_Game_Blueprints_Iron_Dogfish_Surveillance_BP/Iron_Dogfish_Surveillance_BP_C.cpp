#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Surveillance_BP_C.hpp"
#include "..\_Game_Blueprints_MySaveGame\MySaveGame_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
void* _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x730);
}
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Surveillance_BP.Iron_Dogfish_Surveillance_BP_C");
    return result;
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::ExecuteUbergraph_Iron_Dogfish_Surveillance_BP(int32_t EntryPoint) {
    return;
}
_Game_Blueprints_MySaveGame::MySaveGame_C*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_NewVar_0() {
    return *(_Game_Blueprints_MySaveGame::MySaveGame_C**)((uintptr_t)this + 0x750);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_Walk() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Surveillance_BP::Iron_Dogfish_Surveillance_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
