#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TranslationTrack.hpp"
void* _Script_Engine::TranslationTrack::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::TranslationTrack::get_PosKeys() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::TranslationTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TranslationTrack");
    return result;
}
