#include "..\FUObjectArray.hpp"
#include "Krabs_House_Amb_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Krabs_House_Amb_BP::Krabs_House_Amb_BP_C::get_Amb() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Krabs_House_Amb_BP::Krabs_House_Amb_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Krabs_House_Amb_BP::Krabs_House_Amb_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Krabs_House_Amb_BP.Krabs_House_Amb_BP_C");
    return result;
}
void _Game_Blueprints_Krabs_House_Amb_BP::Krabs_House_Amb_BP_C::UserConstructionScript0() {
    return;
}
