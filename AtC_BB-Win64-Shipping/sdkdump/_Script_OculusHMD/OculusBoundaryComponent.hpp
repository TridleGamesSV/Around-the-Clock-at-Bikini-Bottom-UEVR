#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "BoundaryTestResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct OculusBoundaryComponent : public _Script_Engine::ActorComponent {
    void* get_OnOuterBoundaryTriggered();
    void* get_OnOuterBoundaryReturned();
    static _Script_CoreUObject::Class* static_class();
    bool SetOuterBoundaryColor(_Script_CoreUObject::Color InBoundaryColor);
    bool ResetOuterBoundaryColor();
    bool RequestOuterBoundaryVisible(bool BoundaryVisible);
    bool IsOuterBoundaryTriggered();
    bool IsOuterBoundaryDisplayed();
    _Script_OculusHMD::BoundaryTestResult GetTriggeredPlayAreaInfo(void* DeviceType);
    void* GetTriggeredOuterBoundaryInfo();
    void* GetPlayAreaPoints();
    _Script_CoreUObject::Vector GetPlayAreaDimensions();
    void* GetOuterBoundaryPoints();
    _Script_CoreUObject::Vector GetOuterBoundaryDimensions();
    _Script_OculusHMD::BoundaryTestResult CheckIfPointWithinPlayArea(_Script_CoreUObject::Vector Point);
    _Script_OculusHMD::BoundaryTestResult CheckIfPointWithinOuterBounds(_Script_CoreUObject::Vector Point);
}; // Size: 0x28
#pragma pack(pop)
}
