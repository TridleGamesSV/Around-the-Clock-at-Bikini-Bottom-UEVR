#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::Skeleton::get_Sockets() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::Skeleton::get_VirtualBoneGuid() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::Skeleton::get_BoneTree() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::Skeleton::get_VirtualBones() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::Skeleton::get_RefLocalPoses() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::Skeleton::get_SmartNames() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::Skeleton::get_BlendProfiles() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_Engine::Skeleton::get_SlotGroups() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Script_Engine::Skeleton::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_Engine::Skeleton::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Skeleton");
    return result;
}
