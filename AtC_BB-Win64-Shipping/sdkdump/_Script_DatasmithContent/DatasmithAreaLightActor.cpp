#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAreaLightActor.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_LightShape() {
    return (void*)((uintptr_t)this + 0x318);
}
float& _Script_DatasmithContent::DatasmithAreaLightActor::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x334);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Dimensions() {
    return (void*)((uintptr_t)this + 0x31c);
}
void* _Script_DatasmithContent::DatasmithAreaLightActor::get_Color() {
    return (void*)((uintptr_t)this + 0x324);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAreaLightActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAreaLightActor");
    return result;
}
