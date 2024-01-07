#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_HeadMountedDisplay\MotionControllerComponent.hpp"
#include "DeprecatedGearVRControllerComponent.hpp"
_Script_Engine::StaticMesh*& _Script_OculusHMD::DeprecatedGearVRControllerComponent::get_ControllerMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_OculusHMD::DeprecatedGearVRControllerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OculusHMD.DeprecatedGearVRControllerComponent");
    return result;
}
_Script_HeadMountedDisplay::MotionControllerComponent* _Script_OculusHMD::DeprecatedGearVRControllerComponent::GetMotionController() {
    return;
}
_Script_Engine::StaticMeshComponent* _Script_OculusHMD::DeprecatedGearVRControllerComponent::GetControllerMesh() {
    return;
}
