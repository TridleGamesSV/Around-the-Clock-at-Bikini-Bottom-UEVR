#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NodeMap.hpp"
void* _Script_Engine::NodeMap::get_TargetNodeName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NodeMap::get_SourceToTargetTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::NodeMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NodeMap");
    return result;
}
