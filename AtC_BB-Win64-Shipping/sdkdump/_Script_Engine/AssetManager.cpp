#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetManager.hpp"
void _Script_Engine::AssetManager::set_bIncludeOnlyOnDiskAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x271 + 0);
    *(uint8_t*)((uintptr_t)this + 0x271 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AssetManager::set_bShouldUseSynchronousLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26a + 0);
    *(uint8_t*)((uintptr_t)this + 0x26a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetManager::get_ObjectReferenceList() {
    return (void*)((uintptr_t)this + 0x258);
}
bool _Script_Engine::AssetManager::get_bIsGlobalAsyncScanEnvironment() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bShouldGuessTypeAndName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x269 + 0);
    *(uint8_t*)((uintptr_t)this + 0x269 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::AssetManager::set_bIsGlobalAsyncScanEnvironment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bShouldGuessTypeAndName() {
    return (*(uint8_t*)((uintptr_t)this + 0x269 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManager::get_bShouldUseSynchronousLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x26a + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManager::get_bIsLoadingFromPakFiles() {
    return (*(uint8_t*)((uintptr_t)this + 0x26b + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsLoadingFromPakFiles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26b + 0);
    *(uint8_t*)((uintptr_t)this + 0x26b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bShouldAcquireMissingChunksOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bShouldAcquireMissingChunksOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bOnlyCookProductionAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0x26d + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bOnlyCookProductionAssets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26d + 0);
    *(uint8_t*)((uintptr_t)this + 0x26d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIsBulkScanning() {
    return (*(uint8_t*)((uintptr_t)this + 0x26e + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsBulkScanning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26e + 0);
    *(uint8_t*)((uintptr_t)this + 0x26e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIsManagementDatabaseCurrent() {
    return (*(uint8_t*)((uintptr_t)this + 0x26f + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bIsManagementDatabaseCurrent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26f + 0);
    *(uint8_t*)((uintptr_t)this + 0x26f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetManager::get_bIncludeOnlyOnDiskAssets() {
    return (*(uint8_t*)((uintptr_t)this + 0x271 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetManager::get_bUpdateManagementDatabaseAfterScan() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Script_Engine::AssetManager::set_bUpdateManagementDatabaseAfterScan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::AssetManager::get_NumberOfSpawnedNotifications() {
    return *(int32_t*)((uintptr_t)this + 0x274);
}
_Script_CoreUObject::Class* _Script_Engine::AssetManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AssetManager");
    return result;
}
