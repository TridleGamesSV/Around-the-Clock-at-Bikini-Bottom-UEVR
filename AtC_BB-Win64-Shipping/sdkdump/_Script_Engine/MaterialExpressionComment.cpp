#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionComment.hpp"
void* _Script_Engine::MaterialExpressionComment::get_Text() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::MaterialExpressionComment::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::MaterialExpressionComment::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::MaterialExpressionComment::get_CommentColor() {
    return (void*)((uintptr_t)this + 0x78);
}
int32_t& _Script_Engine::MaterialExpressionComment::get_FontSize() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionComment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionComment");
    return result;
}
