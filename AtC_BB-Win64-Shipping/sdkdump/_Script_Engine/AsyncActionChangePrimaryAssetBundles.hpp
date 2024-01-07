#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AsyncActionLoadPrimaryAssetBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AsyncActionChangePrimaryAssetBundles : public AsyncActionLoadPrimaryAssetBase {
    void* get_Completed();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::AsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(void*& PrimaryAssetList, void*& AddBundles, void*& RemoveBundles);
    _Script_Engine::AsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(void*& NewBundles, void*& OldBundles);
}; // Size: 0x28
#pragma pack(pop)
}
