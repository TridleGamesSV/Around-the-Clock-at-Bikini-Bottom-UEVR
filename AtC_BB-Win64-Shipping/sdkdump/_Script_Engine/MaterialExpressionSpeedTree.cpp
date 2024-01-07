#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSpeedTree.hpp"
void* _Script_Engine::MaterialExpressionSpeedTree::get_LODType() {
    return (void*)((uintptr_t)this + 0x122);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_GeometryInput() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_GeometryType() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_WindInput() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_ExtraBendWS() {
    return (void*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::MaterialExpressionSpeedTree::set_bAccurateWindVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_LODInput() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionSpeedTree::get_WindType() {
    return (void*)((uintptr_t)this + 0x121);
}
float& _Script_Engine::MaterialExpressionSpeedTree::get_BillboardThreshold() {
    return *(float*)((uintptr_t)this + 0x124);
}
bool _Script_Engine::MaterialExpressionSpeedTree::get_bAccurateWindVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSpeedTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSpeedTree");
    return result;
}
