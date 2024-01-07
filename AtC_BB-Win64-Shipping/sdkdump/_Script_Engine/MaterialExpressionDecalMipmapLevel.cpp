#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDecalMipmapLevel.hpp"
float& _Script_Engine::MaterialExpressionDecalMipmapLevel::get_ConstWidth() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionDecalMipmapLevel::get_TextureSize() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::MaterialExpressionDecalMipmapLevel::get_ConstHeight() {
    return *(float*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDecalMipmapLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDecalMipmapLevel");
    return result;
}
