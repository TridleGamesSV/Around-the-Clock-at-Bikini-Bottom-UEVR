#include "..\FUObjectArray.hpp"
#include "Bright_Post_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::PostProcessComponent*& _Game_Blueprints_Bright_Post_BP::Bright_Post_BP_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Bright_Post_BP::Bright_Post_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bright_Post_BP::Bright_Post_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bright_Post_BP.Bright_Post_BP_C");
    return result;
}
void _Game_Blueprints_Bright_Post_BP::Bright_Post_BP_C::UserConstructionScript0() {
    return;
}
