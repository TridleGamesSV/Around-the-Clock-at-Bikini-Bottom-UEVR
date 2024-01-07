#include "..\FUObjectArray.hpp"
#include "Small_Monitor_Activated_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::get_Muffled_Rain() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::get_Static() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::get_Cam_Plane() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
_Script_CoreUObject::Class* _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Small_Monitor_Activated_BP.Small_Monitor_Activated_BP_C");
    return result;
}
void _Game_Blueprints_Small_Monitor_Activated_BP::Small_Monitor_Activated_BP_C::ExecuteUbergraph_Small_Monitor_Activated_BP(int32_t EntryPoint) {
    return;
}
