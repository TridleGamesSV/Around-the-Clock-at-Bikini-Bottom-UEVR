#include "..\FUObjectArray.hpp"
#include "Golden_Boobman_Jumpscare_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Menus_Golden_Boobman_Jumpscare::Golden_Boobman_Jumpscare_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Golden_Boobman_Jumpscare::Golden_Boobman_Jumpscare_C::get_Image_33() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Golden_Boobman_Jumpscare::Golden_Boobman_Jumpscare_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Golden_Boobman_Jumpscare.Golden_Boobman_Jumpscare_C");
    return result;
}
void _Game_Menus_Golden_Boobman_Jumpscare::Golden_Boobman_Jumpscare_C::Construct0() {
    return;
}
void _Game_Menus_Golden_Boobman_Jumpscare::Golden_Boobman_Jumpscare_C::ExecuteUbergraph_Golden_Boobman_Jumpscare(int32_t EntryPoint) {
    return;
}
