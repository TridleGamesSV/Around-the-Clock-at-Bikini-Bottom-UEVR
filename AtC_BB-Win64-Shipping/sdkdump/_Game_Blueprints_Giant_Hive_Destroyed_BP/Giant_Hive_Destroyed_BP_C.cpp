#include "..\FUObjectArray.hpp"
#include "Giant_Hive_Destroyed_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::get_Goo_Explode() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::get_Animation_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::get_Animation_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::get_Animation_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Giant_Hive_Destroyed_BP.Giant_Hive_Destroyed_BP_C");
    return result;
}
void _Game_Blueprints_Giant_Hive_Destroyed_BP::Giant_Hive_Destroyed_BP_C::ExecuteUbergraph_Giant_Hive_Destroyed_BP(int32_t EntryPoint) {
    return;
}
