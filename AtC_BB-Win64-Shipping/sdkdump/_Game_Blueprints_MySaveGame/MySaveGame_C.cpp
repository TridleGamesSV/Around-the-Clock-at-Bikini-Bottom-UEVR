#include "..\FUObjectArray.hpp"
#include "MySaveGame_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Speedrun_Patrick_Beat() {
    return (*(uint8_t*)((uintptr_t)this + 0x165 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Industrial() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Employee_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7e + 0);
    *(uint8_t*)((uintptr_t)this + 0x7e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Boating() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Patty_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Graveyard_Shift_KK_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Radio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13a + 0);
    *(uint8_t*)((uintptr_t)this + 0x13a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Krusty_Krab() {
    return (*(uint8_t*)((uintptr_t)this + 0x11e + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Monument_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x36 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Patty_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Fields_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Pineapple_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x33 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Larry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8f + 0);
    *(uint8_t*)((uintptr_t)this + 0x8f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Lemonade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x134 + 0);
    *(uint8_t*)((uintptr_t)this + 0x134 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Patty_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Larry_s_Gym() {
    return (*(uint8_t*)((uintptr_t)this + 0x112 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Pineapple_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Conch_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Larry_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x47 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Pineapple_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Conch_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Goofy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Glove_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46 + 0);
    *(uint8_t*)((uintptr_t)this + 0x46 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Speedrun_Squidward_Beat() {
    return (*(uint8_t*)((uintptr_t)this + 0x166 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x62 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Ripped_Pants(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Monument_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Rookie_KK_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x76 + 0);
    *(uint8_t*)((uintptr_t)this + 0x76 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Monument_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Monument_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Fields_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Glove_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47 + 0);
    *(uint8_t*)((uintptr_t)this + 0x47 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Monument_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Pineapple_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Monument_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Monument_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Monument_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Barg_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xbd + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Sandy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Pineapple_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x72 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Pineapple_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33 + 0);
    *(uint8_t*)((uintptr_t)this + 0x33 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Industrial_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Pineapple_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45 + 0);
    *(uint8_t*)((uintptr_t)this + 0x45 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Pineapple_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36 + 0);
    *(uint8_t*)((uintptr_t)this + 0x36 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Boating() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Rock_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Patty_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Conch_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Conch_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Hydro_Spatula(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbb + 0);
    *(uint8_t*)((uintptr_t)this + 0xbb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Boating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Sandy() {
    return (*(uint8_t*)((uintptr_t)this + 0x96 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Larry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Glove() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Speedrun_Sponge_Beat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Minigame_Krussy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Glove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Krusty_Krab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11e + 0);
    *(uint8_t*)((uintptr_t)this + 0x11e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Industrial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Hydro_Spatula() {
    return (*(uint8_t*)((uintptr_t)this + 0xbb + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Industrial() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Kick_Me() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Fields_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Music_Integer() {
    return *(float*)((uintptr_t)this + 0xd4);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Cash_Register() {
    return (*(uint8_t*)((uintptr_t)this + 0xae + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Boating_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x43 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Rookie_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Palooza(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x43 + 0);
    *(uint8_t*)((uintptr_t)this + 0x43 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Sandy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x92 + 0);
    *(uint8_t*)((uintptr_t)this + 0x92 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x45 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x46 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Dime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Boating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_All_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_All_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Sandy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x95 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Larry_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Anchor_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Anchor_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Porn_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Larry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Tentacle_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Anchor_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Sandy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x95 + 0);
    *(uint8_t*)((uintptr_t)this + 0x95 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Anchor_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Meow() {
    return (*(uint8_t*)((uintptr_t)this + 0xb2 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Boating() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Anchor_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Anchor_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Speedrun_Squidward_Beat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x166 + 0);
    *(uint8_t*)((uintptr_t)this + 0x166 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Anchor_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Larry() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Anchor_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Anchor() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Anchor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Anchor() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Anchor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Minigame_Beat_HappyGoLucky() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Rock_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Anchor() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Anchor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Anchor() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Anchor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Anchor() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Goofy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Anchor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x63 + 0);
    *(uint8_t*)((uintptr_t)this + 0x63 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Industrial_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Larry_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Industrial_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Industrial() {
    return (*(uint8_t*)((uintptr_t)this + 0x5a + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Industrial_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Industrial_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Industrial_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Industrial_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Industrial_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Industrial() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Industrial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Cash_Register(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xae + 0);
    *(uint8_t*)((uintptr_t)this + 0xae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Larry_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Industrial() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Industrial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0xee + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Minigames() {
    return (*(uint8_t*)((uintptr_t)this + 0x15a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Industrial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Barg_N_Mart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Industrial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5a + 0);
    *(uint8_t*)((uintptr_t)this + 0x5a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_KK_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Rock_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Rock_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Rock_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Rock_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Rookie_KK_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x76 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Rock_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Rock_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Sketch_2_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Goofy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Goofy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x62 + 0);
    *(uint8_t*)((uintptr_t)this + 0x62 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Tentacle_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Larry() {
    return (*(uint8_t*)((uintptr_t)this + 0x8f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x63 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Botanical() {
    return (*(uint8_t*)((uintptr_t)this + 0xca + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Goofy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Boating_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Tentacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc7 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Goofy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Boating_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Boating_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Save_Mouse_Sensitivity() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Sketch_3_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Boating_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Goofy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x87 + 0);
    *(uint8_t*)((uintptr_t)this + 0x87 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0xed + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Boating_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Goofy() {
    return (*(uint8_t*)((uintptr_t)this + 0x87 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Boating_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Boating_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Rookie_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Boating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Boating() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Boating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Larry_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Boating() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Boating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Fields_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Robot() {
    return (*(uint8_t*)((uintptr_t)this + 0xf6 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Fields_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Sketch_4_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Fields_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Fields_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Sans() {
    return (*(uint8_t*)((uintptr_t)this + 0xa7 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Goofy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Graveyard_Shift_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Sand_Castle_4() {
    return (*(uint8_t*)((uintptr_t)this + 0xf4 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Fields_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x72 + 0);
    *(uint8_t*)((uintptr_t)this + 0x72 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x73 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73 + 0);
    *(uint8_t*)((uintptr_t)this + 0x73 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Mermalair_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Unlock_Extras() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Barg_N_Mart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb5 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Minigames() {
    return (*(uint8_t*)((uintptr_t)this + 0x14e + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Good_Noodle_KK_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x77 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Good_Noodle_KK_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x77 + 0);
    *(uint8_t*)((uintptr_t)this + 0x77 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Graveyard_Shift_KK_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Employee_KK_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Employee_KK_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_KK_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Graveyard_Shift_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Employee_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x7e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Goofy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Goofy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x83 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Goofy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x83 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Goofy() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Goofy() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Goofy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Goofy() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Goofy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Goofy() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Larry_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Larry_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Larry_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Larry() {
    return (*(uint8_t*)((uintptr_t)this + 0x8d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Larry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8d + 0);
    *(uint8_t*)((uintptr_t)this + 0x8d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Larry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Larry() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Larry() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Sandy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x92 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Sandy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x93 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Tentacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc6 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Sandy_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x93 + 0);
    *(uint8_t*)((uintptr_t)this + 0x93 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Sandy_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Pinhead() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Sandy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96 + 0);
    *(uint8_t*)((uintptr_t)this + 0x96 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Sandy() {
    return (*(uint8_t*)((uintptr_t)this + 0x97 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Tentacle_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Sandy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x97 + 0);
    *(uint8_t*)((uintptr_t)this + 0x97 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_1() {
    return (*(uint8_t*)((uintptr_t)this + 0x103 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Sandy() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Sandy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Barg_N_Mart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Sandy() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Sandy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Goo_Lagoon_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xeb + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Sandy() {
    return (*(uint8_t*)((uintptr_t)this + 0x9a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Sand_Castle_3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Ace() {
    return (*(uint8_t*)((uintptr_t)this + 0x159 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Sandy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9a + 0);
    *(uint8_t*)((uintptr_t)this + 0x9a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Sketch_1_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0x9b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Final_Level_Section_3_Complete() {
    return (*(uint8_t*)((uintptr_t)this + 0x129 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Goo_Lagoon_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Sketch_1_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9b + 0);
    *(uint8_t*)((uintptr_t)this + 0x9b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ambience_Integer() {
    return *(float*)((uintptr_t)this + 0xdc);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Soap_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Tentacle_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xc2 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Soap_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_MXXN(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x136 + 0);
    *(uint8_t*)((uintptr_t)this + 0x136 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Porn_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Pie_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Pie_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Trophy_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0x9f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Enough_Money(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Trophy_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9f + 0);
    *(uint8_t*)((uintptr_t)this + 0x9f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Botanical(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xca + 0);
    *(uint8_t*)((uintptr_t)this + 0xca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Fridge_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Fridge_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Time_Barg_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbf + 0);
    *(uint8_t*)((uintptr_t)this + 0xbf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Secret_Box_Extra() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Final_Level_Section_1_Complete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x127 + 0);
    *(uint8_t*)((uintptr_t)this + 0x127 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Secret_Box_Extra(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Reef_Blower() {
    return (*(uint8_t*)((uintptr_t)this + 0xcd + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Sketch_2_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xa2 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Tentacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Dime() {
    return (*(uint8_t*)((uintptr_t)this + 0xa3 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Sand_Castle_4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_First_Dollar() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_First_Dollar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Boofie() {
    return (*(uint8_t*)((uintptr_t)this + 0x10b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Meanie() {
    return (*(uint8_t*)((uintptr_t)this + 0xa5 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Reef_Blower(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcd + 0);
    *(uint8_t*)((uintptr_t)this + 0xcd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Meanie(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Time_Barg_N_Mart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Hat() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Hat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Sans(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Final_Level(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x116 + 0);
    *(uint8_t*)((uintptr_t)this + 0x116 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Organ() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Organ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Goo_Lagoon_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xea + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Sketch_3_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xa9 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Kick_Me(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Kelp_Forest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14c + 0);
    *(uint8_t*)((uintptr_t)this + 0x14c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Prehibernation() {
    return (*(uint8_t*)((uintptr_t)this + 0xab + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_KK_Wave() {
    return (*(uint8_t*)((uintptr_t)this + 0x122 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Ace_Completion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x147 + 0);
    *(uint8_t*)((uintptr_t)this + 0x147 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Prehibernation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xab + 0);
    *(uint8_t*)((uintptr_t)this + 0xab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Sand_Castle_3() {
    return (*(uint8_t*)((uintptr_t)this + 0xf3 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Violen() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Violen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfd + 0);
    *(uint8_t*)((uintptr_t)this + 0xfd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Goon_Squad() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Tentacle_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Goon_Squad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Ace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x159 + 0);
    *(uint8_t*)((uintptr_t)this + 0x159 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_IceCubes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Observe() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Observe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Guitar_Charged_Up(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Ripped_Pants() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Goo_Lagoon_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Sketch_4_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Goo_Lagoon_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Meow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Extras() {
    return (*(uint8_t*)((uintptr_t)this + 0x149 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Kenny() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Kenny(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Pinhead(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xef + 0);
    *(uint8_t*)((uintptr_t)this + 0xef + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Barg_N_Mart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_Boss_3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Barg_N_Mart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb6 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Barg_N_Mart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Barg_N_Mart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb7 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Final_Level_Section_1_Complete() {
    return (*(uint8_t*)((uintptr_t)this + 0x127 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Time_Barg_N_Mart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Glove_Bathroom() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Golden_Spatulas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14a + 0);
    *(uint8_t*)((uintptr_t)this + 0x14a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Barg_N_Mart() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Base_Completion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x146 + 0);
    *(uint8_t*)((uintptr_t)this + 0x146 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Palooza() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Industrial_Park(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11d + 0);
    *(uint8_t*)((uintptr_t)this + 0x11d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Enough_Money() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Barg_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Comic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x156 + 0);
    *(uint8_t*)((uintptr_t)this + 0x156 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_No_Death_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Barg_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xbe + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Spatula_Door(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x132 + 0);
    *(uint8_t*)((uintptr_t)this + 0x132 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Barg_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbe + 0);
    *(uint8_t*)((uintptr_t)this + 0xbe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Minigames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15a + 0);
    *(uint8_t*)((uintptr_t)this + 0x15a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Hotdog() {
    return (*(uint8_t*)((uintptr_t)this + 0xf7 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Time_Barg_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xbf + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Barg_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Spatula_Door_Salty() {
    return (*(uint8_t*)((uintptr_t)this + 0x12c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Barg_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Disable_Hints() {
    return (*(uint8_t*)((uintptr_t)this + 0x161 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Tentacle_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Golden_Spatula_Tentacle_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Unlock_Levels() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Tentacle_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xc3 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Tentacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc5 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Comic() {
    return (*(uint8_t*)((uintptr_t)this + 0x156 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Tentacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x105 + 0);
    *(uint8_t*)((uintptr_t)this + 0x105 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Tentacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_Boss_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x107 + 0);
    *(uint8_t*)((uintptr_t)this + 0x107 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Ace() {
    return (*(uint8_t*)((uintptr_t)this + 0x151 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Tentacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_101__Completion() {
    return (*(uint8_t*)((uintptr_t)this + 0x15f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Tentacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Tentacle() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0xfd + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Tentacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Chef_Minigame() {
    return (*(uint8_t*)((uintptr_t)this + 0x15e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfe + 0);
    *(uint8_t*)((uintptr_t)this + 0xfe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Surveillance() {
    return (*(uint8_t*)((uintptr_t)this + 0xcb + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Surveillance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcb + 0);
    *(uint8_t*)((uintptr_t)this + 0xcb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Good_Noodle_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0xfe + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Active_Uncensor_Dialogue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x154 + 0);
    *(uint8_t*)((uintptr_t)this + 0x154 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Coochie() {
    return (*(uint8_t*)((uintptr_t)this + 0xcc + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Extras(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x155 + 0);
    *(uint8_t*)((uintptr_t)this + 0x155 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xee + 0);
    *(uint8_t*)((uintptr_t)this + 0xee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Coochie(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcc + 0);
    *(uint8_t*)((uintptr_t)this + 0xcc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_SFX_Integer() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Dialogue_Integer() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Save_Gamma() {
    return *(float*)((uintptr_t)this + 0xe4);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Sand_Castle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x137 + 0);
    *(uint8_t*)((uintptr_t)this + 0x137 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Goo_Lagoon_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Goo_Lagoon_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xea + 0);
    *(uint8_t*)((uintptr_t)this + 0xea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Goo_Lagoon_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xeb + 0);
    *(uint8_t*)((uintptr_t)this + 0xeb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Ace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x151 + 0);
    *(uint8_t*)((uintptr_t)this + 0x151 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Golden_Spatula_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Yummer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x131 + 0);
    *(uint8_t*)((uintptr_t)this + 0x131 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Golden_Spatula_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Pamtri() {
    return (*(uint8_t*)((uintptr_t)this + 0x13d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Good_Noodle_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xed + 0);
    *(uint8_t*)((uintptr_t)this + 0xed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Ace_Completion() {
    return (*(uint8_t*)((uintptr_t)this + 0x147 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_No_Death_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0xef + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Sand_Castle_1() {
    return (*(uint8_t*)((uintptr_t)this + 0xf1 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Wanted_Poster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12f + 0);
    *(uint8_t*)((uintptr_t)this + 0x12f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Sand_Castle_1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_MXXN() {
    return (*(uint8_t*)((uintptr_t)this + 0x136 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_Boss_1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x106 + 0);
    *(uint8_t*)((uintptr_t)this + 0x106 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Sand_Castle_2() {
    return (*(uint8_t*)((uintptr_t)this + 0xf2 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Sand_Castle_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Sand_Castle() {
    return (*(uint8_t*)((uintptr_t)this + 0x137 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Sand_Castle_5() {
    return (*(uint8_t*)((uintptr_t)this + 0xf5 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Sand_Castle_5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Krussy() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Robot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Hotdog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Pamtri(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13d + 0);
    *(uint8_t*)((uintptr_t)this + 0x13d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_IceCubes() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Golden_Spatula_Mermalair_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Suicide() {
    return (*(uint8_t*)((uintptr_t)this + 0x13e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Chef_Minigame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15e + 0);
    *(uint8_t*)((uintptr_t)this + 0x15e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Goober_Token_Mermalair_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xfa + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Goober_Token_Mermalair_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Spatula_Door_Salty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12c + 0);
    *(uint8_t*)((uintptr_t)this + 0x12c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_No_Death_Mermalair_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xfb + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Acres_Abandon_Patrick() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fb + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_No_Death_Mermalair_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfb + 0);
    *(uint8_t*)((uintptr_t)this + 0xfb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Ace_Mermalair_Save() {
    return (*(uint8_t*)((uintptr_t)this + 0xfc + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_MKHE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13b + 0);
    *(uint8_t*)((uintptr_t)this + 0x13b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Ace_Mermalair_Save(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfc + 0);
    *(uint8_t*)((uintptr_t)this + 0xfc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Spatula_Door_Unlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12a + 0);
    *(uint8_t*)((uintptr_t)this + 0x12a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Goober_Token_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0xff + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Goober_Token_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xff + 0);
    *(uint8_t*)((uintptr_t)this + 0xff + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Map_Ace_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0x101 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Map_Ace_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x101 + 0);
    *(uint8_t*)((uintptr_t)this + 0x101 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x102 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_KAHN() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x102 + 0);
    *(uint8_t*)((uintptr_t)this + 0x102 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Doodle_Pencil() {
    return (*(uint8_t*)((uintptr_t)this + 0x13c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x103 + 0);
    *(uint8_t*)((uintptr_t)this + 0x103 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_3() {
    return (*(uint8_t*)((uintptr_t)this + 0x105 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_Boss_1() {
    return (*(uint8_t*)((uintptr_t)this + 0x106 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Beat_Kelp_Forest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x133 + 0);
    *(uint8_t*)((uintptr_t)this + 0x133 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_Boss_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x107 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_Boss_3() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Uncensored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14f + 0);
    *(uint8_t*)((uintptr_t)this + 0x14f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Invisible_Boat() {
    return (*(uint8_t*)((uintptr_t)this + 0x109 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Invisible_Boat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x109 + 0);
    *(uint8_t*)((uintptr_t)this + 0x109 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Glove_Bathroom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Statue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Collect_Orb() {
    return (*(uint8_t*)((uintptr_t)this + 0x10a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Orb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10a + 0);
    *(uint8_t*)((uintptr_t)this + 0x10a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Collect_Boofie(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10b + 0);
    *(uint8_t*)((uintptr_t)this + 0x10b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Houses() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Houses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Tentacle_Barg() {
    return (*(uint8_t*)((uintptr_t)this + 0x10d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Tentacle_Barg(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10d + 0);
    *(uint8_t*)((uintptr_t)this + 0x10d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Boating_School() {
    return (*(uint8_t*)((uintptr_t)this + 0x10e + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Yummer() {
    return (*(uint8_t*)((uintptr_t)this + 0x131 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Boating_School(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10e + 0);
    *(uint8_t*)((uintptr_t)this + 0x10e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Goofy_Goobers() {
    return (*(uint8_t*)((uintptr_t)this + 0x10f + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Wanted_Poster() {
    return (*(uint8_t*)((uintptr_t)this + 0x12f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Goofy_Goobers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10f + 0);
    *(uint8_t*)((uintptr_t)this + 0x10f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Beat_Kelp_Forest() {
    return (*(uint8_t*)((uintptr_t)this + 0x133 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Goober_Tokens(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14b + 0);
    *(uint8_t*)((uintptr_t)this + 0x14b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Mermalair() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Spatula_Door() {
    return (*(uint8_t*)((uintptr_t)this + 0x132 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Mermalair(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Minigame_Chest() {
    return (*(uint8_t*)((uintptr_t)this + 0x12b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Industrial_KK() {
    return (*(uint8_t*)((uintptr_t)this + 0x111 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Industrial_KK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x111 + 0);
    *(uint8_t*)((uintptr_t)this + 0x111 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Larry_s_Gym(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x112 + 0);
    *(uint8_t*)((uintptr_t)this + 0x112 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Goo_Lagoon() {
    return (*(uint8_t*)((uintptr_t)this + 0x113 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Goo_Lagoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x113 + 0);
    *(uint8_t*)((uintptr_t)this + 0x113 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Jellyfish_Fields() {
    return (*(uint8_t*)((uintptr_t)this + 0x114 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_MKHE() {
    return (*(uint8_t*)((uintptr_t)this + 0x13b + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Jellyfish_Fields(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114 + 0);
    *(uint8_t*)((uintptr_t)this + 0x114 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Sandy_s_Treedome() {
    return (*(uint8_t*)((uintptr_t)this + 0x115 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Sandy_s_Treedome(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x115 + 0);
    *(uint8_t*)((uintptr_t)this + 0x115 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Final_Level() {
    return (*(uint8_t*)((uintptr_t)this + 0x116 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_SpongeBob_s_Pineapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x117 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_SpongeBob_s_Pineapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x117 + 0);
    *(uint8_t*)((uintptr_t)this + 0x117 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Squidward_s_Monument() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Statue() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Squidward_s_Monument(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Patrick_s_Rock() {
    return (*(uint8_t*)((uintptr_t)this + 0x119 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Patrick_s_Rock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x119 + 0);
    *(uint8_t*)((uintptr_t)this + 0x119 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Suicide(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13e + 0);
    *(uint8_t*)((uintptr_t)this + 0x13e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Anchor_Way() {
    return (*(uint8_t*)((uintptr_t)this + 0x11a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Anchor_Way(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11a + 0);
    *(uint8_t*)((uintptr_t)this + 0x11a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Tentacle_Acres() {
    return (*(uint8_t*)((uintptr_t)this + 0x11b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Beat_Krussy() {
    return (*(uint8_t*)((uintptr_t)this + 0x135 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_Tentacle_Acres(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11b + 0);
    *(uint8_t*)((uintptr_t)this + 0x11b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Beat_Krussy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x135 + 0);
    *(uint8_t*)((uintptr_t)this + 0x135 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Extras() {
    return (*(uint8_t*)((uintptr_t)this + 0x155 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_BargNMart() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Beat_BargNMart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Beat_Industrial_Park() {
    return (*(uint8_t*)((uintptr_t)this + 0x11d + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Radio() {
    return (*(uint8_t*)((uintptr_t)this + 0x13a + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Save_Exists_() {
    return (*(uint8_t*)((uintptr_t)this + 0x11f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Save_Exists_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11f + 0);
    *(uint8_t*)((uintptr_t)this + 0x11f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Mermalair_Disco() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Mermalair_Disco(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Guitar_Charged_Up() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_KK_Wave(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x122 + 0);
    *(uint8_t*)((uintptr_t)this + 0x122 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Overlord_Fight_1() {
    return (*(uint8_t*)((uintptr_t)this + 0x123 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Doodle_Pencil(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13c + 0);
    *(uint8_t*)((uintptr_t)this + 0x13c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Overlord_Fight_1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x123 + 0);
    *(uint8_t*)((uintptr_t)this + 0x123 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Overlord_Fight_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Overlord_Fight_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Lemonade() {
    return (*(uint8_t*)((uintptr_t)this + 0x134 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Checkpoint_Overlord_Fight_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x125 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Checkpoint_Overlord_Fight_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x125 + 0);
    *(uint8_t*)((uintptr_t)this + 0x125 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Watched_Ace_End() {
    return (*(uint8_t*)((uintptr_t)this + 0x126 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Watched_Ace_End(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x126 + 0);
    *(uint8_t*)((uintptr_t)this + 0x126 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Final_Level_Section_2_Complete() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Final_Level_Section_2_Complete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Final_Level_Section_3_Complete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x129 + 0);
    *(uint8_t*)((uintptr_t)this + 0x129 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Spatula_Door_Unlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x12a + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Minigame_Chest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12b + 0);
    *(uint8_t*)((uintptr_t)this + 0x12b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Minigame_Krussy() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_KAHN(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Square() {
    return (*(uint8_t*)((uintptr_t)this + 0x139 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Square(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x139 + 0);
    *(uint8_t*)((uintptr_t)this + 0x139 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_SlendyPants() {
    return (*(uint8_t*)((uintptr_t)this + 0x13f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_SlendyPants(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13f + 0);
    *(uint8_t*)((uintptr_t)this + 0x13f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_FredTheFred() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_FredTheFred(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_DayOfTerror() {
    return (*(uint8_t*)((uintptr_t)this + 0x141 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_DayOfTerror(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x141 + 0);
    *(uint8_t*)((uintptr_t)this + 0x141 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_KKNightmare() {
    return (*(uint8_t*)((uintptr_t)this + 0x142 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_KKNightmare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x142 + 0);
    *(uint8_t*)((uintptr_t)this + 0x142 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Ketamine() {
    return (*(uint8_t*)((uintptr_t)this + 0x143 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Speedrun_Minigame() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f9 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Ketamine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x143 + 0);
    *(uint8_t*)((uintptr_t)this + 0x143 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_CumWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x144 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_CumWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x144 + 0);
    *(uint8_t*)((uintptr_t)this + 0x144 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Misc_Ace_Cutscene() {
    return (*(uint8_t*)((uintptr_t)this + 0x145 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Misc_Ace_Cutscene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x145 + 0);
    *(uint8_t*)((uintptr_t)this + 0x145 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Base_Completion() {
    return (*(uint8_t*)((uintptr_t)this + 0x146 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_100__Completion() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_100__Completion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Extras(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x149 + 0);
    *(uint8_t*)((uintptr_t)this + 0x149 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Golden_Spatulas() {
    return (*(uint8_t*)((uintptr_t)this + 0x14a + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Goober_Tokens() {
    return (*(uint8_t*)((uintptr_t)this + 0x14b + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Trophy_Kelp_Forest() {
    return (*(uint8_t*)((uintptr_t)this + 0x14c + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_Krussy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Minigames(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14e + 0);
    *(uint8_t*)((uintptr_t)this + 0x14e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Uncensored() {
    return (*(uint8_t*)((uintptr_t)this + 0x14f + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Unlock_Levels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Golden_Spatulas() {
    return (*(uint8_t*)((uintptr_t)this + 0x152 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Golden_Spatulas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x152 + 0);
    *(uint8_t*)((uintptr_t)this + 0x152 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Goofy_Goobers_Tokens() {
    return (*(uint8_t*)((uintptr_t)this + 0x153 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Goofy_Goobers_Tokens(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x153 + 0);
    *(uint8_t*)((uintptr_t)this + 0x153 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Active_Uncensor_Dialogue() {
    return (*(uint8_t*)((uintptr_t)this + 0x154 + 0)) & 1 != 0;
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Golden_Spatulas() {
    return (*(uint8_t*)((uintptr_t)this + 0x157 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Golden_Spatulas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x157 + 0);
    *(uint8_t*)((uintptr_t)this + 0x157 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Goobers_Tokens() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Goobers_Tokens(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Activated_Unlock_Levels() {
    return (*(uint8_t*)((uintptr_t)this + 0x15b + 0)) & 1 != 0;
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_MrKrabs_Speedrun_Time_Float() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Unlock_Levels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15b + 0);
    *(uint8_t*)((uintptr_t)this + 0x15b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Activated_Unlock_Extras(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Cheat_Active_Comic_Filter() {
    return (*(uint8_t*)((uintptr_t)this + 0x15d + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Cheat_Active_Comic_Filter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15d + 0);
    *(uint8_t*)((uintptr_t)this + 0x15d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Trophy_101__Completion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15f + 0);
    *(uint8_t*)((uintptr_t)this + 0x15f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Sandy_Mid_Checkpoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Sandy_Mid_Checkpoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Disable_Hints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x161 + 0);
    *(uint8_t*)((uintptr_t)this + 0x161 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Fullscreen_Mode() {
    return (*(uint8_t*)((uintptr_t)this + 0x162 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Fullscreen_Mode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x162 + 0);
    *(uint8_t*)((uintptr_t)this + 0x162 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Windowed_Mode() {
    return (*(uint8_t*)((uintptr_t)this + 0x163 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Windowed_Mode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x163 + 0);
    *(uint8_t*)((uintptr_t)this + 0x163 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Speedrun_Sponge_Beat() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Speedrun_Patrick_Beat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x165 + 0);
    *(uint8_t*)((uintptr_t)this + 0x165 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Speedrun_MrKrabs_Beat() {
    return (*(uint8_t*)((uintptr_t)this + 0x167 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Speedrun_MrKrabs_Beat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x167 + 0);
    *(uint8_t*)((uintptr_t)this + 0x167 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_NewRecord() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_NewRecord(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Blueprints_MySaveGame::MySaveGame_C::get_CurrentTime() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Blueprints_MySaveGame::MySaveGame_C::get_Sponge_Speedrun_Record() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Game_Blueprints_MySaveGame::MySaveGame_C::get_Patrick_Speedrun_Record() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Game_Blueprints_MySaveGame::MySaveGame_C::get_Squidward_Speedrun_Record() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Game_Blueprints_MySaveGame::MySaveGame_C::get_MrKrabs_Speedrun_Record() {
    return (void*)((uintptr_t)this + 0x1d0);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Sponge_Speedrun_Time_Float() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Patrick_Speedrun_Time_Float() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Game_Blueprints_MySaveGame::MySaveGame_C::get_Squidward_Speedrun_Time_Float() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Minigame_Beat_HappyGoLucky(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Speedrun_Minigame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Blueprints_MySaveGame::MySaveGame_C::get_Unlock_Lucky_Minigame() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 1 != 0;
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Unlock_Lucky_Minigame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Blueprints_MySaveGame::MySaveGame_C::set_Acres_Abandon_Patrick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fb + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Blueprints_MySaveGame::MySaveGame_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/MySaveGame.MySaveGame_C");
    return result;
}
