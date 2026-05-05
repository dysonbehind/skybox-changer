#pragma once
#include <cstdint>
#include <map>

class HeroID_t
{
public:
    uint32_t m_value;
};
enum TeamNum_t : int32_t
{
    TEAM_UNKNOWN,
    TEAM_SPECTATOR,
    TEAM_DIER = 2,
    TEAM_RADIANT = 3,
};
enum npc_state : uint32_t
{
    NPC_STATE_INVALID = 0xFFFFFFFF,
    NPC_STATE_INIT = 0x00000000,
    NPC_STATE_IDLE = 0x00000001,
    NPC_STATE_ALERT = 0x00000002,
    NPC_STATE_COMBAT = 0x00000003,
    NPC_STATE_SCRIPT = 0x00000004,
    NPC_STATE_DEAD = 0x00000005,
    NPC_STATE_INERT = 0x00000006,
    NPC_STATE_SYNCHRONIZED_SECONDARY = 0x00000007,
    NUM_NPC_STATES = 0x00000008,
};
enum class ClientFrameStage_t : int {
    FRAME_UNDEFINED = -1,
    FRAME_START,
    FRAME_NET_UPDATE_START,
    FRAME_NET_UPDATE_POSTDATAUPDATE_START,
    FRAME_NET_UPDATE_POSTDATAUPDATE_END,
    FRAME_NET_UPDATE_END,
    FRAME_RENDER_START,
    FRAME_RENDER_END,
    FRAME_NET_FULL_FRAME_UPDATE_ON_REMOVE
};
static inline const std::map<uint32_t, const char*> s_HeroNames =
{
    { 6, "Abrams" },
    { 15, "Bebop" },
    { 16, "Calico" },
    { 11, "Dynamo" },
    { 53, "Fathom" },
    { 17, "GreyTalon" },
    { 13, "Haze" },
    { 14, "Holliday" },
    { 1, "Infernus" },
    { 20, "Ivy" },
    { 12, "Kelvin" },
    { 4, "LadyGeist" },
    { 31, "Lash" },
    { 8, "McGinnis" },
    { 52, "Mirage" },
    { 18, "MoKrill" },
    { 10, "Paradox" },
    { 50, "Pocket" },
    { 62, "Raven" },
    { 2, "Seven" },
    { 19, "Shiv" },
    { 60, "Sinclair" },
    { 61, "Trapper" },
    { 3, "Vindicta" },
    { 35, "Viscous" },
    { 58, "Vyper" },
    { 25, "Warden" },
    { 7, "Wraith" },
    { 48, "Wrecker" },
    { 27, "Yamato" },
    { 55, "Bot" },
    { 66, "Victor" },
    { 77, "Apollo" },
    { 81, "Celeste" },
    { 72, "Billy" },
    { 79, "Rem" },
    { 76, "Graves" },
    { 69, "The Doorman" },
    { 67, "Paige" },
    { 65, "Venator" },
    { 63, "Mina" },
    { 80, "Silver" },
    { 64, "Drifter" },
};
enum EBoneFlags : uint32_t
{
    FLAG_NO_BONE_FLAGS = 0x0,
    FLAG_BONEFLEXDRIVER = 0x4,
    FLAG_CLOTH = 0x8,
    FLAG_PHYSICS = 0x10,
    FLAG_ATTACHMENT = 0x20,
    FLAG_ANIMATION = 0x40,
    FLAG_MESH = 0x80,
    FLAG_HITBOX = 0x100,
    FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
    FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
    FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
    FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
    FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
    FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
    FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
    FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
    FLAG_BONE_MERGE_READ = 0x40000,
    FLAG_BONE_MERGE_WRITE = 0x80000,
    FLAG_ALL_BONE_FLAGS = 0xfffff,
    BLEND_PREALIGNED = 0x100000,
    FLAG_RIGIDLENGTH = 0x200000,
    FLAG_PROCEDURAL = 0x400000,
};
