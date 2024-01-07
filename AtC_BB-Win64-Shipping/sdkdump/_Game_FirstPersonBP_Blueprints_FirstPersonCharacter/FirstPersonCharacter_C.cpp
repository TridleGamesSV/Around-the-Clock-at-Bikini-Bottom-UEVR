#include "..\FUObjectArray.hpp"
#include "FirstPersonCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_HeadMountedDisplay\MotionControllerComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_6_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Money() {
    return;
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Subtle_Glow_Low() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x8b8);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Electric_Guitar() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Clam_Torch_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x8d0);
}
void* _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Camera() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Pause_Surv() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Patrick_Arm() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Patrick_Fists() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x7a0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalMayoBarg() {
    return *(int32_t*)((uintptr_t)this + 0xab4);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Plankton_Arm_Mesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x9d8);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Guitar_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Spongebob_Arm_Lift() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8a8);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Speedrun_MrKrabs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3a + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Goofy_Goober_Guitar() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flashlight() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xa20);
}
_Script_Engine::SphereComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Cannon_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x750);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_UsingMotionControllers_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8c + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Cannon_Arm() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Cannon() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x760);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_2() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalMoneyBarg() {
    return *(int32_t*)((uintptr_t)this + 0xab0);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Glow_Blue_Bright() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x7e0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Open_Close_Map_K2Node_InputActionEvent_10(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Treasure() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9b0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Jellyfishing_Net_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Leg_Kick_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9b8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Jellyfishing_Net_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x778);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Patrick_Camera() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flashlight_K2Node_InputActionEvent_8(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Fire() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x9d0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Jellyfishing_Net_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x780);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Jellyfishing_Net_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x788);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Jellyfishing_Net_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x790);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Guitar_Time() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1c + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SpongeBobHand_Jellyfishing() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x798);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Hold_Map_Reverse() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x900);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Speedrun_Patrick() {
    return (*(uint8_t*)((uintptr_t)this + 0xb38 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Anchor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x878);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_MrKrabHand_Emissive() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7a8);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Overheated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb08 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb08 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Mayo_Throwable() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7b8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Clam_Torch_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7b0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Rock() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7c0);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Subtle_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x8e0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Chuck_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7c8);
}
_Script_Engine::SpotLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0xa18);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Chuck_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7d0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x998);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Glow_Really_Low() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x7d8);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Glow_Blue() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x7e8);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Torchlight_Event_Emissive() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Jellyfish() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_8_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7f0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Pick_Up_Statue() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_8_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7f8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Hold_Map() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x908);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Generators() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_7_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x800);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Medium() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x888);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Food_Bag_Stop() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalMayoWeenie() {
    return *(int32_t*)((uintptr_t)this + 0xae4);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_7_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x808);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Map_Light() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x8e8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_6_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x810);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_6_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x818);
}
_Script_Engine::SpotLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Glovelight_Spotlight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x910);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_3_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x840);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Speedrun_MrKrabs() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3a + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_5_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x820);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_5_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x828);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Blocking() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf9 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_4_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x830);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Clam_Torch() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8d8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Open_Map() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8f0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_4_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x838);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_3_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x848);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_2_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x850);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Spongebob_Jellyfishing() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_2_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x858);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9a8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_1_Frozen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x860);
}
_Script_Engine::PointLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x918);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flamethrower_1_Melted() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x868);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Mayo() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9f0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Anchor_Lift() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x870);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Medium_Lift() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x880);
}
float& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Timeline_0_Walk_62CB038141CC3F55EA9F5ABDCB6015FB() {
    return *(float*)((uintptr_t)this + 0xa68);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Bunny_Lift() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x890);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalActionFigures() {
    return *(int32_t*)((uintptr_t)this + 0xaac);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_MrKrabHand() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xa10);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Dumbbells_Bunny() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x898);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Spongebob_Main_Arm_Lift() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8a0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Painting_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x958);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Spongebob_Arm_Secondary() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8b0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Speedrun_Sponge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb30 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_FP_Gun() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xa50);
}
_Script_Engine::SpotLightComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flash() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x8c0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Patrick_Arm_Camera() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8c8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Flip_Map() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x8f8);
}
_Script_Engine::ParticleSystemComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Snail_Food() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x920);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flashlight_K2Node_InputActionEvent_12(_Script_InputCore::Key Key) {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalJelliensWave_4() {
    return *(int32_t*)((uintptr_t)this + 0xb18);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Hold_Gary() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x928);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Gary() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x930);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Food_Pour() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x938);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Food() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x940);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Clarry() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x948);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Painting_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x950);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_7_Melted() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Statue() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x960);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Minigun_Arm() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x968);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Mayo_Minigun() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x970);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_8() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x978);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_7() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x980);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x988);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Cannon_Time() {
    return (*(uint8_t*)((uintptr_t)this + 0xb00 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x990);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Spongebob_Arm() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Speedrun_Squidward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb39 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Squidward_Arm_Watch_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9a0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Leg_Kick_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9c0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Leg_Kick_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9c8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Torch_Item() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9e0);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Spongebob_Arm_Torch() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9e8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SpongebobHand() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x9f8);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_PatrickHand() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xa00);
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SquidwardHand() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0xa08);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Food_Bag_Pour() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_VR_Gun() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xa28);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Toys() {
    return;
}
_Script_Engine::SphereComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_VR_Marker() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0xa30);
}
_Script_HeadMountedDisplay::MotionControllerComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_R_MotionController() {
    return *(_Script_HeadMountedDisplay::MotionControllerComponent**)((uintptr_t)this + 0xa38);
}
_Script_HeadMountedDisplay::MotionControllerComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_L_MotionController() {
    return *(_Script_HeadMountedDisplay::MotionControllerComponent**)((uintptr_t)this + 0xa40);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::ReceiveBeginPlay() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SquidwardHealth() {
    return *(int32_t*)((uintptr_t)this + 0xac8);
}
_Script_Engine::SphereComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0xa48);
}
_Script_Engine::SkeletalMeshComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Mesh2P() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0xa58);
}
_Script_Engine::CameraComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_FirstPersonCamera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0xa60);
}
void* _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Timeline_0__Direction_62CB038141CC3F55EA9F5ABDCB6015FB() {
    return (void*)((uintptr_t)this + 0xa6c);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalJelliensWave_1() {
    return *(int32_t*)((uintptr_t)this + 0xb0c);
}
_Script_Engine::TimelineComponent*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0xa70);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_5_Frozen() {
    return;
}
void* _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_GunOffset() {
    return (void*)((uintptr_t)this + 0xa78);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Torch() {
    return;
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Charged() {
    return (*(uint8_t*)((uintptr_t)this + 0xb24 + 0)) & 1 != 0;
}
float& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_BaseTurnRate() {
    return *(float*)((uintptr_t)this + 0xa84);
}
float& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_BaseLookUpRate() {
    return *(float*)((uintptr_t)this + 0xa88);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Punch_Time(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_UsingMotionControllers_() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8c + 0)) & 1 != 0;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalMoney() {
    return *(int32_t*)((uintptr_t)this + 0xa90);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalJelliensWave_3() {
    return *(int32_t*)((uintptr_t)this + 0xb14);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalHive() {
    return *(int32_t*)((uintptr_t)this + 0xa94);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Squid_Lose_Health() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalBunny() {
    return *(int32_t*)((uintptr_t)this + 0xa98);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalMedium() {
    return *(int32_t*)((uintptr_t)this + 0xa9c);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Overheated() {
    return (*(uint8_t*)((uintptr_t)this + 0xb08 + 0)) & 1 != 0;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalAnchor() {
    return *(int32_t*)((uintptr_t)this + 0xaa0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_7_Frozen() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalParts() {
    return *(int32_t*)((uintptr_t)this + 0xaa4);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalToys() {
    return *(int32_t*)((uintptr_t)this + 0xaa8);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalDetection() {
    return *(int32_t*)((uintptr_t)this + 0xab8);
}
_Script_Engine::SaveGame*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SaverSubClass() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0xac0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_8_Frozen() {
    return;
}
_Script_Engine::SaveGame*& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0xad0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_MrKrabsHealth() {
    return *(int32_t*)((uintptr_t)this + 0xad8);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Speed_Increase() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue) {
    return;
}
float& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_FPC_MouseSensitivity() {
    return *(float*)((uintptr_t)this + 0xadc);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalInvestigate() {
    return *(int32_t*)((uintptr_t)this + 0xae0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalGenerators() {
    return *(int32_t*)((uintptr_t)this + 0xae8);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_PatrickHealth() {
    return *(int32_t*)((uintptr_t)this + 0xaec);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Pause_K2Node_InputActionEvent_6(_Script_InputCore::Key Key) {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_PatrickStamina() {
    return *(int32_t*)((uintptr_t)this + 0xaf0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Stamina_Int() {
    return *(int32_t*)((uintptr_t)this + 0xaf4);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Punch_Time() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf8 + 0)) & 1 != 0;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Doodle_Pat_Boss_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Blocking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Boss_Fight_Squidward_3() {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalJellyfish() {
    return *(int32_t*)((uintptr_t)this + 0xafc);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Cannon_Time(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb00 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Shooty_Bar_Int() {
    return *(int32_t*)((uintptr_t)this + 0xb04);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_TotalJelliensWave_2() {
    return *(int32_t*)((uintptr_t)this + 0xb10);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Bessy_Boss_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_ResetVR_K2Node_InputActionEvent_23(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Guitar_Time(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1c + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Guitar_Bar_Int() {
    return *(int32_t*)((uintptr_t)this + 0xb20);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Subtle_Glow_Really_Low() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Charged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb24 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_SpongebobHealth() {
    return *(int32_t*)((uintptr_t)this + 0xb28);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_5_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Fist_Block_K2Node_InputActionEvent_3(_Script_InputCore::Key Key) {
    return;
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Double_Jump_Count() {
    return *(int32_t*)((uintptr_t)this + 0xb2c);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Pause() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_1() {
    return;
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Speedrun_Sponge() {
    return (*(uint8_t*)((uintptr_t)this + 0xb30 + 0)) & 1 != 0;
}
float& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Time_FPC() {
    return *(float*)((uintptr_t)this + 0xb34);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Speedrun_Patrick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Speedrun_Squidward() {
    return (*(uint8_t*)((uintptr_t)this + 0xb39 + 0)) & 1 != 0;
}
bool _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Lock_Controls() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3b + 0)) & 1 != 0;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::set_Lock_Controls(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3b + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::get_Last_Index() {
    return *(int32_t*)((uintptr_t)this + 0xb3c);
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lift_Medium_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Wave_Jelliens_4() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_4_Frozen() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Wave_Jelliens_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Wave_Jelliens_2() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Wave_Jelliens_1() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Mayo_Weenie() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Fire_K2Node_InputActionEvent_15(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Investigate_Points() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Detection_Stats() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_1_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Mayo_BargNMart() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Money_BargNMart() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Torchlight_Event() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Parts() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Boss_Fight_MrKrabs_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Dumbell_Anchor() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Treasure_Chest_Hold() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Dumbell_Medium() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Cannon() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Dumbell_Bunny() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Dark_Glow_Off() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Add_Hive() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::UserConstructionScript() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Pause_K2Node_InputActionEvent_22(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Pause() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_6_Frozen() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Sprinting_K2Node_InputActionEvent_21(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Close_Off_Camera() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Sprinting_K2Node_InputActionEvent_20(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_19(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_18(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Crouch_K2Node_InputActionEvent_17(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Thanos_Gameover_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Fire_K2Node_InputActionEvent_16(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Pause_K2Node_InputActionEvent_14(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flashlight_K2Node_InputActionEvent_13(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_4_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flip_Map_K2Node_InputActionEvent_11(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flashlight_K2Node_InputActionEvent_9(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Pause_K2Node_InputActionEvent_7(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_7() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Flashlight_K2Node_InputActionEvent_5(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lift_Bunny_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Fist_Block_K2Node_InputActionEvent_4(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Jump_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpActEvt_Click_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Squidward_Arm() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::MrKrabs_Arm() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Flashlight() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::InpAxisEvt_FixBob_K2Node_InputAxisEvent_270(float AxisValue) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Subtle_Glow_Blue() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Spongebob_Flashlight() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_5() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Kick() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Sprint_Spongebob() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Squidward_Watch() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_8() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Minigun() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Sprint() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Sprinting() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flashlight_Enabled() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Patty_Speedboost() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Pick_Up_Painting_1() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Sponge_Lose_Health() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Pick_Up_Painting_2() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Patrick_Speedrun_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_3_Frozen() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Pick_Up_Clarry() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Place_Art() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Jump() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lift_Anchor_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Food_Bag_Hold() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lifted_Bunny_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Food_Bag_Remove() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Pick_Up_Gary() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Sprint_Spongebob() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Dark_Glow_On() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Unpauseable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Glovelight() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Reset_Pause() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Subtle_Glow_Event() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Subtle_Glow_Low_Event() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lifted_Medium_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Lifted_Anchor_Dumbbell() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_1_Frozen() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_2_Frozen() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_2_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_3_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_4() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Place_Part_6() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Flamethrower_Part_8_Melted() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Subtle_Glow_Blue_Bright() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Barg_Pause() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Rock_Throwing() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Enable_Mayo_Throwing() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::MrKrabs_Lose_Health() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Boss_Fight_Patrick_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Patrick_Lose_Health() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Time_Proxy() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Treasure_Chest_Place() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Time_Proxy_2() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Squidward_Camera() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Electric_Guitar_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Boss_Fight_SpongeBob_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Time_Proxy_3() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Goofy_Goober_Guitar_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Boss_Fight_SpongeBob_Fake() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Sponge_Fake_Lose_Health() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Start_Chase_Meter() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::OnLanded0(_Script_Engine::HitResult& Hit) {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Prowler_Tut_Boss_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Plankton_Arm() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Disable_Crouching() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Double_Jump_Enabled() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Squidward_Speedrun_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Mr_Krabs_Speedrun_Enable() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::Stare_Mechanics() {
    return;
}
void _Game_FirstPersonBP_Blueprints_FirstPersonCharacter::FirstPersonCharacter_C::ExecuteUbergraph_FirstPersonCharacter(int32_t EntryPoint) {
    return;
}
