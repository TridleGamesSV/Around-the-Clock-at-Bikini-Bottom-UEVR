#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSceneDepth.hpp"
void* _Script_Engine::MaterialExpressionSceneDepth::get_Input() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionSceneDepth::get_InputMode() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionSceneDepth::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::MaterialExpressionSceneDepth::get_ConstInput() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSceneDepth::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSceneDepth");
    return result;
}
