#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "MetaData.hpp"
#include "Object.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::MetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.MetaData");
    return result;
}
