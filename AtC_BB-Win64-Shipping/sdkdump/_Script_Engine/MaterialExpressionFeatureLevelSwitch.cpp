#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFeatureLevelSwitch.hpp"
void* _Script_Engine::MaterialExpressionFeatureLevelSwitch::get_Default() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionFeatureLevelSwitch::get_Inputs() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFeatureLevelSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFeatureLevelSwitch");
    return result;
}
