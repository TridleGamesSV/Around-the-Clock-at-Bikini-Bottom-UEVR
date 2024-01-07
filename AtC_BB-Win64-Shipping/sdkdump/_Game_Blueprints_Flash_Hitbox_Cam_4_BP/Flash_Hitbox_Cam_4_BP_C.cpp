#include "..\FUObjectArray.hpp"
#include "Flash_Hitbox_Cam_4_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::ReceiveBeginPlay0() {
    return;
}
void* _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Flash_Hitbox_Cam_4_BP.Flash_Hitbox_Cam_4_BP_C");
    return result;
}
void _Game_Blueprints_Flash_Hitbox_Cam_4_BP::Flash_Hitbox_Cam_4_BP_C::ExecuteUbergraph_Flash_Hitbox_Cam_4_BP(int32_t EntryPoint) {
    return;
}
