#include "..\FUObjectArray.hpp"
#include "AppleARKitBlueprintLibrary.hpp"
#include "AppleARKitFrame.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
bool _Script_AppleARKit::AppleARKitBlueprintLibrary::HitTestAtScreenPosition_TrackingSpace(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, void* Types, void*& OutResults) {
    return;
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.AppleARKitBlueprintLibrary");
    return result;
}
bool _Script_AppleARKit::AppleARKitBlueprintLibrary::GetCurrentFrame(_Script_CoreUObject::Object* WorldContextObject, _Script_AppleARKit::AppleARKitFrame& OutCurrentFrame) {
    return;
}
