#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavMeshRenderingComponent.hpp"
#include "PrimitiveComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavMeshRenderingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavMeshRenderingComponent");
    return result;
}
