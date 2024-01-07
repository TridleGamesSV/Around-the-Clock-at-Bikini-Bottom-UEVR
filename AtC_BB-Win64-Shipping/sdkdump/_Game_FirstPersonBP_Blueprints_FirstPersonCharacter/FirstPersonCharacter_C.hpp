#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_HeadMountedDisplay {
struct MotionControllerComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_FirstPersonBP_Blueprints_FirstPersonCharacter {
#pragma pack(push, 1)
struct FirstPersonCharacter_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Plankton_Arm_Mesh();
    _Script_Engine::PointLightComponent*& get_Guitar_Glow();
    _Script_Engine::StaticMeshComponent*& get_Goofy_Goober_Guitar();
    _Script_Engine::StaticMeshComponent*& get_Electric_Guitar();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Camera();
    _Script_Engine::SphereComponent*& get_Cannon_Sphere();
    _Script_Engine::StaticMeshComponent*& get_Cannon_Arm();
    _Script_Engine::StaticMeshComponent*& get_Cannon();
    _Script_Engine::StaticMeshComponent*& get_Treasure();
    _Script_Engine::StaticMeshComponent*& get_Jellyfishing_Net_5();
    _Script_Engine::StaticMeshComponent*& get_Jellyfishing_Net_4();
    _Script_Engine::StaticMeshComponent*& get_Jellyfishing_Net_3();
    _Script_Engine::StaticMeshComponent*& get_Jellyfishing_Net_2();
    _Script_Engine::StaticMeshComponent*& get_Jellyfishing_Net_1();
    _Script_Engine::StaticMeshComponent*& get_SpongeBobHand_Jellyfishing();
    _Script_Engine::SkeletalMeshComponent*& get_Patrick_Fists();
    _Script_Engine::StaticMeshComponent*& get_MrKrabHand_Emissive();
    _Script_Engine::StaticMeshComponent*& get_Clam_Torch_2();
    _Script_Engine::StaticMeshComponent*& get_Mayo_Throwable();
    _Script_Engine::StaticMeshComponent*& get_Rock();
    _Script_Engine::StaticMeshComponent*& get_Chuck_2();
    _Script_Engine::StaticMeshComponent*& get_Chuck_1();
    _Script_Engine::PointLightComponent*& get_Glow_Really_Low();
    _Script_Engine::PointLightComponent*& get_Glow_Blue_Bright();
    _Script_Engine::PointLightComponent*& get_Glow_Blue();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_8_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_8_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_7_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_7_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_6_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_6_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_5_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_5_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_4_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_4_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_3_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_3_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_2_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_2_Melted();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_1_Frozen();
    _Script_Engine::StaticMeshComponent*& get_Flamethrower_1_Melted();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Anchor_Lift();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Anchor();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Medium_Lift();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Medium();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Bunny_Lift();
    _Script_Engine::StaticMeshComponent*& get_Dumbbells_Bunny();
    _Script_Engine::StaticMeshComponent*& get_Spongebob_Main_Arm_Lift();
    _Script_Engine::StaticMeshComponent*& get_Spongebob_Arm_Lift();
    _Script_Engine::StaticMeshComponent*& get_Spongebob_Arm_Secondary();
    _Script_Engine::PointLightComponent*& get_Subtle_Glow_Low();
    _Script_Engine::SpotLightComponent*& get_Flash();
    _Script_Engine::StaticMeshComponent*& get_Patrick_Arm_Camera();
    _Script_Engine::PointLightComponent*& get_Clam_Torch_Glow();
    _Script_Engine::StaticMeshComponent*& get_Clam_Torch();
    _Script_Engine::PointLightComponent*& get_Subtle_Glow();
    _Script_Engine::PointLightComponent*& get_Map_Light();
    _Script_Engine::StaticMeshComponent*& get_Open_Map();
    _Script_Engine::StaticMeshComponent*& get_Flip_Map();
    _Script_Engine::StaticMeshComponent*& get_Hold_Map_Reverse();
    _Script_Engine::StaticMeshComponent*& get_Hold_Map();
    _Script_Engine::SpotLightComponent*& get_Glovelight_Spotlight();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::ParticleSystemComponent*& get_Snail_Food();
    _Script_Engine::StaticMeshComponent*& get_Hold_Gary();
    _Script_Engine::StaticMeshComponent*& get_Gary();
    _Script_Engine::StaticMeshComponent*& get_Food_Pour();
    _Script_Engine::StaticMeshComponent*& get_Food();
    _Script_Engine::StaticMeshComponent*& get_Clarry();
    _Script_Engine::StaticMeshComponent*& get_Painting_2();
    _Script_Engine::StaticMeshComponent*& get_Painting_1();
    _Script_Engine::StaticMeshComponent*& get_Statue();
    _Script_Engine::StaticMeshComponent*& get_Minigun_Arm();
    _Script_Engine::StaticMeshComponent*& get_Mayo_Minigun();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_8();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_7();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_6();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_5();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_4();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_3();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch_2();
    _Script_Engine::StaticMeshComponent*& get_Squidward_Arm_Watch();
    _Script_Engine::StaticMeshComponent*& get_Leg_Kick_4();
    _Script_Engine::StaticMeshComponent*& get_Leg_Kick_3();
    _Script_Engine::StaticMeshComponent*& get_Leg_Kick_2();
    _Script_Engine::ParticleSystemComponent*& get_Fire();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::StaticMeshComponent*& get_Torch_Item();
    _Script_Engine::StaticMeshComponent*& get_Spongebob_Arm_Torch();
    _Script_Engine::StaticMeshComponent*& get_Mayo();
    _Script_Engine::StaticMeshComponent*& get_SpongebobHand();
    _Script_Engine::StaticMeshComponent*& get_PatrickHand();
    _Script_Engine::StaticMeshComponent*& get_SquidwardHand();
    _Script_Engine::StaticMeshComponent*& get_MrKrabHand();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::StaticMeshComponent*& get_Flashlight();
    _Script_Engine::SkeletalMeshComponent*& get_VR_Gun();
    _Script_Engine::SphereComponent*& get_VR_Marker();
    _Script_HeadMountedDisplay::MotionControllerComponent*& get_R_MotionController();
    _Script_HeadMountedDisplay::MotionControllerComponent*& get_L_MotionController();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::SkeletalMeshComponent*& get_FP_Gun();
    _Script_Engine::SkeletalMeshComponent*& get_Mesh2P();
    _Script_Engine::CameraComponent*& get_FirstPersonCamera();
    float& get_Timeline_0_Walk_62CB038141CC3F55EA9F5ABDCB6015FB();
    void* get_Timeline_0__Direction_62CB038141CC3F55EA9F5ABDCB6015FB();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    void* get_GunOffset();
    float& get_BaseTurnRate();
    float& get_BaseLookUpRate();
    bool get_UsingMotionControllers_();
    void set_UsingMotionControllers_(bool value);
    int32_t& get_TotalMoney();
    int32_t& get_TotalHive();
    int32_t& get_TotalBunny();
    int32_t& get_TotalMedium();
    int32_t& get_TotalAnchor();
    int32_t& get_TotalParts();
    int32_t& get_TotalToys();
    int32_t& get_TotalActionFigures();
    int32_t& get_TotalMoneyBarg();
    int32_t& get_TotalMayoBarg();
    int32_t& get_TotalDetection();
    _Script_Engine::SaveGame*& get_SaverSubClass();
    int32_t& get_SquidwardHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    int32_t& get_MrKrabsHealth();
    float& get_FPC_MouseSensitivity();
    int32_t& get_TotalInvestigate();
    int32_t& get_TotalMayoWeenie();
    int32_t& get_TotalGenerators();
    int32_t& get_PatrickHealth();
    int32_t& get_PatrickStamina();
    int32_t& get_Stamina_Int();
    bool get_Punch_Time();
    void set_Punch_Time(bool value);
    bool get_Blocking();
    void set_Blocking(bool value);
    int32_t& get_TotalJellyfish();
    bool get_Cannon_Time();
    void set_Cannon_Time(bool value);
    int32_t& get_Shooty_Bar_Int();
    bool get_Overheated();
    void set_Overheated(bool value);
    int32_t& get_TotalJelliensWave_1();
    int32_t& get_TotalJelliensWave_2();
    int32_t& get_TotalJelliensWave_3();
    int32_t& get_TotalJelliensWave_4();
    bool get_Guitar_Time();
    void set_Guitar_Time(bool value);
    int32_t& get_Guitar_Bar_Int();
    bool get_Charged();
    void set_Charged(bool value);
    int32_t& get_SpongebobHealth();
    int32_t& get_Double_Jump_Count();
    bool get_Speedrun_Sponge();
    void set_Speedrun_Sponge(bool value);
    float& get_Time_FPC();
    bool get_Speedrun_Patrick();
    void set_Speedrun_Patrick(bool value);
    bool get_Speedrun_Squidward();
    void set_Speedrun_Squidward(bool value);
    bool get_Speedrun_MrKrabs();
    void set_Speedrun_MrKrabs(bool value);
    bool get_Lock_Controls();
    void set_Lock_Controls(bool value);
    int32_t& get_Last_Index();
    static _Script_CoreUObject::Class* static_class();
    void Add_Wave_Jelliens_4();
    void Add_Wave_Jelliens_3();
    void Add_Wave_Jelliens_2();
    void Add_Wave_Jelliens_1();
    void Add_Jellyfish();
    void Add_Generators();
    void Add_Mayo_Weenie();
    void Add_Investigate_Points();
    void Detection_Stats();
    void Add_Mayo_BargNMart();
    void Add_Money_BargNMart();
    void Add_Toys();
    void Add_Parts();
    void Add_Dumbell_Anchor();
    void Add_Dumbell_Medium();
    void Add_Dumbell_Bunny();
    void Add_Hive();
    void Add_Money();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_ResetVR_K2Node_InputActionEvent_23(_Script_InputCore::Key Key);
    void InpActEvt_Pause_K2Node_InputActionEvent_22(_Script_InputCore::Key Key);
    void InpActEvt_Sprinting_K2Node_InputActionEvent_21(_Script_InputCore::Key Key);
    void InpActEvt_Sprinting_K2Node_InputActionEvent_20(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_19(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_18(_Script_InputCore::Key Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_17(_Script_InputCore::Key Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_16(_Script_InputCore::Key Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_15(_Script_InputCore::Key Key);
    void InpActEvt_Pause_K2Node_InputActionEvent_14(_Script_InputCore::Key Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_13(_Script_InputCore::Key Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_12(_Script_InputCore::Key Key);
    void InpActEvt_Flip_Map_K2Node_InputActionEvent_11(_Script_InputCore::Key Key);
    void InpActEvt_Open_Close_Map_K2Node_InputActionEvent_10(_Script_InputCore::Key Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_9(_Script_InputCore::Key Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_8(_Script_InputCore::Key Key);
    void InpActEvt_Pause_K2Node_InputActionEvent_7(_Script_InputCore::Key Key);
    void InpActEvt_Pause_K2Node_InputActionEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_Fist_Block_K2Node_InputActionEvent_4(_Script_InputCore::Key Key);
    void InpActEvt_Fist_Block_K2Node_InputActionEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Click_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void ReceiveBeginPlay();
    void Patrick_Arm();
    void Squidward_Arm();
    void MrKrabs_Arm();
    void Spongebob_Arm();
    void Disable_Flashlight();
    void InpAxisEvt_FixBob_K2Node_InputAxisEvent_270(float AxisValue);
    void Disable_Spongebob_Flashlight();
    void Torch();
    void Kick();
    void Squidward_Watch();
    void Minigun();
    void Disable_Sprint();
    void Enable_Sprinting();
    void Flashlight_Enabled();
    void Pick_Up_Statue();
    void Pick_Up_Painting_1();
    void Pick_Up_Painting_2();
    void Pick_Up_Clarry();
    void Place_Art();
    void Disable_Jump();
    void Food_Bag_Hold();
    void Food_Bag_Pour();
    void Food_Bag_Remove();
    void Food_Bag_Stop();
    void Pick_Up_Gary();
    void Disable_Sprint_Spongebob();
    void Enable_Sprint_Spongebob();
    void Dark_Glow_On();
    void Dark_Glow_Off();
    void Enable_Unpauseable();
    void Glovelight();
    void Reset_Pause();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void Subtle_Glow_Event();
    void Torchlight_Event();
    void Patrick_Camera();
    void Close_Off_Camera();
    void Subtle_Glow_Low_Event();
    void Lift_Bunny_Dumbbell();
    void Lifted_Bunny_Dumbbell();
    void Lift_Medium_Dumbbell();
    void Lifted_Medium_Dumbbell();
    void Lift_Anchor_Dumbbell();
    void Lifted_Anchor_Dumbbell();
    void Flamethrower_Part_1_Frozen();
    void Flamethrower_Part_1_Melted();
    void Flamethrower_Place_Part_1();
    void Flamethrower_Part_2_Frozen();
    void Flamethrower_Part_2_Melted();
    void Flamethrower_Place_Part_2();
    void Flamethrower_Part_3_Frozen();
    void Flamethrower_Part_3_Melted();
    void Flamethrower_Place_Part_3();
    void Flamethrower_Part_4_Frozen();
    void Flamethrower_Part_4_Melted();
    void Flamethrower_Place_Part_4();
    void Flamethrower_Part_5_Frozen();
    void Flamethrower_Part_5_Melted();
    void Flamethrower_Place_Part_5();
    void Flamethrower_Part_6_Frozen();
    void Flamethrower_Part_6_Melted();
    void Flamethrower_Place_Part_6();
    void Flamethrower_Part_7_Frozen();
    void Flamethrower_Part_7_Melted();
    void Flamethrower_Place_Part_7();
    void Flamethrower_Part_8_Frozen();
    void Flamethrower_Part_8_Melted();
    void Flamethrower_Place_Part_8();
    void Subtle_Glow_Blue();
    void Subtle_Glow_Blue_Bright();
    void Subtle_Glow_Really_Low();
    void Enable_Barg_Pause();
    void Enable_Rock_Throwing();
    void Enable_Pause_Surv();
    void Boss_Fight_Squidward_3();
    void Squid_Lose_Health();
    void Enable_Mayo_Throwing();
    void Patty_Speedboost();
    void Boss_Fight_MrKrabs_3();
    void MrKrabs_Lose_Health();
    void Torchlight_Event_Emissive();
    void Boss_Fight_Patrick_3();
    void Patrick_Lose_Health();
    void Time_Proxy();
    void Spongebob_Jellyfishing();
    void Treasure_Chest_Hold();
    void Treasure_Chest_Place();
    void Enable_Cannon();
    void Time_Proxy_2();
    void Squidward_Camera();
    void Disable_Pause();
    void Enable_Pause();
    void Electric_Guitar_Enable();
    void Boss_Fight_SpongeBob_3();
    void Sponge_Lose_Health();
    void Time_Proxy_3();
    void Goofy_Goober_Guitar_Enable();
    void Boss_Fight_SpongeBob_Fake();
    void Sponge_Fake_Lose_Health();
    void Doodle_Pat_Boss_Enable();
    void Start_Chase_Meter();
    void OnLanded0(_Script_Engine::HitResult& Hit);
    void Prowler_Tut_Boss_Enable();
    void Bessy_Boss_Enable();
    void Speed_Increase();
    void Plankton_Arm();
    void Thanos_Gameover_Enable();
    void Disable_Crouching();
    void Double_Jump_Enabled();
    void Patrick_Speedrun_Enable();
    void Squidward_Speedrun_Enable();
    void Mr_Krabs_Speedrun_Enable();
    void Stare_Mechanics();
    void ExecuteUbergraph_FirstPersonCharacter(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
