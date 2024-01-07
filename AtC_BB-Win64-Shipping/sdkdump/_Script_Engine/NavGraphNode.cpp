#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavGraphNode.hpp"
_Script_CoreUObject::Object*& _Script_Engine::NavGraphNode::get_Owner() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::NavGraphNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavGraphNode");
    return result;
}
