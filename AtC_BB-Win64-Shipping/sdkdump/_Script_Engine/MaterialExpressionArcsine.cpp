#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionArcsine.hpp"
void* _Script_Engine::MaterialExpressionArcsine::get_Input() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionArcsine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionArcsine");
    return result;
}
