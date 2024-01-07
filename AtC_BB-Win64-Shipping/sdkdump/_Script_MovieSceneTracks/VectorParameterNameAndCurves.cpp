#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorParameterNameAndCurves.hpp"
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_XCurve() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_YCurve() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_MovieSceneTracks::VectorParameterNameAndCurves::get_ZCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::VectorParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.VectorParameterNameAndCurves");
    return result;
}
