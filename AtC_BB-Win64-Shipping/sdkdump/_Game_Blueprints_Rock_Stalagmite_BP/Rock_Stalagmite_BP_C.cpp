#include "..\FUObjectArray.hpp"
#include "Rock_Stalagmite_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::Bust_Stalagmite() {
    return;
}
void* _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Rock_Stalagmite_BP.Rock_Stalagmite_BP_C");
    return result;
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::get_Bust() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
void _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::get_Broken() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Rock_Stalagmite_BP::Rock_Stalagmite_BP_C::ExecuteUbergraph_Rock_Stalagmite_BP(int32_t EntryPoint) {
    return;
}
