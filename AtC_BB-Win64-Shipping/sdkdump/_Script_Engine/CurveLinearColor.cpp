#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "CurveBase.hpp"
#include "CurveLinearColor.hpp"
void* _Script_Engine::CurveLinearColor::get_FloatCurves() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::CurveLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveLinearColor");
    return result;
}
_Script_CoreUObject::LinearColor _Script_Engine::CurveLinearColor::GetLinearColorValue(float InTime) {
    return;
}
