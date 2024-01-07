#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Material.hpp"
#include "MaterialInterface.hpp"
#include "PhysicalMaterial.hpp"
bool _Script_Engine::Material::get_bAllowNegativeEmissiveColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bIsMaterialEditorStatsMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x791 + 0);
    *(uint8_t*)((uintptr_t)this + 0x791 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_BaseColor() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::Material::get_PhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x70);
}
void _Script_Engine::Material::set_bUsedWithMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Material::get_DiffuseColor() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::Material::get_bDisableDepthTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 1 != 0;
}
void* _Script_Engine::Material::get_SpecularColor() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::Material::get_PixelDepthOffset() {
    return (void*)((uintptr_t)this + 0x6c8);
}
void _Script_Engine::Material::set_bScreenSpaceReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Material::get_Metallic() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::Material::get_Normal() {
    return (void*)((uintptr_t)this + 0x1c8);
}
int32_t& _Script_Engine::Material::get_EditorPitch() {
    return *(int32_t*)((uintptr_t)this + 0x758);
}
float& _Script_Engine::Material::get_TranslucentShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x714);
}
void* _Script_Engine::Material::get_Specular() {
    return (void*)((uintptr_t)this + 0x158);
}
int32_t& _Script_Engine::Material::get_NumCustomizedUVs() {
    return *(int32_t*)((uintptr_t)this + 0x704);
}
void* _Script_Engine::Material::get_Roughness() {
    return (void*)((uintptr_t)this + 0x190);
}
float& _Script_Engine::Material::get_TranslucentShadowStartOffset() {
    return *(float*)((uintptr_t)this + 0x738);
}
void* _Script_Engine::Material::get_EmissiveColor() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_Engine::Material::get_Opacity() {
    return (void*)((uintptr_t)this + 0x240);
}
float& _Script_Engine::Material::get_TranslucentBackscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x724);
}
void* _Script_Engine::Material::get_OpacityMask() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Script_Engine::Material::get_MaterialDomain() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::Material::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x2b1);
}
void* _Script_Engine::Material::get_DecalBlendMode() {
    return (void*)((uintptr_t)this + 0x2b2);
}
void* _Script_Engine::Material::get_MaterialDecalResponse() {
    return (void*)((uintptr_t)this + 0x2b3);
}
bool _Script_Engine::Material::get_DitheredLODTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 32 != 0;
}
void* _Script_Engine::Material::get_ShadingModel() {
    return (void*)((uintptr_t)this + 0x2b4);
}
void _Script_Engine::Material::set_bUsedWithSkeletalMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::Material::get_OpacityMaskClipValue() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
bool _Script_Engine::Material::get_bCastDynamicShadowAsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_AllowTranslucentCustomDepthWrites() {
    return (*(uint8_t*)((uintptr_t)this + 0x710 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bCastDynamicShadowAsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_WorldPositionOffset() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_Engine::Material::get_WorldDisplacement() {
    return (void*)((uintptr_t)this + 0x300);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowDensityScale() {
    return *(float*)((uintptr_t)this + 0x718);
}
void* _Script_Engine::Material::get_TessellationMultiplier() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Script_Engine::Material::get_SubsurfaceColor() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::Material::get_ClearCoat() {
    return (void*)((uintptr_t)this + 0x3b0);
}
bool _Script_Engine::Material::get_bGenerateSphericalParticleNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 2 != 0;
}
void* _Script_Engine::Material::get_ClearCoatRoughness() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_Engine::Material::get_AmbientOcclusion() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_Engine::Material::get_Refraction() {
    return (void*)((uintptr_t)this + 0x458);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraRibbons() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 16 != 0;
}
void* _Script_Engine::Material::get_CustomizedUVs() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_Engine::Material::get_TranslucentMultipleScatteringExtinction() {
    return (void*)((uintptr_t)this + 0x728);
}
void* _Script_Engine::Material::get_MaterialAttributes() {
    return (void*)((uintptr_t)this + 0x690);
}
bool _Script_Engine::Material::get_bEnableSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 1 != 0;
}
bool _Script_Engine::Material::get_bUsedWithNiagaraMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bEnableSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bEnableMobileSeparateTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 2 != 0;
}
bool _Script_Engine::Material::get_bTangentSpaceNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bEnableMobileSeparateTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bEnableResponsiveAA() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bEnableResponsiveAA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bScreenSpaceReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 8 != 0;
}
bool _Script_Engine::Material::get_TwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_TwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::Material::set_DitheredLODTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_DitherOpacityMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_DitherOpacityMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::Material::set_bAllowNegativeEmissiveColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::Material::get_TranslucencyLightingMode() {
    return (void*)((uintptr_t)this + 0x708);
}
float& _Script_Engine::Material::get_TranslucencyDirectionalLightingIntensity() {
    return *(float*)((uintptr_t)this + 0x70c);
}
void _Script_Engine::Material::set_AllowTranslucentCustomDepthWrites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x710 + 0);
    *(uint8_t*)((uintptr_t)this + 0x710 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondDensityScale() {
    return *(float*)((uintptr_t)this + 0x71c);
}
float& _Script_Engine::Material::get_TranslucentSelfShadowSecondOpacity() {
    return *(float*)((uintptr_t)this + 0x720);
}
void _Script_Engine::Material::set_bDisableDepthTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_bGenerateSphericalParticleNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Material::set_bTangentSpaceNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUseEmissiveForDynamicAreaLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUseEmissiveForDynamicAreaLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsedWithNiagaraSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 8 != 0;
}
bool _Script_Engine::Material::get_bBlockGI() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bBlockGI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUsedAsSpecialEngineMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUsedAsSpecialEngineMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithSkeletalMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 64 != 0;
}
bool _Script_Engine::Material::get_bUsedWithEditorCompositing() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUsedWithEditorCompositing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsedWithParticleSprites() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithParticleSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithBeamTrails() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithBeamTrails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsedWithMeshParticles() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsedWithNiagaraSprites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Material::set_bUsedWithNiagaraRibbons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::Material::set_bUsedWithNiagaraMeshParticles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bUsedWithStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 64 != 0;
}
bool _Script_Engine::Material::get_bIsMasked() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUsedWithMorphTargets() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUsedWithMorphTargets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUsedWithSplineMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUsedWithSplineMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUsedWithInstancedStaticMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUsedWithInstancedStaticMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsesDistortion() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsesDistortion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bUsedWithClothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 8 != 0;
}
bool _Script_Engine::Material::get_bIsFunctionPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bUsedWithClothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUsedWithUI() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUsedWithUI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bAutomaticallySetUsageInEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bAutomaticallySetUsageInEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bFullyRough() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bFullyRough(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bUseFullPrecision() {
    return (*(uint8_t*)((uintptr_t)this + 0x73e + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bUseFullPrecision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73e + 0);
    *(uint8_t*)((uintptr_t)this + 0x73e + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bUseLightmapDirectionality() {
    return (*(uint8_t*)((uintptr_t)this + 0x73f + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bUseLightmapDirectionality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73f + 0);
    *(uint8_t*)((uintptr_t)this + 0x73f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bUseHQForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x73f + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bUseHQForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73f + 0);
    *(uint8_t*)((uintptr_t)this + 0x73f + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bUsePlanarForwardReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x73f + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bUsePlanarForwardReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73f + 0);
    *(uint8_t*)((uintptr_t)this + 0x73f + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Material::get_bNormalCurvatureToRoughness() {
    return (*(uint8_t*)((uintptr_t)this + 0x73f + 0)) & 8 != 0;
}
void _Script_Engine::Material::set_bNormalCurvatureToRoughness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73f + 0);
    *(uint8_t*)((uintptr_t)this + 0x73f + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Material::get_D3D11TessellationMode() {
    return (void*)((uintptr_t)this + 0x740);
}
float& _Script_Engine::Material::get_RefractionDepthBias() {
    return *(float*)((uintptr_t)this + 0x7a4);
}
bool _Script_Engine::Material::get_bEnableCrackFreeDisplacement() {
    return (*(uint8_t*)((uintptr_t)this + 0x744 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bEnableCrackFreeDisplacement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x744 + 0);
    *(uint8_t*)((uintptr_t)this + 0x744 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bEnableAdaptiveTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x744 + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bEnableAdaptiveTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x744 + 0);
    *(uint8_t*)((uintptr_t)this + 0x744 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::Material::get_MaxDisplacement() {
    return *(float*)((uintptr_t)this + 0x748);
}
bool _Script_Engine::Material::get_Wireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_Wireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Material::get_bOutputVelocityOnBasePass() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 2 != 0;
}
void _Script_Engine::Material::set_bOutputVelocityOnBasePass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::Material::get_EditorX() {
    return *(int32_t*)((uintptr_t)this + 0x750);
}
int32_t& _Script_Engine::Material::get_EditorY() {
    return *(int32_t*)((uintptr_t)this + 0x754);
}
int32_t& _Script_Engine::Material::get_EditorYaw() {
    return *(int32_t*)((uintptr_t)this + 0x75c);
}
void* _Script_Engine::Material::get_Expressions() {
    return (void*)((uintptr_t)this + 0x760);
}
void* _Script_Engine::Material::get_MaterialFunctionInfos() {
    return (void*)((uintptr_t)this + 0x770);
}
void* _Script_Engine::Material::get_MaterialParameterCollectionInfos() {
    return (void*)((uintptr_t)this + 0x780);
}
bool _Script_Engine::Material::get_bCanMaskedBeAssumedOpaque() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_bCanMaskedBeAssumedOpaque(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Material::set_bIsMasked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Material::get_bIsPreviewMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 4 != 0;
}
void _Script_Engine::Material::set_bIsPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Material::set_bIsFunctionPreviewMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Material::get_bUseMaterialAttributes() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 16 != 0;
}
void _Script_Engine::Material::set_bUseMaterialAttributes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Material::get_bUseTranslucencyVertexFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 32 != 0;
}
void _Script_Engine::Material::set_bUseTranslucencyVertexFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::Material::get_bComputeFogPerPixel() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 64 != 0;
}
void _Script_Engine::Material::set_bComputeFogPerPixel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Material::get_bAllowDevelopmentShaderCompile() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 128 != 0;
}
void _Script_Engine::Material::set_bAllowDevelopmentShaderCompile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Material::get_bIsMaterialEditorStatsMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x791 + 0)) & 1 != 0;
}
void* _Script_Engine::Material::get_UsageFlagWarnings() {
    return (void*)((uintptr_t)this + 0x794);
}
void* _Script_Engine::Material::get_BlendableLocation() {
    return (void*)((uintptr_t)this + 0x798);
}
int32_t& _Script_Engine::Material::get_BlendablePriority() {
    return *(int32_t*)((uintptr_t)this + 0x79c);
}
bool _Script_Engine::Material::get_BlendableOutputAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a0 + 0)) & 1 != 0;
}
void _Script_Engine::Material::set_BlendableOutputAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Material::get_RefractionMode() {
    return (void*)((uintptr_t)this + 0x7a1);
}
void* _Script_Engine::Material::get_StateId() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Script_Engine::Material::get_ExpressionTextureReferences() {
    return (void*)((uintptr_t)this + 0x898);
}
_Script_CoreUObject::Class* _Script_Engine::Material::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Material");
    return result;
}
