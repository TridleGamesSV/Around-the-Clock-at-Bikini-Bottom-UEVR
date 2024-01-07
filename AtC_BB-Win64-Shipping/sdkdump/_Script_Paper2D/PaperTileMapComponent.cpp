#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "PaperTileInfo.hpp"
#include "PaperTileLayer.hpp"
#include "PaperTileMap.hpp"
#include "PaperTileMapComponent.hpp"
#include "PaperTileSet.hpp"
_Script_Paper2D::PaperTileInfo _Script_Paper2D::PaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer) {
    return;
}
void* _Script_Paper2D::PaperTileMapComponent::get_TileMapColor() {
    return (void*)((uintptr_t)this + 0x6b8);
}
int32_t& _Script_Paper2D::PaperTileMapComponent::get_MapWidth() {
    return *(int32_t*)((uintptr_t)this + 0x688);
}
_Script_Paper2D::PaperTileLayer* _Script_Paper2D::PaperTileMapComponent::AddNewLayer() {
    return;
}
void* _Script_Paper2D::PaperTileMapComponent::get_TileLayers() {
    return (void*)((uintptr_t)this + 0x6a8);
}
int32_t& _Script_Paper2D::PaperTileMapComponent::get_MapHeight() {
    return *(int32_t*)((uintptr_t)this + 0x68c);
}
_Script_Engine::MaterialInterface*& _Script_Paper2D::PaperTileMapComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x6a0);
}
bool _Script_Paper2D::PaperTileMapComponent::OwnsTileMap() {
    return;
}
int32_t& _Script_Paper2D::PaperTileMapComponent::get_TileWidth() {
    return *(int32_t*)((uintptr_t)this + 0x690);
}
int32_t& _Script_Paper2D::PaperTileMapComponent::get_TileHeight() {
    return *(int32_t*)((uintptr_t)this + 0x694);
}
_Script_Paper2D::PaperTileSet*& _Script_Paper2D::PaperTileMapComponent::get_DefaultLayerTileSet() {
    return *(_Script_Paper2D::PaperTileSet**)((uintptr_t)this + 0x698);
}
int32_t& _Script_Paper2D::PaperTileMapComponent::get_UseSingleLayerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x6c8);
}
bool _Script_Paper2D::PaperTileMapComponent::get_bUseSingleLayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x6cc + 0)) & 1 != 0;
}
void _Script_Paper2D::PaperTileMapComponent::set_bUseSingleLayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x6cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Paper2D::PaperTileMapComponent::MakeTileMapEditable() {
    return;
}
_Script_Paper2D::PaperTileMap*& _Script_Paper2D::PaperTileMapComponent::get_TileMap() {
    return *(_Script_Paper2D::PaperTileMap**)((uintptr_t)this + 0x6d0);
}
_Script_CoreUObject::Class* _Script_Paper2D::PaperTileMapComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Paper2D.PaperTileMapComponent");
    return result;
}
void _Script_Paper2D::PaperTileMapComponent::SetTileMapColor(_Script_CoreUObject::LinearColor NewColor) {
    return;
}
bool _Script_Paper2D::PaperTileMapComponent::SetTileMap(_Script_Paper2D::PaperTileMap* NewTileMap) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, _Script_Paper2D::PaperTileInfo NewValue) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::SetLayerColor(_Script_CoreUObject::LinearColor NewColor, int32_t Layer) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::RebuildCollision() {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, void*& Points, int32_t LayerIndex, bool bWorldSpace) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Paper2D::PaperTileMapComponent::GetTileMapColor() {
    return;
}
_Script_CoreUObject::Vector _Script_Paper2D::PaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Paper2D::PaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Paper2D::PaperTileMapComponent::GetLayerColor(int32_t Layer) {
    return;
}
void _Script_Paper2D::PaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer) {
    return;
}
