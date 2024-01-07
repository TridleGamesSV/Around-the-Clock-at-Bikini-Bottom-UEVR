#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AmbisonicsSubmixSettingsBase.hpp"
#include "SoundSubmix.hpp"
void* _Script_Engine::SoundSubmix::get_ChildSubmixes() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Engine::AmbisonicsSubmixSettingsBase*& _Script_Engine::SoundSubmix::get_AmbisonicsPluginSettings() {
    return *(_Script_Engine::AmbisonicsSubmixSettingsBase**)((uintptr_t)this + 0x58);
}
_Script_Engine::SoundSubmix*& _Script_Engine::SoundSubmix::get_ParentSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundSubmix::get_ChannelFormat() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SoundSubmix::get_SubmixEffectChain() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundSubmix");
    return result;
}
