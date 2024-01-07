#include "..\FUObjectArray.hpp"
#include "FirstPersonHUD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\HUD.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x408);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::get_HMDEnabled_() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x410);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C");
    return result;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::set_HMDEnabled_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::UserConstructionScript() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::ReceiveDrawHUD0(int32_t SizeX, int32_t SizeY) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonHUD::FirstPersonHUD_C::ExecuteUbergraph_FirstPersonHUD(int32_t EntryPoint) {
    return;
}
