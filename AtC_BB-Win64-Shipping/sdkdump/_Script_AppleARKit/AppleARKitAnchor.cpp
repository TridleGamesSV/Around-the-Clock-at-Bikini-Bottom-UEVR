#include "..\FUObjectArray.hpp"
#include "AppleARKitAnchor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
void* _Script_AppleARKit::AppleARKitAnchor::get_Identifier() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitAnchor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.AppleARKitAnchor");
    return result;
}
_Script_CoreUObject::Transform _Script_AppleARKit::AppleARKitAnchor::GetTransform() {
    return;
}
