#include "..\FUObjectArray.hpp"
#include "Prowler_Boss_3_Thanos_Idle_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
float& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x758);
}
void* _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Gauntlet() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x730);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x738);
}
int32_t& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x740);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x748);
}
_Script_Engine::Actor*& _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x750);
}
void* _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x75c);
}
_Script_CoreUObject::Class* _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Prowler_Boss_3_Thanos_Idle_BP.Prowler_Boss_3_Thanos_Idle_BP_C");
    return result;
}
void _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Prowler_Boss_3_Thanos_Idle_BP::Prowler_Boss_3_Thanos_Idle_BP_C::ExecuteUbergraph_Prowler_Boss_3_Thanos_Idle_BP(int32_t EntryPoint) {
    return;
}
