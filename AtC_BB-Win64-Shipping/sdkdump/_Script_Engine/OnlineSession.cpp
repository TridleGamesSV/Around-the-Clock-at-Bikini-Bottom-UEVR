#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OnlineSession.hpp"
_Script_CoreUObject::Class* _Script_Engine::OnlineSession::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.OnlineSession");
    return result;
}
