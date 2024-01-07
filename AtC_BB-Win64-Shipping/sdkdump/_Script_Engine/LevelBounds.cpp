#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "LevelBounds.hpp"
bool _Script_Engine::LevelBounds::get_bAutoUpdateBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
void _Script_Engine::LevelBounds::set_bAutoUpdateBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LevelBounds::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelBounds");
    return result;
}
