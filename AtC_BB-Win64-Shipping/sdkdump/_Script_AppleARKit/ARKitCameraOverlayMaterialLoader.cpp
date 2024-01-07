#include "..\FUObjectArray.hpp"
#include "ARKitCameraOverlayMaterialLoader.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
_Script_Engine::MaterialInterface*& _Script_AppleARKit::ARKitCameraOverlayMaterialLoader::get_DefaultCameraOverlayMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AppleARKit::ARKitCameraOverlayMaterialLoader::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.ARKitCameraOverlayMaterialLoader");
    return result;
}
