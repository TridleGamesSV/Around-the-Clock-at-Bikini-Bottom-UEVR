#include "..\FUObjectArray.hpp"
#include "Squidward_Stand_2_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Squidward() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Leg4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Leg3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Arm1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Leg2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Leg1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::get_Arm2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_CoreUObject::Class* _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Squidward_Stand_2_BP.Squidward_Stand_2_BP_C");
    return result;
}
void _Game_Blueprints_Squidward_Stand_2_BP::Squidward_Stand_2_BP_C::UserConstructionScript() {
    return;
}
