#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RichTextBlockDecorator.hpp"
_Script_CoreUObject::Class* _Script_UMG::RichTextBlockDecorator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlockDecorator");
    return result;
}
bool _Script_UMG::RichTextBlockDecorator::get_bReveal() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_UMG::RichTextBlockDecorator::set_bReveal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_UMG::RichTextBlockDecorator::get_RevealedIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
