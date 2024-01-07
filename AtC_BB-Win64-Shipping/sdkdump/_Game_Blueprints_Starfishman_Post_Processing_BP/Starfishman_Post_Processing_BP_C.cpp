#include "..\FUObjectArray.hpp"
#include "Starfishman_Post_Processing_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Blueprints_Starfishman_Post_Processing_BP::Starfishman_Post_Processing_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::PostProcessComponent*& _Game_Blueprints_Starfishman_Post_Processing_BP::Starfishman_Post_Processing_BP_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Starfishman_Post_Processing_BP::Starfishman_Post_Processing_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Starfishman_Post_Processing_BP.Starfishman_Post_Processing_BP_C");
    return result;
}
void _Game_Blueprints_Starfishman_Post_Processing_BP::Starfishman_Post_Processing_BP_C::UserConstructionScript0() {
    return;
}
