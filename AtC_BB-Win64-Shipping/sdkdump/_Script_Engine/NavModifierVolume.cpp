#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavModifierVolume.hpp"
#include "Volume.hpp"
void* _Script_Engine::NavModifierVolume::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_CoreUObject::Class* _Script_Engine::NavModifierVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavModifierVolume");
    return result;
}
void _Script_Engine::NavModifierVolume::SetAreaClass(void* NewAreaClass) {
    return;
}
