#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavLinkRenderingComponent.hpp"
#include "PrimitiveComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavLinkRenderingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavLinkRenderingComponent");
    return result;
}
