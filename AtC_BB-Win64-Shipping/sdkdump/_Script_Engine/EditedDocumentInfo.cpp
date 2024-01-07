#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EditedDocumentInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::EditedDocumentInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EditedDocumentInfo");
    return result;
}
void* _Script_Engine::EditedDocumentInfo::get_SavedViewOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Object*& _Script_Engine::EditedDocumentInfo::get_EditedObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::EditedDocumentInfo::get_SavedZoomAmount() {
    return *(float*)((uintptr_t)this + 0x10);
}
