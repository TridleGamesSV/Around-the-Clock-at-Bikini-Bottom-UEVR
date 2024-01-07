#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicsAsset.hpp"
#include "ThumbnailInfo.hpp"
bool _Script_Engine::PhysicsAsset::get_bUseAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_Engine::PhysicsAsset::get_BoundsBodies() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PhysicsAsset::get_SkeletalBodySetups() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::ThumbnailInfo*& _Script_Engine::PhysicsAsset::get_ThumbnailInfo() {
    return *(_Script_Engine::ThumbnailInfo**)((uintptr_t)this + 0x100);
}
void* _Script_Engine::PhysicsAsset::get_ConstraintSetup() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::PhysicsAsset::set_bUseAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsAsset");
    return result;
}
void* _Script_Engine::PhysicsAsset::get_BodySetup() {
    return (void*)((uintptr_t)this + 0x108);
}
