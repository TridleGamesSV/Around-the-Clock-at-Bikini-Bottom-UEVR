#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Engine.hpp"
#include "GameEngine.hpp"
#include "GameInstance.hpp"
float& _Script_Engine::GameEngine::get_MaxDeltaTime() {
    return *(float*)((uintptr_t)this + 0xe08);
}
float& _Script_Engine::GameEngine::get_ServerFlushLogInterval() {
    return *(float*)((uintptr_t)this + 0xe0c);
}
_Script_Engine::GameInstance*& _Script_Engine::GameEngine::get_GameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0xe10);
}
_Script_CoreUObject::Class* _Script_Engine::GameEngine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameEngine");
    return result;
}
