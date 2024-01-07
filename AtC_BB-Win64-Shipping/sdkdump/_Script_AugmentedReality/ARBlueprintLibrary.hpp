#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARSessionStatus.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_AugmentedReality {
struct ARLightEstimate;
}
namespace _Script_AugmentedReality {
struct ARSessionConfig;
}
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_AugmentedReality {
struct ARPin;
}
namespace _Script_AugmentedReality {
struct ARTraceResult;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnpinComponent(_Script_Engine::SceneComponent* ComponentToUnpin);
    void StopARSession();
    void StartARSession(_Script_AugmentedReality::ARSessionConfig* SessionConfig);
    void SetAlignmentTransform(_Script_CoreUObject::Transform& InAlignmentTransform);
    void RemovePin(_Script_AugmentedReality::ARPin* PinToRemove);
    _Script_AugmentedReality::ARPin* PinComponentToTraceResult(_Script_Engine::SceneComponent* ComponentToPin, _Script_AugmentedReality::ARTraceResult& TraceResult, void* DebugName);
    _Script_AugmentedReality::ARPin* PinComponent(_Script_Engine::SceneComponent* ComponentToPin, _Script_CoreUObject::Transform& PinToWorldTransform, _Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, void* DebugName);
    void PauseARSession();
    void* LineTraceTrackedObjects(_Script_CoreUObject::Vector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(void* SessionType);
    void* GetTrackingQuality();
    _Script_AugmentedReality::ARSessionConfig* GetSessionConfig();
    _Script_AugmentedReality::ARLightEstimate* GetCurrentLightEstimate();
    _Script_AugmentedReality::ARSessionStatus GetARSessionStatus();
    void* GetAllPins();
    void* GetAllGeometries();
    void DebugDrawTrackedGeometry(_Script_AugmentedReality::ARTrackedGeometry* TrackedGeometry, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(_Script_AugmentedReality::ARPin* ARPin, _Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::LinearColor Color, float Scale, float PersistForSeconds);
}; // Size: 0x28
#pragma pack(pop)
}
