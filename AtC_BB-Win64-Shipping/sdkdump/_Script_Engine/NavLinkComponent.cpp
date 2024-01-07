#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavLinkComponent.hpp"
#include "PrimitiveComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavLinkComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavLinkComponent");
    return result;
}
void* _Script_Engine::NavLinkComponent::get_Links() {
    return (void*)((uintptr_t)this + 0x668);
}
