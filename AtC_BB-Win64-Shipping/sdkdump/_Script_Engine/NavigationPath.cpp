#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavigationPath.hpp"
void* _Script_Engine::NavigationPath::get_PathUpdatedNotifier() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Engine::NavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, _Script_CoreUObject::LinearColor PathColor) {
    return;
}
void* _Script_Engine::NavigationPath::get_PathPoints() {
    return (void*)((uintptr_t)this + 0x38);
}
float _Script_Engine::NavigationPath::GetPathLength() {
    return;
}
void* _Script_Engine::NavigationPath::get_RecalculateOnInvalidation() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_Engine::NavigationPath::EnableRecalculationOnInvalidation(void* DoRecalculation) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::NavigationPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationPath");
    return result;
}
bool _Script_Engine::NavigationPath::IsValid() {
    return;
}
bool _Script_Engine::NavigationPath::IsStringPulled() {
    return;
}
bool _Script_Engine::NavigationPath::IsPartial() {
    return;
}
float _Script_Engine::NavigationPath::GetPathCost() {
    return;
}
void* _Script_Engine::NavigationPath::GetDebugString() {
    return;
}
