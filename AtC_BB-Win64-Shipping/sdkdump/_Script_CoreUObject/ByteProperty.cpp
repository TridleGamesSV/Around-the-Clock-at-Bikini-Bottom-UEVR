#include "..\FUObjectArray.hpp"
#include "ByteProperty.hpp"
#include "Class.hpp"
#include "NumericProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ByteProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ByteProperty");
    return result;
}
