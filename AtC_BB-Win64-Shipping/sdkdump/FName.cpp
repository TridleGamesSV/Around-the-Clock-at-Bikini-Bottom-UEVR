#include "FName.hpp"
std::wstring FName::ToString() {
    using ToStringFn = TArray<wchar_t>* (*)(const FName*, TArray<wchar_t>*);
    static const auto module = GetModuleHandleA("AtC_BB-Win64-Shipping.exe");
    static const auto offset = 0x2818a0;
    static const auto fn = (ToStringFn)((uintptr_t)module + offset);
    static TArray<wchar_t> arr{};
    fn(this, &arr);
    return std::wstring(arr.data, arr.count);
}
