#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionFloatConstant.hpp"
#include "DistributionFloatParameterBase.hpp"
float& _Script_Engine::DistributionFloatParameterBase::get_MaxOutput() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::DistributionFloatParameterBase::get_MinOutput() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::DistributionFloatParameterBase::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::DistributionFloatParameterBase::get_MinInput() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::DistributionFloatParameterBase::get_MaxInput() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionFloatParameterBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DistributionFloatParameterBase");
    return result;
}
void* _Script_Engine::DistributionFloatParameterBase::get_ParamMode() {
    return (void*)((uintptr_t)this + 0x58);
}
