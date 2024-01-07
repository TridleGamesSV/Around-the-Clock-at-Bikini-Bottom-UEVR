#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SubsurfaceProfileStruct.hpp"
void* _Script_Engine::SubsurfaceProfileStruct::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::SubsurfaceProfileStruct::get_ScatterRadius() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SubsurfaceProfileStruct::get_FalloffColor() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::SubsurfaceProfileStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SubsurfaceProfileStruct");
    return result;
}
