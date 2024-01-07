#include "..\FUObjectArray.hpp"
#include "Rubber_Duck_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void* _Game_Blueprints_Rubber_Duck_BP::Rubber_Duck_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Rubber_Duck_BP::Rubber_Duck_BP_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Rubber_Duck_BP::Rubber_Duck_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Rubber_Duck_BP.Rubber_Duck_BP_C");
    return result;
}
void _Game_Blueprints_Rubber_Duck_BP::Rubber_Duck_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Rubber_Duck_BP::Rubber_Duck_BP_C::ExecuteUbergraph_Rubber_Duck_BP(int32_t EntryPoint) {
    return;
}
