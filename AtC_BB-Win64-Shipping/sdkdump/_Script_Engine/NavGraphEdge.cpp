#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavGraphEdge.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavGraphEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavGraphEdge");
    return result;
}
