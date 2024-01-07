#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "NavigationGraphNode.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavigationGraphNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationGraphNode");
    return result;
}
