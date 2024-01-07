#include "..\FUObjectArray.hpp"
#include "Krusty_Amb_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Krusty_Amb::Krusty_Amb_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Krusty_Amb.Krusty_Amb_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Krusty_Amb::Krusty_Amb_C::get_Rain() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Krusty_Amb::Krusty_Amb_C::get_Ghostly() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Krusty_Amb::Krusty_Amb_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Krusty_Amb::Krusty_Amb_C::UserConstructionScript0() {
    return;
}
