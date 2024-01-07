#include "..\FUObjectArray.hpp"
#include "AppleARKitAnchor.hpp"
#include "AppleARKitHitTestResult.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AppleARKit::AppleARKitAnchor*& _Script_AppleARKit::AppleARKitHitTestResult::get_Anchor() {
    return *(_Script_AppleARKit::AppleARKitAnchor**)((uintptr_t)this + 0x40);
}
void* _Script_AppleARKit::AppleARKitHitTestResult::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AppleARKit::AppleARKitHitTestResult::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AppleARKit::AppleARKitHitTestResult::get_Distance() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitHitTestResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AppleARKit.AppleARKitHitTestResult");
    return result;
}
