#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RichTextBlock.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::RichTextBlock::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::RichTextBlock::get_TextDelegate() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_UMG::RichTextBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlock");
    return result;
}
void* _Script_UMG::RichTextBlock::get_Font() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_UMG::RichTextBlock::get_Color() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_UMG::RichTextBlock::get_Decorators() {
    return (void*)((uintptr_t)this + 0x1b8);
}
