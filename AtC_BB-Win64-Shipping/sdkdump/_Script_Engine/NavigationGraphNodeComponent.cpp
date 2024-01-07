#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationGraphNodeComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::NavigationGraphNodeComponent::get_Node() {
    return (void*)((uintptr_t)this + 0x290);
}
_Script_Engine::NavigationGraphNodeComponent*& _Script_Engine::NavigationGraphNodeComponent::get_NextNodeComponent() {
    return *(_Script_Engine::NavigationGraphNodeComponent**)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationGraphNodeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationGraphNodeComponent");
    return result;
}
_Script_Engine::NavigationGraphNodeComponent*& _Script_Engine::NavigationGraphNodeComponent::get_PrevNodeComponent() {
    return *(_Script_Engine::NavigationGraphNodeComponent**)((uintptr_t)this + 0x2b0);
}
