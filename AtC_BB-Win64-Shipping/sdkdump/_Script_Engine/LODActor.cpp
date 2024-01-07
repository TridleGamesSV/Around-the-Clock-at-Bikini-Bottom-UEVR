#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "LODActor.hpp"
#include "StaticMeshComponent.hpp"
void* _Script_Engine::LODActor::get_SubActors() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_Engine::StaticMeshComponent*& _Script_Engine::LODActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x318);
}
void* _Script_Engine::LODActor::get_SubObjects() {
    return (void*)((uintptr_t)this + 0x338);
}
float& _Script_Engine::LODActor::get_LODDrawDistance() {
    return *(float*)((uintptr_t)this + 0x330);
}
int32_t& _Script_Engine::LODActor::get_LODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x334);
}
_Script_CoreUObject::Class* _Script_Engine::LODActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LODActor");
    return result;
}
