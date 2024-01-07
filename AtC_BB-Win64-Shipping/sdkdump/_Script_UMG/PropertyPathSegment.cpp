#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Field.hpp"
#include "..\_Script_CoreUObject\Struct.hpp"
#include "PropertyPathSegment.hpp"
_Script_CoreUObject::Class* _Script_UMG::PropertyPathSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.PropertyPathSegment");
    return result;
}
void* _Script_UMG::PropertyPathSegment::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_UMG::PropertyPathSegment::get_ArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Struct*& _Script_UMG::PropertyPathSegment::get_Struct() {
    return *(_Script_CoreUObject::Struct**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Field*& _Script_UMG::PropertyPathSegment::get_Field() {
    return *(_Script_CoreUObject::Field**)((uintptr_t)this + 0x18);
}
