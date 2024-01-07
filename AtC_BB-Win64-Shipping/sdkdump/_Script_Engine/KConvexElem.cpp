#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KConvexElem.hpp"
#include "KShapeElem.hpp"
void* _Script_Engine::KConvexElem::get_VertexData() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::KConvexElem::get_ElemBox() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::KConvexElem::get_Transform() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::KConvexElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KConvexElem");
    return result;
}
