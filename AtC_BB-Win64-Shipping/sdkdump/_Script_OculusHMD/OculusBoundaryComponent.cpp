#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "BoundaryTestResult.hpp"
#include "OculusBoundaryComponent.hpp"
void* _Script_OculusHMD::OculusBoundaryComponent::get_OnOuterBoundaryTriggered() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_OculusHMD::OculusBoundaryComponent::get_OnOuterBoundaryReturned() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_OculusHMD::OculusBoundaryComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OculusHMD.OculusBoundaryComponent");
    return result;
}
void* _Script_OculusHMD::OculusBoundaryComponent::GetPlayAreaPoints() {
    return;
}
bool _Script_OculusHMD::OculusBoundaryComponent::SetOuterBoundaryColor(_Script_CoreUObject::Color InBoundaryColor) {
    return;
}
bool _Script_OculusHMD::OculusBoundaryComponent::ResetOuterBoundaryColor() {
    return;
}
bool _Script_OculusHMD::OculusBoundaryComponent::IsOuterBoundaryDisplayed() {
    return;
}
bool _Script_OculusHMD::OculusBoundaryComponent::RequestOuterBoundaryVisible(bool BoundaryVisible) {
    return;
}
bool _Script_OculusHMD::OculusBoundaryComponent::IsOuterBoundaryTriggered() {
    return;
}
_Script_OculusHMD::BoundaryTestResult _Script_OculusHMD::OculusBoundaryComponent::GetTriggeredPlayAreaInfo(void* DeviceType) {
    return;
}
void* _Script_OculusHMD::OculusBoundaryComponent::GetTriggeredOuterBoundaryInfo() {
    return;
}
_Script_CoreUObject::Vector _Script_OculusHMD::OculusBoundaryComponent::GetPlayAreaDimensions() {
    return;
}
void* _Script_OculusHMD::OculusBoundaryComponent::GetOuterBoundaryPoints() {
    return;
}
_Script_CoreUObject::Vector _Script_OculusHMD::OculusBoundaryComponent::GetOuterBoundaryDimensions() {
    return;
}
_Script_OculusHMD::BoundaryTestResult _Script_OculusHMD::OculusBoundaryComponent::CheckIfPointWithinPlayArea(_Script_CoreUObject::Vector Point) {
    return;
}
_Script_OculusHMD::BoundaryTestResult _Script_OculusHMD::OculusBoundaryComponent::CheckIfPointWithinOuterBounds(_Script_CoreUObject::Vector Point) {
    return;
}
