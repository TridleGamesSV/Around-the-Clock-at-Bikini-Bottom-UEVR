#include "..\FUObjectArray.hpp"
#include "Pearl_Dead_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Menus_Pearl_Dead::Pearl_Dead_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Pearl_Dead.Pearl_Dead_C");
    return result;
}
void* _Game_Menus_Pearl_Dead::Pearl_Dead_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Pearl_Dead::Pearl_Dead_C::get_Image_105() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
float _Game_Menus_Pearl_Dead::Pearl_Dead_C::GetPercent_0() {
    return;
}
void _Game_Menus_Pearl_Dead::Pearl_Dead_C::Construct0() {
    return;
}
void _Game_Menus_Pearl_Dead::Pearl_Dead_C::ExecuteUbergraph_Pearl_Dead(int32_t EntryPoint) {
    return;
}
