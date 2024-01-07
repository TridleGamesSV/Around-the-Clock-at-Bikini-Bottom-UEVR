#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "DataTable.hpp"
_Script_CoreUObject::ScriptStruct*& _Script_Engine::DataTable::get_RowStruct() {
    return *(_Script_CoreUObject::ScriptStruct**)((uintptr_t)this + 0x28);
}
bool _Script_Engine::DataTable::get_bStripFromClientBuilds() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DataTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataTable");
    return result;
}
void _Script_Engine::DataTable::set_bStripFromClientBuilds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
