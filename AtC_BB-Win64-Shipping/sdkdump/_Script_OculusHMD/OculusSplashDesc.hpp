#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct OculusSplashDesc {
    void* get_TexturePath();
    void* get_TransformInMeters();
    void* get_QuadSizeInMeters();
    void* get_DeltaRotation();
    void* get_TextureOffset();
    void* get_TextureScale();
    bool get_bNoAlphaChannel();
    void set_bNoAlphaChannel(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
