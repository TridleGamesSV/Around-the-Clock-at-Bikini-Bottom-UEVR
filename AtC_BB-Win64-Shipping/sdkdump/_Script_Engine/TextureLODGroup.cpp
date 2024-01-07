#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureLODGroup.hpp"
int32_t& _Script_Engine::TextureLODGroup::get_NumStreamedMips() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::TextureLODGroup::get_Group() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TextureLODGroup::get_MipFilter() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::TextureLODGroup::get_MinMagFilter() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::TextureLODGroup::get_MipGenSettings() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::TextureLODGroup::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::TextureLODGroup::get_MinLODSize() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::TextureLODGroup::get_MaxLODSize() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::TextureLODGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TextureLODGroup");
    return result;
}
