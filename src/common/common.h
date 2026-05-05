#pragma once
#include <cstdint>

namespace patterns 
{                              
	constexpr auto steam_overlay = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 54 41 56 41 57 48 83 EC ? 41 8B E8";

	constexpr auto local_player_controller = "33 C0 83 F9 FF 0F 44 C8 48 63 C1 48 8D 0D";

	constexpr auto add_entity = "48 89 74 24 ? 57 48 83 EC ? 41 B9 ? ? ? ? 41 8B C0 41 23 C1 48 8B F2 41 83 F8 ? 48 8B F9 44 0F 45 C8 41 81 F9 ? ? ? ? 73 ? FF 81";
	constexpr auto remove_entity = "48 89 74 24 ? 57 48 83 EC ? 41 B9 ? ? ? ? 41 8B C0 41 23 C1 48 8B F2 41 83 F8 ? 48 8B F9 44 0F 45 C8 41 81 F9 ? ? ? ? 73 ? FF 89";

	constexpr auto get_base_entity = "4C 8D 49 ? 81 FA ? ? ? ? 77";
	constexpr auto get_game_entity_system = "48 8B 0D ? ? ? ? 8B D0 E8";

	constexpr auto get_view_matrix = "48 8B C4 48 89 58 ? 55 48 8D 68 ? 48 81 EC ? ? ? ? ? ? ? ? 4C 8D 44 24";

	constexpr auto get_bone_id_by_name = "40 53 48 83 EC 20 48 8B 89 ? ? ? ? 48 8B DA 48 8B 01 FF 50 ? 48 8B C8";

	constexpr auto get_screen_transform = "33 C0 48 39 05 ? ? ? ? 0F 84";

	constexpr auto calc_world_space_bones = "48 89 4C 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 B8 ? ? ? ? E8 ? ? ? ? 48 2B E0 48 8D 6C 24 ? 48 8B 81";

	constexpr auto mouse_input_enabled = "48 83 EC ? E8 ? ? ? ? 84 C0 0F 85";
	constexpr auto relative_mouse_mode = "48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 0F B6 F2";

	constexpr auto frame_stage_notify = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? ? ? ? 8B DA 0F 29 74 24";

	constexpr auto create_move = "85 D2 0F 85 ? ? ? ? 48 8B C4 44 88 40";

	constexpr auto skybox_object = "45 85 C9 0F 8E ? ? ? ? 4C 8B DC";

	constexpr auto set_view_angles = "85 D2 75 ? 48 63 81";

	constexpr auto get_view_angles = "4C 8B C1 85 D2 74 ? 48 8D 05";

	constexpr auto get_user_cmd_tick = "48 83 EC ? 4C 8B 0D ? ? ? ? 4C 8B DA";

	constexpr auto get_user_cmd_array = "48 89 4C 24 ? 41 56 41 57";

	constexpr auto get_user_cmd_by_sequence_number = "40 53 48 83 EC ? 8B DA E8 ? ? ? ? 4C 8B C0";

	constexpr auto get_eye_pos = "48 89 74 24 ? 57 48 83 EC ? 48 8B F9 48 8B F2 48 8B 89";

	constexpr auto camera_update = "4C 8B DC 55 48 83 EC ? 48 8B 05 ? ? ? ? 48 8B E9 80 78 ? 00";

	constexpr auto render_decals = "48 89 5C 24 ? 55 56 57 41 56 41 57 48 83 EC ? 48 8D 05 ? ? ? ? 48 C7 44 24 ? ? ? ? ? 48 89 44 24 ? 4C 8D 44 24 ? 0F 10 44 24 ? 48 8D 05 ? ? ? ? 4C 8B F9";
}

namespace names
{
	inline auto schemasystem = "SchemaSystem_001";
	inline auto c_source2_client = "Source2Client002";
	inline auto c_network_game_client = "Source2NetworkGameClient001";
}
