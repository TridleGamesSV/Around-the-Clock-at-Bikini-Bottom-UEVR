#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
_Script_CoreUObject::Class* _Script_Engine::KShapeElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KShapeElem");
    return result;
}
