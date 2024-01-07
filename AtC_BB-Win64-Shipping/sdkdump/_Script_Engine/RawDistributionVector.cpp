#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionVector.hpp"
#include "RawDistribution.hpp"
#include "RawDistributionVector.hpp"
float& _Script_Engine::RawDistributionVector::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::RawDistributionVector::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::RawDistributionVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawDistributionVector");
    return result;
}
void* _Script_Engine::RawDistributionVector::get_MinValueVec() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::RawDistributionVector::get_MaxValueVec() {
    return (void*)((uintptr_t)this + 0x3c);
}
_Script_Engine::DistributionVector*& _Script_Engine::RawDistributionVector::get_Distribution() {
    return *(_Script_Engine::DistributionVector**)((uintptr_t)this + 0x48);
}
