#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditableTextWidgetStyle.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleContainerBase.hpp"
_Script_CoreUObject::Class* _Script_Slate::EditableTextWidgetStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Slate.EditableTextWidgetStyle");
    return result;
}
void* _Script_Slate::EditableTextWidgetStyle::get_EditableTextStyle() {
    return (void*)((uintptr_t)this + 0x30);
}
