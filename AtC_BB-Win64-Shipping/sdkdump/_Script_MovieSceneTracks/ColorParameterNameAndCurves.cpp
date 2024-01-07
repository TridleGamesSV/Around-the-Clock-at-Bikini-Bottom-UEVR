#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ColorParameterNameAndCurves.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::ColorParameterNameAndCurves::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.ColorParameterNameAndCurves");
    return result;
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_RedCurve() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_GreenCurve() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_BlueCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_MovieSceneTracks::ColorParameterNameAndCurves::get_AlphaCurve() {
    return (void*)((uintptr_t)this + 0x160);
}
