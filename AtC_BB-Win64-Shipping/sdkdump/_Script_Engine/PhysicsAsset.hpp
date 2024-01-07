#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ThumbnailInfo;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsAsset : public _Script_CoreUObject::Object {
    void* get_BoundsBodies();
    void* get_SkeletalBodySetups();
    void* get_ConstraintSetup();
    bool get_bUseAsyncScene();
    void set_bUseAsyncScene(bool value);
    _Script_Engine::ThumbnailInfo*& get_ThumbnailInfo();
    void* get_BodySetup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
