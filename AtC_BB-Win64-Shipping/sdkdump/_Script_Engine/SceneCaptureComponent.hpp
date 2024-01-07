#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureComponent : public SceneComponent {
    void* get_PrimitiveRenderMode();
    void* get_HiddenComponents();
    void* get_HiddenActors();
    void* get_ShowOnlyComponents();
    void* get_ShowOnlyActors();
    bool get_bCaptureEveryFrame();
    void set_bCaptureEveryFrame(bool value);
    bool get_bCaptureOnMovement();
    void set_bCaptureOnMovement(bool value);
    bool get_bAlwaysPersistRenderingState();
    void set_bAlwaysPersistRenderingState(bool value);
    float& get_LODDistanceFactor();
    float& get_MaxViewDistanceOverride();
    int32_t& get_CaptureSortPriority();
    void* get_ShowFlagSettings();
    static _Script_CoreUObject::Class* static_class();
    void ShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent);
    void ShowOnlyActorComponents(_Script_Engine::Actor* InActor);
    void SetCaptureSortPriority(int32_t NewCaptureSortPriority);
    void RemoveShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent);
    void RemoveShowOnlyActorComponents(_Script_Engine::Actor* InActor);
    void HideComponent(_Script_Engine::PrimitiveComponent* InComponent);
    void HideActorComponents(_Script_Engine::Actor* InActor);
    void ClearShowOnlyComponents(_Script_Engine::PrimitiveComponent* InComponent);
    void ClearHiddenComponents();
}; // Size: 0x28
#pragma pack(pop)
}
