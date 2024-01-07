#include "..\FUObjectArray.hpp"
#include "FirstPersonGameMode_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameModeBase.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonGameMode::FirstPersonGameMode_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b8);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Blueprints_FirstPersonGameMode::FirstPersonGameMode_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonGameMode.FirstPersonGameMode_C");
    return result;
}
