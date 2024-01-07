#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TableViewBase.hpp"
#include "TileView.hpp"
void* _Script_UMG::TileView::get_OnGenerateTileEvent() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::TileView::get_Items() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_UMG::TileView::get_ItemWidth() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_UMG::TileView::get_ItemHeight() {
    return *(float*)((uintptr_t)this + 0x104);
}
void* _Script_UMG::TileView::get_SelectionMode() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_UMG::TileView::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TileView");
    return result;
}
void _Script_UMG::TileView::SetItemWidth(float Width) {
    return;
}
void _Script_UMG::TileView::SetItemHeight(float Height) {
    return;
}
void _Script_UMG::TileView::RequestListRefresh() {
    return;
}
