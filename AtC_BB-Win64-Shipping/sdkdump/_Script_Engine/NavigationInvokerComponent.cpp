#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "NavigationInvokerComponent.hpp"
float& _Script_Engine::NavigationInvokerComponent::get_TileGenerationRadius() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::NavigationInvokerComponent::get_TileRemovalRadius() {
    return *(float*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationInvokerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationInvokerComponent");
    return result;
}
