#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KBoxElem.hpp"
#include "KShapeElem.hpp"
float& _Script_Engine::KBoxElem::get_Z() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::KBoxElem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::KBoxElem::get_TM() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::KBoxElem::get_Orientation() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::KBoxElem::get_Center() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::KBoxElem::get_X() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::KBoxElem::get_Y() {
    return *(float*)((uintptr_t)this + 0x8c);
}
_Script_CoreUObject::Class* _Script_Engine::KBoxElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KBoxElem");
    return result;
}
