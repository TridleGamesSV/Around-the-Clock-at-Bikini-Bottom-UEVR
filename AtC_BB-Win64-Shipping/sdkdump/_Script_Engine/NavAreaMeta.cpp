#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavArea.hpp"
#include "NavAreaMeta.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavAreaMeta::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavAreaMeta");
    return result;
}
