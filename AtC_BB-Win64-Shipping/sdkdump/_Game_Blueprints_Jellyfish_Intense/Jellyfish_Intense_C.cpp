#include "..\FUObjectArray.hpp"
#include "Jellyfish_Intense_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellyfish_Intense::Jellyfish_Intense_C::get_Intense() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Jellyfish_Intense::Jellyfish_Intense_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Jellyfish_Intense::Jellyfish_Intense_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jellyfish_Intense.Jellyfish_Intense_C");
    return result;
}
void _Game_Blueprints_Jellyfish_Intense::Jellyfish_Intense_C::UserConstructionScript0() {
    return;
}
