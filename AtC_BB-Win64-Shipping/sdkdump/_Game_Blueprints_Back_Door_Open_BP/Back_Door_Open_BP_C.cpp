#include "..\FUObjectArray.hpp"
#include "Back_Door_Open_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Animation_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x350);
}
void _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Animation_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Door() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Animation_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x358);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Open() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x338);
}
_Script_CoreUObject::Class* _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Back_Door_Open_BP.Back_Door_Open_BP_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::get_Animation_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x348);
}
void _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Back_Door_Open_BP::Back_Door_Open_BP_C::ExecuteUbergraph_Back_Door_Open_BP(int32_t EntryPoint) {
    return;
}
