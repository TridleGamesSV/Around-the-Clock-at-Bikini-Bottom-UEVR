#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigidBodyErrorCorrection.hpp"
float& _Script_Engine::RigidBodyErrorCorrection::get_LinearInterpAlpha() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_LinearDeltaThresholdSq() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_BodySpeedThresholdSq() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_LinearRecipFixTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_AngularDeltaThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_AngularInterpAlpha() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_AngularRecipFixTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::RigidBodyErrorCorrection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigidBodyErrorCorrection");
    return result;
}
