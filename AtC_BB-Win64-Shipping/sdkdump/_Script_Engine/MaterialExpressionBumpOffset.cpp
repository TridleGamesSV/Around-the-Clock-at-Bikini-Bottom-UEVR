#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionBumpOffset.hpp"
void* _Script_Engine::MaterialExpressionBumpOffset::get_Coordinate() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionBumpOffset::get_Height() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBumpOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBumpOffset");
    return result;
}
float& _Script_Engine::MaterialExpressionBumpOffset::get_HeightRatio() {
    return *(float*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::MaterialExpressionBumpOffset::get_HeightRatioInput() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::MaterialExpressionBumpOffset::get_ReferencePlane() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::MaterialExpressionBumpOffset::get_ConstCoordinate() {
    return (void*)((uintptr_t)this + 0xf8);
}
