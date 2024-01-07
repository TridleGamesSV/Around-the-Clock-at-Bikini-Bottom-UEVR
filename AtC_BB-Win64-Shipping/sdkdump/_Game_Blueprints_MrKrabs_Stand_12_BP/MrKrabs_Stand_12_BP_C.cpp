#include "..\FUObjectArray.hpp"
#include "MrKrabs_Stand_12_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_MrKrabs_Stand_12_BP::MrKrabs_Stand_12_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/MrKrabs_Stand_12_BP.MrKrabs_Stand_12_BP_C");
    return result;
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_MrKrabs_Stand_12_BP::MrKrabs_Stand_12_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_MrKrabs_Stand_12_BP::MrKrabs_Stand_12_BP_C::get_MrKrabs() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
void _Game_Blueprints_MrKrabs_Stand_12_BP::MrKrabs_Stand_12_BP_C::UserConstructionScript() {
    return;
}
