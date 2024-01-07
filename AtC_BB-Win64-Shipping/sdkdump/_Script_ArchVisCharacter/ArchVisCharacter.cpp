#include "..\FUObjectArray.hpp"
#include "ArchVisCharacter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAxisName() {
    return (void*)((uintptr_t)this + 0x720);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Yaw() {
    return *(float*)((uintptr_t)this + 0x784);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Pitch() {
    return *(float*)((uintptr_t)this + 0x780);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAxisName() {
    return (void*)((uintptr_t)this + 0x740);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x730);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x750);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveForwardAxisName() {
    return (void*)((uintptr_t)this + 0x760);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveRightAxisName() {
    return (void*)((uintptr_t)this + 0x770);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharacter");
    return result;
}
