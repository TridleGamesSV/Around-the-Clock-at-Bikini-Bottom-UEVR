#include "..\FUObjectArray.hpp"
#include "AppleARKitAnchor.hpp"
#include "AppleARKitPlaneAnchor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitPlaneAnchor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.AppleARKitPlaneAnchor");
    return result;
}
_Script_CoreUObject::Vector _Script_AppleARKit::AppleARKitPlaneAnchor::GetExtent() {
    return;
}
_Script_CoreUObject::Transform _Script_AppleARKit::AppleARKitPlaneAnchor::GetTransformToCenter() {
    return;
}
_Script_CoreUObject::Vector _Script_AppleARKit::AppleARKitPlaneAnchor::GetCenter() {
    return;
}
