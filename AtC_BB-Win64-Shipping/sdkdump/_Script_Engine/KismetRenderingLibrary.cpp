#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "Canvas.hpp"
#include "DrawToRenderTargetContext.hpp"
#include "KismetRenderingLibrary.hpp"
#include "MaterialInterface.hpp"
#include "SkelMeshSkinWeightInfo.hpp"
#include "Texture2D.hpp"
#include "TextureRenderTarget2D.hpp"
_Script_CoreUObject::Class* _Script_Engine::KismetRenderingLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetRenderingLibrary");
    return result;
}
void _Script_Engine::KismetRenderingLibrary::ExportRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, void* FilePath, void* Filename) {
    return;
}
_Script_Engine::Texture2D* _Script_Engine::KismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(_Script_Engine::TextureRenderTarget2D* RenderTarget, void* Name, void* CompressionSettings, void* MipSettings) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::ExportTexture2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Texture2D* Texture, void* FilePath, void* Filename) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::ReleaseRenderTarget2D(_Script_Engine::TextureRenderTarget2D* TextureRenderTarget) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::DrawMaterialToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_Engine::MaterialInterface* Material) {
    return;
}
_Script_Engine::SkelMeshSkinWeightInfo _Script_Engine::KismetRenderingLibrary::MakeSkinWeightInfo(int32_t Bone0, void* Weight0, int32_t Bone1, void* Weight1, int32_t Bone2, void* Weight2, int32_t Bone3, void* Weight3) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::EndDrawCanvasToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DrawToRenderTargetContext& Context) {
    return;
}
_Script_Engine::TextureRenderTarget2D* _Script_Engine::KismetRenderingLibrary::CreateRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, int32_t Width, int32_t Height, void* Format) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* RenderTarget, _Script_Engine::Texture2D* Texture) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::ClearRenderTarget2D(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_CoreUObject::LinearColor ClearColor) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::BreakSkinWeightInfo(_Script_Engine::SkelMeshSkinWeightInfo InWeight, int32_t& Bone0, void*& Weight0, int32_t& Bone1, void*& Weight1, int32_t& Bone2, void*& Weight2, int32_t& Bone3, void*& Weight3) {
    return;
}
void _Script_Engine::KismetRenderingLibrary::BeginDrawCanvasToRenderTarget(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TextureRenderTarget2D* TextureRenderTarget, _Script_Engine::Canvas*& Canvas, _Script_CoreUObject::Vector2D& Size, _Script_Engine::DrawToRenderTargetContext& Context) {
    return;
}
