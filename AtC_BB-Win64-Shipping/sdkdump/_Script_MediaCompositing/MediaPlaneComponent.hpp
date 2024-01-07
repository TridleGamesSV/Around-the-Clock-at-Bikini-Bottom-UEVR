#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MediaPlaneParameters.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MediaPlaneComponent : public _Script_Engine::PrimitiveComponent {
    void* get_Plane();
    static _Script_CoreUObject::Class* static_class();
    void SetMediaPlane(_Script_MediaCompositing::MediaPlaneParameters Plane);
    void OnMediaTextureChanged();
    _Script_MediaCompositing::MediaPlaneParameters GetPlane();
}; // Size: 0x28
#pragma pack(pop)
}
