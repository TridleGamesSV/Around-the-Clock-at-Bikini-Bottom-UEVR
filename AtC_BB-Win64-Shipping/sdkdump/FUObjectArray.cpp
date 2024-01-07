#include "FUObjectArray.hpp"
#include "FUObjectItem.hpp"
#include "_Script_CoreUObject\Object.hpp"
FUObjectItem* FUObjectArray::get_object(int32_t index) {
    return (FUObjectItem*)((uintptr_t)get_objects_ptr() + (index * 24));
}
FUObjectArray* FUObjectArray::get() {
    static const auto module = GetModuleHandleA("AtC_BB-Win64-Shipping.exe");
    static const auto offset = 0x2abbea0;
    return (FUObjectArray*)((uintptr_t)module + offset);
}
bool FUObjectArray::is_chunked() {
    return false;
}
void* FUObjectArray::get_objects_ptr() {
    return *(void**)((uintptr_t)this + 16);
}
size_t FUObjectArray::get_objects_offset() {
    return 0x10;
}
bool FUObjectArray::is_inlined() {
    return false;
}
size_t FUObjectArray::get_item_distance() {
    return 0x18;
}
int32_t FUObjectArray::get_object_count() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Object* FUObjectArray::find_uobject(std::wstring_view name) {
    for (int32_t i = 0; i < get_object_count(); ++i) {
        const auto item = get_object(i); // FUObjectItem*
        if (item == nullptr) { continue; }
        const auto object = item->object; // UObject*
        if (object == nullptr) { continue; }
        if (object->get_full_name() == name) { return object; }
    }
    return nullptr;
}
