#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationData.hpp"
#include "RecastNavMesh.hpp"
void _Script_Engine::RecastNavMesh::set_bDrawDefaultPolygonCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawNavMeshEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 8 != 0;
}
float& _Script_Engine::RecastNavMesh::get_DefaultDrawDistance() {
    return *(float*)((uintptr_t)this + 0x510);
}
bool _Script_Engine::RecastNavMesh::get_bDrawTriangleEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 1 != 0;
}
bool _Script_Engine::RecastNavMesh::get_bDrawPolyEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 2 != 0;
}
float& _Script_Engine::RecastNavMesh::get_MaxSimplificationError() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
void _Script_Engine::RecastNavMesh::set_bDrawTriangleEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RecastNavMesh::set_bDrawPolyEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::RecastNavMesh::set_bDrawNavMeshEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawFilledPolys() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 4 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawFilledPolys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::RecastNavMesh::set_bPerformVoxelFiltering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawTileBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 16 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawTileBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawPathCollidingGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 32 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawPathCollidingGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawTileLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 64 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawTileLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawPolygonLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 128 != 0;
}
void _Script_Engine::RecastNavMesh::set_bMarkLowHeightAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::RecastNavMesh::set_bDrawPolygonLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawDefaultPolygonCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 1 != 0;
}
void* _Script_Engine::RecastNavMesh::get_LayerPartitioning() {
    return (void*)((uintptr_t)this + 0x51d);
}
bool _Script_Engine::RecastNavMesh::get_bDrawLabelsOnPathNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 2 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawLabelsOnPathNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 4 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawFailedNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 8 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawFailedNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 16 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDrawClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawOctree() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 32 != 0;
}
int32_t& _Script_Engine::RecastNavMesh::get_PolyRefNavPolyBits() {
    return *(int32_t*)((uintptr_t)this + 0x508);
}
void _Script_Engine::RecastNavMesh::set_bDrawOctree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDistinctlyDrawTilesBeingBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 64 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDistinctlyDrawTilesBeingBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDrawNavMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c1 + 0)) & 128 != 0;
}
float& _Script_Engine::RecastNavMesh::get_DefaultMaxSearchNodes() {
    return *(float*)((uintptr_t)this + 0x514);
}
void _Script_Engine::RecastNavMesh::set_bDrawNavMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::RecastNavMesh::get_DrawOffset() {
    return *(float*)((uintptr_t)this + 0x4c4);
}
float& _Script_Engine::RecastNavMesh::get_MinRegionArea() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
bool _Script_Engine::RecastNavMesh::get_bFixedTilePoolSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c8 + 0)) & 1 != 0;
}
bool _Script_Engine::RecastNavMesh::get_bPerformVoxelFiltering() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 2 != 0;
}
void _Script_Engine::RecastNavMesh::set_bFixedTilePoolSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::RecastNavMesh::get_TilePoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x4cc);
}
float& _Script_Engine::RecastNavMesh::get_TileSizeUU() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Script_Engine::RecastNavMesh::get_CellSize() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
void _Script_Engine::RecastNavMesh::set_bStoreEmptyTileLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::RecastNavMesh::get_CellHeight() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
float& _Script_Engine::RecastNavMesh::get_AgentRadius() {
    return *(float*)((uintptr_t)this + 0x4dc);
}
float& _Script_Engine::RecastNavMesh::get_AgentHeight() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
float& _Script_Engine::RecastNavMesh::get_AgentMaxHeight() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
int32_t& _Script_Engine::RecastNavMesh::get_PolyRefSaltBits() {
    return *(int32_t*)((uintptr_t)this + 0x50c);
}
float& _Script_Engine::RecastNavMesh::get_AgentMaxSlope() {
    return *(float*)((uintptr_t)this + 0x4e8);
}
float& _Script_Engine::RecastNavMesh::get_AgentMaxStepHeight() {
    return *(float*)((uintptr_t)this + 0x4ec);
}
int32_t& _Script_Engine::RecastNavMesh::get_RegionChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x520);
}
float& _Script_Engine::RecastNavMesh::get_MergeRegionSize() {
    return *(float*)((uintptr_t)this + 0x4f4);
}
int32_t& _Script_Engine::RecastNavMesh::get_MaxSimultaneousTileGenerationJobsCount() {
    return *(int32_t*)((uintptr_t)this + 0x4fc);
}
int32_t& _Script_Engine::RecastNavMesh::get_TileNumberHardLimit() {
    return *(int32_t*)((uintptr_t)this + 0x500);
}
int32_t& _Script_Engine::RecastNavMesh::get_PolyRefTileBits() {
    return *(int32_t*)((uintptr_t)this + 0x504);
}
float& _Script_Engine::RecastNavMesh::get_DefaultMaxHierarchicalSearchNodes() {
    return *(float*)((uintptr_t)this + 0x518);
}
void* _Script_Engine::RecastNavMesh::get_RegionPartitioning() {
    return (void*)((uintptr_t)this + 0x51c);
}
int32_t& _Script_Engine::RecastNavMesh::get_LayerChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x524);
}
bool _Script_Engine::RecastNavMesh::get_bSortNavigationAreasByCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 1 != 0;
}
void _Script_Engine::RecastNavMesh::set_bSortNavigationAreasByCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bMarkLowHeightAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 4 != 0;
}
bool _Script_Engine::RecastNavMesh::get_bFilterLowSpanSequences() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 8 != 0;
}
void _Script_Engine::RecastNavMesh::set_bFilterLowSpanSequences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bFilterLowSpanFromTileCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 16 != 0;
}
void _Script_Engine::RecastNavMesh::set_bFilterLowSpanFromTileCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bDoFullyAsyncNavDataGathering() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 32 != 0;
}
void _Script_Engine::RecastNavMesh::set_bDoFullyAsyncNavDataGathering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bUseBetterOffsetsFromCorners() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 64 != 0;
}
void _Script_Engine::RecastNavMesh::set_bUseBetterOffsetsFromCorners(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bStoreEmptyTileLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 128 != 0;
}
bool _Script_Engine::RecastNavMesh::get_bUseVirtualFilters() {
    return (*(uint8_t*)((uintptr_t)this + 0x529 + 0)) & 1 != 0;
}
void _Script_Engine::RecastNavMesh::set_bUseVirtualFilters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x529 + 0);
    *(uint8_t*)((uintptr_t)this + 0x529 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bAllowNavLinkAsPathEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x529 + 0)) & 2 != 0;
}
void _Script_Engine::RecastNavMesh::set_bAllowNavLinkAsPathEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x529 + 0);
    *(uint8_t*)((uintptr_t)this + 0x529 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::RecastNavMesh::get_bUseVoxelCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x529 + 0)) & 4 != 0;
}
void _Script_Engine::RecastNavMesh::set_bUseVoxelCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x529 + 0);
    *(uint8_t*)((uintptr_t)this + 0x529 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::RecastNavMesh::get_TileSetUpdateInterval() {
    return *(float*)((uintptr_t)this + 0x52c);
}
float& _Script_Engine::RecastNavMesh::get_HeuristicScale() {
    return *(float*)((uintptr_t)this + 0x530);
}
float& _Script_Engine::RecastNavMesh::get_VerticalDeviationFromGroundCompensation() {
    return *(float*)((uintptr_t)this + 0x534);
}
_Script_CoreUObject::Class* _Script_Engine::RecastNavMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RecastNavMesh");
    return result;
}
