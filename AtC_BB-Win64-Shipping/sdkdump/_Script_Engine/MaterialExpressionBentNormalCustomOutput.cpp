#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionBentNormalCustomOutput.hpp"
#include "MaterialExpressionCustomOutput.hpp"
void* _Script_Engine::MaterialExpressionBentNormalCustomOutput::get_Input() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionBentNormalCustomOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionBentNormalCustomOutput");
    return result;
}
