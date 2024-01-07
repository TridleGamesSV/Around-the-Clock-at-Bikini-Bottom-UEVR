#include "..\FUObjectArray.hpp"
#include "Grandfather_Clock_Ring_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::ReceiveBeginPlay0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
void* _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Grandfather_Clock_Ring_BP.Grandfather_Clock_Ring_BP_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::get_Frame_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::get_Ring() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Grandfather_Clock_Ring_BP::Grandfather_Clock_Ring_BP_C::ExecuteUbergraph_Grandfather_Clock_Ring_BP(int32_t EntryPoint) {
    return;
}
