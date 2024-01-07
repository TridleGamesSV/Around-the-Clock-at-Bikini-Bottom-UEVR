#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicPropertyPath.hpp"
void* _Script_UMG::DynamicPropertyPath::get_Segments() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_UMG::DynamicPropertyPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.DynamicPropertyPath");
    return result;
}
