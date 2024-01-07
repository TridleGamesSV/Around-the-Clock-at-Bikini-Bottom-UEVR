#include "..\FUObjectArray.hpp"
#include "Pineapple_House_Amb_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Pineapple_House_Amb::Pineapple_House_Amb_C::get_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x318);
}
void _Game_Blueprints_Pineapple_House_Amb::Pineapple_House_Amb_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Pineapple_House_Amb::Pineapple_House_Amb_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Pineapple_House_Amb::Pineapple_House_Amb_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Pineapple_House_Amb.Pineapple_House_Amb_C");
    return result;
}
