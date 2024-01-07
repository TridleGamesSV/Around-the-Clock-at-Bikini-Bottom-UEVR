#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BuildPromotionTestSettings {
    void* get_DefaultStaticMeshAsset();
    void* get_ImportWorkflow();
    void* get_OpenAssets();
    void* get_NewProjectSettings();
    void* get_SourceControlMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
