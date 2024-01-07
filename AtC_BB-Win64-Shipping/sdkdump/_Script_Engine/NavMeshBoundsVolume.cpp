#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavMeshBoundsVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::NavMeshBoundsVolume::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Script_Engine::NavMeshBoundsVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavMeshBoundsVolume");
    return result;
}
