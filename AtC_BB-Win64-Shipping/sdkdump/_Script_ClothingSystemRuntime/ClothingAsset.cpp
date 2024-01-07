#include "..\FUObjectArray.hpp"
#include "ClothingAsset.hpp"
#include "ClothingAssetCustomData.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingAssetBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
void* _Script_ClothingSystemRuntime::ClothingAsset::get_UsedBoneIndices() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_Engine::PhysicsAsset*& _Script_ClothingSystemRuntime::ClothingAsset::get_PhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x48);
}
void* _Script_ClothingSystemRuntime::ClothingAsset::get_ClothConfig() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_ClothingSystemRuntime::ClothingAsset::get_ReferenceBoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0x158);
}
void* _Script_ClothingSystemRuntime::ClothingAsset::get_LODData() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_ClothingSystemRuntime::ClothingAssetCustomData*& _Script_ClothingSystemRuntime::ClothingAsset::get_CustomData() {
    return *(_Script_ClothingSystemRuntime::ClothingAssetCustomData**)((uintptr_t)this + 0x160);
}
void* _Script_ClothingSystemRuntime::ClothingAsset::get_LodMap() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_ClothingSystemRuntime::ClothingAsset::get_UsedBoneNames() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothingAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntime.ClothingAsset");
    return result;
}
