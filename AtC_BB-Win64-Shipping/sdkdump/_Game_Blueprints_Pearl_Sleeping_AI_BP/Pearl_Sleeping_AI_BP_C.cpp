#include "..\FUObjectArray.hpp"
#include "Pearl_Sleeping_AI_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_Zs() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_SkeletalMesh1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_Snore_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Pearl_Sleeping_AI_BP.Pearl_Sleeping_AI_BP_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_Snore_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
void _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x340);
}
void _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Pearl_Sleeping_AI_BP::Pearl_Sleeping_AI_BP_C::ExecuteUbergraph_Pearl_Sleeping_AI_BP(int32_t EntryPoint) {
    return;
}
