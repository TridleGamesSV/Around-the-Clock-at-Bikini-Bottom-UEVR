#include "..\FUObjectArray.hpp"
#include "Boulder_Gate_Fall_2_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::ExecuteUbergraph_Boulder_Gate_Fall_2_BP(int32_t EntryPoint) {
    return;
}
void* _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Boulder_Gate_Fall_2_BP.Boulder_Gate_Fall_2_BP_C");
    return result;
}
void _Game_Blueprints_Boulder_Gate_Fall_2_BP::Boulder_Gate_Fall_2_BP_C::ReceiveBeginPlay() {
    return;
}
