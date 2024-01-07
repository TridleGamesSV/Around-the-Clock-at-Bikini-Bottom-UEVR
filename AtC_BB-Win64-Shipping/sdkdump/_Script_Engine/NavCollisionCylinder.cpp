#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavCollisionCylinder.hpp"
void* _Script_Engine::NavCollisionCylinder::get_Offset() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::NavCollisionCylinder::get_Radius() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::NavCollisionCylinder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavCollisionCylinder");
    return result;
}
float& _Script_Engine::NavCollisionCylinder::get_Height() {
    return *(float*)((uintptr_t)this + 0x10);
}
