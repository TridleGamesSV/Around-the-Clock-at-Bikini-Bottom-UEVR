#include "..\FUObjectArray.hpp"
#include "PatDick_Breach_AI_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::CameraComponent*& _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x728);
}
void* _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x730);
}
void _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::OnFail_D0C2283B443E49F629E0F786AD966980(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::get_PatDick_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_CoreUObject::Class* _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/PatDick_Breach_AI_BP.PatDick_Breach_AI_BP_C");
    return result;
}
void _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::OnSuccess_D0C2283B443E49F629E0F786AD966980(void* MovementResult) {
    return;
}
void _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_PatDick_Breach_AI_BP::PatDick_Breach_AI_BP_C::ExecuteUbergraph_PatDick_Breach_AI_BP(int32_t EntryPoint) {
    return;
}
