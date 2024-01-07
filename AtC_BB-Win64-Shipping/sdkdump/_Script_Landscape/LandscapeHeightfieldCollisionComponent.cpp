#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "LandscapeHeightfieldCollisionComponent.hpp"
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionQuadFlags() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_ComponentLayerInfos() {
    return (void*)((uintptr_t)this + 0x660);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0x670);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0x674);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x678);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_HeightfieldGuid() {
    return (void*)((uintptr_t)this + 0x698);
}
float& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionScale() {
    return *(float*)((uintptr_t)this + 0x67c);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SimpleCollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x680);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0x6a8);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_RenderComponent() {
    return (void*)((uintptr_t)this + 0x6c4);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CookedPhysicalMaterials() {
    return (void*)((uintptr_t)this + 0x6f0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeHeightfieldCollisionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeHeightfieldCollisionComponent");
    return result;
}
