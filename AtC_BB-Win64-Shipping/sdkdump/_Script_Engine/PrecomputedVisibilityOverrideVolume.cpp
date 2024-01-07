#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrecomputedVisibilityOverrideVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::PrecomputedVisibilityOverrideVolume::get_OverrideVisibleActors() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_Engine::PrecomputedVisibilityOverrideVolume::get_OverrideInvisibleActors() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_Engine::PrecomputedVisibilityOverrideVolume::get_OverrideInvisibleLevels() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_Engine::PrecomputedVisibilityOverrideVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PrecomputedVisibilityOverrideVolume");
    return result;
}
