#include "..\FUObjectArray.hpp"
#include "Door_Front_Health_15_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Door_Front_Health_15_BP::Door_Front_Health_15_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Door_Front_Health_15_BP::Door_Front_Health_15_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Door_Front_Health_15_BP::Door_Front_Health_15_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Door_Front_Health_15_BP.Door_Front_Health_15_BP_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Door_Front_Health_15_BP::Door_Front_Health_15_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
