#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScalarParameterNameAndCurve.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::ScalarParameterNameAndCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.ScalarParameterNameAndCurve");
    return result;
}
void* _Script_MovieSceneTracks::ScalarParameterNameAndCurve::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieSceneTracks::ScalarParameterNameAndCurve::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::ScalarParameterNameAndCurve::get_ParameterCurve() {
    return (void*)((uintptr_t)this + 0x10);
}
