#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Boss_Health_0_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
void* _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_Blood() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x748);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_Scream() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::UserConstructionScript() {
    return;
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x740);
}
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Boss_Health_0_BP.Iron_Dogfish_Boss_Health_0_BP_C");
    return result;
}
void _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP::Iron_Dogfish_Boss_Health_0_BP_C::ExecuteUbergraph_Iron_Dogfish_Boss_Health_0_BP(int32_t EntryPoint) {
    return;
}
