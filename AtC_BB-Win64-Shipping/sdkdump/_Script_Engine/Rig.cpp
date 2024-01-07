#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Rig.hpp"
void* _Script_Engine::Rig::get_TransformBases() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::Rig::get_Nodes() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::Rig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Rig");
    return result;
}
