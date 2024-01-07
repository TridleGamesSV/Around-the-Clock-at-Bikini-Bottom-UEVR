#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "LandscapeSplinesComponent.hpp"
void* _Script_Landscape::LandscapeSplinesComponent::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Script_Landscape::LandscapeSplinesComponent::get_Segments() {
    return (void*)((uintptr_t)this + 0x670);
}
void* _Script_Landscape::LandscapeSplinesComponent::get_CookedForeignMeshComponents() {
    return (void*)((uintptr_t)this + 0x680);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplinesComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeSplinesComponent");
    return result;
}
