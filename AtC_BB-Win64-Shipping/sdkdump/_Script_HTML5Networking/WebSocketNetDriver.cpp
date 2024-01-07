#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetDriver.hpp"
#include "WebSocketNetDriver.hpp"
int32_t& _Script_HTML5Networking::WebSocketNetDriver::get_WebSocketPort() {
    return *(int32_t*)((uintptr_t)this + 0x508);
}
_Script_CoreUObject::Class* _Script_HTML5Networking::WebSocketNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HTML5Networking.WebSocketNetDriver");
    return result;
}
