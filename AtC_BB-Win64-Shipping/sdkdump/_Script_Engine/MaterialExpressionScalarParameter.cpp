#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionParameter.hpp"
#include "MaterialExpressionScalarParameter.hpp"
float& _Script_Engine::MaterialExpressionScalarParameter::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::MaterialExpressionScalarParameter::get_SliderMax() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::MaterialExpressionScalarParameter::get_SliderMin() {
    return *(float*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionScalarParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionScalarParameter");
    return result;
}
