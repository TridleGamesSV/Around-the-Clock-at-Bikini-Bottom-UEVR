#include "..\FUObjectArray.hpp"
#include "Patrick_Stand_Happy_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::get_Leg6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::get_Arm2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::get_Arm1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::get_Leg1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::get_Patrick() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_CoreUObject::Class* _Game_Blueprints_Patrick_Stand_Happy_BP::Patrick_Stand_Happy_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Patrick_Stand_Happy_BP.Patrick_Stand_Happy_BP_C");
    return result;
}
