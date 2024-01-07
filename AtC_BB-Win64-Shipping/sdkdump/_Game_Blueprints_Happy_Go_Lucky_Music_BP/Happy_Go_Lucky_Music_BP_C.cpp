#include "..\FUObjectArray.hpp"
#include "Happy_Go_Lucky_Music_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
void* _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Happy_Go_Lucky_Music_BP.Happy_Go_Lucky_Music_BP_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::get_Amb() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::ExecuteUbergraph_Happy_Go_Lucky_Music_BP(int32_t EntryPoint) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x330);
}
void _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Happy_Go_Lucky_Music_BP::Happy_Go_Lucky_Music_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
