#include "..\FUObjectArray.hpp"
#include "Bessy_Boss_Phase_3_End_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
float& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x770);
}
void* _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Bucking_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Fight_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x730);
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnSuccess_B0109FFD4B07A18476DB89815B211E9D(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnSuccess_0F18E1034632ED415234BFBDE13775D2(void* MovementResult) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x748);
}
void* _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x774);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x750);
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::ExecuteUbergraph_Bessy_Boss_Phase_3_End_BP(int32_t EntryPoint) {
    return;
}
int32_t& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x758);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x760);
}
_Script_Engine::Actor*& _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x768);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bessy_Boss_Phase_3_End_BP.Bessy_Boss_Phase_3_End_BP_C");
    return result;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnFail_1E197A9547433EE0D65D9E825FC1F8E2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnSuccess_1E197A9547433EE0D65D9E825FC1F8E2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnFail_6BE602804E4775C5B56FE890667739DB(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnSuccess_6BE602804E4775C5B56FE890667739DB(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnFail_455113FA45406D97FBD326A6F2D2F6C1(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnSuccess_455113FA45406D97FBD326A6F2D2F6C1(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnFail_0F18E1034632ED415234BFBDE13775D2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::OnFail_B0109FFD4B07A18476DB89815B211E9D(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Boss_Phase_3_End_BP::Bessy_Boss_Phase_3_End_BP_C::ReceiveBeginPlay() {
    return;
}
