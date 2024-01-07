#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LandscapeComponent.hpp"
int32_t& _Script_Landscape::LandscapeComponent::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x66c);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_MobileWeightNormalmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x7b8);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0x660);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x678);
}
int32_t& _Script_Landscape::LandscapeComponent::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x668);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0x664);
}
int32_t& _Script_Landscape::LandscapeComponent::get_NumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0x670);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0x688);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideHoleMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x680);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstancesDynamic() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapLayerAllocations() {
    return (void*)((uintptr_t)this + 0x6a8);
}
int32_t& _Script_Landscape::LandscapeComponent::get_CollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x760);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapTextures() {
    return (void*)((uintptr_t)this + 0x6b8);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_XYOffsetmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x6c8);
}
_Script_Engine::MaterialInstanceDynamic* _Script_Landscape::LandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
    return;
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0x6d0);
}
float& _Script_Landscape::LandscapeComponent::get_WeightmapSubsectionOffset() {
    return *(float*)((uintptr_t)this + 0x6e0);
}
void* _Script_Landscape::LandscapeComponent::get_HeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0x6f0);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_HeightmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x700);
}
void* _Script_Landscape::LandscapeComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0x708);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeComponent");
    return result;
}
void* _Script_Landscape::LandscapeComponent::get_CollisionComponent() {
    return (void*)((uintptr_t)this + 0x724);
}
void* _Script_Landscape::LandscapeComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0x740);
}
void* _Script_Landscape::LandscapeComponent::get_IrrelevantLights() {
    return (void*)((uintptr_t)this + 0x750);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SimpleCollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x764);
}
float& _Script_Landscape::LandscapeComponent::get_NegativeZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x768);
}
float& _Script_Landscape::LandscapeComponent::get_PositiveZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x76c);
}
float& _Script_Landscape::LandscapeComponent::get_StaticLightingResolution() {
    return *(float*)((uintptr_t)this + 0x770);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ForcedLOD() {
    return *(int32_t*)((uintptr_t)this + 0x774);
}
void* _Script_Landscape::LandscapeComponent::get_StateId() {
    return (void*)((uintptr_t)this + 0x77c);
}
void* _Script_Landscape::LandscapeComponent::get_BakedTextureMaterialGuid() {
    return (void*)((uintptr_t)this + 0x78c);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_GIBakedBaseColorTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x7a0);
}
void* _Script_Landscape::LandscapeComponent::get_MobileBlendableLayerMask() {
    return (void*)((uintptr_t)this + 0x7a8);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_MobileMaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x7b0);
}
