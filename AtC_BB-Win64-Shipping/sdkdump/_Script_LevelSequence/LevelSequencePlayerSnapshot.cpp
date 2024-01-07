#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "LevelSequencePlayerSnapshot.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequencePlayerSnapshot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequencePlayerSnapshot");
    return result;
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_MasterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_Settings() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_LevelSequence::LevelSequencePlayerSnapshot::get_MasterTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::CameraComponent*& _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CameraComponent() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x30);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CurrentShotName() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_LevelSequence::LevelSequencePlayerSnapshot::get_CurrentShotLocalTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_LevelSequence::LevelSequencePlayerSnapshot::get_ShotID() {
    return (void*)((uintptr_t)this + 0x40);
}
