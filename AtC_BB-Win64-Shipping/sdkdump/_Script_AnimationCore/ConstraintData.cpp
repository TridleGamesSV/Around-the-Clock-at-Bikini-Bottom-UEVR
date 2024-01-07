#include "..\FUObjectArray.hpp"
#include "ConstraintData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimationCore::ConstraintData::get_Weight() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_AnimationCore::ConstraintData::get_Constraint() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_AnimationCore::ConstraintData::get_bMaintainOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_AnimationCore::ConstraintData::get_TargetNode() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_AnimationCore::ConstraintData::set_bMaintainOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimationCore::ConstraintData::get_Offset() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimationCore::ConstraintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.ConstraintData");
    return result;
}
void* _Script_AnimationCore::ConstraintData::get_CurrentTransform() {
    return (void*)((uintptr_t)this + 0x50);
}
