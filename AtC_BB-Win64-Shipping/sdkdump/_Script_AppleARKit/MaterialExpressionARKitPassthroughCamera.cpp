#include "..\FUObjectArray.hpp"
#include "MaterialExpressionARKitPassthroughCamera.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
void* _Script_AppleARKit::MaterialExpressionARKitPassthroughCamera::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_AppleARKit::MaterialExpressionARKitPassthroughCamera::get_ConstCoordinate() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_AppleARKit::MaterialExpressionARKitPassthroughCamera::get_TextureType() {
    return (void*)((uintptr_t)this + 0x94);
}
_Script_CoreUObject::Class* _Script_AppleARKit::MaterialExpressionARKitPassthroughCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.MaterialExpressionARKitPassthroughCamera");
    return result;
}
