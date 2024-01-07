#include "..\FUObjectArray.hpp"
#include "Prowler_Boss_Change_Prowler_Death_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::BoxComponent*& _Game_Blueprints_Prowler_Boss_Change_Prowler_Death::Prowler_Boss_Change_Prowler_Death_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Prowler_Boss_Change_Prowler_Death::Prowler_Boss_Change_Prowler_Death_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Prowler_Boss_Change_Prowler_Death::Prowler_Boss_Change_Prowler_Death_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Prowler_Boss_Change_Prowler_Death.Prowler_Boss_Change_Prowler_Death_C");
    return result;
}
void _Game_Blueprints_Prowler_Boss_Change_Prowler_Death::Prowler_Boss_Change_Prowler_Death_C::UserConstructionScript0() {
    return;
}
