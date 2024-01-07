#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavCollision.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavCollision");
    return result;
}
bool _Script_Engine::NavCollision::get_bIsDynamicObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_Engine::NavCollision::get_CylinderCollision() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_Engine::NavCollision::set_bIsDynamicObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NavCollision::get_BoxCollision() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::NavCollision::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::NavCollision::get_bGatherConvexGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 2 != 0;
}
void _Script_Engine::NavCollision::set_bGatherConvexGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
