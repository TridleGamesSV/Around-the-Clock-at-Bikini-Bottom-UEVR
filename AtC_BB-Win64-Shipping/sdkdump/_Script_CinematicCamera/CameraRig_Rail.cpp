#include "..\FUObjectArray.hpp"
#include "CameraRig_Rail.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
float& _Script_CinematicCamera::CameraRig_Rail::get_CurrentPositionOnRail() {
    return *(float*)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Rail::get_TransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::SplineComponent*& _Script_CinematicCamera::CameraRig_Rail::get_RailSplineComponent() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::SceneComponent*& _Script_CinematicCamera::CameraRig_Rail::get_RailCameraMount() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::CameraRig_Rail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CinematicCamera.CameraRig_Rail");
    return result;
}
