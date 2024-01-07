#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetConnection.hpp"
#include "WebSocketConnection.hpp"
_Script_CoreUObject::Class* _Script_HTML5Networking::WebSocketConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HTML5Networking.WebSocketConnection");
    return result;
}
