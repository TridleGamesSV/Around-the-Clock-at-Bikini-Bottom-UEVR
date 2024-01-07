#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSphereMask.hpp"
void* _Script_Engine::MaterialExpressionSphereMask::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_B() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MaterialExpressionSphereMask::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_Radius() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionSphereMask::get_Hardness() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::MaterialExpressionSphereMask::get_HardnessPercent() {
    return *(float*)((uintptr_t)this + 0x124);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSphereMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSphereMask");
    return result;
}
