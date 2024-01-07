#include "..\FUObjectArray.hpp"
#include "Spongebob_Stand_Jellyfishing_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Spongebob_Stand_Jellyfishing_BP::Spongebob_Stand_Jellyfishing_BP_C::get_Spongebob() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Spongebob_Stand_Jellyfishing_BP::Spongebob_Stand_Jellyfishing_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Spongebob_Stand_Jellyfishing_BP.Spongebob_Stand_Jellyfishing_BP_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Spongebob_Stand_Jellyfishing_BP::Spongebob_Stand_Jellyfishing_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void _Game_Blueprints_Spongebob_Stand_Jellyfishing_BP::Spongebob_Stand_Jellyfishing_BP_C::UserConstructionScript0() {
    return;
}
