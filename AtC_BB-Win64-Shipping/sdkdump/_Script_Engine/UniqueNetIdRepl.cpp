#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\UniqueNetIdWrapper.hpp"
#include "UniqueNetIdRepl.hpp"
_Script_CoreUObject::Class* _Script_Engine::UniqueNetIdRepl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.UniqueNetIdRepl");
    return result;
}
