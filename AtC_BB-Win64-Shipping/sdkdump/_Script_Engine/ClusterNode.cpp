#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClusterNode.hpp"
int32_t& _Script_Engine::ClusterNode::get_LastInstance() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::ClusterNode::get_BoundMin() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ClusterNode::get_FirstChild() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::ClusterNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClusterNode");
    return result;
}
void* _Script_Engine::ClusterNode::get_BoundMax() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::ClusterNode::get_LastChild() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::ClusterNode::get_FirstInstance() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
