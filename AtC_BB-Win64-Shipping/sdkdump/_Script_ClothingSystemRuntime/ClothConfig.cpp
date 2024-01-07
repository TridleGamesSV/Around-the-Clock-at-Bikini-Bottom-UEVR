#include "..\FUObjectArray.hpp"
#include "ClothConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntime::ClothConfig::get_ShearConstraintConfig() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_WindMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_VerticalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionStiffness() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_HorizontalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_BendConstraintConfig() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionCullScale() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_Damping() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_Friction() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_WindDragCoefficient() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_WindLiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_LinearDrag() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_AngularDrag() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_LinearInertiaScale() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_AngularInertiaScale() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_CentrifugalInertiaScale() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SolverFrequency() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_StiffnessFrequency() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_TetherStiffness() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_TetherLimit() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_AnimDriveSpringStiffness() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_AnimDriveDamperStiffness() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothConfig");
    return result;
}
