#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Sight.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AIModule::AISense_Sight::get_MaxTracesPerTick() {
    return *(int32_t*)((uintptr_t)this + 0x1d0);
}
int32_t& _Script_AIModule::AISense_Sight::get_MinQueriesPerTimeSliceCheck() {
    return *(int32_t*)((uintptr_t)this + 0x1d4);
}
double& _Script_AIModule::AISense_Sight::get_MaxTimeSlicePerTick() {
    return *(double*)((uintptr_t)this + 0x1d8);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Sight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Sight");
    return result;
}
float& _Script_AIModule::AISense_Sight::get_MaxQueryImportance() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
float& _Script_AIModule::AISense_Sight::get_HighImportanceQueryDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_AIModule::AISense_Sight::get_SightLimitQueryImportance() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
