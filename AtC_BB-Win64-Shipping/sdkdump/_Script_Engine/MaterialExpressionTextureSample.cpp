#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureBase.hpp"
#include "MaterialExpressionTextureSample.hpp"
void* _Script_Engine::MaterialExpressionTextureSample::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_TextureObject() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_CoordinatesDX() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_ConstCoordinate() {
    return (void*)((uintptr_t)this + 0x164);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_MipValue() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_CoordinatesDY() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_SamplerSource() {
    return (void*)((uintptr_t)this + 0x161);
}
void* _Script_Engine::MaterialExpressionTextureSample::get_MipValueMode() {
    return (void*)((uintptr_t)this + 0x160);
}
bool _Script_Engine::MaterialExpressionTextureSample::get_AutomaticViewMipBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 1 != 0;
}
int32_t& _Script_Engine::MaterialExpressionTextureSample::get_ConstMipValue() {
    return *(int32_t*)((uintptr_t)this + 0x168);
}
void _Script_Engine::MaterialExpressionTextureSample::set_AutomaticViewMipBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSample");
    return result;
}
