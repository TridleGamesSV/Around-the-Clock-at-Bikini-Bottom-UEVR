#include "..\FUObjectArray.hpp"
#include "Sandy_Fog_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\ExponentialHeightFogComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::BillboardComponent*& _Game_Blueprints_Sandy_Fog_BP::Sandy_Fog_BP_C::get_Billboard() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Sandy_Fog_BP::Sandy_Fog_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::ExponentialHeightFogComponent*& _Game_Blueprints_Sandy_Fog_BP::Sandy_Fog_BP_C::get_ExponentialHeightFog() {
    return *(_Script_Engine::ExponentialHeightFogComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sandy_Fog_BP::Sandy_Fog_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sandy_Fog_BP.Sandy_Fog_BP_C");
    return result;
}
void _Game_Blueprints_Sandy_Fog_BP::Sandy_Fog_BP_C::UserConstructionScript0() {
    return;
}
