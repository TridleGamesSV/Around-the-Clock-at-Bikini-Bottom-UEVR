#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntime {
#pragma pack(push, 1)
struct ClothConfig {
    void* get_WindMethod();
    void* get_VerticalConstraintConfig();
    void* get_HorizontalConstraintConfig();
    void* get_BendConstraintConfig();
    void* get_ShearConstraintConfig();
    float& get_SelfCollisionRadius();
    float& get_SelfCollisionStiffness();
    float& get_SelfCollisionCullScale();
    void* get_Damping();
    float& get_Friction();
    float& get_WindDragCoefficient();
    float& get_WindLiftCoefficient();
    void* get_LinearDrag();
    void* get_AngularDrag();
    void* get_LinearInertiaScale();
    void* get_AngularInertiaScale();
    void* get_CentrifugalInertiaScale();
    float& get_SolverFrequency();
    float& get_StiffnessFrequency();
    float& get_GravityScale();
    float& get_TetherStiffness();
    float& get_TetherLimit();
    float& get_CollisionThickness();
    float& get_AnimDriveSpringStiffness();
    float& get_AnimDriveDamperStiffness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
