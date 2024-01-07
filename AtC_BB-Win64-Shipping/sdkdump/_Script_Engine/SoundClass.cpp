#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundClass.hpp"
void* _Script_Engine::SoundClass::get_PassiveSoundMixModifiers() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::SoundClass::get_Properties() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::SoundClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundClass");
    return result;
}
void* _Script_Engine::SoundClass::get_ChildClasses() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundClass*& _Script_Engine::SoundClass::get_ParentClass() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x78);
}
