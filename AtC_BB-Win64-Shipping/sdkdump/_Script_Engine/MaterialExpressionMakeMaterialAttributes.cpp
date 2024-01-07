#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMakeMaterialAttributes.hpp"
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Opacity() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_CustomizedUVs() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_BaseColor() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Metallic() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Normal() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Roughness() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Specular() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_OpacityMask() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_WorldDisplacement() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_TessellationMultiplier() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoat() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_ClearCoatRoughness() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_AmbientOcclusion() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Script_Engine::MaterialExpressionMakeMaterialAttributes::get_Refraction() {
    return (void*)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMakeMaterialAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMakeMaterialAttributes");
    return result;
}
