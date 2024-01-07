#include "..\FUObjectArray.hpp"
#include "ARBlueprintLibrary.hpp"
#include "ARLightEstimate.hpp"
#include "ARPin.hpp"
#include "ARSessionConfig.hpp"
#include "ARSessionStatus.hpp"
#include "ARTraceResult.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_AugmentedReality::ARPin* _Script_AugmentedReality::ARBlueprintLibrary::PinComponent(_Script_Engine::SceneComponent* ComponentToPin, _Script_CoreUObject::Transform& PinToWorldTransform, _Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, void* DebugName) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARBlueprintLibrary");
    return result;
}
void _Script_AugmentedReality::ARBlueprintLibrary::UnpinComponent(_Script_Engine::SceneComponent* ComponentToUnpin) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::StopARSession() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetTrackingQuality() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::StartARSession(_Script_AugmentedReality::ARSessionConfig* SessionConfig) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::SetAlignmentTransform(_Script_CoreUObject::Transform& InAlignmentTransform) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::RemovePin(_Script_AugmentedReality::ARPin* PinToRemove) {
    return;
}
_Script_AugmentedReality::ARPin* _Script_AugmentedReality::ARBlueprintLibrary::PinComponentToTraceResult(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARTraceResult& TraceResult, void* DebugName) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::PauseARSession() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::LineTraceTrackedObjects(_Script_CoreUObject::Vector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon) {
    return;
}
bool _Script_AugmentedReality::ARBlueprintLibrary::IsSessionTypeSupported(void* SessionType) {
    return;
}
_Script_AugmentedReality::ARSessionConfig* _Script_AugmentedReality::ARBlueprintLibrary::GetSessionConfig() {
    return;
}
_Script_AugmentedReality::ARLightEstimate* _Script_AugmentedReality::ARBlueprintLibrary::GetCurrentLightEstimate() {
    return;
}
_Script_AugmentedReality::ARSessionStatus _Script_AugmentedReality::ARBlueprintLibrary::GetARSessionStatus() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllPins() {
    return;
}
void* _Script_AugmentedReality::ARBlueprintLibrary::GetAllGeometries() {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::DebugDrawTrackedGeometry(_Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float OutlineThickness, float PersistForSeconds) {
    return;
}
void _Script_AugmentedReality::ARBlueprintLibrary::DebugDrawPin(_Script_AugmentedReality::ARPin* ARPin, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float Scale, float PersistForSeconds) {
    return;
}
