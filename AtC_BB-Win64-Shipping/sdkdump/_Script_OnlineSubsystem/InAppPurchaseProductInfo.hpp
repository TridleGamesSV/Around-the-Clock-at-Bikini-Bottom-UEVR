#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystem {
#pragma pack(push, 1)
struct InAppPurchaseProductInfo {
    void* get_Identifier();
    void* get_TransactionIdentifier();
    void* get_DisplayName();
    void* get_DisplayDescription();
    void* get_DisplayPrice();
    float& get_RawPrice();
    void* get_CurrencyCode();
    void* get_CurrencySymbol();
    void* get_DecimalSeparator();
    void* get_GroupingSeparator();
    void* get_ReceiptData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
