#include "invoker.h"

#pragma once
typedef void *PVOID;
typedef unsigned long DWORD;
typedef char CHAR;
typedef unsigned char BYTE;
typedef int BOOL;
typedef float FLOAT;
typedef CHAR *PCHAR;
#define VOID void
#define CONST const
typedef unsigned short WORD;
typedef DWORD *PDWORD;

typedef struct
{
	float x, y, z;
} Vector3;

typedef DWORD Void;
typedef DWORD Any;
typedef DWORD Hash;
typedef int BOOL;
typedef int Player;
typedef int Actor;
typedef int Object;
typedef int Vehicle;
typedef int ScrHandle;
typedef int Controller;
typedef int Cam;
typedef int Camera;
typedef int Blip;
typedef int Layout;
typedef int GUIWindow;
typedef float Time;


/*enum Buttons
{
	Button_A = 0xC1,
	Button_B = 0xC3,
	Button_X = 0xC2,
	Button_Y = 0xC0,
	Button_Back = 0xBF,
	Button_L1 = 0xC4,
	Button_L2 = 0xC6,
	Button_L3 = 0xC8,
	Button_R1 = 0xC5,
	Button_R2 = 0xC7,
	Button_R3 = 0xC9,
	Dpad_Up = 0xCA,
	Dpad_Down = 0xCB,
	Dpad_Left = 0xCC,
	Dpad_Right = 0xCD
};*/


/*static Actor GET_PLAYER_ACTOR(Player player) { return invoke<Actor>(0xE8CFDD53, player); } // 0xE8CFDD53
static void SET_ACTOR_INVULNERABILITY(Actor actor, BOOL toggle) { invoke<Void>(0xE38EF526, actor, toggle); }
static void GIVE_WEAPON_TO_ACTOR(Actor actor, int weaponId, int ammoCount, BOOL p3, Any p4) { invoke<Void>(0x6AA0EAF2, actor, weaponId, ammoCount, p3, p4); }
static void _SET_ACTOR_INFINITE_AMMO_FLAG(Actor actor, int weaponGroup, BOOL toggle) { invoke<Void>(0x4FE2B586, actor, weaponGroup, toggle); }*/


namespace SYSTEM
{
	static void WAIT(int ms) { invoke<Void>(0x7715C03B, ms); } // 0x7715C03B
	static void WAITUNWARPED(int ms) { invoke<Void>(0x01185F9B, ms); } // 0x01185F9B
	static void WAITUNPAUSED(int ms) { invoke<Void>(0x7C496803, ms); } // 0x7C496803
	static Any START_NEW_SCRIPT(Any p0, Any p1) { return invoke<Any>(0x3F166D0E, p0, p1); } // 0x3F166D0E
	static Any START_NEW_SCRIPT_WITH_ARGS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4A2100E4, p0, p1, p2, p3); } // 0x4A2100E4
	static void SETTIMERA(Any p0) { invoke<Void>(0x35785333, p0); } // 0x35785333
	static Any TIMESTEP() { return invoke<Any>(0x50597EE2); } // 0x50597EE2
	static void PRINTSTRING(char* value) { invoke<Void>(0xECF8EB5F, value); } // 0xECF8EB5F
	static void PRINTFLOAT(float value) { invoke<Void>(0xD48B90B6, value); } // 0xD48B90B6
	static void PRINTINT(int value) { invoke<Void>(0x63651F03, value); } // 0x63651F03
	static void PRINTNL() { invoke<Void>(0x868997DA); } // 0x868997DA
	static void PRINTVECTOR(float p0, float p1, float p2) { invoke<Void>(0x85F31FB, p0, p1, p2); } // 0x85F31FB
	static float SQRT(float value) { return invoke<float>(0x145C7701, value); } // 0x145C7701
	static float POW(float base, float exponent) { return invoke<float>(0x85D134F8, base, exponent); } // 0x85D134F8
	static Any EXP(Any p0, Any p1) { return invoke<Any>(0xE2313450, p0, p1); } // 0xE2313450
	static float VMAG(float p0, float p1, float p2) { return invoke<float>(0x1FCF1ECD, p0, p1, p2); } // 0x1FCF1ECD
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x3C08ECB7, x1, y1, z1, x2, y2, z2); } // 0x3C08ECB7
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xC85DEF1F, x1, y1, z1, x2, y2, z2); } // 0xC85DEF1F
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x314CC6CD, value, bitShift); } // 0x314CC6CD
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x352633CA, value, bitShift); } // 0x352633CA
	static int FLOOR(float value) { return invoke<int>(0x32E9BE04, value); } // 0x32E9BE04
	static int CEIL(float value) { return invoke<int>(0xD536A1DF, value); } // 0xD536A1DF
	static int ROUND(float value) { return invoke<int>(0x323B0E24, value); } // 0x323B0E24
	static float TO_FLOAT(int value) { return invoke<float>(0x67116627, value); } // 0x67116627
	static void SNAPSHOT_GLOBALS() { invoke<Void>(0x5A25520E); } // 0x5A25520E
	static Any GET_LATEST_CONSOLE_COMMAND(Any p0) { return invoke<Any>(0x2B547FE6, p0); } // 0x2B547FE6
	static Any RESET_LATEST_CONSOLE_COMMAND(Any p0) { return invoke<Any>(0xAA3EC981, p0); } // 0xAA3EC981
	static Any GET_CONSOLE_COMMAND_TOKEN(Any p0) { return invoke<Any>(0x9DE3DE24, p0); } // 0x9DE3DE24
	static Any GET_NUM_CONSOLE_COMMAND_TOKENS(Any p0) { return invoke<Any>(0x608F5BC6, p0); } // 0x608F5BC6
}

namespace NETCONNECTION
{
	// 0x2547029C
	// 0x6F6D942B
	// 0x713B1D7F
	// 0x9C80A3A4
	// 0x27A00456
	// 0x120E6123
	// 0x4585821E
	// 0x46C39437
}

namespace DOOR
{
	static Any FIND_NEAREST_DOOR(Any p0, Any p1) { return invoke<Any>(0x9CB5372B, p0, p1); } // 0x9CB5372B
	// 0x9CE0AA24
	// 0x7F0F079B
	// 0x19FB9518
	// 0x184924E2
	// 0x48659CD7
	// 0x211DD9D2
	// 0x52BB0836
	// 0xCBA9F32C
	// 0xD3300956
	// 0x5BCFC899
	// 0x30503E81
	// 0xAACB4435
	static void OPEN_DOOR_FAST(Any p0, Any p1) { invoke<Void>(0xCF89BC95, p0, p1); } // 0xCF89BC95
	// 0xBA51D02E
	// 0x075B1736
	// 0xFEEC0767
	// 0x3B25299D
	// 0x468DDDB3
	// 0xDAD47AE6
}

namespace PHYSINST // INVENTORY
{
	// 0x25277BBC
	static Any GET_PROP_VELOCITY(Any p0, Any p1) { return invoke<Any>(0x5AEA8801, p0, p1); } // 0x5AEA8801
	// 0x28425D8C
	// 0x544BCE48
	// 0xC9F3981D
	static Any IS_PHYSINST_VALID(Any p0) { return invoke<Any>(0x16C0A6CB, p0); } // 0x16C0A6CB
	// 0xE83E6A41
	// 0x6243A6AF
	// 0x750ADBE5
	// 0x987FD4F6
	static void ACTIVATE_PHYSINST(Any p0) { invoke<Void>(0xC0961D18, p0); } // 0xC0961D18
	// 0x65CA3037
	// 0x734CC17B
	// 0x4FF36FA7
	// 0xC5E372BC
	// 0x441CDD55
	// 0x4A05AA7D
	static void RELEASE_CONSTRAINT(Any p0) { invoke<Void>(0x8B9659EF, p0); } // 0x8B9659EF
	// 0x0D6BFDD9
	static void SHOW_PHYSINST(Any p0) { invoke<Void>(0x342FDCD6, p0); } // 0x342FDCD6
	static void SET_SECTOR_PROPS_SUPER_LOCKED(Any p0, Any p1) { invoke<Void>(0xED3ADF67, p0, p1); } // 0xED3ADF67
	// 0x3774465F
	// 0xD0CDEED4
	// 0x1260ACCC
}

// 16sagObjRscHandler
// 14WorldfxManager
// mapres
// fragments
// 16ZombieDLCManager..
// 14sagBloodTarget
// 14sagEnvironment
namespace WORLDFX // WORLDENVIRONMENT
{
	// 0x9A93E7CA
	// 0x59A7835E
	// 0x25690082
	// 0xE92C3435
	// 0xDB86F53B
	// 0x8BA565F7
	// 0xB8E09389
	// 0x9AA8A1B1
	// 0x002B0698
	// 0x57478561
	// 0x39B0CFE5
	// 0xDCAE6935
	// 0x8CF15FCB
	// 0x4A8066FB
	// 0x1DDB57A6
	// 0x88863344
	// 0xE7371670
	// 0x03E2B631
	// 0xCA840DBB
	// 0x4F3F3CA5
	// 0xC587FA2B
	static Any CREATE_FIRE_IN_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xD4799325, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xD4799325
	static void STOP_ALL_FIRES() { invoke<Void>(0x9544570A); } // 0x9544570A
	// 0x8011737F
	// 0x5402321A
	// 0x2AC74780
	// 0x466C02BA
	// 0xEC3A9EBB
	// 0xADB3E8D9
	// 0x08D06543
	// 0xAD5613FD
	// 0xB511D087
	// 0x7ECE15BE
	static void DISABLE_CHILD_SECTOR(Any p0) { invoke<Void>(0x9E1AE585, p0); } // 0x9E1AE585
	// 0x4E6A78B5
	// 0x63A83655
	// 0xBBAE9CBD
	// 0xA488E930
	// 0xB14B936A
	// 0xD2BB733E
	// 0x91396EB7
	// 0x9679CF84
	// 0xB65ADFAC
	// 0x30C4CA99
	// 0x15001332
	// 0xF635B9EA
	// 0x11A65FFB
	// 0x15683736
	// 0xE5C7E4C9
	// 0x3D5D3B26
	// 0x03240324
	// 0xE5E04E83
	// 0x9C471E7D
	// 0x1A82B949
	// 0x7906A950
	// 0x6471D75C
	// 0x53895856
	// 0xDEE6523D
	// 0x3DD3E1EB
	// 0x28DAED2A
	static int _CHEAT_BLAZING_GUNS(BOOL toggle) { return invoke<int>(0x3F67DEDB, toggle); }
}

namespace STREAMING
{
	static void STREAMING_REQUEST_ACTOR(Any p0, Any p1, Any p2) { invoke<Void>(0xB0A79FEE, p0, p1, p2); } // 0xB0A79FEE
	static BOOL STREAMING_IS_ACTOR_LOADED(Any p0) { return invoke<BOOL>(0x7DF72579, p0); } // 0x7DF72579
	static void STREAMING_EVICT_ACTOR(Any p0) { invoke<Void>(0x6661CF89, p0); } // 0x6661CF89
	static BOOL STREAMING_IS_WORLD_LOADED() { return invoke<BOOL>(0x87B74064); } // 0x87B74064
	static BOOL _STREAMING_IS_WORLD_LOADED_2() { return invoke<BOOL>(0x943BE053); } // 0x943BE053
	static Any _0xC07681C1(Any p0, Any p1, Any p2) { return invoke<Any>(0xC07681C1, p0, p1, p2); } // 0xC07681C1
	static void STREAMING_REQUEST_PROP(Any p0) { invoke<Void>(0x38DC1F50, p0); } // 0x38DC1F50
	static BOOL STREAMING_IS_PROP_LOADED(Any p0) { return invoke<BOOL>(0xD7F80035, p0); } // 0xD7F80035
	// 0xA8D12960
	static void STREAMING_REQUEST_PROPSET(Any p0) { invoke<Void>(0xEC1F14C8, p0); } // 0xEC1F14C8
	static BOOL STREAMING_IS_PROPSET_LOADED(Any p0) { return invoke<BOOL>(0xF7D65903, p0); } // 0xF7D65903
	// 0x4A5E4C13
	static void STREAMING_REQUEST_GRINGO(Any p0) { invoke<Void>(0x563E2E79, p0); } // 0x563E2E79
	static BOOL STREAMING_IS_GRINGO_LOADED(Any p0) { return invoke<BOOL>(0xA6C9DCEA, p0); } // 0xA6C9DCEA
	static void STREAMING_EVICT_GRINGO(Any p0) { invoke<Void>(0xA02B6AAE, p0); } // 0xA02B6AAE
	// 0x620649B4
	// 0x67994764
	// 0x32FCA813
	static void STREAMING_REQUEST_SCRIPT(Any p0) { invoke<Void>(0x11E57A92, p0); } // 0x11E57A92
	static BOOL STREAMING_IS_SCRIPT_LOADED(Any p0) { return invoke<BOOL>(0xB5B4AEAD, p0); } // 0xB5B4AEAD
	static void STREAMING_EVICT_SCRIPT(Any p0) { invoke<Void>(0x570163E2, p0); } // 0x570163E2
	static void STREAMING_LOAD_ALL_REQUESTS_NOW(Any p0) { invoke<Void>(0x7B5C28F3, p0); } // 0x7B5C28F3
	// 0xCB1E8485
	// 0x39E69B1B
	// 0x055EF7A3
	// 0x338F85D9
	// 0x7D5C0C4D
	// 0x5B404EDA
	// 0xDF3DF05A
	// 0x49E4EB10
	// 0x5F4C08A2
	// 0x83088F62
	// 0x0BEBB187
	// 0x0F8FC4D0
	// 0x1CD960B8
	static void STREAMING_UNLOAD_BOUNDS() { invoke<Void>(0x09A67EC6); } // 0x09A67EC6
	// 0xF7BABE84
	static void STREAMING_EVICT_ALL(Any p0) { invoke<Void>(0x7D432781, p0); } // 0x7D432781
	// 0x8EB0B2AD
	// 0xCA99D3B4
	// 0xE74C4851
	// 0x6F9C399B
	static void STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(Any p0) { invoke<Void>(0xBEABC729, p0); } // 0xBEABC729
	// 0xB226E8E3
	// 0xE981992C
	// 0x8CC6066C
	// 0x83E043A6
}

namespace RENDER
{
	// 0x6AF07F86
	static void PRINT_FRAME_TIME(int p0) { invoke<Void>(0xB84DE79E, p0); } // 0xB84DE79E
}

// 11atSingletonI24projExplosionTypeManagerE
namespace EXPLOSION
{
	static void _CREATE_EXPLOSION(float x, float y, float z, char* explosionName, BOOL p2, float damageX, float damageY, float damageZ, BOOL p4) { invoke<Void>(0xE7023D23, x, y, z, explosionName, p2, damageX, damageY, damageZ, p4); } // 0xE7023D23
	// 0x651F6299
}

namespace WEATHER
{
	static void SET_WEATHER(int weatherType, Time time) { invoke<Void>(0x456D7F38, weatherType, time); } // 0x456D7F38
	static Any GET_WEATHER() { return invoke<Any>(0xEA026ED9); } // 0xEA026ED9
	static void SET_WEATHER_COMPLEX(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0xC157CA40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xC157CA40
	static void SET_WIND(Any p0, Any p1, Any p2) { invoke<Void>(0xC6294698, p0, p1, p2); } // 0xC6294698
	static void SET_AUTO_WIND(Any p0) { invoke<Void>(0x5D37C383, p0); } // 0x5D37C383
	static void SET_RAIN_AMOUNT(float value) { invoke<Void>(0xB788D24A, value); } // 0xB788D24A
	static Any _0xF0C9645A() { return invoke<Any>(0xF0C9645A); } // 0xF0C9645A
	static Any _0xC4C59CA4(Any p0) { return invoke<Any>(0xC4C59CA4, p0); } // 0xC4C59CA4
	static Any _0xA915DC46(Any p0) { return invoke<Any>(0xA915DC46, p0); } // 0xA915DC46
	static Any _0x9B390724(Any p0) { return invoke<Any>(0x9B390724, p0); } // 0x9B390724
	static Any _0x858FD48D(Any p0, Any p1, Any p2) { return invoke<Any>(0x858FD48D, p0, p1, p2); } // 0x858FD48D
	static void ENABLE_WEATHER_SPHERE(Any p0, Any p1) { invoke<Void>(0x17BCED9F, p0, p1); } // 0x17BCED9F
	static Any _0xFEEC4EE2() { return invoke<Any>(0xFEEC4EE2); } // 0xFEEC4EE2
	static Any _0x21A68D47(Any p0) { return invoke<Any>(0x21A68D47, p0); } // 0x21A68D47
}

namespace AUDIO
{
	static Any NEW_SCRIPTED_CONVERSATION() { return invoke<Any>(0x1CEA7FCE); } // 0x1CEA7FCE
	// 0x96CD0513
	// 0xF1C40BCA
	// 0x4FAD0D8F
	// 0xE5DE7D9D
	// 0xCB8FD96F
	// 0xE2C9C6F8
	// 0x6CB24B56
	// 0xC842F0C9
	// 0x1CFC44F9
	// 0xC1C29ABC
	// 0x713519AB
	// 0x66728EFE
	// 0x916E37CA
	// 0x4E92CC7A
	// 0x6DCC98E9
	static Any GET_SOUND_ID(Any p0) { return invoke<Any>(0x6AE0AD56, p0); } // 0x6AE0AD56
	static void RELEASE_SOUND_ID(Any p0) { invoke<Void>(0x9C080899, p0); } // 0x9C080899
	// 0xE1D265FA
	static void PLAY_SOUND(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB6E1917F, p0, p1, p2, p3); } // 0xB6E1917F
	// 0x09DA2503
	// 0x66763C4A
	static void PLAY_SOUND_FRONTEND(char *audioName) { invoke<Void>(0x2E458F74, audioName); } // 0x2E458F74
	// 0x49053A94
	// 0xB157BBB4
	static void PLAY_SOUND_FROM_POSITION(char *audioName, float x, float y, float z) { invoke<Void>(0x05BC72D7, audioName, x, y, z); } // 0x05BC72D7
	// 0x19E5CF85
	// 0x5B05E3E0
	// 0x3375FB38
	static void PLAY_SOUND_FROM_ACTOR(Any p0, char* p1, Any p2) { invoke<Void>(0x628832AD, p0, p1, p2); } // 0x628832AD
	// 0x4634B6BE
	static void PLAY_SOUND_FROM_OBJECT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6A515A49, p0, p1, p2, p3); } // 0x6A515A49
	// 0xBD0E8EBA
	static void STOP_SOUND(Any p0) { invoke<Void>(0xCD7F4030, p0); } // 0xCD7F4030
	static BOOL HAS_SOUND_FINISHED(Any p0) { return invoke<BOOL>(0xE85AEC2E, p0); } // 0xE85AEC2E
	// 0x74CA8E22
	// 0x66FCA3F7
	// 0x14ED45FB
	// 0x7D95325E
	// 0x1BB84187
	// 0x3DFD83DE
	// 0xDD0320CB
	// 0x31BAF169
	// 0xBA734A15
	// 0x031E983D
	// 0x0871084C
	// 0x12D077CA
	// 0x91DE3A31
	// 0xFDA41D54
	// 0x955E5EEB
	// 0x755382BC
	// 0x84A909EC
	// 0x3F226995
	// 0xC9D3A484
	// 0xE5F39107
	// 0x123709E8
	// 0xA7D08EE9
	// 0xC0E28BF0
	// 0xBD2EA1A1
	// 0x77402033
	static void CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Any p0) { invoke<Void>(0x4DBD473B, p0); } // 0x4DBD473B
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x1972E8AA, p0); } // 0x1972E8AA
	// 0x2C653904
	// 0x2B74A6D6
	// 0x462B3A65
	// 0x96161235
	// 0x3184B507
	// 0x489B3078
	// 0xAA565B11
	// 0x2CA089EC
	// 0x43C5F320
	// 0xF7B747CA
	static void SET_LOCAL_PLAYER_VOICE(Any p0) { invoke<Void>(0xF0D28043, p0); } // 0xF0D28043
	// 0x33BD1A80
	// 0x1F7F405C
	// 0x2B1B76E8
	// 0xE4D418D1
	// 0xAF6A3160
	// 0x94A24A5C
	// 0xD021B37F
	// 0xA343FDBB
	// 0xA4F209D5
	// 0x45E20057
	// 0x15547025
	// 0xE0553D6B
	// 0xD68E04BB
	// 0x638EAF70
	// 0xEA975A79
	// 0x6BB42C21
	// 0x0E634931
	// 0x567712E5
	// 0xB888B369
	// 0x306D9FEE
	// 0xC3614E0A
	// 0xF962F2B8
	// 0x22D0DF9B
	// 0xA234C5D0
	// 0x733BA9F5
	// 0x79351E54
	// 0xCCBE7F0F
	// 0x5FCF3B85
	// 0x9D886C2F
	// 0x39F5EF0F
	// 0xD6CC6907
	// 0x714D5D09
	// 0xBF959948
	// 0x3C163FDD
	// 0xDC330FB9
	// 0x39EF8DA7
	// 0x0079FD0F
	// 0x67770F4B
	// 0x8A6D03BE
	// 0x90DD37E7
	// 0xFF92B49D
	// 0xEB8A51C2
	// 0xD1FD31DE
	// 0xEB866555
	// 0xA2A356A7
	// 0x6CEFA97A
	// 0x2ACEE2ED
	// 0x85A35B18
	static void AUDIO_MUSIC_SET_MOOD(char *p0, Any p1, Any p2, Any p3) { invoke<Void>(0x633B8905, p0, p1, p2, p3); } // 0x633B8905
	// 0x714DA5BB
	// 0x7CC2738F
	// 0x704DBAC9
	// 0xBF316157
	// 0x789C753C
	// 0xA3A2984E
	// 0x56E3D235
	// 0x5F48A85B
	// 0x84435231
	// 0x86E995D1
	// 0x9EC502D6
	// 0xE0DE16BD
	// 0xE2A37056
	// 0x72168160
	// 0xB3C3FF5E
	// 0xEA2B35DB
	// 0x0CCE435E
	// 0x7784BB85
	// 0x24AE7AFB
	// 0xDE7C65CE
	// 0x338DF299
	// 0x2D40E85C
	// 0x900C489A
	// 0xE8FFE727
	// 0xB73AC04A
	// 0xBFCF32D9
	// 0x37FD00EA
	// 0x98CD7340
	// 0x08F4B5B8
	// 0x176E921C
	// 0xBAEC56D1
}

// 14mcDynamicMixer
namespace MIXER
{
	// 0xECD8E116
	// 0xA82D893C
	// 0xF86010D1
	// 0xADCC16A2
}

// 22rdrAmbienceAudioEntity
// 15rdrMusicManager
namespace MUSIC
{
	// 0x2A3B1045
	// 0x27A96719
	// 0xC0556FB8
}

// 18gohActorEnumPlayer
namespace ACTORENUM
{
	// 0xD02757C1
	// 0x886E06C2
	// 0xB6839756
	// 0xCB139D15
	// 0xF07F5E41
}

namespace ACTORDRAW
{
	static void SET_DRAW_ACTOR(Any p0) { invoke<Void>(0xE6644CE5, p0); } // 0xE6644CE5
	static Any GET_DRAW_ACTOR(Any p0) { return invoke<Any>(0x085A9CA6, p0); } // 0x085A9CA6
}

namespace ACTORINFO
{
	static Any GET_LAST_ATTACKER(Any p0) { return invoke<Any>(0x2C0F211D, p0); } // 0x2C0F211D
	static Any GET_LAST_HIT_TIME(Any p0) { return invoke<Any>(0x3A207AF2, p0); } // 0x3A207AF2
	static Any GET_LAST_HIT_WEAPON(Any p0) { return invoke<Any>(0x07B7AA6B, p0); } // 0x07B7AA6B
	static Any GET_LAST_HIT_FLAGS(Any p0) { return invoke<Any>(0x08308EBA, p0); } // 0x08308EBA
	static Any _GET_LAST_HIT_DAMAGE(Any p0) { return invoke<Any>(0x45556269, p0); } // 0x45556269
	static Any GET_LAST_HIT_ZONE(Any p0, Any* p1) { return invoke<Any>(0x855F9A3B, p0, p1); } // 0x855F9A3B
	static Any _0x4747F219() { return invoke<Any>(0x4747F219); } // 0x4747F219
	static Any _0xF75FE17F() { return invoke<Any>(0xF75FE17F); } // 0xF75FE17F
	static Any _CLEAR_LAST_HIT_INFO() { return invoke<Any>(0x8D696237); } // 0x8D696237
	static void KILL_ACTOR(Actor actor) { invoke<Void>(0x8B08ECA2, actor); } // 0x8B08ECA2
	static void _0x6085F7AC(Any p0, Any p1) { invoke<Void>(0x6085F7AC, p0, p1); } // 0x6085F7AC
	static BOOL IS_ACTOR_ALIVE(Actor actor) { return invoke<BOOL>(0x2F232639, actor); } // 0x2F232639
	static BOOL IS_ACTOR_DEAD(Actor actor) { return invoke<BOOL>(0x0D798FFE, actor); } // 0x0D798FFE
	static Any _0x3918D335(Any p0) { return invoke<Any>(0x3918D335, p0); } // 0x3918D335
	static void SET_ACTOR_HEALTH(Actor actor, float health) { invoke<Void>(0xFA090024, actor, health); } // 0xFA090024
	static float GET_ACTOR_HEALTH(Actor actor) { return invoke<float>(0xF246F15D, actor); } // 0xF246F15D
	static float GET_ACTOR_MAX_HEALTH(Actor actor) { return invoke<float>(0xB69A84AF, actor); } // 0xB69A84AF
	static void SET_ACTOR_MAX_HEALTH(Actor actor, Any p1) { invoke<Void>(0x165BD4C5, actor, p1); } // 0x165BD4C5
	static Any _0x7A207FFE(Any p0) { return invoke<Any>(0x7A207FFE, p0); } // 0x7A207FFE
	static void _SET_ACTOR_HEALTH_2(Actor actor, Any p1) { invoke<Void>(0x3A2D7759, actor, p1); } // 0x3A2D7759
	static Any _GET_ACTOR_HEALTH_2(Actor actor) { return invoke<Any>(0x44787A58, actor); } // 0x44787A58
	static Any GET_ACTOR_MAX_KO_POINTS(Actor actor) { return invoke<Any>(0xAFC96669, actor); } // 0xAFC96669
	static void _SET_ACTOR_HEALTH_3(Actor actor, Any p1) { invoke<Void>(0x4EEC6628, actor, p1); } // 0x4EEC6628
	static void _SET_ACTOR_HEALTH_4(Actor actor, Any p1) { invoke<Void>(0x479B997B, actor, p1); } // 0x479B997B
	static BOOL IS_ACTOR_DRUNK(Actor actor) { return invoke<BOOL>(0xFF07D58C, actor); } // 0xFF07D58C
	static void SET_ACTOR_DRUNK(Actor actor, BOOL toggle) { invoke<Void>(0x9F57742C, actor, toggle); } // 0x9F57742C
	static void SET_ACTOR_PASSED_OUT(Actor actor, Any p1) { invoke<Void>(0x2A9FD09F, actor, p1); } // 0x2A9FD09F
	static void SET_ACTOR_HANGING_FROM_NOOSE(Actor actor, Any p1) { invoke<Void>(0x5262C0F7, actor, p1); } // 0x5262C0F7
	static void _0x6287203C(Any p0) { invoke<Void>(0x6287203C, p0); } // 0x6287203C
	static void _0x1082715D() { invoke<Void>(0x1082715D); } // 0x1082715D
}

namespace PLAYER
{
	static void TELEPORT_ACTOR(Actor actor, float x, float y, float z, BOOL p4, BOOL p5, BOOL p6) { invoke<Void>(0x2D54B916, actor, x, y, z, p4, p5, p6); } // 0x2D54B916
	static void TELEPORT_ACTOR_WITH_HEADING(Actor actor, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xE4DE507C, actor, x, y, z, heading, p5, p6, p7); } // 0xE4DE507C
	static Any GET_MAX_SPEED(Any p0) { return invoke<Any>(0x6B3A39A9, p0); } // 0x6B3A39A9
	static void GET_POSITION(Actor actor, float *x, float *y, float *z) { invoke<Void>(0x99BD9D6F, actor, x, y, z); } // 0x99BD9D6F
	static float GET_HEADING(Actor actor) { return invoke<float>(0x42DE39F0, actor); } // 0x42DE39F0
	static Any GET_ACTOR_AXIS(Actor actor, Any p1, Any p2) { return invoke<Any>(0x294A5549, actor, p1, p2); } // 0x294A5549
	static void SET_ACTOR_HEADING(Actor actor, float heading, BOOL p2) { invoke<Void>(0xECE8520B, actor, heading, p2); } // 0xECE8520B
	static void SET_ACTOR_ONE_SHOT_DEATH(Actor actor, BOOL toggle) { invoke<Void>(0xCDC686B2, actor, toggle); } // 0xCDC686B2
	// 0x0912622D
	// 0x758F993A
	// 0x1AA3A0C0
	static BOOL IS_ACTOR_PLAYER(Actor actor) { return invoke<BOOL>(0xB27E91E7, actor); } // 0xB27E91E7
	static BOOL IS_ACTOR_LOCAL_PLAYER(Actor actor) { return invoke<BOOL>(0x6542CF26, actor); } // 0x6542CF26
	// 0xB114332D
	static int _GET_ACTOR_CONTROLLER(Actor actor) { return invoke<int>(0x524F6981, actor); } // 0x524F6981
	// 0xCF02D1D6
	// 0x8F82B7D4
	// 0xC733BC9A
	static void SET_PLAYER_CONTROL(Actor actor, BOOL toggle, int possiblyFlags) { invoke<Void>(0xD17AFCD8, actor, toggle, possiblyFlags); } // 0xD17AFCD8
	static void SET_PLAYER_ENABLE_MOUNT_USE_CONTEXTS(Actor actor, BOOL toggle) { invoke<Void>(0xBEEDDD54, actor, toggle); } // 0xBEEDDD54
	static void SET_PLAYER_ALLOW_PICKUP(Actor actor) { invoke<Void>(0xEA08A934, actor); } // 0xEA08A934
	static void SET_PLAYER_MELEE_MODE_SELECTED(Actor actor, int mode) { invoke<Void>(0xAC1285A3, actor, mode); } // 0xAC1285A3
	static void SET_PLAYER_DISABLE_TARGETING(Actor actor, Any p1) { invoke<Void>(0x0959C27A, actor, p1); } // 0x0959C27A
	// 0x9613C2D0
	// 0x6576AD43
	// 0x48B7C279
	// 0xCE7CE46D
	static void SET_PLAYER_CONTROL_RUMBLE(Player player, Any p1) { invoke<Void>(0x4590CE00, player, p1); } // 0x4590CE00
	static void RESET_RUMBLE() { invoke<Void>(0xB3BE2F95); } // 0xB3BE2F95
	static Any GET_PLAYER_CONTROL_CONFIG(Player player) { return invoke<Any>(0x8421033D, player); } // 0x8421033D
	static void SET_PLAYER_CONTROL_CONFIG(Player player, int p1) { invoke<Void>(0x01B84BCA, player, p1); } // 0x01B84BCA
	static void PLAYER_RUMBLE(Any p0, Any p1, Any p2) { invoke<Void>(0x2E0EC2F2, p0, p1, p2); } // 0x2E0EC2F2
	// 0x4B0D6152
	// 0x4D918005
	static void SET_PLAYER_COMBATMODE(Player player, Any p1) { invoke<Void>(0x57595189, player, p1); } // 0x57595189
	// 0x86E193B8
	static void SET_PLAYER_COMBATMODE_OVERRIDE(Player player, Any p1) { invoke<Void>(0xAFFBBE78, player, p1); } // 0xAFFBBE78
	// 0x1184EC7B
	static void SET_PLAYER_VEHICLE_INPUT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0xE1160B04, player, p1, p2, p3); } // 0xE1160B04
	// 0x900165CE
	// 0xBFC8EF7C
	static void CLEAR_PLAYER_CONTROL_HORSE_FOLLOW(Any p0, Any p1) { invoke<Void>(0x7C522386, p0, p1); } // 0x7C522386
	static BOOL IS_PLAYER_IN_HORSE_FOLLOW(Player player, Any p1) { return invoke<BOOL>(0xE44DCE87, player, p1); } // 0xE44DCE87
	static Actor GET_PLAYER_ACTOR(Player player) { return invoke<Actor>(0xE8CFDD53, player); } // 0xE8CFDD53
	static BOOL IS_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0x40EF1003, p0); } // 0x40EF1003
	static BOOL _IS_ACTOR_PLAYER(Actor actor) { return invoke<BOOL>(0x0ADC17E9, actor); } // 0x0ADC17E9
	static BOOL IS_SLOT_VALID(int slot) { return invoke<BOOL>(0xD04480FE, slot); } // 0xD04480FE
	static Any GET_SLOT_ACTOR(Any p0) { return invoke<Any>(0xDB9B49D8, p0); } // 0xDB9B49D8
	static int GET_ACTOR_SLOT(Actor actor) { return invoke<int>(0xAABF3356, actor); } // 0xAABF3356
	static int GET_LOCAL_SLOT() { return invoke<int>(0xAD68A22E); } // 0xAD68A22E
	static char* GET_SLOT_NAME(int slot) { return invoke<char*>(0x34CBABAE, slot); } // 0x34CBABAE
	static Any GET_SLOT_POSITION(int slot, float *x, float *y, float *z) { return invoke<Any>(0x3241158C, slot, x, y, z); } // 0x3241158C
	// 0x34A9866B
	// 0x87DDCA96
	// 0x622796D5
	// 0x6148423A
	// 0xB6A47C37
	// 0x1CFAF2EA
	// 0xD0E08B5E
	// 0xBC521A38
	// 0x724A2931
	// 0x45F2A70A
	static void SIMULATE_PLAYER_INPUT_GAIT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0D77CC34, p0, p1, p2, p3); } // 0x0D77CC34
	// 0xEAE75C6F
	// 0x1ABFBFA3
	// 0xD39C4A9E
	// 0xEBBE1CAC
	// 0x50D8C840
	// 0xE2C4AEE7
	// 0x86B5C9E1
	// 0x09716951
	// 0x0486955B
	// 0x526D45B7
	// 0x4E6E5E78
	// 0x5CD6E2C3
	// 0xA671FF8E
	// 0x0D583DAF
	// 0x863F0193
	// 0x0415EE4C
	// 0x151741A2
	// 0x5740CDC2
	static void SET_INFINITE_DEADEYE(Any p0, BOOL toggle) { invoke<Void>(0x0C0BC04E, p0, toggle); } // 0x0C0BC04E
	// 0x7F454A92
	// 0xFA8D2B69
	// 0x3BD4426B
	// 0xC550644A
	static void SET_ACTOR_INVULNERABILITY(Actor actor, BOOL toggle) { invoke<Void>(0xE38EF526, actor, toggle); } // 0xE38EF526
	static BOOL GET_ACTOR_INVULNERABILITY(Actor actor) { return invoke<BOOL>(0xDB39D992, actor); } // 0xDB39D992
	// 0x2A575132
	// 0x0D9A35F6
	// 0xB4CD475D
	// 0x731F2C21
	// 0xED89D0E0
	// 0xF5B74E20
	// 0x9E7AE28B
	// 0x147EA072
	// 0xA5875DC8
	// 0xF2F77F44
	// 0x437588E6
	// 0xEE4E2461
	// 0x2D9C0C0F
	// 0x0318FF2A
	// 0xCF1A1BC5
	// 0xF83A8D2B
	// 0x0111E8E0
	// 0x5D5BD1F0
	// 0x5896817B
	// 0xA1BFC1A5
	// 0x9375946B
	// 0x740B78A8
	// 0x7A11D611
	// 0x0666B436
	// 0xBFD6AE3D
	// 0x6D322CD3
	// 0x44C05EF6
	// 0xA4E29C31
	// 0x5C7F63E3
	// 0x87C49DBD
	// 0xB42EBC65
	// 0x135EA21D
	// 0xA393AC4E
	static void SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Any p0, Any p1) { invoke<Void>(0x05CFE1E9, p0, p1); } // 0x05CFE1E9
	// 0x083903D1
	// 0x1540A309
	// 0x7CC57FDA
	// 0x9F6B04C8
	// 0xDA0CDC91
	// 0x3AD31762
	// 0x0A9A99DF
	// 0x38C5F63F
	// 0xA5A24484
	static void SET_ALLOW_COLD_WEATHER_BREATH(Any p0, Any p1) { invoke<Void>(0xA4677DD2, p0, p1); } // 0xA4677DD2
	// 0x1F0CD262
	// 0x1D1D9387
	// 0xC0F77310
	// 0x4EFC58BC
	// 0x22558E3F
	// 0x398735FA
	// 0x67FA18A1
	// 0x1444F022
	// 0x4B90D22A
	// 0xF1779E65
	// 0xA819497B
	// 0x8BE2D8B0
	// 0x91BB8548
	// 0x8AE58EE1
	// 0xDE0E96F3
	// 0x0911BA31
}

namespace ACTORSET
{
	// 0x009DFC82
	static BOOL IS_ACTORSET_VALID(Any p0) { return invoke<BOOL>(0x76E8975E, p0); } // 0x76E8975E
	static Any FIND_NAMED_ACTORSET(Any p0) { return invoke<Any>(0x5454B159, p0); } // 0x5454B159
	static void _REMOVE_ACTORSET(Any p0, Any p1) { invoke<Void>(0x147A0BEE, p0, p1); } // 0x147A0BEE
	static void _DISBANDSET(Any p0) { invoke<Void>(0x2739F04D, p0); } // 0x2739F04D
	static Any ADD_ACTORSET_MEMBER(Any p0, Any p1) { return invoke<Any>(0xE09DB6C1, p0, p1); } // 0xE09DB6C1
	static Any _0xD637E449(Any p0) { return invoke<Any>(0xD637E449, p0); } // 0xD637E449
	static BOOL IS_ACTOR_IN_ACTORSET(Any p0, Any p1) { return invoke<BOOL>(0xC6FE68DF, p0, p1); } // 0xC6FE68DF
	static Any _GET_SETACTOR(Any p0) { return invoke<Any>(0xC5202810, p0); } // 0xC5202810
	static Any GET_ACTORSET_SIZE(Any p0) { return invoke<Any>(0xA24F4799, p0); } // 0xA24F4799
}

namespace FACTION
{
	static Any _0x40ABFD17(Any p0, Any p1, Any p2) { return invoke<Any>(0x40ABFD17, p0, p1, p2); } // 0x40ABFD17
	static Any _0x28413943(Any p0) { return invoke<Any>(0x28413943, p0); } // 0x28413943
	static Any GET_ACTOR_FACTION(Any p0) { return invoke<Any>(0x52E2A611, p0); } // 0x52E2A611
	static void SET_ACTOR_FACTION(Any p0, Any p1) { invoke<Void>(0xCC63951A, p0, p1); } // 0xCC63951A
	static BOOL IS_FACTION_VALID(Any p0) { return invoke<BOOL>(0x5E2F718D, p0); } // 0x5E2F718D
	static Any _0x22424394() { return invoke<Any>(0x22424394); } // 0x22424394
	static void SET_FACTION_IS_LAWFUL_TO_ATTACK(Any p0) { invoke<Void>(0xDCB960C5, p0); } // 0xDCB960C5
	static Any GET_FACTION_IS_LAWFUL_TO_ATTACK(Any p0) { return invoke<Any>(0xB58013D7, p0); } // 0xB58013D7
	static void _SET_FACTION_STATUS_ONEWAY(Any p0) { invoke<Void>(0xD771AF0B, p0); } // 0xD771AF0B
	static void _SET_FACTION_STATUS_TWOWAY(Any p0) { invoke<Void>(0x4C28B11E, p0); } // 0x4C28B11E
	static void _SET_FACTIONB_STATUS_TWOWAY(Any p0) { invoke<Void>(0x6118212B, p0); } // 0x6118212B
	static Any _0x902781BF(Any p0) { return invoke<Any>(0x902781BF, p0); } // 0x902781BF
	static Any _0xF9C5DC76(Any p0) { return invoke<Any>(0xF9C5DC76, p0); } // 0xF9C5DC76
	static void _SET_FACTIONA_STATUS_TWOWAY(Any p0) { invoke<Void>(0x8E56236D, p0); } // 0x8E56236D
	static void SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(Any p0) { invoke<Void>(0x463F75F8, p0); } // 0x463F75F8
	static void SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(Any p0) { invoke<Void>(0xA9A18E5A, p0); } // 0xA9A18E5A
	static void CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Any p0) { invoke<Void>(0xEF639583, p0); } // 0xEF639583
	static Any GET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Any p0) { return invoke<Any>(0x784398CB, p0); } // 0x784398CB
	static void SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Any p0) { invoke<Void>(0xBC44D31D, p0); } // 0xBC44D31D
}

namespace ANIMAL
{
	// 0x5EFB415E
	// 0x1FD8BA91
	// 0x11DCCDAA
	// 0x6B6191EE
	// 0x4DF576A7
	// 0xBF12100D
	// 0x7C795382
	// 0x338D1CEC
	// 0xF2110753
	// 0x784C514C
	// 0x4217D912
	// 0x9D8C2744
	// 0x8020C45E
	static void ANIMAL_SPECIES_TUNING_SET_ATTRIB_BOOL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x651ACCB1, p0, p1, p2, p3); } // 0x651ACCB1
	// 0x20AD711E
	// 0x10CC05F1
	// 0xA6A4651B
	// 0x168AAB9B
	// 0xD05DDBB6
	// 0x96B26945
	// 0xE228CC1A
	// 0xED6240F0
	// 0x00760C27
	// 0xD4DDC119
	// 0xBFB65BE8
	// 0x98073A48
	// 0x1E02527F
	// 0x84B474ED
	// 0x9D5C43C9
	// 0xBF8B1BD7
	// 0x3F747178
	// 0x586904BD
	// 0x70C48A1C
	// 0x70DE500E
	// 0x6606A669
	// 0x3C5700DC
	// 0xC8B4CD3F
	// 0x0482DD4E
	// 0xB5A63B67
	// 0xCE23118D
	static void ANIMAL_ACTOR_SET_DOMESTICATION(Any p0, Any p1) { invoke<Void>(0x58C36502, p0, p1); } // 0x58C36502
	// 0x7D0E25DF
	// 0x11150810
	// 0xE36EA080
	// 0xABFCFF01
	// 0xAAA8AF88
	// 0x57DF8CD0
}

namespace COMBAT
{
	// 0x13FA7128
	// 0xE39B4D25
	// 0xAAD75024
	// 0x983DB127
	// 0x69C5ADD2
	static void COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(Any p0, Any p1, Any p2) { invoke<Void>(0x80D51606, p0, p1, p2); } // 0x80D51606
	// 0x6389CF4B
	// 0xE20587E7
	// 0x0EF1436B
	// 0x1EF0E419
	// 0xF1454677
	// 0x60B705A5
	// 0xC30DB881
	// 0x8DE6AF29
	// 0x629E2E88
	// 0x0EDD5D43
	// 0x76478D6E
	// 0xE66AD206
	// 0xAD3877AF
	// 0x7F73E1E8
}

namespace MEMORY
{
	// 0x8CD37E9E
	static void MEMORY_CLEAR_ALL(Any p0) { invoke<Void>(0x4485B246, p0); } // 0x4485B246
	// 0xACD4084D
	static void MEMORY_CONSIDER_AS(Any p0, Any p1, Any p2) { invoke<Void>(0x296C01A4, p0, p1, p2); } // 0x296C01A4
	// 0x745A1BA3
	// 0x0810A7BA
	// 0x45CE40FD
	// 0xC407497F
	static void MEMORY_IDENTIFY(Any p0, Any p1) { invoke<Void>(0xBA09085C, p0, p1); } // 0xBA09085C
	// 0x052CC7CE
	static void MEMORY_REPORT_POSITION_AUTO(Any p0, Any p1, Any p2) { invoke<Void>(0x2F589CDF, p0, p1, p2); } // 0x2F589CDF
	// 0x05B3D34F
	// 0x5A83A1EA
	// 0x48AA959E
	// 0x1B72B0DD
	// 0x2F7B60A4
	// 0x2F929ECD
	// 0xC175F2B5
	// 0x937E1760
	// 0xE944E5F8
	static void MEMORY_ALLOW_THROWING_EXPLOSIVES(Any p0, Any p1) { invoke<Void>(0xDBDB57D0, p0, p1); } // 0xDBDB57D0
	// 0x5DD0AC4A
	// 0x009EB4C1
	// 0xDD965D74
	// 0xF8CB6260
	// 0x7E77DD6C
	// 0x7EDD316C
	// 0xD1628C57
	// 0x052E865C
	// 0xAF94B7D9
	// 0xB6FCFFAA
	// 0xFF00B4E6
	// 0x5EC098F2
	// 0x64C177FB
	// 0xCF70330C
	// 0xB4621962
}

namespace AI
{
	// 0x4A69F264
	// 0x8F428EDF
	// 0x671851D4
	static void AI_GOAL_AIM_AT_OBJECT(Any p0, Any p1, Any p2) { invoke<Void>(0x3CD232B2, p0, p1, p2); } // 0x3CD232B2
	// 0xD5100DC2
	static void AI_GOAL_LOOK_AT_ACTOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x96928D25, p0, p1, p2, p3, p4, p5, p6); } // 0x96928D25
	// 0xB162690D
	// 0x15B7044B
	// 0x245D0CFD
	// 0x8456676E
	// 0x6AF3E54E
	// 0x10674B4F
	// 0x6C65E46E
	// 0xC43A9268
	// 0xD9B27A9E
	// 0xEADB58EB
	// 0x31D76951
	// 0x1FEECD4C
	// 0x1A137442
	// 0x3CAC2441
	// 0x1117C85A
	static Any AI_IGNORE_ACTOR(Any p0, Any p1) { return invoke<Any>(0x8D1FC73C, p0, p1); } // 0x8D1FC73C
	// 0x98790639
	// 0x4DF3C5D1
	// 0xB421AFCA
	// 0xA737CCAC
	// 0xBE17EB88
	// 0xABC78721
	// 0x548541C1
	// 0x039C69C4
	// 0x47C2C7B0
	// 0xFF36BAED
	// 0x6F37F42C
	// 0xA90A13A5
	// 0xF0511878
	// 0xE56D3FCE
	// 0x6C194C1F
	// 0xFE5715A1
	// 0xA29B9458
	// 0x1F07FC4C
	// 0x4DB11394
	static void CLEAR_ACTORS_HORSE(Actor actor) { invoke<Void>(0xFEB74094, actor); } // 0xFEB74094
	static Actor GET_ACTORS_HORSE(Actor actor) { return invoke<Actor>(0x8DDE894F, actor); } // 0x8DDE894F
	static void SET_ACTORS_HORSE(Actor actor, Any p1) { invoke<Void>(0xCFFDF09D, actor, p1); } // 0xCFFDF09D
	// 0x08D3CDF9
	// 0x6718D199
	static BOOL IS_AI_ACTOR_UNALERTED(Actor actor) { return invoke<BOOL>(0xC4D114A6, actor); } // 0xC4D114A6
	// 0x57F96655
	// 0x2444577C
	// 0xAFB1CC55
	// 0xB4A15D17
	static void AI_ACTOR_FORCE_SPEED(Actor actor, int p1) { invoke<Void>(0x70B409D5, actor, p1); } // 0x70B409D5
	// 0x7387772C
	// 0xD2BFA6E4
	// 0xE067A925
	// 0xDA005857
	// 0x85F2DF87
	// 0x9E164C44
	// 0x05861CF4
	// 0xC5873149
	// 0xE0172E2D
	// 0x01FD4402
	// 0xCA8EE2A4
	// 0xD6886191
	// 0xE8511960
	// 0x58A7B2A1
	// 0x46F51754
	// 0xEA2A40BC
	// 0x9AB964F4
	// 0x6FAF13C2
	// 0xC94F9499
	// 0x7F07210F
	// 0x68B268BE
	// 0x1A96EFB9
	// 0x2DBCB78A
	// 0xF5752F72
	// 0x2EBE540D
	// 0x2FABB559
	// 0x1530A3DE
	// 0x059F64B8
	// 0xD8574E09
	// 0xDCD2FC0F
	// 0x0A421F94
	// 0x6BCC744A
	// 0x09493438
	// 0x7AF8AFDC
	// 0x04AEE21F
	// 0x68C50F50
	// 0x0480D5BD
	// 0x902C79A6
	// 0x02FBBAD1
	// 0x7193449E
	// 0x9B742D25
	// 0x2E5F186B
	// 0x5C94F6EC
	// 0x5D72FDB6
	// 0x06B4A139
	// 0x4D53AC21
}

namespace AI2
{
	// 0x6ADF2927
	// 0x660C85E5
	// 0x8404592D
	// 0x5D752432
	// 0x7B00615F
	// 0x4495F5FC
	// 0x98966941
	// 0xF64D5452
	// 0x29D07F70
	// 0x5B483036
	// 0xFCB31704
	// 0x7C13266C
	// 0x750A1EF6
	// 0xFF3CEFE2
	// 0xC900F0E8
	// 0xD6F4FDAD
	// 0xF1B3072D
	// 0xC84EF86B
	// 0xBAA2BA4F
	// 0xF435CCDE
}

namespace MOVABLE
{
	static void STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(Any p0) { invoke<Void>(0x8A0D3339, p0); } // 0x8A0D3339
	static void STREAMING_REQUEST_MOVABLE_NAV_MESH(Any p0) { invoke<Void>(0x63334F63, p0); } // 0x63334F63
	static void STREAMING_UNREQUEST_MOVABLE_NAV_MESH(Any p0) { invoke<Void>(0xC329E1DB, p0); } // 0xC329E1DB
	static void SET_ACTOR_MOVABLE_NAV_MESH(Any p0) { invoke<Void>(0xECEE9E20, p0); } // 0xECEE9E20
}

namespace AI3
{
	// 0x5C580036
	// 0x66064774
	// 0xD786E8C7
	// 0x8BBB7B12
	// 0xAF77C42E
}

namespace AI4
{
	// 0x9DDFA9CA
	// 0xF8AFEFA1
}

namespace AI5
{
	// 0xD269F20B
	// 0x15CFAB4C
	// 0xDD925074
	// 0xA08B3E4B
	// 0xAB297CCB
	// 0x90B577F5
	// 0xFF0BF292
	// 0x6AAB4CD0
	// 0x10DDB016
	// 0x56421F1A
	// 0x829F3E70
	// 0xD8C8BEA1
	// 0x679C5955
}

namespace SQUAD
{
	// 0xB3732081
	static Any SQUAD_IS_VALID(Any p0) { return invoke<Any>(0xBDB3061E, p0); } // 0xBDB3061E
	static void SQUAD_JOIN(Any p0, Any p1) { invoke<Void>(0xB14302C8, p0, p1); } // 0xB14302C8
	static void SQUAD_LEAVE(Any p0) { invoke<Void>(0x077591FF, p0); } // 0x077591FF
	// 0x90D92CF1
	// 0x320E2604
	static Any SQUAD_GET_ACTOR_BY_INDEX(Any p0, Any p1) { return invoke<Any>(0x5126039A, p0, p1); } // 0x5126039A
	static Any SQUAD_GET_SIZE(Any p0) { return invoke<Any>(0xEEC83187, p0); } // 0xEEC83187
	// 0x142D9F3A
	// 0xAEA4E9AE
	// 0x65888454
	// 0xD52A28F0
	// 0x4DD06256
	// 0xA4BC2A1B
	// 0x9D3B103C
	// 0x1AC03C80
	// 0x750C1A2B
	// 0xE77B9FC0
	// 0x83D78A49
	// 0x8BA55E8D
	// 0x96DB0BA1
	// 0xA2AE53BD
	// 0x35051831
	// 0x435A982F
	// 0x5F4DEC49
	// 0xE775EF0D
	// 0x48588CCB
	// 0xC6AF3662
	// 0xFAD7A113
	// 0xBB3A34B0
	// 0xCA950EF0
	// 0x817AC6D6
	// 0xF37E8A9E
	// 0x1B74CCA1
	// 0x224CFE5B
	// 0x3F9736B8
	// 0x5E24EAA0
	// 0x1F0E5B88
	// 0x895AA97B
	// 0x53609885
	// 0xE8B7AA08
	// 0xE4E94286
	// 0x6770774F
	// 0x5A43D915
	// 0x175BE678
	// 0x5AEA32D1
	// 0x484643F6
	// 0x1CEB8BFF
	// 0xB4D9B233
	// 0xFC24BB6A
	// 0xE7A0A109
	// 0x0073024E
	// 0x82C54B8A
	// 0x57C67E91
	// 0x55DAC120
	// 0xE7D45FB3
	// 0xAEDD7512
	// 0x907D4081
	// 0x6BC42101
	// 0xE21D4785
	// 0xF3C07A17
	// 0x20009EB2
	// 0x7FEE2B3C
	// 0x0031613E
	// 0x041C0802
	// 0x347616C9
	// 0xB00F188D
	// 0x70E0654A
	// 0x8C8EEEF2
	// 0x0F163466
	// 0x430993FC
	// 0x27F7C1E4
	// 0x5BADEFDC
	// 0x8DC095B0
	// 0xE69AE6C5
	// 0xFA63B0F7
	// 0xC4D79095
	// 0x5C14EC4E
	// 0x6FB2CADA
	// 0x437E2995
	// 0x7B681402
	// 0xD618C1C7
	// 0xF661D354
	// 0x554EFABE
	// 0x3966E20B
	// 0x8BE72016
	// 0xA8A50DF5
	// 0x47F31A41
}

namespace TASK
{
	// 0xE32F09B3
	// 0x3F20B619
	// 0xD7E582B1
	// 0xF54E4D45
	// 0xEACE773D
	// 0x7ED7676D
	// 0xD9B07798
	// 0x23AFEB8A
	// 0x8EB3D852
	// 0x4730AC93
	// 0x525B028A
	// 0xAD0E49E3
	// 0x2C5F5E1B
	// 0x69CCFD7C
	// 0x616C803C
	// 0x5DEF5C4A
	// 0xECAD08C7
	// 0xF1A3F362
	// 0x342F21D2
	// 0xFDD2905C
	// 0xDB5F6B35
	// 0x9F3B5B47
	// 0x31B598FB
	// 0x826D3459
	// 0x2CF32A98
	// 0xCD5E23C3
	// 0x12F0911A
	// 0xDA646464
	// 0x467D0FD5
	// 0xFF3E3DCE
	// 0x626C97D5
	// 0x75A4E05E
	// 0xE2104FED
	// 0x973DCC5B
	// 0x9591A996
	// 0xCC8B2ECC
	// 0xF7B01E74
	// 0x55EC940B
	// 0x5EA4F1FE
	// 0x8C574832
	// 0x8636587A
	// 0xD62D6CE5
	// 0x6BDB3257
	// 0xAA3E5851
	// 0x01BACD08
	// 0x1AF7CE0E
	// 0xFA5BB172
	// 0x99F65CC0
	// 0xAB8B96A5
	// 0x916FF236
	// 0x97BDA4C8
	// 0x46A326E6
	// 0x1AE4B75B
	// 0x145B7C2B
	// 0x4FEADDD9
	static void TASK_MOUNT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xB6131204, p0, p1, p2, p3, p4, p5); } // 0xB6131204
	// 0x5AB552C6
	// 0xAD3729AD
	// 0x95C206C2
	// 0x69B924A7
	// 0x4E17E039
	// 0xD9B57910
	// 0xE1C8A1B3
	// 0x3B0F53F4
	// 0x2DF2298C
	// 0xA7A50E4D
	// 0x601C22E3
	// 0x7B5FC704
	// 0x3C9875E5
	// 0xCE584BCF
	// 0xCF8DB984
	// 0x1813667D
	// 0x506B8205
	// 0x326316DC
	// 0xDE18EDA3
	// 0x6F80965D
	// 0x86A98E99
	// 0x5DD80BEF
	// 0x9043D092
	// 0x030FB1FA
	// 0x1C7834B1
	// 0x0CFA55B6
	// 0xA0E003A7
	// 0x065D93BD
	// 0xC41AAF49
	// 0x6484F21E
	// 0x3B8DBA13
	// 0x49EC6A04
	// 0xB2CD5160
	// 0xDC087173
	// 0x6C1218A4
	static void TASK_WANDER(Any p0, Any p1) { invoke<Void>(0x17BCA08E, p0, p1); } // 0x17BCA08E
	// 0x6840D3C1
	// 0xA5F2BFAA
	// 0x9ABE6BC0
	// 0x3EB7590C
	// 0xCCE01E8A
	// 0x600A0EE4
	// 0x016C6801
	// 0xD062CBF6
	// 0xF726557C
	// 0x16876A25
	// 0x9B9C8628
	// 0x5394CF3B
	// 0x172477F0
	// 0xCE843315
	// 0x96F3BD31
	// 0x52D34567
	// 0x3A95A656
	// 0x8DA34524
	// 0x9EE3053B
	// 0xB2D35E22
	// 0x08654394
	// 0x1436588F
	// 0xF3D88421
	// 0x1978C111
	// 0x26EBE467
}

namespace FACTION2
{
	static BOOL CAN_ANYONE_OF_FACTION_SEE_OBJECT(Any p0, Any p1) { return invoke<BOOL>(0x656D3D26, p0, p1); } // 0x656D3D26
}

namespace AMBIENT
{
	// 0xA8ADCAEB
	// 0xB35C0660
	// 0xE9C41DFE
	// 0xB09D5B43
	// 0x5831679F
	// 0x2CCEA76C
	// 0xA607D290
	// 0xC1A30BB5
	// 0x2C4CBC25
	// 0x1C8CA53C
	// 0xE8960298
	// 0xC78B7436
	// 0x94DBC0C5
	// 0xC738ED3E
	// 0xD1CF9793
	// 0xA8BD64D1
	// 0x6C7A3CE6
	// 0x95D0FC79
	// 0xC519E3F3
	// 0xEBE88626
	// 0x1AED34CA
	static void ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Any p0) { invoke<Void>(0xCF50D509, p0); } // 0xCF50D509
	// 0xD1C09A22
	// 0x515AC319
	// 0xD65BAA71
	// 0x21C59F4C
	// 0x02E15363
	// 0xC8AD4A8C
	// 0xD8BE8E0C
	// 0x515E17DC
	// 0x8ED2B0BC
	// 0x08FD1D81
	// 0x257C73C5
	// 0xED3071A5
	// 0xFF642652
	// 0x851F88F6
}

namespace UNK
{
	// 0xD85BAFA8
	// 0xEB99D1A9
	// 0x0386C556
	// 0xF63FA0A1
	// 0xB59AD5B1
	// 0x4F64116B
	// 0xBAD8B9A8
	// 0x6CBF76AB
	// 0xE0DD373F
	// 0x3C6FE75D
	// 0x74E7F898
	// 0xA13D379B
	// 0xAC72E757
	// 0x99AFD2D1
}

namespace ANIM
{
	// 0x8609F5E1
	// 0x8626C1A0
	// 0x1ADE21EB
	// 0x6B54BABD
	// 0x31F5F57D
	// 0x3E30A514
	// 0x5941295A
	static Any SET_PANIM_PHASE(Any p0, Any p1) { return invoke<Any>(0x94431F5A, p0, p1); } // 0x94431F5A
	// 0xB03616C2
	// 0xAEBAE989
	// 0xE0AC4B86
	// 0x76ECD5F1
	static void REQUEST_ANIM_SET(Any p0, Any p1) { invoke<Void>(0x2988B3FC, p0, p1); } // 0x2988B3FC
	static BOOL HAS_ANIM_SET_LOADED(Any p0) { return invoke<BOOL>(0x4FFF397D, p0); } // 0x4FFF397D
	// 0xD04A817A
	static Any SET_ANIM_SET_FOR_ACTOR(Any p0, Any p1, Any p2) { return invoke<Any>(0x39C1E1C0, p0, p1, p2); } // 0x39C1E1C0
	static void RESET_ANIM_SET_FOR_ACTOR(Any p0, Any p1) { invoke<Void>(0x7A6C5C2F, p0, p1); } // 0x7A6C5C2F
	// 0xB1B643E0
	static Any REQUEST_ACTION_TREE(Any p0) { return invoke<Any>(0xB3039DB7, p0); } // 0xB3039DB7
	static Any HAS_ACTION_TREE_LOADED(Any p0) { return invoke<Any>(0xEEECD85E, p0); } // 0xEEECD85E
	// 0xBF4D0EFE
	static Any SET_ACTION_NODE_FOR_ACTOR(Any p0, Any p1) { return invoke<Any>(0x5A795F3A, p0, p1); } // 0x5A795F3A
	// 0xF90F737E
	// 0x7B17C5C3
	// 0x07EC142B
	// 0x0A192D09
	// 0xA4E9E7EE
	// 0xAC54E120
	// 0xCA9364C5
	// 0x7B19DEC6
	// 0x994F2BD1
	static Any IS_ACTOR_PLAYING_NODE_IN_TREE(Any p0, Any p1) { return invoke<Any>(0x4E0300E2, p0, p1); } // 0x4E0300E2
	// 0x5E84F53E
	// 0x4AD89F02
	// 0x11542587
	// 0xDCB9C943
	// 0xB3F5EE8C
	// 0xBEF6031B
	// 0xF349D0B6
}

// 11atSingletonI10hudManagerE
// 11atSingletonIN4rage15fuiFlashManagerEE
// 11atSingletonI19rdr2SaveGameManagerE
// 11atSingletonIN4rage9UIManagerEE

namespace UI
{
	// 0xFA0CF208
	// 0xA77E0DDF
	// 0x545EC471
	// 0x34F03EC7
	// 0x4778A580
	// 0xDF024C94
	// 0x8A2A1A51
	// 0x9E31EEA7
	// 0x35CDFDC5
	// 0xFA266B15
	// 0x03568B83
	// 0xA332ACE3
	// 0xE39B92B7
	// 0x637016C9
	// 0x04A38C60
	static void _PRINT_HELP(char* txt, float time, bool isStringLiteral, int p3, int p4, int p5, int p6, int p7) { invoke<Void>(0xE42A8278, txt, time, isStringLiteral, p3, p4, p5, p6, p7); } // 0xE42A8278
	static void _PRINT_SUBTITLE(char* txt, float time, BOOL isStringLiteral, int printType, int p4, int p5, int p6, int p7) { invoke<Void>(0x32394BB6, txt, time, isStringLiteral, printType, p4, p5, p6, p7); } // 0x32394BB6
	// 0x51948EA6
	// 0xBCB8D17F
	// 0xBBBDFF7C
	// 0x283B4EFC
	// 0xD8AAF8E0
	// 0x14708CB1
	// 0xB9D95B4C
	// 0x710B3A83
	// 0x60135878
	// 0x2F0E7DE7
	// 0x4B2FCAF6
	static void HUD_CLEAR_SMALL_TEXT() { invoke<Void>(0x585F008A); } // 0x585F008A
	static void HUD_CLEAR_BIG_TEXT() { invoke<Void>(0xD6DFA6FC); } // 0xD6DFA6FC
	static void HUD_CLEAR_COUNTER() { invoke<Void>(0x050EFAAB); } // 0x050EFAAB
	static void _0x160BDC7A() { invoke<Void>(0x160BDC7A); } // 0x160BDC7A
	static void HUD_CLEAR_HELP() { invoke<Void>(0x0095B908); } // 0x0095B908
	// 0x02E1E708
	// 0x777A1CA2
	static void _CLEAR_PRINTS() { invoke<Void>(0xE4DACF40); } // 0xE4DACF40
	static void HUD_CLEAR_HELP_QUEUE() { invoke<Void>(0x495164AD); } // 0x495164AD
	// 0x0A07FE74
	// 0xEFB9362F
	// 0x0E5372EC
	static Any ADD_BLIP_FOR_COORD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xC6F43D0E, p0, p1, p2, p3, p4); } // 0xC6F43D0E
	// 0xABD125F6
	static void _SET_HUD_MAP_OBJECTIVE_POSITION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB2EAF8DD, p0, p1, p2, p3); } // 0xB2EAF8DD
	static void SET_BLIP_SCALE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1E6EC434, p0, p1, p2, p3, p4); } // 0x1E6EC434
	static void SET_BLIP_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA2B8A736, p0, p1, p2, p3, p4); } // 0xA2B8A736
	// 0xCE87DA6F
	// 0x04B8C8C6
	// 0xA9A01C70
	// 0x9318D3D2
	// 0x1E7A6623
	// 0xDCC10BA9
	// 0xD8C3C1CD
	// 0x1449EE9E
	// 0xE3E30992
	// 0xEE4F4B7D
	// 0x014C7C29
	// 0x39F2E5F1
	// 0xA543B120
	// 0x7FF20D84
	// 0x364450B1
	// 0xB4614D11
	static Any GET_RADAR_RADIUS() { return invoke<Any>(0x6B33CBCC); } // 0x6B33CBCC
	// 0x33CE49C9
	// 0x1D85FB58
	// 0x2148AC15
	// 0x444C3C32
	// 0x1E98AFEC
	// 0xFF3DB575
	// 0xD76F1E9A
	// 0xBC05EBB3
	// 0xCE79F8E2
	// 0xFBA76D7E
	// 0x6077F3AE
	static void SET_BLIP_NAME(Any p0, Any p1) { invoke<Void>(0xDC249B12, p0, p1); } // 0xDC249B12
	// 0xB1DAEF0C
	// 0x95666EE0
	// 0x970AC1F7
	// 0xF5B7B208
	// 0xA094152A
	// 0x0DFF578A
	// 0xCE043618
	// 0x48DB367D
	// 0x4FCE7B9D
	// 0x14585073
	// 0x5EA2E02D
	// 0xE78A0469
	// 0x02755628
	// 0x73DA6AF1
	// 0x906E0138
	// 0x919142BE
	// 0x149F9E46
	static int HUD_TIMER_GET() { return invoke<int>(0x1C6919EF); } // 0x1C6919EF
	// 0xB6A24203
	// 0x2395C147
	// 0xF4209CCC
	// 0x3383E839
	// 0x983A7E4E
	// 0x31A55281
	// 0x651C1FC2
	// 0x9A35DFC6
	// 0x7D94675D
	// 0x0C180A3F
	// 0x4DA5F502
	// 0x52963366
	// 0xB0B4296A
	// 0xF90F6C51
	// 0x7E4A92CF
	// 0x4EFFFC06
	// 0xE5CC6F08
	// 0xC6E36B1D
	// 0xEF270DC9
	// 0x18346D88
	// 0xBB2EABF9
	// 0x9E6D7105
	// 0x82A290D4
	// 0x0C197810
	// 0xC64DF45D
	// 0xD0F2D2B6
	// 0x111554E2
	static void UI_SEND_EVENT(Any p0) { invoke<Void>(0xB58825F5, p0); } // 0xB58825F5
	// 0x594F2657
	// 0x4486E8C7
	// 0x175CD937
	// 0x47D2DE08
	// 0xD82F910C
	// 0xAA322DFC
	static void CLEAR_GPS_PATH(Any p0) { invoke<Void>(0xD077D8B6, p0); } // 0xD077D8B6
	// 0x82F63365
	// 0x34711B59
	// 0xA5BDC21D
	// 0x3E758743
	// 0xB6E791F6
	// 0xD12802AF
	// 0xADBD44F6
	// 0x94F5E63F
	// 0x9E88643A
	// 0x01309706
	// 0x7D6A8D4A
	// 0x90CD8795
	// 0x7D0EFDD8
	// 0xBAB151CB
	// 0x714D6F72
	static void UI_CLEAR_MESSAGE_QUEUE(Any p0) { invoke<Void>(0x64DDB95D, p0); } // 0x64DDB95D
	// 0x941FC468
	// 0x7725001B
	// 0xEB214384
	// 0x6CC9CCE7
	// 0x8701F1F6
	// 0x3842B89F
	// 0xFDB5FC03
}

// va string types and a lot of hardcoded into returning false and true
namespace GUI
{
	static int GUI_MAKE_WINDOW(GUIWindow parent, int p1, char* windowName, char* p3) { return invoke<int>(0xA20246AB, parent, p1, windowName, p3); } // 0xA20246AB
	static int GUI_MAKE_TEXT(int guiHandle, float x, float y, float z, char* menuTitle, char* gxtText, float p4) { return invoke<int>(0x68FC1001, guiHandle, x, y, z, menuTitle, gxtText, p4); } // 0x68FC1001
	static int GUI_MAKE_OVERLAY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xA2A68BAD, p0, p1, p2, p3, p4, p5); } // 0xA2A68BAD
	static GUIWindow _GUI_GET_WINDOW(int guiHandle, char* windowName) { return invoke<GUIWindow>(0xF6207DF5, guiHandle, windowName); } // 0xF6207DF5
	// 0xA7FF2899
	// 0xFDED9B11
	static int GUI_WINDOW_VALID(GUIWindow p0) { return invoke<int>(0xA2E6FECB, p0); }
	static int GUI_SET_TEXT(int textHandle, char* menuName) { return invoke<int>(0x5F3A1C35, textHandle, menuName); } // 0x5F3A1C35
	static int GUI_SET_TEXT_JUSTIFY(int textHandle, int JustifyType) { return invoke<int>(0x9CC6F183, textHandle, JustifyType); } // 0x9CC6F183
	static int GUI_SET_TEXT_COLOR(int textHandle, float R, float G, float B, float A) { return invoke<int>(0x7600ED4B, textHandle, R, G, B, A); } // 0x7600ED4B
	static GUIWindow GUI_MAIN_WINDOW() { return invoke<GUIWindow>(0x5405B8AA); } // 0x5405B8AA
	// 0xB498108A
	// 0xC7DEB717
	// 0xD019FF37
	// 0x4803C120
	// 0xFA6BDD8E
	// 0x47EF426D
	// 0x52C10147
	// 0x5E339E16
	static char* _FLOAT_TO_STRING(float value, int p1, int precision) { return invoke<char*>(0x8ED1FF95, value, p1, precision); } // 0x8ED1FF95
	static char* INT_TO_STRING(Any p0) { return invoke<char*>(0xA883AFCC, p0); } // 0xA883AFCC
	// 0x6B8E4CDD
}

namespace GAME // SCRIPT
{
	// 0x505A8057
	// 0xFF0B53EF
	// 0x6DE957C6
	static void SCRIPT_BREAKPOINT(Any p0) { invoke<Void>(0xA81DABA3, p0); } // 0xA81DABA3
	// 0x5AC72FCC
	// 0x9FEFA743
	static char* GET_SCRIPT_NAME() { return invoke<char*>(0x0BC52445); } // 0x0BC52445
	// 0x960DB7A5
	static void TERMINATE_THIS_THREAD(Any p0) { invoke<Void>(0x245B6AB6, p0); } // 0x245B6AB6
	static int _GET_ID_OF_THIS_SCRIPT() { return invoke<int>(0x9C424E0D); } // 0x9C424E0D
	// 0x45F7D589
	static BOOL DOES_SCRIPT_EXIST(Any p0) { return invoke<BOOL>(0xDEAB87AB, p0); } // 0xDEAB87AB
	// 0x687ECC3C
	// 0x4417C9F2
	// 0x05719022
	// 0x60A7FF09
	static void ADD_PERSISTENT_SCRIPT(int p0) { invoke<Void>(0x2F109475, p0); } // 0x2F109475
	// 0xC605E92F
	// 0x4C48EA4D
	// 0xD058BD70
	// 0x26884138
	static void RAND_SET_SEED(Any p0) { invoke<Void>(0xC0C6245E, p0); }  // 0xC0C6245E
	static int RAND_INT_RANGE(int min, int max) { return invoke<int>(0xF8D0D165, min, max); } // 0xF8D0D165
	static float RAND_FLOAT_RANGE(float min, float max) { return invoke<Any>(0xCA6229BF, min, max); } // 0xCA6229BF
	static Any RAND_INT_RANGE_DIFFERENT(Any min, Any max, Any p2) { return invoke<float>(0x1D69F321, min, max, p2); } // 0x1D69F321
	static Any RAND_FLOAT_GAUSSIAN(Any p0) { return invoke<float>(0x5D934CCB, p0); } // 0x5D934CCB
	static void FILE_START_PATH(Any p0) { invoke<Void>(0x973BC454, p0); } // 0x973BC454
	// 0x63CDBB01
	static void FILE_END_PATH() { invoke<Void>(0x9A202E1B); } // 0x9A202E1B
	// 0x6F323C5F
	static float GET_X(Actor actor) { return invoke<float>(0x436CE75A, actor); } // 0x436CE75A
	static float GET_Y(Actor actor) { return invoke<float>(0x0B0FF6A1, actor); } // 0x0B0FF6A1
	static float GET_Z(Actor actor) { return invoke<float>(0x25A02BC1, actor); } // 0x25A02BC1
	// 0x836466F8
	// 0x4D629653
	// 0x30A9FA0A
	// 0x13530581
	// 0xF1A53C41
	// 0xF76F2BB3
	// 0x65DAA654
	// 0x1BD78730
	// 0x141201A3
	static float FABS(float value) { return invoke<float>(0xACF9A5E4, value); } // 0xACF9A5E4
	static int ABS(int value) { return invoke<int>(0x5AABFA97, value); } // 0x5AABFA97
	static float SIN_DEGREE(float value) { return invoke<float>(0x55842354, value); } // 0x55842354
	static float COS_DEGREE(float value) { return invoke<float>(0x430207A4, value); } // 0x430207A4
	static float TAN_DEGREE(float value) { return invoke<float>(0x9BD37A3D, value); } // 0x9BD37A3D
	static float ATAN_DEGREE(float value) { return invoke<float>(0x69BE2817, value); } // 0x69BE2817
	static float ATAN2_DEGREE(float x, float y) { return invoke<float>(0x8A0D25F2, x, y); }// 0x8A0D25F2
	// 0x9C40E671
	// 0xADF7D54B
	// 0x3DD1DC3F
	// 0x44986367
	// 0xBB3CDF72
	static int _GET_CURRENT_TIME() { return invoke<int>(0x5842B9D1); } // 0x5842B9D1
	// 0xF83666A6
	static Any GET_SYSTEM_TIME() { return invoke<Any>(0x17CEE67A); } // 0x17CEE67A
	// 0xD66B6C8E
	// 0xC589CD7D
	// 0x49F96787
	static int GET_PROFILE_TIME() { return invoke<int>(0x6E189771); } // 0x6E189771
	// 0x59466B4D
	static void LOG_MESSAGE(char* message) { invoke<Void>(0x676167C3, message); } // 0x676167C3
	static void LOG_WARNING(char* warning_message) { invoke<Void>(0xFD25473E, warning_message); } // 0xFD25473E
	static void LOG_ERROR(char* error_message) { invoke<Void>(0x906C42FD, error_message); } // 0x906C42FD
	// 0x0EF7427B
	// 0x00776356
	// 0x533AD3F2
	// 0x7C858A47
	static Any GET_GRINGO_ACTIVATION_SPHERE(Any p0) { return invoke<Any>(0xADA2EA30, p0); } // 0xADA2EA30
	// 0xFD0AA999
	// 0x71BE51F4
	// 0x5E586923
	// 0x52261CE0
	static BOOL _IS_KEY_DOWN(Any p0) { return invoke<BOOL>(0x358F874F, p0); } // 0x358F874F
	static BOOL _IS_KEY_PRESSED(Any p0) { return invoke<BOOL>(0xCBC97619, p0); } // 0xCBC97619
	static BOOL IS_BUTTON_DOWN(Any p0, int control, Any p2, Any p3) { return invoke<BOOL>(0xC3297B50, p0, control, p2, p3); } // 0xC3297B50
	static BOOL IS_BUTTON_PRESSED(Any p0, int control, Any p2, Any p3) { return invoke<BOOL>(0x7BCB3F15, p0, control, p2, p3); } // 0x7BCB3F15
	static BOOL IS_BUTTON_RELEASED(Any p0, int control, Any p2, Any p3) { return invoke<BOOL>(0xB04EB731, p0, control, p2, p3); } // 0xB04EB731
	static float GET_ANALOG_BUTTON_VALUE(Any p0, Any p1, Any p2) { return invoke<float>(0x23C9C74A, p0, p1, p2); } // 0x23C9C74A
	static float GET_STICK_X(Any p0, Any p1, Any p2) { return invoke<float>(0x9AAF7E28, p0, p1, p2); } // 0x9AAF7E28
	static float GET_STICK_Y(Any p0, Any p1, Any p2) { return invoke<float>(0x7C6D41A4, p0, p1, p2); } // 0x7C6D41A4
	// 0x52B2F3F0
	// 0xD4DEBC08
	// 0xBEC2871A
	// 0xEF4F4F20
	// 0xF7974EBA
	static void DEBUG_DRAW_LINE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7C55C775, p0, p1, p2, p3); } // 0x7C55C775
	// 0x4A1BAD30
	// 0x993E45D8
	// 0x3C2D93C1
	// 0x73BE57AF
	// 0xD1D88EB8
	// 0x21E19CD5
	// 0x1B6FE39B
	// 0xAAEBAC28
	// 0x913A5CB6
	// 0xD34F7B3A
	// 0x191658C0
	// 0x95132289
	// 0xEB8325B3
	// 0xD3FE15FB
	// 0x32D1DEB0
	// 0x48FBB83D
	static void STORE_GAME_STATE(int p0, int p1, int p2) { invoke<Void>(0x800D6D89, p0, p1, p2); } // 0x800D6D89
	// 0xE1124E00
	static void RESET_GAME() { invoke<Void>(0x07045C4E); } // 0x07045C4E
	// 0x3B1B6407
	// 0xC7612A79
	// 0x0B2D5E4B
	static Any LOAD_GAME(Any p0) { return invoke<Any>(0x7C5901EF, p0); } // 0x7C5901EF
	static Any LOAD_SOFT_SAVE(Any p0) { return invoke<Any>(0x0234F932, p0); } // 0x0234F932
	static Any SAVE_GAME(Any p0) { return invoke<Any>(0x09C5D8D5, p0); } // 0x09C5D8D5
	// 0x1A3BAC68
	// 0xED40F27D
	// 0x8C710D3E
	// 0x17F34613
	// 0x20CE8AA8
	// 0x8E867DDD
	// 0x6E79F939
	// 0x3E647734
	// 0xE8637D2B
	// 0x6D59A25F
	// 0x1D177160
	// 0x1ADA1769
	static BOOL DOES_FILE_EXIST(Any p0) { return invoke<BOOL>(0xAABE1330, p0); } // 0xAABE1330
	// 0xD44F7102
	static BOOL IS_DEV_BUILD() { return invoke<BOOL>(0x6D9AA768); } // 0x6D9AA768
	// 0xA369B36F
	// 0xB427CB25
	// 0x4BA92498
	static BOOL IS_PLAYER_SIGNED_IN(Player player) { return invoke<BOOL>(0xC3C0F1F2, player); } // 0xC3C0F1F2
	// 0xA183D927
	// 0x8BD88B43
	// 0x1C7C0F86
	// 0x836F42DA
	// 0x6F32A4E2
	// 0x0BF2CD82
	// 0x57246C02
	// 0xF0DDF83D
	// 0x3B417D4E
	static void CLEAR_MISSION_INFO() { invoke<Void>(0x02092A6E); } // 0x02092A6E
	// 0x6CD7DCE1
	static void SET_START_POS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0CB93120, p0, p1, p2, p3, p4); } // 0x0CB93120
	// 0x814D97E8
	// 0x3B004817
	// 0x5401F0CA
	// 0x85A30503
	// 0xA602F586
	// 0x7CE2C2E1
	// 0xD8E31D42
	// 0x9A73C2CD
	// 0x554FC5E0
	// 0x6226328F
	// 0x59F98CA9
	// 0xB5401D4A
}

// 20RDR2gohObjectManager
// 20gohNULLObjectHandler..
namespace DECORATOR
{
	// 0x9AC89564
	// 0xFAC315B7
	// 0x1F003E6C
	static Any DECOR_SET_BOOL(Actor actor, Any *decorName, BOOL p2) { return invoke<Any>(0x8E101F5C, actor, decorName, p2); } // 0x8E101F5C
	static Any DECOR_SET_FLOAT(Any p0, Any p1, Any p2) { return invoke<Any>(0xBC7BD5CB, p0, p1, p2); } // 0xBC7BD5CB
	static Any DECOR_SET_INT(Any p0, Any p1, Any p2) { return invoke<Any>(0xDB718B21, p0, p1, p2); } // 0xDB718B21
	static Any DECOR_SET_VECTOR(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xAAED0B69, p0, p1, p2, p3, p4); } // 0xAAED0B69
	static Any DECOR_SET_STRING(Any p0, Any p1, Any p2) { return invoke<Any>(0x53D3FB4A, p0, p1, p2); } // 0x53D3FB4A
	static Any DECOR_SET_OBJECT(Any p0, Any p1, Any p2) { return invoke<Any>(0x44F8BCC5, p0, p1, p2); } // 0x44F8BCC5
	static int DECOR_CHECK_STRING(Any decor, char* eventType, char* eventName) { return invoke<int>(0xEDF99C77, decor, eventType, eventName); } // 0xEDF99C77
	static int DECOR_GET_STRING_HASH(Any p0, Any p1) { return invoke<int>(0x6A0FE2A0, p0, p1); } // 0x6A0FE2A0
	static int DECOR_GET_BOOL(Any p0, Any p1) { return invoke<int>(0xDBCE51E0, p0, p1); } // 0xDBCE51E0
	static int DECOR_GET_FLOAT(Any p0, Any p1) { return invoke<int>(0x8DE5382F, p0, p1); } // 0x8DE5382F
	static int DECOR_GET_INT(int p0, int p1) { return invoke<int>(0xDDDE59B5, p0, p1); } // 0xDDDE59B5
	static int DECOR_GET_VECTOR(Any p0, Any p1, Any p2) { return invoke<int>(0x56E84C59, p0, p1, p2); } // 0x56E84C59
	static int DECOR_GET_OBJECT(Any p0, Any p1) { return invoke<int>(0x24F2E859, p0, p1); } // 0x24F2E859
	static int DECOR_CHECK_EXIST(Any p0, Any p1) { return invoke<int>(0xA0773F5C, p0, p1); } // 0xA0773F5C
	static int DECOR_REMOVE(Any p0, Any p1) { return invoke<int>(0xE0E2640B, p0, p1); } // 0xE0E2640B
	static int DECOR_REMOVE_ALL(Any p0) { return invoke<int>(0xFDB9E349, p0); } // 0xFDB9E349
}

namespace LAYOUT
{
	static Any _GET_NUM_SCRIPTS_ACTIVE(Hash p0) { return invoke<Any>(0x0B396DFF, p0); } // 0x0B396DFF
	// 0x24F3A0DB
	// 0x26011C78
	// 0xC8C0C708
	// 0x9A756A72
	static BOOL _IS_LAYOUT_VALID(Layout layout) { return invoke<BOOL>(0xFC8E55ED, layout); } // 0xFC8E55ED
	static BOOL IS_OBJECT_VALID(Object object) { return invoke<BOOL>(0xD7E7187B, object); } // 0xD7E7187B
	static BOOL IS_ITERATOR_VALID(int iterator) { return invoke<BOOL>(0x5A9CC0B0, iterator); } // 0x5A9CC0B0
	static Any IS_PERS_CHAR_VALID() { return invoke<Any>(0x36CC24A4); } // 0x36CC24A4
	// 0x64BAF32C
	// 0x262164F8
	// 0x4CC5681D
	static Any GET_OBJECT_TYPE(Any p0) { return invoke<Any>(0x261ECB20, p0); } // 0x261ECB20
	// 0xADB08F12
	// 0xA2866F3B
	static Layout FIND_NAMED_LAYOUT(char* layoutName) { return invoke<Layout>(0x5699DE7E, layoutName); } // 0x5699DE7E
	static char* GET_ACTOR_NAME(Actor actor) { return invoke<char*>(0x78CF43C1, actor); } // 0x78CF43C1
	static char* GET_OBJECT_NAME(Object p0) { return invoke<char*>(0xDF40614F, p0); } // 0xDF40614F
	static char* _GET_OBJECT_NAME_2(Object p0) { return invoke<char*>(0xBADE22A2, p0); } // 0xBADE22A2
	static char* GET_OBJECT_MODEL_NAME(Any p0) { return invoke<char*>(0x5C4262F9, p0); } // 0x5C4262F9
	static char* _GET_OBJECT_MODEL_NAME_2(Any p0) { return invoke<char*>(0xF662EAE1, p0); } // 0xF662EAE1
	// 0x2CF0010F
	static Any GET_GRINGO_FROM_OBJECT(Any p0) { return invoke<Any>(0x8A01B64B, p0); } // 0x8A01B64B
	// 0xA7E9DA22
	// 0x111501F7
	// 0x4A2063EC
	// 0xFADF0B96
	// 0x35B5587D
	// 0xEDA897FA
	// 0x831338D9
	// 0x0550E178
	// 0x34F0AD96
	// 0x502DAC62
	// 0x024B2FFC
	// 0xF5EE5874
	// 0xD0C471FB
	// 0x51D6DA2C
	// 0x6B72661F
	// 0xB578DB52
	// 0xD4048969
	// 0x50A7E334
	static Layout CREATE_LAYOUT(char* layoutName) { return invoke<Layout>(0x6CA53214, layoutName); } // 0x6CA53214
	// 0x426828CB
	// 0xE8C04F05
	// 0x40856E8A
	// 0x2EC081E4
	// 0x8468286B
	// 0x708C7D7B
	// 0x44A34042
	// 0xF9CC7F63
	// 0xA17311E4
	// 0x177A3843
	// 0x025C9845
	// 0x88087384
	// 0x66A8AF91
	// 0x80FB8BDE
	// 0x779267C3
	// 0xE351587D
	// 0xD92BA5B6
	// 0xAF4F1910
	// 0xB20CA4DF
	// 0x80B8A1BE
	// 0xB6709FF4
	// 0x2703760F
	// 0x7E81694C
	// 0xF7277A0F
	// 0x91C6AC0E
	// 0xD60032F6
	// 0xE77F61B2
	// 0xA936E73B
	// 0xD9AC8830
	// 0xE78E66F0
	// 0x28A2A4CC
	// 0x000079CB
	// 0x3CD2C250
	// 0x7EEC1F40
	// 0xC15C3361
	// 0x8212247D
	// 0x67DB5ABF
	static void RELEASE_ACTOR(Actor actor) { invoke<Void>(0x32489AFB, actor); } // 0x32489AFB
	// 0x81F984F8
	// 0x19C3CF93
	// 0x8CAB944F
	static void DESTROY_ACTOR(Actor actor) { invoke<Void>(0x8BD21869, actor); } // 0x8BD21869
	// 0xC1756F39
	static void DESTROY_OBJECT(Any p0) { invoke<Void>(0x21144994, p0); } // 0x21144994
	static void DESTROY_ITERATOR(int p0) { invoke<Void>(0xE284A10C, p0); } // 0xE284A10C
	// 0x4028CE77
	// 0x6BC96263
	// 0xD064878D
	// 0xD62F3D27
	// 0xE9AB08C0
	// 0xCBB2267A
	// 0x2D160228
	// 0x48B36E07
	// 0x86B0B004
	// 0x65C3D8F6
	static Layout GET_AMBIENT_LAYOUT() {return invoke<Layout>(0xB52A3D48); } // 0xB52A3D48
	// 0x76FBF412
	// 0xADE13224
	// 0x921B5F2B
	// 0x552189FD
	// 0x43FBBDE1
	// 0xE09DE8A0
	// 0xBF680846
	// 0x2CB3B980
	// 0x50D39153
	// 0x0114FCBD
	// 0xA3E05BAE
	// 0x11EE07B5
	// 0x179A07DD
	// 0x3A71A589
	// 0x5720BF8A
	// 0x44C07DA5
	// 0x5F66B23E
	// 0x2ECF04F3
	// 0xCB3F7DA5
	// 0xA36ED4A6
	// 0x6F513950
	// 0x35C8FD4A
	// 0x0F701FF7
	// 0xFEC1CBC6
	// 0xB104FF3E
	// 0x122C916E
	// 0x14DCF1EF
	// 0x1229C536
	// 0x617C9630
	// 0x6A4A1699
	// 0xCDEF4316
	// 0xED6D63FE
	static void SET_ACTOR_VOLUME_PARAMETERS(Actor actor, float value) { invoke<Void>(0x8B46B294, actor, value); } // 0x8B46B294
	static void REMOVE_ACTOR_STAY_WITHIN_VOLUME(Actor actor) { invoke<Void>(0x2974CAF6, actor); } // 0x2974CAF6
	static void REMOVE_ACTOR_STAY_OUTSIDE_OF_VOLUME(Actor actor) { invoke<Void>(0x42EF7DB7, actor); } // 0x42EF7DB7
	// 0x0E41A6AC
	// 0x983ED842
	// 0x43E2808B
	// 0xE9E8C31A
	// 0x0ACF7E75
	// 0x80FF115A
	// 0x288E4BFB
	// 0x35E78298
	// 0xBB05B731
	// 0x9189EB8B
	// 0xAF1D570B
	// 0x0B40BBE3
	// 0xB0882841
	// 0x4251BF6C
	// 0x64BEDDEA
	// 0x92CC441F
	static void SNAP_ACTOR_TO_GRINGO(Actor actor) { invoke<Void>(0xD0A845E9, actor); } // 0xD0A845E9
	// 0x6745191B
	// 0x276EFF8E
	// 0xE18028C1
	// 0x7246F438
	// 0x1A59E608
	// 0x0AFC0B99
	// 0x547166A7
	// 0xF1F8AFCA
	// 0xFF8CBD07
	// 0x2A902148
	// 0x39286DE5
	// 0xD3A523FD
	// 0x1A4C98C1
	// 0x21BCC0A9
	// 0x5B417C9C
	// 0x1E56BAFD
	// 0xCFE22435
	// 0xFBB1BCDF
	// 0x17FC65A4
	// 0xBE5D84BF
	static Any GET_CRIME_POSITION(Any p0) { return invoke<Any>(0x391475E3, p0); } // 0x391475E3
	static Any GET_CRIME_TYPE(Any p0) { return invoke<Any>(0xDB2BDEA8, p0); } // 0xDB2BDEA8
	// 0xA2DA4D24
	// 0xD96DBABD
	// 0xE07C2D99
	static Any GET_CRIME_CRIMINAL(Any p0) { return invoke<Any>(0xEC2C34A4, p0); } // 0xEC2C34A4
	// 0xD2FD7CB6
	// 0x67F224B4
	// 0xE2FE0673
	static Any GET_CRIME_COUNTER(Any p0) { return invoke<Any>(0xB52BA7E6, p0); } // 0xB52BA7E6
	// 0x72A048B7
	// 0x85C58BE1
	static Any GET_CRIME_OBJECTSET(Any p0) { return invoke<Any>(0x72C52B55, p0); } // 0x72C52B55
	static Any SET_CRIME_OBJECTSET(Any p0, Any p1) { return invoke<Any>(0xD60B8F77, p0, p1); } // 0xD60B8F77
	static Any SET_CRIME_POSITION(Any p0, Any p1) { return invoke<Any>(0xB3F4043B, p0, p1); } // 0xB3F4043B
	static Any SET_CRIME_TYPE(Any p0, Any p1) { return invoke<Any>(0x85425011, p0, p1); } // 0x85425011
	// 0x2AE7D51F
	// 0x898B00F4
	// 0x6761D53A
	static Any SET_CRIME_CRIMINAL(Any p0, Any p1) { return invoke<Any>(0xBA02916B, p0, p1); } // 0xBA02916B
	// 0x7B917033
	// 0x8521A685
	// 0x1E552B26
	static Any SET_CRIME_COUNTER(Any p0, Any p1) { return invoke<Any>(0xCC14DC8D, p0, p1); } // 0xCC14DC8D
	// 0x54E7F26B
	// 0x2D6CD106
	static int CREATE_OBJECT_ITERATOR(Layout layout) { return invoke<int>(0xD8A12B74, layout); } // 0xD8A12B74
	// 0x2F358B89
	static Object START_OBJECT_ITERATOR(int iterator) { return invoke<Object>(0xE96A0318, iterator); } // 0xE96A0318
	static int OBJECT_ITERATOR_NEXT(int p0) { return invoke<int>(0xD88DC865, p0); } // 0xD88DC865
	// 0x91A3A831
	// 0x191E32C0
	// 0x351A482F
	// 0x9624A938
	// 0xD117DF0D
	static void ITERATE_ON_OBJECT_TYPE(int iterator, int type) { invoke<Void>(0xBE553F84, iterator, type); } // 0xBE553F84
	// 0xD7A370D5
	// 0x2243FA6E
	// 0x6914D904
	// 0xF35C5859
	// 0xF3ABE99C
	static void ITERATE_IN_SET(int iterator, int iterationSet) { invoke<Void>(0xDF6B5E94, iterator, iterationSet); } // 0xDF6B5E94
	// 0x0D8BA78E
	// 0x8BCB6B86
	// 0x12AA009F
	// 0xA3874D8A
	// 0x070F9693
	// 0xCF875EFA
	static Actor FIND_ACTOR_IN_LAYOUT(Layout layout, char* actorName) { return invoke<Actor>(0x53A761DE, layout, actorName); } // 0x53A761DE
	// 0xAC830865
	// 0xC9365FBC
	// 0xBB77E597
	static Any GET_OBJECT_POSITION(Any p0, Any p1) { return invoke<Any>(0x31201B4C, p0, p1); } // 0x31201B4C
	// 0x3C45D66A
	// 0xCE412E46
	// 0x2243EA59
	// 0x15CDF203
	// 0x919583DC
	// 0x6689F85C
	// 0xFC718FC5
	// 0x663F1464
	// 0x27B7D6D6
	// 0x1C02D2F8
	// 0xC5D796F8
	// 0x5AB0BBA6
	// 0xC8A4EE74
	// 0xF437B3D9
	// 0x30516389
	static Any GET_OBJECT_NAMED_BONE_ORIENTATION(Any p0, Any p1) { return invoke<Any>(0xCAD543AD, p0, p1); } // 0xCAD543AD
	// 0x8C0E3E29
	// 0xAD08BA79
	// 0x78B73E47
	// 0x533475AE
	// 0xE1421B42
	// 0xCC277C0A
	// 0xB6506558
	// 0x319D70BD
	// 0x1D711058
	// 0x325F7E50
	static Any IS_ATTACHMENT_VALID(Any p0) { return invoke<Any>(0x50305244, p0); } // 0x50305244
	// 0xE894DC13
	// 0x67FC68DB
	// 0x8FB32562
	// 0x2F7B457B
	// 0xD4A54348
	// 0xA870B28E
	// 0x3EEA78A8
	// 0xE9AABF2F
	// 0xCEA40973
	// 0x92339B5E
	// 0xCBA75200
	// 0x88FD9623
	// 0x192973A0
	// 0x4D42E285
	// 0xE694F53A
	// 0x6D0B8619
	// 0x807B9519
	// 0x1904CC1D
	// 0x1957B498
	// 0x05195632
	// 0x10BD98C9
	// 0x8A4F9046
	// 0x495026DA
	// 0x8C9721D6
	// 0xF2140DEE
	// 0x9B903F45
	// 0x16D1E1B4
	// 0xC741F051
	static Actor CREATE_ACTOR_IN_LAYOUT(Layout layout, char* actorName, int actorID, float x, float y, float z, float rotx, float roty, float rotz) { return invoke<Actor>(0x8D67F397, layout, actorName, actorID, x, y, z, rotx, roty, rotz); } // 0x8D67F397
	// 0x6A307D5F
	static Any CREATE_ACTOR_IN_LAYOUT(Any p0, Any p1, Any p2, Any p3, Any p5, Any p6) { return invoke<Any>(0x013B3937, p1, p2, p3, p5, p6); } // 0x013B3937
	static Any _CREATE_ENUMERATED_ACTOR_IN_LAYOUT_USING_VARIABLE_INDEX(Any p0) { return invoke<Any>(0xCCC0A3F3, p0); } // 0xCCC0A3F3
	static Actor _CREATE_ENUMERATED_PLAYER_ACTOR_IN_LAYOUT(Layout layout, Actor actor, char* actorInLayout, int actorID, float x, float y, float z, float xRot, float yRot, float zRot, int unk0) { return invoke<Actor>(0x637E446B, layout, actor, actorInLayout, actorID, x, y, x, xRot, yRot, zRot, unk0); } // 0x637E446B
	static Any IS_ACTOR_INITED(Any p0) { return invoke<Any>(0x24F4DAB2, p0); } // 0x24F4DAB2
	static Any GET_ACTOR_ENUM(Any p0) { return invoke<Any>(0x0B28E9EC, p0); } // 0x0B28E9EC
	// 0xD98CB6F6
	// 0xC739D1D2
	// 0x990614C1
	// 0xB50E95D7
	// 0x2803BDA8
	// 0x7AB17813
	static void _SET_PLAYER_TO_ENUM(Actor actor, float value) { invoke<Void>(0x95FBA0B0, actor, value); } // 0x95FBA0B0
	static void TURN_ACTOR_INTO_ZOMBIE(Actor actor, Any p1) { invoke<Void>(0x39928706, actor, p1); } // 0x39928706
	// 0x12A86E9D
	// 0x5613615B
	// 0xB54567B9
	static int REQUEST_ASSET(char* assetDir, int assetType) { return invoke<int>(0x9AA02DA7, assetDir, assetType); }; // 0x9AA02DA7
	static Any GET_ASSET_ID(Any p0) { return invoke<Any>(0x6005B514, p0); } // 0x6005B514
	static int REMOVE_ASSET(Any p0, Any p1) { return invoke<int>(0xE7829D28, p0, p1); }; // 0xE7829D28
	static Any _GET_TYPE_ID_USING_ACTOR_ENUM(Any p0) { return invoke<Any>(0x55E6227E, p0); } // 0x55E6227E
	static Any GET_ASSET_NAME(Any p0) { return invoke<Any>(0x9EDBBB84, p0); } // 0x9EDBBB84
	// 0x214AFB8C
	// 0xFDF42AAC
	// 0x1FCC8FEF
	// 0xAF2597E8
	// 0x97951004
	// 0x0D447878
	// 0xCEC355CE
	// 0x418A22D5
	// 0x77403213
	// 0x601FC9F4
	// 0x05D69EA6
	// 0x9AC1CA75
	// 0x0DC83543
	// 0x49D0DF2E
	// 0xDF93BD7C
	static void DESTROY_CAMERA(Any p0) { invoke<Void>(0x767E08D0, p0); } // 0x767E08D0
	static void _DESTROY_ACTOR(Actor actor) { invoke<Void>(0x59C2DC62, actor); } // 0x59C2DC62
	static Any CREATE_WORLD_SECTOR(Any p0, Any p1) { return invoke<Any>(0xC94CC336, p0, p1); } // 0xC94CC336
	static BOOL IS_WORLD_SECTOR_LOADED(Any p0) { return invoke<BOOL>(0xBF81A6C4, p0); } // 0xBF81A6C4
	static void MARK_REGION_READY(Any p0) { invoke<Void>(0x276A420B, p0); } // 0x276A420B
	// 0xA5F229C9
	// 0x0F146D2C
	// 0xF46FC138
	// 0x03B2D067
	// 0x6C526E7B
	// 0xC1195126
	// 0x00CDD849
	// 0x6138B1B8
	// 0xCE081203
	// 0xBF6E9855
	// 0x4193D42F
	// 0xF037DCA2
	// 0x3748F199
	// 0x03CD9C87
	// 0x43FF4632
}

namespace CAMERA
{
	// 0x0B1569C5
	// 0xBCC98808
	// 0x3EA55678
	// 0x423DB420
	// 0xE017E2F7
	// 0x6ED00237
	// 0x9A4CD54B
	// 0x02BD5362
	// 0x2615309A
	// 0x41EA7325
	// 0x0B12CD8C
	static void GET_CAMERA_POSITION(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x4A65F0B7, p0, p1, p2, p3); } // 0x4A65F0B7
	// 0xA8642E5E
	static void GET_CAMERA_DIRECTION(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xBBD1078A, p0, p1, p2, p3); } // 0xBBD1078A
	// 0x94A10ECD
	static void SET_CAMERA_FOV(Any p0, Any p1) { invoke<Void>(0x57E3242D, p0, p1); } // 0x57E3242D
	// 0x7B302F36
	// 0xFAEE2667
	// 0xCE01609D
	// 0x1D29E72A
	// 0xD85EF521
	// 0x486F4461
	// 0x298BCCA5
	// 0xDBD1AE22
	// 0xB8FAD252
	// 0x5BBFA4D7
	// 0x781D5599
	// 0x313A4E61
	// 0x7DA71AA7
	// 0x3010BBC2
	// 0x7F1C5102
	// 0x4643D2C7
	static Any SET_CAMERA_LIGHTING_SCHEME(Any p0, Any p1) { return invoke<Any>(0x7C864F17, p0, p1); } // 0x7C864F17
	// 0xE55B5ADB
	// 0x965A4652
	// 0xBB6FDF5F
	// 0xA97770FE
	// 0xA161768C
	// 0x54A417F3
	// 0x99314873
	// 0xF5CA55D4
	// 0x0EA022F5
	// 0x4D05D470
	// 0x21B099AB
	// 0x4670416D
	// 0x83F3336B
	// 0x7597BC24
	static void SET_CAMERASHOT_FOV(Any p0, Any p1) { invoke<Void>(0x635E5494, p0, p1); } // 0x635E5494
	// 0xEAD6167D
	// 0x3DEB0933
	// 0x4387CDAB
	// 0x6BA86494
	// 0xD86CB952
	// 0x4FD679BD
	// 0x0D6EC5D5
	// 0x3F719473
	// 0x839E9502
	// 0x8014323A
	// 0x4E6DDD27
	// 0x6F483443
	// 0xB6BDCF62
	// 0x087B8DCE
	// 0xEF0AB304
	// 0x0AD50615
	// 0xEB9E1CB9
	// 0x74168B5F
	// 0x0370451C
	// 0x243CF01F
	// 0x9E618676
	// 0x42327DAC
	// 0xF70817E0
	// 0x58A0BFBF
	// 0xCD28C63F
	// 0xC3DDCE4D
	// 0xD8D27321
	// 0x0229585E
	// 0x8F5BC02D
	// 0xBF9B4FC6
	// 0x6D72797D
	// 0x6E10E587
	// 0x143A617C
	// 0x22A746E1
	// 0x7AC13DF5
	// 0xDDB64AA9
	// 0x01C1F583
	// 0x3A07F60F
	// 0x39D1CC17
	// 0x41514AA0
	// 0x059BBAA8
	// 0xCBA91134
	// 0xA1C665E0
	// 0x59AE458A
	// 0xDA50B18B
	// 0x86066A65
	// 0xA923A22D
	// 0xFDBE95AE
	// 0xFB28AE8D
	static Any GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Any p0, Any p1) { return invoke<Any>(0x7E9CC966, p0, p1); } // 0x7E9CC966
	// 0xC0CD3C96
	// 0xFC676413
	// 0xCC61CC5F
	// 0x1AD38A53
	// 0xDB07C72B
	// 0x94B288F9
	// 0xA9AB9A06
	// 0x7A48EDDF
	// 0x0A776763
	// 0xBE3F0168
	// 0x18643DC2
	// 0xD5C66699
	// 0xE147BA8E
	// 0x3D26D852
	// 0xDCD3A7DE
	// 0xF74B5ADE
	// 0x25A58402
	// 0x269F5C75
	// 0x699332B0
	static void ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(Any p0, Any p1) { invoke<Void>(0x3A8487A6, p0, p1); } // 0x3A8487A6
	static void ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(Any p0, Any p1, Any p2) { invoke<Void>(0x8D7070F3, p0, p1, p2); } // 0x8D7070F3
	// 0xCDA6BB6C
	// 0xE7A1C191
	// 0x93050734
	// 0xFF1F1730
	// 0x74EE96B8
	// 0xD8218A5B
	// 0x6AD6A400
	// 0x76876FEA
	// 0x7A6146DB
	// 0xCA8CC5CE
	// 0x78D29E49
	// 0x80D63DAC
	// 0x2148298D
	// 0x52B9A693
	// 0x6FDE0A8C
	// 0x4A3AE626
	// 0x21633E5F
	// 0x48C3D85A
}

namespace GRAVESTONE
{
	// 0xF62EE158
	// 0x449D4A89
	// 0xAEC955F8
	// 0x211DE185
	static Any _0x5BF5A39C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x5BF5A39C, p0, p1, p2, p3, p4, p5); } // 0x5BF5A39C
}

namespace ELEMENT // PPPELEMENTS
{
	// 0x598815BD
	// 0xD1C91A7F
	// 0x7E0CDD87
	// 0xE6C1DBD9
	// 0x00EF33EF
	// 0xDF505043
	// 0xE613AE52
	// 0x84F3DD81
	// 0xF55B50ED
	// 0x6336182D
	// 0x3A6960B2
}

namespace MOVIE //MOVIEPLAYER
{
	// 0x7614AEBA
	// 0x69FC319E
	// 0xD036DF91
}

namespace TIME
{
	static Any _0x7C3D1193(Any p0) { return invoke<Any>(0x7C3D1193, p0); } // 0x7C3D1193
	static Any _0x61A2A3C(Any p0) { return invoke<Any>(0x61A2A3C, p0); } // 0x61A2A3C
	static Any GET_TOTAL_MINUTES(Any p0) { return invoke<Any>(0xC52F07A8, p0); } // 0xC52F07A8
	static Any _0x57FC0E16() { return invoke<Any>(0x57FC0E16); } // 0x57FC0E16
	static Any _0x0EBBDC34(Any p0, Any p1) { return invoke<Any>(0x0EBBDC34, p0, p1); } // 0x0EBBDC34
	static int GET_HOUR(Time time) { return invoke<int>(0x2765C37E, time); } // 0x2765C37E
	static Any GET_MINUTE(Any p0) { return invoke<Any>(0x1020BF6D, p0); } // 0x1020BF6D
	static Any GET_SECOND(Any p0) { return invoke<Any>(0xBA8077CF, p0); } // 0xBA8077CF
	static Any _0x63D13FB0() { return invoke<Any>(0x63D13FB0); } // 0x63D13FB0
	static void ADD_TIME(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xBA4FEEBC, p0, p1, p2, p3, p4); } // 0xBA4FEEBC
	static Any _0x2F7CB0E3(Any p0) { return invoke<Any>(0x2F7CB0E3, p0); } // 0x2F7CB0E3
	static Any GET_TIME_OF_DAY() { return invoke<Any>(0x4E1DE7A5); } // 0x4E1DE7A5
	static Time MAKE_TIME_OF_DAY(int hour, int minute, int second) { return invoke<Time>(0xC09EAB6E, hour, minute, second); }
	static Any _0x0E453CF0(Any p0) { return invoke<Any>(0x0E453CF0, p0); } // 0x0E453CF0
	static Any _0x2DB3AC0F(Any p0) { return invoke<Any>(0x2DB3AC0F, p0); } // 0x2DB3AC0F
	static Any _0x9C9529D8(Any p0, Any p1) { return invoke<Any>(0x9C9529D8, p0, p1); } // 0x9C9529D8
	static Any _0x243AF970(Any p0, Any p1) { return invoke<Any>(0x243AF970, p0, p1); } // 0x243AF970
	static Any _0xD4FECCBC() { return invoke<Any>(0xD4FECCBC); } // 0xD4FECCBC
	static void SET_TIME_OF_DAY(Any p0) { invoke<Void>(0xAD03186C, p0); } // 0xAD03186C
	static Any _0xB98C7AA5() { return invoke<Any>(0xB98C7AA5); } // 0xB98C7AA5
	static Any GET_TIME_ACCELERATION() { return invoke<Any>(0xC87F16A8); } // 0xC87F16A8
	static Any SET_TIME_WARP(Any p0) { return invoke<Any>(0xD93E1BCB, p0); } // 0xD93E1BCB
	static Any _0xAF50E8A1(Any p0) { return invoke<Any>(0xAF50E8A1, p0); } // 0xAF50E8A1
}

namespace CAM
{
	static Any GET_GAME_CAMERA() { return invoke<Any>(0x6B7677BF); } // 0x6B7677BF
	// 0xCE956B28
	// 0x39E59CD8
	static BOOL CAMERA_PROBE(Vector3* result, Vector3 source, Vector3 target, Actor owner, int flag) { return invoke<BOOL>(0x720F2CA7, result, source, target, owner, flag); } // 0x720F2CA7
	// 0xC783B9B9
	// 0x0B071844
	// 0x8EFDFE89
	// 0x457A0510
	// 0x9B083FD2
	// 0x063F900A
	// 0x507BBD3A
	// 0xC93116B1
	// 0x09737AF7
	// 0x72960AE2
	// 0x382C47C5
	// 0x6E303287
	// 0xE13B49BD
	// 0x9603D3B2
	// 0x4062688A
	// 0x3AE77125
	// 0x87E40FB8
	// 0x4FA19C01
	// 0x5BD2295E
	// 0xF3623B64
	// 0xAE168124
	// 0x9F1F8669
}

//net task
namespace NET
{
	// 0x8808546E
	// 0x1A47001B
	// 0x0FF6B8F4
	// 0x81F24788
	// 0x41921C98
	// 0xE822010A
	// 0xA9459BB6
	// 0x9D9784B8
	// 0x03962973
	// 0x8E0D7219
	// 0xC00C8C94
	// 0x9BC05C90
	// 0x97931B87
	// 0xFE83A4FE
	// 0x8DEC3E03
	// 0xBECB3EEC
	// 0x75F27D60
	// 0xA64A451E
	// 0x67031EDA
	// 0xFD355ED1
	// 0x805AC16A
	// 0x0AAE9E6B
	// 0x20B684AB
	// 0x84CD0651
	// 0xA56B459C
	// 0x0547A660
	// 0xD6111569
	// 0xFA382FCB
	// 0xCF065186
	// 0xBE7965C8
	// 0xD4C7E0D5
	// 0x98FC68AF
	// 0x95A543E2
	// 0xC673362C
	// 0xEC6F465F
	// 0x794F5C21
	// 0xBD42097A
	// 0xC09ACD5C
	// 0xC73DAD2B
	// 0x8A1D83F2
	// 0xA6403262
	// 0x27D40FD1
	// 0xA3AE09EF
	// 0x746897AB
	// 0xB4C867BD
	// 0x12558DBD
	// 0x134AAF17
}

namespace GAMERTAG // MPGAMERTAG
{
	// 0x77D6ABF5
	// 0xE79F6CD4
	// 0xFD91BE0D
	// 0xE2E6C722
	// 0xCE8F6304
	// 0xAB32D5D9
	static void NET_GAMER_SET_TITLE(Any p0, Any p1, Any p2) { invoke<Void>(0x7BD7A465, p0, p1, p2); } // 0x7BD7A465
	// 0x2357CA74
	// 0x160E79C6
	// 0xB5DDEF68
	// 0x34960D06
	// 0xE783219A
	// 0x1958F478
	// 0x2FB85996
	// 0xF34B8448
	// 0x796E66E7
	// 0x650A7440
	// 0xA0A5FF80
	// 0x2634F265
	// 0x4A2E7533
	// 0x08D84437
	// 0x784F04DD
	// 0x3DD6E36A
	// 0xE5FE0A6A
	// 0x25F8C46A
	// 0x3248D20E
	// 0x9DDB29B1
	// 0x24A1B923
}

// Game type entry already exists for %s
namespace NET2
{
	// 0x55C5BB93
	// 0xFAD5A270
	// 0x4A721118
	// 0x4500B98A
	// 0x85049505
	// 0x5C51D43C
	// 0x0E2C4B68
	// 0xB514ECA7
}

// UpdateLeaderboard called but m_pStatsSession is NULL - leaderboard stats will not be reported
namespace NET3
{
	static void NET_UPDATE_LEADERBOARD(int p0, int p1, int p2, int p3) { invoke<Void>(0x12304873, p0, p2, p3); } // 0x12304873
	// 0x4D0C8AA4
	// 0x89277EA3
	// 0x2B8F86ED
	// 0x88249424
	// 0x87A3A38D
	// 0xD7572C68
	// 0x76F09F04
	// 0xA684E813
	// 0xE5C5CE63
	// 0x4F652A00
	// 0xFC564903
	// 0x7154D15B
	// 0x86BC0A55
	// 0xEB4A6D85
	// 0x5FD52711
	// 0xD0808C42
	// 0x097BB984
	// 0xEA7ADF42
	// 0x3A8C77AD
	// 0xE89C6E4F
	// 0x0791F35A
	// 0x49C2B05F
	// 0xC813DBEF
	// 0xE6B4F505
	// 0x70AF0351
	// 0x293C3288
	// 0xA7F231B0
	// 0x984749B4
}

namespace NET4
{
	// 0x6BCFE549
	// 0x50E637D7
	void NET_LOG(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x48275716, p0, p2, p3, p4, p5, p6); } // 0x48275716
	// 0xD164026F
	// 0x9180FF1C
	// 0x84B0B5D6
	static BOOL NET_IS_IN_SESSION() { return invoke<BOOL>(0xCDAC0F0E); } // 0x8CA54980
	static BOOL NET_IS_ONLINE_AVAILABLE() { return invoke<BOOL>(0x5FF2BAE0); } // 0x5FF2BAE0
	// 0x7AB722D8
	static int NET_GET_PLAYMODE() { return invoke<int>(0xBC4B6B74); } // 0xBC4B6B74
	// 0x18EC9CF0
	// 0x17D14553
	static BOOL NET_IS_SESSION_HOST() { return invoke<BOOL>(0xCDAC0F0E); } // 0xCDAC0F0E
	static BOOL NET_IS_SESSION_CLIENT(Any p0) { return invoke<BOOL>(0xFF65A07C, p0); } // 0xFF65A07C
	// 0x75DD203B
	static Any NET_GET_NAT_TYPE() { return invoke<Any>(0x31700C0A); } // 0x31700C0A
	static BOOL NET_IS_BUSY() { return invoke<BOOL>(0x0678A865); } // 0x0678A865
	static void NET_GET_NET_TIME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFF8DA25D, p0, p1, p2, p3); } // 0xFF8DA25D
	// 0xB829A92D
	// 0x71D989BD
	static Any _SCLUBSTAT_EMPTYGAMER() { return invoke<Any>(0x95CDCE7A); } // 0x95CDCE7A
	// 0xAD85A378
	// 0x72B03551
	// 0x860FCDBD
	static Any GET_NUM_PLAYERS() { return invoke<Any>(0x0F99A8BC); } // 0x0F99A8BC
	// 0x84D6F8A7
	static Any _NET_SCRIPT_MSG_SEND(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x5E985228, p0, p1, p2, p3, p4); } // 0x5E985228
	// 0xE2163ECC
	// 0xB13DD691
	// 0x9253CC79
	// 0x4957E482
	static void REGISTER_HOST_BROADCAST_VARIABLES(Any p0, Any p1) { invoke<Void>(0xBEDD194D, p0, p1); } // 0xBEDD194D
	static void REGISTER_CLIENT_BROADCAST_VARIABLES(Any p0, Any p1) { invoke<Void>(0xF1732769, p0, p1); } // 0xF1732769
	// 0x2707F082
	// 0x0130DB5D
	// 0xF81E2097
	// 0x64C2DD40
	// 0xA80C6DE6
	// 0xD12C55A5
	static Any NET_REQUEST_OBJECT(Any p0) { return invoke<Any>(0x68EC589D, p0); } // 0x68EC589D
	// 0x47C5E353
	// 0x3932B786
	// 0x138F38AC
	// 0x3E509DF1
	// 0x8C7E41E2
	// 0x1306549E
	// 0x5C4CAE3A
	// 0x579C2014
	static void _NET_SET_EQUIP_TYPE(Any p0) { invoke<Void>(0x7837890B, p0); } // 0x7837890B
	// 0xA6D794FE
	// 0x1C147E14
	// 0xCA6231C1
	// 0xC09B114B
	// 0x7284A71B
	// 0x7AB65B0C
	static Any AWARD_ACHIEVEMENT(Any p0) { return invoke<Any>(0xCAA24B1A, p0); } // 0xCAA24B1A
	static Any HAS_ACHIEVEMENT_BEEN_PASSED(Any p0) { return invoke<Any>(0x136A5BE9, p0); } // 0x136A5BE9
	// 0xC792A9E0
	static Any AWARD_AVATAR(Any p0) { return invoke<Any>(0xDD33E221, p0); } // 0xDD33E221
	static Any NET_GET_POSSE_COUNT() { return invoke<Any>(0xC4F9DA6E); } // 0xC4F9DA6E
	static BOOL NET_IS_POSSE_LEADER() { return invoke<BOOL>(0x1CAD6D29); } // 0x1CAD6D29
	// 0x0D914C89
	// 0xFC52BD15
	static Any NET_GET_GAMER_POSSE_SIZE(Any p0) { return invoke<Any>(0xB6006EA9, p0); } // 0xB6006EA9
	// 0x98A5CDC5
	// 0x106CE441
	// 0x6A7B9FAD
	// 0x2037A74F
	// 0x89D8FC30
	// 0x2010ABE6
	// 0xF6E40FF3
	// 0xC0849D70
	// 0x8DF05A4F
	static Any NET_SESSION_LEAVE_SESSION() { return invoke<Any>(0x4AE5DBB2); } // 0x4AE5DBB2
	static BOOL NET_IS_FACTION_SAFE(Any p0) { return invoke<BOOL>(0x80B20614, p0); } // 0x80B20614
	// 0x86FF3A9B
	// 0x81FD9851
	// 0x3A5C56E3
	// 0xFA0E1F8B
	// 0xCC7D0431
	// 0xDC88B308
	// 0xD923CD1B
	// 0x7540959C
	static void NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(Any p0) { invoke<Void>(0xEE3B79EE, p0); } // 0xEE3B79EE
	// 0x4238C471
	static Any NET_GET_SCRIPT_STATUS() { return invoke<Any>(0x667DA125); } // 0x667DA125
	static BOOL NET_IS_PLAYER_PARTICIPANT(Player player) { return invoke<BOOL>(0x110A9B2F, player); } // 0x110A9B2F
	static BOOL NET_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0x6D403720); } // 0x6D403720
	static Any NET_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0x9272C3BA); } // 0x9272C3BA
	// 0x408E28E2
	// 0xC0FC4B57
	// 0xD9965A9A
	// 0x7BDCBD45
	// 0x50C18480
	// 0xE5645CB3
	// 0x79AFAB1F
	// 0x581CAC89
	// 0xA174152C
	// 0x0183A3F0
	// 0x63034F52
	// 0xE9EAC45C
	// 0xBDF22FCA
	// 0x9EA132A3
	// 0xCB0BCAE2
	// 0x7A99E7DE
	// 0x1D5E39A0
	// 0xEF6BF96E
	static Any NET_IS_UNLOCKED(Any p0) { return invoke<Any>(0xC8B680B3, p0); } // 0xC8B680B3
	// 0xBE0E275F
	static Any NET_GET_AREA_OVERLOAD_STATE_FOR_SLOT(Any p0) { return invoke<Any>(0xCB42389E, p0); } // 0xCB42389E
	// 0x842ADE0A
	// 0xB7856424
	// 0xF2FA1DE8
	// 0xCF674E31
	// 0x97F15B69
	// 0xCA0739A8
	// 0x49BC0219
	// 0xD6780B56
	// 0x9A5841E5
}

namespace ACTOR
{
	static BOOL IS_ACTOR_VALID(Actor actor) { return invoke<BOOL>(0xBA6C3E92, actor); } // 0xBA6C3E92
	static Any GET_ACTORENUM_FROM_STRING(char* actorName) { return invoke<Any>(0x8B217CAC, actorName); } // 0x8B217CAC
	static BOOL IS_ACTOR_ON_FOOT(Any p0) { return invoke<BOOL>(0x63D6551C, p0); } // 0x63D6551C
	// 0xB7CE8FCC
	// 0xB89CC342
	// 0x50A3BF5D
	static Any GET_ACTOR_VELOCITY(Actor actor, Any *p1, Any *p2, Any *p3) { return invoke<Any>(0xAD6AF65C, actor, p1, p2, p3); } // 0xAD6AF65C
	static float GET_ACTOR_HEIGHT(Actor actor) { return invoke<float>(0xE173CE48, actor); } // 0xE173CE48
	// 0xAB8A1C15
	// 0xDAD46FAB
	// 0xA2DEC153
	// 0x5F655C68
	// 0x0733E811
	// 0x6AC01FCB
	// 0xEE0AB3DD
	// 0x6AFF3122
	// 0x7D397CAA
	// 0x8DAC4359
	// 0xDE0B9673
	// 0xAC232F6E
	static Any GET_ACTOR_POSTURE(Any p0) { return invoke<Any>(0xDB993A4F, p0); } // 0xDB993A4F
	static void SET_ACTOR_POSTURE(Actor actor, Any p1) { invoke<Void>(0x708D9BD3, actor, p1); }	// 0x708D9BD3
	// 0xDCC91F8C
	static Any GET_ACTOR_TYPE(Any p0) { return invoke<Any>(0xABFD3560, p0); } // 0xABFD3560
	// 0x2091F142
	static void SET_ACTOR_SEX(Actor actor, Any p1) { invoke<Void>(0x9C42B7A2, actor, p1); } // 0x9C42B7A2
	static void SET_ACTOR_IS_COMPANION(Actor actor, Any p1) { invoke<Void>(0x4C94EB9E, actor, p1); } // 0x4C94EB9E
	static void SET_ACTOR_IS_THE_BEASTMASTER(Actor actor, Any p1) { invoke<Void>(0x8392855D, actor, p1); } // 0x8392855D
	static void SET_ACTOR_TIME_OF_LAST_CRIME(Actor actor, Any p1) { invoke<Void>(0xE9D86A7A, actor, p1); } // 0xE9D86A7A
	// 0x2CB5D7AF
	static BOOL IS_PLAYER_WEAPON_ZOOMED(Any p0) { return invoke<BOOL>(0x0A842786, p0); } // 0x0A842786
	static BOOL IS_ACTOR_ANIMAL(Actor actor) { return invoke<BOOL>(0x8E0769F3, actor); } // 0x8E0769F3
	// 0xF6BF4242
	static BOOL IS_ACTOR_FLYING(Actor actor) { return invoke<BOOL>(0x25670955, actor); } // 0x25670955
	static BOOL IS_ACTOR_HUMAN(Actor actor) { return invoke<BOOL>(0x882C84DC, actor); } // 0x882C84DC
	static BOOL IS_ACTOR_JUMPING(Actor actor) { return invoke<BOOL>(0xDFF96719, actor); } // 0xDFF96719
	static BOOL IS_ACTOR_SHOOTING(Actor actor) { return invoke<BOOL>(0x4B441DC4, actor); } // 0x4B441DC4
	// 0x6396ABB7
	// 0x39C518DB
	static BOOL IS_ACTOR_THROWING(Actor actor) { return invoke<BOOL>(0x886BD8AD, actor); } // 0x886BD8AD
	// 0x3612AC73
	// 0xE975BE40
	// 0xE27EBCBD
	// 0x017D270E
	// 0xE29F0A39
	// 0x13E6B5EE
	static BOOL IS_MOVER_FROZEN(Any p0) { return invoke<BOOL>(0x9C12BD5A, p0); } // 0x9C12BD5A
	// 0x63925367
	// 0x61664EC0
	// 0x709EC06C
	// 0x8ED9DAFC
	// 0x4A2DE1D0
	// 0x7D65D9C7
	// 0xA6AA7B9E
	// 0x7B4F9EAC
	// 0xE39E89BD
	// 0x8842C62D
	// 0x19F3CB6B
	// 0x04CF7C3E
	// 0x0E9BA223
	// 0x5FEA3E61
	static Any ACTOR_RESET_ANIMS(Any p0, Any p1) { return invoke<Any>(0x35D8B4AA, p0, p1); } // 0x35D8B4AA
	// 0x817B6952
	// 0x4A1D2E25
	// 0xC17BAD12
	// 0x0B5E1904
	// 0x50ED77F1
	// 0xDA2F6203
	// 0x5DE31288
	// 0x6D3E430D
	// 0x776999DB
	// 0x488C95C4
	// 0x0CC3D8F6
	// 0x55AACDFD
	// 0x21CE712F
	// 0xF8F3FE84
	// 0x4A4B4B26
	// 0x4E3E9B70
	// 0x5C8DD257
	// 0x8D5175A8
	// 0xBFABD82E
	// 0xAAC96EFF
	// 0x9CD3385E
	// 0xC52B5F18
	// 0xEB7B0FAA
	// 0x2C6A5FAC
	// 0xE4AA7B35
	// 0xD15B53F8
	// 0xC28A5950
	static void SET_ACTOR_ALLOW_WEAPON_REACTIONS(Actor actor, Any p1) { invoke<Void>(0x003D7C2F, actor, p1); } // 0x003D7C2F
	// 0xBAF9D599
	// 0x78B7976E
	// 0x18BA1216
	// 0x0634B4D1
	// 0xD9934D6E
	// 0x0A23F215
	// 0xFFDA2D88
	// 0x7B7D1742
	// 0x76A72D9A
	// 0x2B403538
	static Any GET_CURRENT_GRINGO(Any p0) { return invoke<Any>(0x5D9DB7A5, p0); } // 0x5D9DB7A5
	// 0x527CB774
	// 0x660DBDDD
	// 0xF04335A6
	// 0xFB2B0CCF
	// 0xA41B161C
	// 0x9028B082
	// 0x90F9555B
	// 0xA9691E66
	// 0x9CB01B27
	// 0x950B8870
	// 0x036D75D5
	// 0xA854EE99
	// 0x04D4A734
	// 0x627E52EA
	// 0x56DE7F21
	// 0x8D0DCEB6
	// 0x09D78931
	// 0x68D4A021
	// 0xEB40C2FC
	// 0x69FA5315
	// 0x8C221B4D
	// 0x0129B715
	// 0x8062BD74
	static Any BEGIN_DUEL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x44B7FF7E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x44B7FF7E
	// 0x4E86F0B5
	// 0x82A6B8FC
	// 0x33CE5435
	// 0x3E5C3C2D
	// 0x8007587C
	// 0x4D0A87BF
	// 0x6695E185
	// 0x29AEB2DB
	// 0xD3D8E8ED
	// 0x2B8C3258
	// 0xA4B5275C
	// 0x382E7CCC
	// 0x415F9BC3
	// 0x4F605632
	// 0x02365961
	// 0xD079EB62
	// 0x47930AA4
	// 0xEDC806BA
	// 0x7A746D3A
	// 0x32CB0E86
	// 0x4CB24141
	// 0x0880DBF5
	// 0x199600FA
	// 0xB9744BE7
	// 0xBADB24FB
	// 0xF1D2A13E
	static void MAKE_BIRD_FLY_FROM_POINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x5E54E254, p0, p1, p2, p3, p4, p5, p6); } // 0x5E54E254
}

namespace AMBIENT
{
	// 0xA8226DFF
	// 0x831FC466
	// 0xCC9E6F4C
	// 0x7B07D449
	// 0x205E891C
	// 0x8B011F5D
	// 0x19B26C78
	// 0xA337135A
	// 0x9A35520B
	// 0x272D756C
	// 0x9A2B05F4
	static Any AMBIENT_SET_SEARCH_CENTER_PLAYER(Any p0) { return invoke<Any>(0x21E783AC, p0); } // 0x21E783AC
	// 0x391F3607
	// 0x2CCE1115
	// 0x45190938
	// 0x561C9A6D
	// 0x912EEC43
	// 0x528C7F3D
	// 0xA89B77A7
	// 0x762192EB
	// 0x1900A97E
	// 0x609514AE
	// 0xAA99E18E
	// 0x76341F1A
	// 0x309D058C
	// 0xB1609063
	// 0x5A6418A2
	// 0x9CD2B55F
	// 0x1F7F1B79
	// 0xBCD4979C
	// 0x30C67D05
	// 0x0AC99007
	// 0xC8B149B4
	// 0x54BD1C65
	// 0x90008899
	// 0x0C6EF9E1
}

namespace ANIMATOR // OBJECTANIMATOR
{
	// 0x19BD222F
	// 0x856D5842
	// 0x0D0A66B6
	// 0x554CF528
	// 0x5908F7FE
	// 0xB9D7B63B
	// 0xC0128653
	// 0x0B4D9AFA
	// 0xC5205015
	// 0x188B6431
	// 0xB57D4110
	// 0x46A69DAF
	// 0x1E5A227A
	// 0x4F10FD5B
	static Any LINK_OBJECT_ANIMATOR_TO_ACTOR(Any p0, Any p1, Any p2) { return invoke<Any>(0xBEDB066C, p0, p1, p2); } // 0xBEDB066C
}

namespace COVER
{
	// 0x50AE988A
	// 0x9265B24B
	// 0x8DFF31DF
	// 0x620178B3
	// 0xA7F84C2F
	// 0x90AD2C2D
	// 0x6BA6BC9B
}

// 20RDR2gohObjectManager..
namespace CURVE  // GOHOBJECT
{
	// 0x0C46DAB3
	// 0xA5FF6076
	// 0x0E018669
	// 0x8C37CA1A
	// 0x9398BE8F
	// 0x8E551A7C
	// 0xBADCF1E9
	// 0xE531DCAE
	// 0xB4D1D8A3
	// 0xBD4E48A6
	// 0x90B514B9
	// 0x4F8FAF8F
	// 0x04D89A35
	// 0x19D652F9
	// 0x39DA0B3A
	// 0x49D2C1DA
	// 0x8270CE81
	// 0xE1007398
	static Any GET_CURVE_NAME(Any p0) { return invoke<Any>(0x9A933060, p0); } // 0x9A933060
	static Any GET_CURVE_POINT(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x1CDF1EC4, p0, p1, p2, p3); } // 0x1CDF1EC4
	// 0x74460602
	// 0xA7BB9E5E
	// 0xF0441E47
}

// gohEventManager
namespace EVENT
{
	// 0x4911EB99
	static Object _0x184BD1BC(Object p0) { return invoke<Object>(0x184BD1BC, p0); } // 0x184BD1BC
	// 0xB64DDA6F
	// 0xF7DA8F09
	// 0xD938B523
	// 0x6D660453
	// 0xE2ED95CC
	// 0xBDD4D4D5
	// 0x0B5431C9
	// 0x17CF885F
	// 0x8DF144C2
	// 0xFEE731AF
	// 0x85D62384
	// 0xFB227D11
	// 0x82112B85
	static int _GET_ITERATION_SET(int setId) { return invoke<int>(0xBC58F1EA, setId); }
	// 0x24C18749
	// 0x88943B5B
	// 0x3D2786E5
	// 0x6B5DF46D
	// 0x0AA5D947
	// 0x1105FB64
	// 0x08765C6B
	// 0xDE9AA6E5
	// 0x54F8EAA4
	// 0xAA24E0CC
	// 0x19F62133
	// 0xB573FF63
	// 0x586714AE
}

namespace SOCIALCLUB
{
	static Any DISABLE_PLAYER_GRINGO_USE(Any p0, Any p1) { return invoke<Any>(0x6FCF6BC8, p0, p1); } // 0x6FCF6BC8
	static Any _0x5A9D0738(Any p0) { return invoke<Any>(0x5A9D0738, p0); } // 0x5A9D0738
	static void _0x15040CD2(Any p0) { invoke<Void>(0x15040CD2, p0); } // 0x15040CD2
	static void _0x45589499(Any p0) { invoke<Void>(0x45589499, p0); } // 0x45589499
	static Any _0xDD9BD22B(Any p0) { return invoke<Any>(0xDD9BD22B, p0); } // 0xDD9BD22B
	static void SET_PAUSE_SCRIPT(Any p0) { invoke<Void>(0x9B71351C, p0); } // 0x9B71351C
	static Any _ENABLE_USE_CONTEXT(Any p0) { return invoke<Any>(0xFEA58D57, p0); } // 0xFEA58D57
	static Any _0x2ADA3DD4() { return invoke<Any>(0x2ADA3DD4); } // 0x2ADA3DD4
	static Any _0x115CD0CC(Any p0) { return invoke<Any>(0x115CD0CC, p0); } // 0x115CD0CC
	static Any ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { return invoke<Any>(0x039E7F1D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p8, p10, p11, p12, p13, p14, p14, p15); } // 0x039E7F1D
	static Any _0xD7591B0E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xD7591B0E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD7591B0E
	static Any _0xF48F8F09(Any p0) { return invoke<Any>(0xF48F8F09, p0); } // 0xF48F8F09
	static Any IS_SCRIPT_USE_CONTEXT_PRESSED(Any p0) { return invoke<Any>(0x45C1C061, p0); } // 0x45C1C061
	static Any WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Any p0) { return invoke<Any>(0x971559CA, p0); } // 0x971559CA
	static Any _SETTING_USE_CONTEXT_STRING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x3ECD8FEE, p0, p1, p2, p3, p4, p5, p6); } // 0x3ECD8FEE
	static Any _0x4F52CB58(Any p0) { return invoke<Any>(0x4F52CB58, p0); } // 0x4F52CB58
	static Any NET_MAILBOX_IS_SIGNED_INTO_SC() { return invoke<Any>(0xA3E1EF71); } // 0xA3E1EF71
	static Any NET_MAILBOX_GET_MAX_NUM_CHALLENGES() { return invoke<Any>(0x6B439149); } // 0x6B439149
	static Any NET_MAILBOX_GET_NUM_CHALLENGES() { return invoke<Any>(0x89F1B8CD); } // 0x89F1B8CD
	static Any NET_MAILBOX_GET_CHALLENGE_BY_INDEX(Any p0) { return invoke<Any>(0xE85942F0, p0); } // 0xE85942F0
	static Any NET_MAILBOX_GET_CHALLENGE_BY_ID(Any p0) { return invoke<Any>(0xD4FBCCE0, p0); } // 0xD4FBCCE0
	static Any NET_MAILBOX_IS_CHALLENGE_VALID(Any p0) { return invoke<Any>(0xC9E96F78, p0); } // 0xC9E96F78
	static Any SC_CHALLENGE_LAUNCH(Any p0) { return invoke<Any>(0xCBBE41DD, p0); } // 0xCBBE41DD
	static Any SC_CHALLENGE_CLEAN_UP(Any p0) { return invoke<Any>(0xB7DE2AF2, p0); } // 0xB7DE2AF2
	static Any SC_CHALLENGE_IS_RUNNING(Any p0) { return invoke<Any>(0x79F09AC7, p0); } // 0x79F09AC7
	static Any SC_CHALLENGE_IS_ACTIVE(Any p0, Any p1) { return invoke<Any>(0x5D7197BC, p0, p1); } // 0x5D7197BC
	static Any SC_CHALLENGE_GET_COMMUNITY_TOTAL(Any p0) { return invoke<Any>(0xFFC55DA4, p0); } // 0xFFC55DA4
	static Any SC_CHALLENGE_GET_COMMUNITY_VALUE(Any p0) { return invoke<Any>(0xCEEEAE1D, p0); } // 0xCEEEAE1D
	static Any SC_CHALLENGE_PROCESS_EXPIRATION(Any p0) { return invoke<Any>(0x1876B04E, p0); } // 0x1876B04E
	static Any SC_CHALLENGE_GET_EXPIRATION_STATE(Any p0) { return invoke<Any>(0x4BD61354, p0); } // 0x4BD61354
	static Any SC_CHALLENGE_RESET_EXPIRATION_STATE(Any p0) { return invoke<Any>(0xF5F97702, p0); } // 0xF5F97702
	static Any _0xFD6197EB(Any p0, Any p1) { return invoke<Any>(0xFD6197EB, p0, p1); } // 0xFD6197EB
	static Any SC_CHALLENGE_GET_VAR_FLOAT(Any p0, Any p1, Any p2) { return invoke<Any>(0xC322556E, p0, p1, p2); } // 0xC322556E
	static Any SC_CHALLENGE_GET_VAR_INT(Any p0, Any p1) { return invoke<Any>(0x2390DD18, p0, p1); } // 0x2390DD18
	static Any SC_CHALLENGE_GET_VAR_BOOL(Any p0, Any p1) { return invoke<Any>(0xB40622F1, p0, p1); } // 0xB40622F1
	static Any SC_CHALLENGE_RELEASE(Any p0) { return invoke<Any>(0xD2513200, p0); } // 0xD2513200
	static Any SC_CHALLENGE_GET_LEADERBOARD_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xC21048BF, p0, p1, p2); } // 0xC21048BF
	static Any _0x5725C84F(Any p0) { return invoke<Any>(0x5725C84F, p0); } // 0x5725C84F
	static Any _0x2374C1E0(Any p0) { return invoke<Any>(0x2374C1E0, p0); } // 0x2374C1E0
}

namespace UNK
{
	// 0x9953D4FC
	// 0x751809BB
	// 0x25A42C69
	// 0x40121E4F
	// 0x86CB8CFB
	// 0xD6AD0016
	// 0xDE84B637
	// 0x8C00C0BE
	// 0x7CC67B30
	// 0xD4ECD97D
	// 0x826BB889
	// 0x5473B93A
	// 0x1B1EFCCB
}

namespace LASSO
{
	static Any GET_LASSO_TARGET(Any p0) { return invoke<Any>(0xAA364907, p0); } // 0xAA364907
	static Any GET_LASSO_USER(Any p0) { return invoke<Any>(0x3B775037, p0); } // 0x3B775037
	static Any GET_HOGTIED_MASTER(Any p0) { return invoke<Any>(0x1580F3BF, p0); } // 0x1580F3BF
	static Any _0xF68C926F(Any p0) { return invoke<Any>(0xF68C926F, p0); } // 0xF68C926F
	static void DETACH_LASSO(Any p0) { invoke<Void>(0x32030E7C, p0); } // 0x32030E7C
	static void FREE_FROM_HOGTIE(Any p0) { invoke<Void>(0x31AD57FE, p0); } // 0x31AD57FE
	static Any LASSO_EVENT(Any p0) { return invoke<Any>(0x98FAF5D7, p0); } // 0x98FAF5D7
	static Any _0xFF5F7D2C(Any p0) { return invoke<Any>(0xFF5F7D2C, p0); } // 0xFF5F7D2C
	static Any _0x5B792331(Any p0) { return invoke<Any>(0x5B792331, p0); } // 0x5B792331
	static BOOL IS_ACTOR_HOGTIED(Actor actor) { return invoke<BOOL>(0xA610DC79, actor); } // 0xA610DC79
	static BOOL IS_ACTOR_IN_HOGTIE(Any p0) { return invoke<BOOL>(0xB24ADC7C, p0); } // 0xB24ADC7C
	static Any GET_ACTOR_HOGTIE_STATE(Any p0) { return invoke<Any>(0xF45D9723, p0); } // 0xF45D9723
	static void HOGTIE_ACTOR(Any p0) { invoke<Void>(0x4440BCA5, p0); } // 0x4440BCA5
	static Any _0xCC04895F(Any p0) { return invoke<Any>(0xCC04895F, p0); } // 0xCC04895F
	static void SET_HOGTIE_ATTACH_VICTIM(Any p0, Any p1) { invoke<Void>(0xFA2B916E, p0, p1); } // 0xFA2B916E
	static void CLEAR_HOGTIE_ATTACH_VICTIM(Any p0, Any p1) { invoke<Void>(0xB7A802C2, p0, p1); } // 0xB7A802C2
	static Any _0x16EB367C(Any p0) { return invoke<Any>(0x16EB367C, p0); } // 0x16EB367C
	static Any _0xBCED635B(Any p0) { return invoke<Any>(0xBCED635B, p0); } // 0xBCED635B
	static Any _0x60D10483(Any p0) { return invoke<Any>(0x60D10483, p0); } // 0x60D10483
	static Any IS_HOGTIE_CUTFREE_OBSTRUCTED(Any p0) { return invoke<Any>(0x9377291F, p0); } // 0x9377291F
	static Any _0x9634D42E(Any p0) { return invoke<Any>(0x9634D42E, p0); } // 0x9634D42E
	static Any _0x8F8EDCCF(Any p0) { return invoke<Any>(0x8F8EDCCF, p0); } // 0x8F8EDCCF
}

namespace MINIGAME // MINIGAMES
{
	// 0xE8184916
	// 0xE2B894D1
	static BOOL IS_MINIGAME_RUNNING() { return invoke<BOOL>(0x117D7E71); } // 0x117D7E71
	// 0xCA746CD2
	// 0x6AAD0420
	// 0x655D350B
	// 0x0627DDEC
	// 0x2DC768BB
	// 0x8275FDD4
}

namespace NAV
{
	static Any CREATE_NAV_QUERY(Any p0, Any p1) { return invoke<Any>(0xE2F41226, p0, p1); } // 0xE2F41226
	// 0xE96D01E5
	// 0x5A511344
	// 0xAFA35FFA
	// 0x07A777D7
	// 0x50290FB3
}

namespace PATH
{
	// 0x44930268
	// 0xECC40138
	// 0xCD89FB70
	// 0xBD374C00
	// 0x42A4CCD5
	// 0x415F635C
	// 0x2B02A877
	// 0x7A00433F
	// 0xA1D9AF6B
}

namespace PERSCHAR
{
	static Any ACTIVATE_ACTOR_FOR_PERS_CHAR(Any p0) { return invoke<Any>(0x2CA16327, p0); } // 0x2CA16327
	static Any DEACTIVATE_ACTOR_FOR_PERS_CHAR(Any p0) { return invoke<Any>(0x9B2A39BC, p0); } // 0x9B2A39BC
	static void DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(Any p0) { invoke<Void>(0x6F8C238B, p0); } // 0x6F8C238B
	static Any GET_ACTOR_FROM_PERS_CHAR(Any p0) { return invoke<Any>(0xE04ED21E, p0); } // 0xE04ED21E
	static Any GET_PERS_CHAR_DEATH_TIMESTAMP(Any p0) { return invoke<Any>(0xD78D1B4F, p0); } // 0xD78D1B4F
	static Any _0x69DA275F(Any p0) { return invoke<Any>(0x69DA275F, p0); } // 0x69DA275F
	static Any _SET_PERS_CHAR_DESPAWN_SAFE_ZONE(Any p0, Any p1) { return invoke<Any>(0x67258116, p0, p1); } // 0x67258116
	static BOOL IS_PERS_CHAR_ALIVE(Any p0) { return invoke<BOOL>(0x5F3A1B81, p0); } // 0x5F3A1B81
	static Any REVIVE_PERS_CHAR(Any p0, Any p1) { return invoke<Any>(0xEDA4B02B, p0, p1); } // 0xEDA4B02B
	static void SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Any p0, Any p1) { invoke<Void>(0x2A709F33, p0, p1); } // 0x2A709F33
	static void SET_PERS_CHAR_ENABLED(Any p0, Any p1) { invoke<Void>(0xC85CFEA9, p0, p1); } // 0xC85CFEA9
	static void SET_PERS_CHAR_ALLOW_SPAWN_ELSEWHERE(Any p0, Any p1) { invoke<Void>(0x366B0AD1, p0, p1); } // 0x366B0AD1
}

// sagSimulator
// fragInst
namespace SIMULATOR
{
	// 0x17B69196
	// 0xAFB1DFA2
	// 0x38636EBF
	// 0x2C0AF634
	// 0x789AA2B2
	// 0xEBD9DFE6
	// 0x445990D8
	// 0xB5F9F4CF
	static int GET_LOCATOR_OFFSETS(Any p0, Any p1, Any p2, Any p3) { return invoke<int>(0x0BA5E579, p0, p1, p2, p3); } // 0x0BA5E579
	// 0xFD759593
	// 0x87A2C1D5
	// 0x374DE883
	// 0x89B45C7D
	// 0x4C02E1E5
}

// LINK_ACTOR_ENUM_TO_POPULATION
// LINK_ACTOR_ENUM_TO_POPULATION_TIMED
// UNLINK_ACTOR_ENUM_FROM_POPULATION
// SET_ZONE_FORCE_SPAWN_DISTANCE
namespace POPULATION
{
	// 0x1344515B
	// 0x364F41D6
	// 0x0C1B8DEA
	// 0x93B6135B
	// 0x84F75008
	// 0xC79F2BD3
	// 0x5996941F
	// 0x1B271D85
	// 0xE339719A
	// 0x9381D459
	// 0xFC30948B
	// 0x7D4FB8C8
	// 0xE0FDD026
	// 0x0B24CE10
	// 0x07FD0A76
	// 0xE4A789D8
	// 0x354DDFED
	// 0x7ABDE1F0
	// 0x7D7F9770
	// 0x4B8C0945
	// 0xE7F19909
	// 0xC43C4D76
	// 0xD72DF5C6
	// 0x230AB95E
	// 0x64799CEE
	// 0xFCA83D15
	// 0x04EFC113
	// 0xD28A3706
	// 0xD3503922
	// 0x1CE58D42
	static Any IS_POPULATION_SET_READY(Any p0, Any p1, Any p2) { return invoke<Any>(0xFA5EA974, p0, p1, p2); } // 0xFA5EA974
	// 0x76E416FD
	static Any FIND_NAMED_POPULATION_SET(Any p0) { return invoke<Any>(0x4646C335, p0); } // 0x4646C335
	// 0x8FD12F97
	static Any GET_ACTORENUM_IN_POPULATION(Any p0, Any p1) { return invoke<Any>(0xABEC5676, p0, p1); } // 0xABEC5676
	static Any GET_ACTORENUM_IN_POPULATION_WEIGHT(Any p0, Any p1) { return invoke<Any>(0xEDD44891, p0, p1); } // 0xEDD44891
	// 0x72F6EED0
	// 0x84FB15FA
	// 0x687545BF
	// 0x2B75F13E
}

namespace PROP
{
	// 0xDB70DF0C
	// 0x6517FF1B
	// 0xBD2FFD8C
	static void SET_PROP_FIXED(Any p0, Any p1) { invoke<Void>(0x7DBB277A, p0, p1); } // 0x7DBB277A
	// 0x2E5A224C
	// 0x31940E4C
	// 0x7151E7F0
	// 0xFDC6E853
	// 0xC6D12FF5
	// 0xB3E331AC
	// 0xCF1B9B11
	static void RESET_PROP(Any p0) { invoke<Void>(0x5E7A7E9B, p0); } // 0x5E7A7E9B
	// 0x32C810BF
	// 0xE84EB2D5
	// 0x6A937CBB
	// 0x0E2B0212
	// 0x5895EBBE
	// 0xCC004171
	// 0x5131AEF1
	// 0x935F80FF
	static void GRAVE_SET_DUG_UP(Any p0, Any p1) { invoke<Void>(0x674156BB, p0, p1); } // 0x674156BB
	// 0xA90E602F
	// 0xDC3FBAE6
	// 0xC5A886DC
	// 0xCED86AF7
	// 0x375A33F0
	// 0x8287F8B3
	// 0x4BCFADB1
	// 0x6D555332
}

namespace MOUNT
{
	// 0x00AF2CB0
	static Any GET_MOST_RECENT_MOUNT(Actor actor) { return invoke<Any>(0x708E450F, actor); } // 0x708E450F
	static Any GET_MOST_RECENT_RIDER(Actor actor) { return invoke<Any>(0x668E55C3, actor); } // 0x668E55C3
	static BOOL IS_ACTOR_HORSE(Actor actor) { return invoke<BOOL>(0xDB0D0478, actor); } // 0xDB0D0478
	static BOOL IS_ACTOR_MULE(Actor actor) { return invoke<BOOL>(0x1F739295, actor); } // 0x1F739295
	static Any _0xA6BBE769() { return invoke<Any>(0xA6BBE769); } // 0xA6BBE769
	static Any _0xF270EAC1(Any p0) { return invoke<Any>(0xF270EAC1, p0); } // 0xF270EAC1
	static BOOL IS_ACTOR_MOUNTED(Actor actor) { return invoke<BOOL>(0xA3AB3708, actor); } // 0xA3AB3708
	static Any GET_RIDER(Any p0) { return invoke<Any>(0x88A283E5, p0); } // 0x88A283E5
	static Any GET_MOUNT(Any p0) { return invoke<Any>(0xDD31EC4E, p0); } // 0xDD31EC4E
	static void _ANIM_ANIMATOR_COMPONENT(Any p0, Any p1) { invoke<Void>(0xDC6DEE92, p0, p1); } // 0xDC6DEE92
	static Any ACTOR_MOUNT_ACTOR(Actor actor, Actor actor2) { return invoke<Any>(0xC28242F4, actor, actor2); } // 0xC28242F4
	static Any REMOVE_HORSE_ACCESSORY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x374D047A, p0, p1, p2, p3, p4, p5); } // 0x374D047A
	static Any _UNKNOWN_HORSE_ACCESSORY(Any p0, Any p1) { return invoke<Any>(0x75D4E33F, p0, p1); } // 0x75D4E33F
	static Any _0x6C939AA7(Any p0, Any p1) { return invoke<Any>(0x6C939AA7, p0, p1); } // 0x6C939AA7
	static Any HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(Any p0, Any p1) { return invoke<Any>(0x6B6E05A8, p0, p1); } // 0x6B6E05A8
	static Any HORSE_AUTO_JUMP_ENABLED_FOR_AI_RIDERS(Any p0, Any p1) { return invoke<Any>(0xCA7CB126, p0, p1); } // 0xCA7CB126
	static Any _0x28FCBDF2(Any p0) { return invoke<Any>(0x28FCBDF2, p0); } // 0x28FCBDF2
	static Any _0x5DE07F18(Any p0) { return invoke<Any>(0x5DE07F18, p0); } // 0x5DE07F18
	static Any HORSE_SET_CURR_FRESHNESS(Any p0, Any p1) { return invoke<Any>(0xF3976D70, p0, p1); } // 0xF3976D70
	static Any HORSE_GET_CURR_FRESHNESS(Any p0) { return invoke<Any>(0xB8665D8A, p0); } // 0xB8665D8A
	static Any HORSE_LOCK_FRESHNESS(Any p0) { return invoke<Any>(0x8754817D, p0); } // 0x8754817D
	static Any HORSE_UNLOCK_FRESHNESS(Any p0) { return invoke<Any>(0x6AFA044B, p0); } // 0x6AFA044B
	static void _CHEAT_INFINITE_HORSE_STAMINA(BOOL toggle) { invoke<Void>(0xB731EB45, toggle); } // 0xB731EB45
}

namespace STRING
{
	static BOOL IS_STRING_VALID(char *text) { return invoke<BOOL>(0xBDC61056, text); } // 0xBDC61056
	static BOOL _STRING_COMPARE(char *string1, char *string2) { return invoke<BOOL>(0x8218D693, string1, string2); } // 0x8218D693
	// 0xEC28CA8E
	static Any STRING_CONTAINS_STRING(Any p0, Any p1) { return invoke<Any>(0xFCAFC819, p0, p1); } // 0xFCAFC819
	// 0x43BE70B5
	static Any STRING_TO_INT(Any p0) { return invoke<Any>(0x590A8160, p0); } // 0x590A8160
	static Any STRING_TO_HASH(Any p0) { return invoke<Any>(0x84415E28, p0); } // 0x84415E28
	static Any STRING_LENGTH(Any p0) { return invoke<Any>(0x6CE4B233, p0); } // 0x6CE4B233
	static Any _STRING_TABLE_LENGTH(Any p0) { return invoke<Any>(0x71D550C6, p0); } // 0x71D550C6
	static Any STRING_LOWER(Any p0) { return invoke<Any>(0x3E785560, p0); } // 0x3E785560
	static Any _0xBC5B2116(Any p0) { return invoke<Any>(0xBC5B2116, p0); } // 0xBC5B2116
	static Any _TOKENIZED_STRING(Any p0) { return invoke<Any>(0x346E91C2, p0); } // 0x346E91C2
	static Any STRING_NUM_TOKENS() { return invoke<Any>(0x7FB72180); } // 0x7FB72180
	static Any STRING_GET_TOKEN(Any p0) { return invoke<Any>(0xEE2791E5, p0); } // 0xEE2791E5
	static Any _0x10873616(Any p0) { return invoke<Any>(0x10873616, p0); } // 0x10873616
	static void SS_INIT(Any p0) { invoke<Void>(0x8785E0CE, p0); } // 0x8785E0CE
	static Any SS_REGISTER(Any p0, Any p1, Any p2) { return invoke<Any>(0xFD717A47, p0, p1, p2); } // 0xFD717A47
	static char* SS_GET_STRING(Any p0, Any p1) { return invoke<char*>(0x20D34AC5, p0, p1); } // 0x20D34AC5
	static Any SS_GET_STRING_ID(Any p0, Any p1) { return invoke<Any>(0xA2D27A1F, p0, p1); } // 0xA2D27A1F
	static Any _0xEC1E8210(Any p0) { return invoke<Any>(0xEC1E8210, p0); } // 0xEC1E8210
	static Any _0xBEDF7AA8(Any p0) { return invoke<Any>(0xBEDF7AA8, p0); } // 0xBEDF7AA8
	static Any SS_SET_TABLE_SIZE(Any p0, Any p1) { return invoke<Any>(0xAFFA5ABE, p0, p1); } // 0xAFFA5ABE
}

namespace VEHICLEUNK
{
	// 0x2C5983E0
}

namespace VOLUME
{
	// 0xBC33CEB5
	// 0xB85BB21B
	// 0xF5593A78
	// 0x0F474297
	// 0x6729EEFE
	// 0x14D5CFC3
	// 0x29ED6F03
	static Any GET_VOLUME_HEADING(Any p0) { return invoke<Any>(0x8D5609F2, p0); } // 0x8D5609F2
	// 0xE9C34ACC
	// 0x9FC69F27
	// 0x026F7060
}

namespace GATEWAY
{
	static Any GATEWAY_GET_ACTOR(Any p0) { return invoke<Any>(0x820699A8, p0); } // 0x820699A8
	static Any GATEWAY_SET_ACTOR(Any p0) { return invoke<Any>(0x26D24123, p0); } // 0x26D24123
	static Any GATEWAY_GET_VOLUME(Any p0) { return invoke<Any>(0x987AD426, p0); } // 0x987AD426
	static Any GATEWAY_GET_MARKER(Any p0) { return invoke<Any>(0xB62A4FB1, p0); } // 0xB62A4FB1
	static Any GATEWAY_UPDATE(Any p0) { return invoke<Any>(0x96BD89B6, p0); } // 0x96BD89B6
	static Any ACTOR_DATA_GRAVITY_LIMIT(Any p0) { return invoke<Any>(0xF03CC7A7, p0); } // 0xF03CC7A7
	static Any GATEWAY_DISABLE() { return invoke<Any>(0x620A3C17); } // 0x620A3C17
	static Any _0x3AE1062C() { return invoke<Any>(0x3AE1062C); } // 0x3AE1062C
	static Any GATEWAY_IS_DISABLED(Any p0) { return invoke<Any>(0xB9F2F8BB, p0); } // 0xB9F2F8BB
}

namespace CUTSCENE
{
	// 0xD89902F1
	// 0x99D215B4
	// 0xA6CFA220
	// 0x0FE90DCB
	// 0x7716B12B
	// 0xFD300D15
	// 0xEDF1D0B4
	// 0xE7F781B8
	// 0x98A9AC9E
	// 0x9E6CAD1D
	// 0xA61FA36B
	// 0xDE339CE1
	// 0x82F80FEA
	// 0xCBE7BE6A
	// 0x9E6A776F
	// 0x47FAE768
	// 0x93F356F4
	// 0xE808BFFB
	// 0xE0BE8235
	// 0x7653788C
	// 0x98D0F458
	// 0xAC5043C5
	// 0x7263860F
	// 0x2DB208A1
	// 0x1501F924
	// 0xC677BF51
	// 0xC2B5BDDF
	// 0xA5691922
	// 0xC6557710
	// 0xED0BA189
	// 0xEA8E6112
	// 0xB2F2A7F2
	// 0x9410D992
	// 0xD9E4A8DA
	// 0xEBAB5F62
	// 0x5DB05BBC
	// 0x3BDB2ADF
	// 0x79C748BE
	// 0xA56DCCF2
	// 0x3D014AB1
	// 0xB550D120
	// 0xD79C7D6A
	// 0x5C553565
	// 0xB0479CB8
	// 0x35DBDD67
	// 0x250232CF
	// 0x7007019D
	// 0x24F97294
	// 0xDE79FA4E
	// 0x2B45FADE
	// 0x50A2051C
}

namespace INTERSECTION
{
	static Any FIND_INTERSECTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x9CD3AD70, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9CD3AD70
	static Any FIND_GROUND_INTERSECTION(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x6AD8EEAF, p0, p1, p2, p3); } // 0x6AD8EEAF
	static Any _0x77964B0C(Any p0) { return invoke<Any>(0x77964B0C, p0); } // 0x77964B0C
	static Any FIND_WATER_INTERSECTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x4F193BE4, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x4F193BE4
	static Any _0x5219B7D0(Any p0) { return invoke<Any>(0x5219B7D0, p0); } // 0x5219B7D0
	static Any _0x451A8EF2(Any p0) { return invoke<Any>(0x451A8EF2, p0); } // 0x451A8EF2
	static Any _0x1E81DB60(Any p0) { return invoke<Any>(0x1E81DB60, p0); } // 0x1E81DB60
}

namespace VEHICLE
{
	static Vehicle GET_ACTOR_MOST_RECENT_VEHICLE(Actor actor) { return invoke<Vehicle>(0x58745E4B, actor); } // 0x58745E4B
	static BOOL IS_ACTOR_ON_TRAIN(Any p0, Any p1) { return invoke<BOOL>(0xD36E2D54, p0, p1); } // 0xD36E2D54
	static BOOL IS_ACTOR_ON_BOAT(Actor actor) { return invoke<BOOL>(0x9EE8AB59, actor); } // 0x9EE8AB59
	static BOOL IS_ACTOR_VEHICLE(Actor actor) { return invoke<BOOL>(0x9751B167, actor); } // 0x9751B167
	static Any _0x5D41D423(Any p0) { return invoke<Any>(0x5D41D423, p0); } // 0x5D41D423
	static Any _0xDC99C124(Any p0) { return invoke<Any>(0xDC99C124, p0); } // 0xDC99C124
	static Any _0x1BA90C92() { return invoke<Any>(0x1BA90C92); } // 0x1BA90C92
	static Any _0x12325AE7(Any p0) { return invoke<Any>(0x12325AE7, p0); } // 0x12325AE7
	static Any _0xDE19A1F9(Any p0, Any p1) { return invoke<Any>(0xDE19A1F9, p0, p1); } // 0xDE19A1F9
	static Vehicle GET_VEHICLE(Any p0) { return invoke<Vehicle>(0xA0936EB6, p0); } // 0xA0936EB6
	static Any _GET_VEHICLE_STATE(Any p0) { return invoke<Any>(0xCEA2449F, p0); } // 0xCEA2449F
	static Any _0xDAB0D820(Any p0) { return invoke<Any>(0xDAB0D820, p0); } // 0xDAB0D820
	static BOOL SET_ACTOR_IN_VEHICLE(Actor actor, Vehicle vehicle, int seatId) { return invoke<BOOL>(0x32974F99, actor, vehicle, seatId); } // 0x32974F99
	static Any GET_DRAFT_ACTOR(Any p0, Any p1) { return invoke<Any>(0x48D5121D, p0, p1); } // 0x48D5121D
	static BOOL IS_ACTOR_DRAFTED(Actor actor) { return invoke<BOOL>(0xEF2C329D, actor); } // 0xEF2C329D
	static Any _GET_VEHICLE_DRAFTED_TO(Any p0) { return invoke<Any>(0xD89C14BA, p0); } // 0xD89C14BA
	static Any _0xF7400A47(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xF7400A47, p0, p1, p2, p3); } // 0xF7400A47
	static Any _0xE8E94C3B(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE8E94C3B, p0, p1, p2, p3, p4); } // 0xE8E94C3B
	static Any _0x3ACE659E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x3ACE659E, p0, p1, p2, p3, p4, p5, p6); } // 0x3ACE659E
	static Any _0xF0354E46(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xF0354E46, p0, p1, p2, p3, p4, p5, p6); } // 0xF0354E46
	static BOOL ENABLE_VEHICLE_SEAT(Actor vehicle, int seat, BOOL enable) { return invoke<BOOL>(0x6AC8234D, vehicle, seat, enable); } // 0x6AC8234D
	static void STOP_VEHICLE(Any p0) { invoke<Void>(0xC2232D29, p0); } // 0xC2232D29
	static void START_VEHICLE(Any p0) { invoke<Void>(0xE4442AB2, p0); } // 0xE4442AB2
	static Any _0xB12584C8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0xB12584C8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xB12584C8
	static Any _0xD85CA776(Any p0, Any p1) { return invoke<Any>(0xD85CA776, p0, p1); } // 0xD85CA776
	static void ATTACH_DRAFT_TO_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB0A81226, p0, p1, p2, p3); } // 0xB0A81226
	static void DETACH_DRAFT_FROM_VEHICLE_BY_ACTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF763B06D, p0, p1, p2, p3); } // 0xF763B06D
	static void DETACH_DRAFT_FROM_VEHICLE_BY_INDEX(Any p0) { invoke<Void>(0x8C3B533B, p0); } // 0x8C3B533B
	static void TRAIN_CREATE_NEW_TRAIN(Any p0) { invoke<Void>(0x8533AC9D, p0); } // 0x8533AC9D
	static void TRAIN_DESTROY_TRAIN(Any p0) { invoke<Void>(0x74CECEB3, p0); } // 0x74CECEB3
	static void TRAIN_RELEASE_TRAIN(Any p0) { invoke<Void>(0x87082991, p0); } // 0x87082991
	static void _TRAIN_RELEASE_TRAIN_BY_INDEX(Any p0) { invoke<Void>(0x7224CD9B, p0); } // 0x7224CD9B
	static Any _TRAIN_ADD_NEW_TRAIN_CAR_FROM_ENUM(Any p0) { return invoke<Any>(0xA7A672FA, p0); } // 0xA7A672FA
	static Any TRAIN_GET_VELOCITY(Any p0) { return invoke<Any>(0xF2373407, p0); } // 0xF2373407
	static void TRAIN_SET_TARGET_POS(Any p0) { invoke<Void>(0x9091E0A3, p0); } // 0x9091E0A3
	static void TRAIN_SET_SPEED(Any p0) { invoke<Void>(0x9D93961C, p0); } // 0x9D93961C
	static void TRAIN_SET_TARGET_SPEED(Any p0) { invoke<Void>(0xEA2A8B79, p0); } // 0xEA2A8B79
	static void TRAIN_SET_MAX_ACCEL(Any p0) { invoke<Void>(0xB5383B93, p0); } // 0xB5383B93
	static void TRAIN_SET_MAX_DECEL(Any p0) { invoke<Void>(0xB7A4D403, p0); } // 0xB7A4D403
	static void TRAIN_SET_ENGINE_ENABLED(Any p0, Any p1) { invoke<Void>(0x6C62C522, p0, p1); } // 0x6C62C522
	static Any TRAIN_GET_NUM_CARS(Any p0) { return invoke<Any>(0xFB2F9989, p0); } // 0xFB2F9989
	static void TRAIN_SET_POSITION_DIRECTION(Any p0) { invoke<Void>(0x9C488CB3, p0); } // 0x9C488CB3
	static Any _0x268D546D(Any p0) { return invoke<Any>(0x268D546D, p0); } // 0x268D546D
	static Any _TRAIN_SET_FX_STATE(Any p0) { return invoke<Any>(0xBA1620AF, p0); } // 0xBA1620AF
	static Any _TRAIN_PLAY_WHISTLE(Any p0) { return invoke<Any>(0x1440C806, p0); } // 0x1440C806
	static Any _0x4DF9283F(Any p0) { return invoke<Any>(0x4DF9283F, p0); } // 0x4DF9283F
	static Any TRAIN_DESTROY_CAR(Any p0) { return invoke<Any>(0x2040FB19, p0); } // 0x2040FB19
	static Any TRAIN_GET_LOD_LEVEL(Any p0) { return invoke<Any>(0xD8E0EF01, p0); } // 0xD8E0EF01
	static Any TRAIN_FORCE_HIGH_LOD(Any p0) { return invoke<Any>(0x43E6DCAC, p0); } // 0x43E6DCAC
	static Any TRAIN_GET_CAR(Any p0, Any p1) { return invoke<Any>(0x41EF2EED, p0, p1); } // 0x41EF2EED
	static Any _0x7CFD539A(Any p0) { return invoke<Any>(0x7CFD539A, p0); } // 0x7CFD539A
	static Any _TRAIN_SET_AUTO_PILOT_ENABLED(Any p0, Any p1, Any p2) { return invoke<Any>(0xADE865AE, p0, p1, p2); } // 0xADE865AE
	static Any _TRAIN_SET_AUDIO_ENABLED(Any p0) { return invoke<Any>(0x6A9C8E5B, p0); } // 0x6A9C8E5B
	static Any _0x1F9F8C04(Any p0) { return invoke<Any>(0x1F9F8C04, p0); } // 0x1F9F8C04
	static Any _0xC5A04EC7(Any p0, Any p1, Any p2) { return invoke<Any>(0xC5A04EC7, p0, p1, p2); } // 0xC5A04EC7
	static Any TRAIN_GET_NEAREST_POI_DISTANCE(Any p0, Any p1, Any p2) { return invoke<Any>(0x6FC1847D, p0, p1, p2); } // 0x6FC1847D
	static Any TRAIN_GET_POSITION(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x6D055AB, p0, p1, p2, p3); } // 0x6D055AB
	static void SET_BOAT_EXTRA_STEER(Any p0, Any p1) { invoke<Void>(0x6BB8BCFB, p0, p1); } // 0x6BB8BCFB
	static void SET_VEHICLE_ENGINE_RUNNING(Actor vehicle, BOOL running) { invoke<Void>(0x462B5FDF, vehicle, running); } // 0x462B5FDF
	static void _SET_VEHICLE_ENGINE_RUNNING_2(Any p0, Any p1) { invoke<Void>(0x8257A916, p0, p1); } // 0x8257A916
	static void SET_VEHICLE_ALLOWED_TO_DRIVE(Actor vehicle, BOOL allowed) { invoke<Void>(0x55A56DF8, vehicle, allowed); } // 0x55A56DF8
	static void _SET_VEHICLE_ALLOWED_TO_DRIVE_2(Any p0) { invoke<Void>(0x1C391A44, p0); } // 0x1C391A44
	static void SET_VEHICLE_PASSENGERS_ALLOWED(Any p0, Any p1) { invoke<Void>(0xBD0C1BEA, p0, p1); } // 0xBD0C1BEA
	static void SET_VEHICLE_EJECTION_ENABLED(Any p0, Any p1) { invoke<Void>(0xABD83C0, p0, p1); } // 0xABD83C0
	static void VEHICLE_SET_HANDBRAKE(Actor vehicle, BOOL handbreak) { invoke<Void>(0x384BB6AB, vehicle, handbreak); } // 0x384BB6AB
	static Any _0xF801CBD7(Any p0, Any p1, Any p2) { return invoke<Any>(0xF801CBD7, p0, p1, p2); } // 0xF801CBD7
	static Any _0x71A3F193(Any p0) { return invoke<Any>(0x71A3F193, p0); } // 0x71A3F193
	static Any _0xFB252BA9(Any p0, Any p1, Any p2) { return invoke<Any>(0xFB252BA9, p0, p1, p2); } // 0xFB252BA9
}

// gohObjectManager::PostInitAndReturn call on object %s (type %s) retrieved from the GC
// "gohObjectManager::PostInitAndReturn call on object %s (type %s) retrieved from the GC\n"
namespace LEASH  // GOHUNK
{
	// 0x9BCC06E2
	// 0x8EA68EB5
	static Any LEASH_RESTART(Any p0) { return invoke<Any>(0xE58339B3, p0); } // 0xE58339B3
	// 0x7F190CA3
	// 0x14BEC6F5
	// 0x7A1376B0
	// 0x0FCDB481
	// 0x35D8B21E
	// 0xE782EB20
	// 0x82A73B3D
	// 0x4B67B8BB
	// 0xC1265E7F
	// 0x951B8DF7
	// 0x46BE1D43
	static Any LEASH_BREAK(Any p0, Any p1) { return invoke<Any>(0x8640261B, p0, p1); } // 0x8640261B
	// 0xC039BBF1
	// 0x51CF9A54
	// 0x5A72DD49
	// 0x1A8494E6
}

namespace PROBE
{
	// 0x7080E24A
	// 0x1D7845B7
}

// Didn't find a component.
namespace PHYSINST2
{
	// 0x11069324
	// 0x0B24362F
	// 0xE25F407D
	// 0xEB33480A
	// 0x88F7432C
	// 0x04507DBC
}

namespace HOLSTER
{
	static Any ACTOR_HOLSTER_WEAPON(Any p0, Any p1) { return invoke<Any>(0xFE9903CC, p0, p1); } // FE9903CC
	// 0x7957CA4F
	// 0x231E7034
	// 0x8FFDCE5C
	// 0xD86BFBD8
	static void ACTOR_DRAW_WEAPON(Any p0, Any p1, Any p2) { invoke<Void>(0x953FB7EE, p0, p1, p2); } // 0x953FB7EE
	// 0x6426CCD6
	// 0x2E84E682
	// 0x261A4C0E
	// 0x79EFDF7E
	// 0x5D863C30
	// 0xF71A883A
	// 0xCA669478
	// 0x7DA34015
}

namespace GOHEVENT
{
	// 0x945F518F
}

namespace UNK
{
	// 0x30402375
	// 0x7922F870
	// 0x663723A0
	// 0x93CFB180
	// 0xA1FCBA24
	// 0x7ED8B78C
	// 0xD4871BDB
	// 0xA88359B9
	// 0xAD42EABC
	// 0xC65F6751
	// 0x83CBD612
	// 0x4AD2BC30
	// 0xC1F9A360
	// 0xFCD2DE48
	// 0xB8F1D736
	// 0xEA86A817
	// 0x43F59172
	// 0x52D984AF
	// 0x1D4786CF
	// 0x375BBD85
	// 0x4819FB7C
	// 0xC4F468AA
	// 0xBD3A0E6D
	// 0xD6BBC8AA
}

namespace JOURNAL
{
	static void SET_EXCLUSIVE_JOURNAL_ID(Any p0) { invoke<Void>(0x6398AF9A, p0); } // 0x6398AF9A
	static void RESET_EXCLUSIVE_JOURNAL_ID() { invoke<Void>(0x45E34464); } // 0x45E34464
	static void TOGGLE_COOP_JOURNAL_UI(Any p0) { invoke<Void>(0x44A1ED5C, p0); } // 0x44A1ED5C
	static void TOGGLE_JOURNAL_UI(Any p0, Any p1) { invoke<Void>(0xE6726EF4, p0, p1); } // 0xE6726EF4
	static Any GET_JOURNAL_ENTRY(Any p0) { return invoke<Any>(0xC450C870, p0); } // 0xC450C870
	static Any CREATE_JOURNAL_ENTRY(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x761FD935, p0, p1, p2, p3); } // 0x761FD935
	static Any CREATE_JOURNAL_ENTRY_BY_HASH(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x619F1C3D, p0, p1, p2, p3); } // 0x619F1C3D
	static Any IS_JOURNAL_ENTRY_IN_LIST(Any p0, Any p1) { return invoke<Any>(0xC17FE40A, p0, p1); } // 0xC17FE40A
	static Any GET_NUM_JOURNAL_ENTRIES_IN_LIST(Any p0) { return invoke<Any>(0x3E84D766, p0); } // 0x3E84D766
	static Any GET_JOURNAL_ENTRY_IN_LIST(Any p0, Any p1) { return invoke<Any>(0x49B02E18, p0, p1); } // 0x49B02E18
	static Any _0x87DC7F5B(Any p0, Any p1) { return invoke<Any>(0x87DC7F5B, p0, p1); } // 0x87DC7F5B
	static void APPEND_JOURNAL_ENTRY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9C40CFAB, p0, p1, p2, p3, p4); } // 0x9C40CFAB
	static void REMOVE_JOURNAL_ENTRY(Any p0, Any p1) { invoke<Void>(0x1BF35BD, p0, p1); } // 0x1BF35BD
	static void CLEAR_JOURNAL_ENTRY(Any p0) { invoke<Void>(0xB8B7B818, p0); } // 0xB8B7B818
	static void PREPEND_JOURNAL_ENTRY_DETAIL(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x81470AFE, p0, p1, p2, p3, p4); } // 0x81470AFE
	// 0xF5DFD684
	// 0xD0567D03
	// 0xCF3A69FC
	// 0x1630EFC5
	// 0xEBC9C2FD
	// 0x539D0404
	// 0x5209C0C0
	// 0xF0C4E96F
	// 0xF6FEC269
	// 0x078F9B43
	// 0x8020011E
	// 0x8A9B8F0C
	// 0xC3DC9490
	// 0xCD4633BD
	// 0x5CB9D376
	// 0x196A1EDE
	// 0x5DC073DE
	// 0xF2C1D690
	// 0xF7687D41
	// 0x93CA45DE
	// 0x2AA8E2FA
	// 0xDC28C12F
	// 0x2B969E73
}

namespace STAT  //JOURNAL2
{
	static void CREATE_STAT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x32A3A7AE, p0, p1, p2, p3); } // 0x32A3A7AE
	static void HIDE_STAT(Any p0, Any p1) { invoke<Void>(0x1CF1FCC4, p0, p1); } // 0x1CF1FCC4
	static void UPDATE_STAT(Any p0, Any p1, Any p2) { invoke<Void>(0xC9212F76, p0, p1, p2); } // 0xC9212F76
	// 0x957F1618
	// 0x40C2576F
	// 0x5545C218
	// 0xE623B382
	// 0x2104B1C0
	// 0xF1A723D0
	// 0xBBF4F7E4
}

namespace SHOP
{
	// 0xCEBD595A
	static void SHOP_REFRESH(Any p0) { invoke<Void>(0xE7F6AA5D, p0); } // 0xE7F6AA5D
	// 0xB75FAD6A
	// 0x2FCD8CCA
	// 0x777CF9FA
	// 0xFAF37414
	// 0xA40EFFFF
	// 0x94D8F49E
	// 0x42CBA241
	// 0x7A34C33D
	// 0xB954DE78
	// 0x1BF8FD6D
	// 0x5A12BB48
	// 0x3601E3E2
	// 0xB84DE662
	// 0x2692B771
	// 0xEB046CD9
	// 0x427F4D58
	// 0x0A87A573
	// 0x25EF49AD
	// 0x23EB81F0
	// 0x58018D83
	// 0x1C462085
}

namespace UISOCIALCLUB
{
	// 0x1EB9AF29
	// 0x2A39FD8A
	// 0xD5ED5FCB
	// 0x10F5386D
	// 0x9D9CDCE3
	// 0x3731AC9F
	// 0x9CF5C747
	// 0x4A598723
	// 0x9272926C
	// 0xAFC9071D
	// 0x761A6750
	// 0xC201524D
	// 0x04A3022E
}

namespace STRING2
{
	// 0xB3E44649
	// 0x82B4DCCE
	// 0x12D77EEC
	// 0x6857E514
}

namespace UI
{
	// 0x97A50E69
	// 0xB1A2028A
	static void UI_POP(char* uiLayer) { invoke<Void>(0xBEE5CF6C, uiLayer); } // 0xBEE5CF6C
	// 0x97C5EFC8
	// 0xA0159C77
	static void UI_EXIT(char* uiLayer) { invoke<Void>(0x2DF89C2E, uiLayer); } // 0x2DF89C2E
	// 0xD1D1D467
	// 0xFAC3DF71
	// 0x7508E7F3
	static void UI_ENABLE(char* uiLayer) { invoke<Void>(0xE576DCAD, uiLayer); } // 0xE576DCAD
	static void UI_DISABLE(char* uiLayer) { invoke<Void>(0xC4532F84, uiLayer); } // 0xC4532F84
	static BOOL UI_ISACTIVE(char* UiLayer) { return invoke<BOOL>(0xB1FDB70D, UiLayer); } // 0xB1FDB70D
	static void UI_ACTIVATE(char* UiLayer) { invoke<Void>(0xD11BD55A, UiLayer); } // 0xD11BD55A
	// 0xCA35BB5E
	static void UI_EXCLUDE(char* uiLayer) { invoke<Void>(0x4A005F2A, uiLayer); } // 0x4A005F2A
	static void UI_INCLUDE(char* uiLayer) { invoke<Void>(0x209255AD, uiLayer); } // 0x209255AD
	// 0x6F2509E8
	// 0x699CC85E
	// 0x0ACEA059
	// 0x7ADB2BE7
	// 0x182EC44A
	// 0xF10A56C5
	static int UI_GET_SELECTED_INDEX(char* menuID, bool p1) { return invoke<int>(0x8B63A008, menuID, p1); } // 0x8B63A008
	// 0x1ECD8B18
	// 0x13F156A4
	// 0x00B89B46
	// 0xD3C7AEFA
	// 0xCBDE38C6
	// 0x4068D2E4
	// 0x7EB1ED99
	// 0x1F9EE9E1
	// 0xE457546C
	static void UI_SET_STRING_FORMAT(char* gxtName, char* formatString, char* string1, char* string2, char* string3) { invoke<Void>(0xEDA84121, gxtName, formatString, string1, string2, string3); } // 0xEDA84121
	static void UI_SET_MONEY(Any p0, Any p1, Any p2) { invoke<Void>(0xF71BD93A, p0, p1, p2); } // 0xF71BD93A
	static char* UI_GET_STRING(char* gxtEntry) { return invoke<char*>(0xCCCFF80B, gxtEntry); } // 0xCCCFF80B
	// 0xBA89F5EA
	// 0x591339B9
	// 0xB3FC8CB7
	// 0xDF50D8DE
	// 0xF53EB511
	// 0x3DB16A3D
	// 0x9A56C3F3
	// 0x573BEF3B
	static void UI_SET_TEXT(char* entry, char* text) { invoke<Void>(0xC464D5DD, entry, text); } // 0xC464D5DD
	// 0x06FD03D2
	// 0xE5D53722
	// 0xDF4627D1
	// 0xD792B93B
	// 0x191BA4DF
	static void UI_DISABLE_INPUT(int p0, int p1) { invoke<Void>(0x9E2C2701, p0, p1); } // 0x9E2C2701
	// 0x9D20BDC4
	// 0x1E732914
}

namespace WEAPON
{
	static void _GIVE_NAMED_ITEM(Actor actor, Any p1) { invoke<Void>(0xBAA5D41B, actor, p1); } // 0xBAA5D41B
	static void _GIVE_ITEM_BY_CRC(Actor actor, Any p1) { invoke<Void>(0xAB2D8A68, actor, p1); } // 0xAB2D8A68
	static Any _0x7609A328() { return invoke<Any>(0x7609A328); } // 0x7609A328
	static Any _0xD91ED898(Any p0) { return invoke<Any>(0xD91ED898, p0); } // 0xD91ED898
	static Any _0x4BB2BC20(Any p0) { return invoke<Any>(0x4BB2BC20, p0); } // 0x4BB2BC20
	static Any _0xF52BA99F() { return invoke<Any>(0xF52BA99F); } // 0xF52BA99F
	static Any _0xE712FCB(Any p0) { return invoke<Any>(0xE712FCB, p0); } // 0xE712FCB
	static Any _0x5ACC0171(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x5ACC0171, p0, p1, p2, p3, p4); } // 0x5ACC0171
	static void _GIVE_ITEM_BY_CRC_2(Actor actor, Any p1) { invoke<Void>(0xF750D150, actor, p1); } // 0xF750D150
	static void _GIVE_NAMED_ITEM_2(Actor actor, Any p1) { invoke<Void>(0xF05D1566, actor, p1); } // 0xF05D1566
	static void _REMOVE_NAMED_ITEM(Actor actor, Any p1) { invoke<Void>(0x5889EBB7, actor, p1); } // 0x5889EBB7
	static void _READY_NAMED_ITEM(Actor actor, Any p1) { invoke<Void>(0x2B00A643, actor, p1); } // 0x2B00A643
	static Any HAS_ITEM(Any p0, Any p1) { return invoke<Any>(0xB426267D, p0, p1); } // 0xB426267D
	static Any _0xC38F697(Any p0) { return invoke<Any>(0xC38F697, p0); } // 0xC38F697
	static void DELETE_ITEM(Any p0, Any p1, Any p2) { invoke<Void>(0xEFECF4F9, p0, p1, p2); } // 0xEFECF4F9
	static void DELETE_ACCESSORY(Any p0, Any p1) { invoke<Void>(0xD6A9C9D4, p0, p1); } // 0xD6A9C9D4
	static Any _0x7BF75BCE(Any p0) { return invoke<Any>(0x7BF75BCE, p0); } // 0x7BF75BCE
	static Any _0x7F4D5AE0(Any p0) { return invoke<Any>(0x7F4D5AE0, p0); } // 0x7F4D5AE0
	static Any _0x608DCAEF(Any p0) { return invoke<Any>(0x608DCAEF, p0); } // 0x608DCAEF
	static Any _0x50C0E83F() { return invoke<Any>(0x50C0E83F); } // 0x50C0E83F
	static Any GET_ITEM_IN_HAND_EQUIPSLOT(Any p0, Any p1) { return invoke<Any>(0x3A899B0E, p0, p1); } // 0x3A899B0E
	static Any _GET_AN_EQUIP_SLOT(Any p0, Any p1) { return invoke<Any>(0x0E0EFB13, p0, p1); } // 0x0E0EFB13
	static void ACTOR_DISABLE_WEAPON_RENDER(Actor actor, Any p1) { invoke<Void>(0x5E38B33C, actor, p1); } // 0x5E38B33C
	static void ACTOR_FORCE_WEAPON_RENDER(Actor actor, Any p1) { invoke<Void>(0x1511D111, actor, p1); } // 0x1511D111
	static BOOL IS_WEAPON_DRAWN(Actor actor) { return invoke<BOOL>(0xAB5FB5AC, actor); } // 0xAB5FB5AC
	static void GIVE_WEAPON_TO_ACTOR(Actor actor, int weaponId, int ammoCount, BOOL p3, Any p4) { invoke<Void>(0x6AA0EAF2, actor, weaponId, ammoCount, p3, p4); } // 0x6AA0EAF2
	static void _FIND_WEAPON_IN_CATEGORY(Any p0, Any p1, Any p2) { invoke<Void>(0xBFD6D55F, p0, p1, p2); } // 0xBFD6D55F
	static Any _0x8F4B473D() { return invoke<Any>(0x8F4B473D); } // 0x8F4B473D
	static Any _0x09950C1B(Any p0, Any p1) { return invoke<Any>(0x09950C1B, p0, p1); } // 0x09950C1B
	static Any _0x13A63AA7() { return invoke<Any>(0x13A63AA7); } // 0x13A63AA7
	static Any _0x78145528(Any p0, Any p1) { return invoke<Any>(0x78145528, p0, p1); } // 0x78145528
	static Any _0x5CAFCBD4() { return invoke<Any>(0x5CAFCBD4); } // 0x5CAFCBD4
	static Any _0x3417766E() { return invoke<Any>(0x3417766E); } // 0x3417766E
	static Any _0xCC02BBD3() { return invoke<Any>(0xCC02BBD3); } // 0xCC02BBD3
	static Any _0xA8040D70() { return invoke<Any>(0xA8040D70); } // 0xA8040D70
	static Any _0x659532FB(Any p0, Any p1) { return invoke<Any>(0x659532FB, p0, p1); } // 0x659532FB
	static Any _0xCB017277(Any p0) { return invoke<Any>(0xCB017277, p0); } // 0xCB017277
	static Any GET_WEAPON_EQUIPPED(Any p0, Any p1) { return invoke<Any>(0x42C0FAAA, p0, p1); } // 0x42C0FAAA
	static Any _0x6262DC5E(Any p0) { return invoke<Any>(0x6262DC5E, p0); } // 0x6262DC5E
	static Any _0xA4B2016D(Any p0) { return invoke<Any>(0xA4B2016D, p0); } // 0xA4B2016D
	static Any _0xCDD6F94(Any p0) { return invoke<Any>(0xCDD6F94, p0); } // 0xCDD6F94
	static Any _0x612066E5(Any p0) { return invoke<Any>(0x612066E5, p0); } // 0x612066E5
	static Any _0x2776B0F5(Any p0) { return invoke<Any>(0x2776B0F5, p0); } // 0x2776B0F5
	static Any _0xFD46B231(Any p0) { return invoke<Any>(0xFD46B231, p0); } // 0xFD46B231
	static void SET_EQUIP_SLOT_ENABLED(Any p0, Any p1, Any p2) { invoke<Void>(0xE6604B39, p0, p1, p2); } // 0xE6604B39
	static Any GET_EQUIP_SLOT_ENABLED(Any p0) { return invoke<Any>(0xA3E18517, p0); } // 0xA3E18517
	static void EQUIP_ACCESSORY(Any p0, Any p1, Any p2) { invoke<Void>(0x5A80659D, p0, p1, p2); } // 0x5A80659D
	static Any _0xF7696B8B(Any p0) { return invoke<Any>(0xF7696B8B, p0); } // 0xF7696B8B
	static BOOL HAS_ACCESSORY_ENUM(Actor actor, Any p1) { return invoke<BOOL>(0x9B958A25, actor, p1); } // 0x9B958A25
	static Any _0xE094DB31() { return invoke<Any>(0xE094DB31); } // 0xE094DB31
	static Any _0x7FDDF876(Any p0, Any p1, Any p2) { return invoke<Any>(0x7FDDF876, p0, p1, p2); } // 0x7FDDF876
	static void ACTOR_SET_WEAPON_AMMO(Actor actor, int weaponId, Any p2) { invoke<Void>(0x8266C617, actor, weaponId, p2); } // 0x8266C617
	static Any _0xB008EF49(Any p0) { return invoke<Any>(0xB008EF49, p0); } // 0xB008EF49
	static BOOL ACTOR_HAS_WEAPON(Any p0, Any p1) { return invoke<BOOL>(0x0D47CFBD, p0, p1); } // 0x0D47CFBD
	static void ACTOR_ADD_WEAPON_AMMO(Actor actor, int weaponId, int ammo) { invoke<Void>(0xCC69DCC1, actor, weaponId, ammo); } // 0xCC69DCC1
	static Any ACTOR_GET_WEAPON_AMMO(Any p0, Any p1) { return invoke<Any>(0x43DEDFAE, p0, p1); } // 0x43DEDFAE
	static Any ACTOR_DISCARD_WEAPON_AMMO(Any p0) { return invoke<Any>(0xEEC81873, p0); } // 0xEEC81873
	static Any _HAS_MESH_BIT(Any p0) { return invoke<Any>(0xA091179F, p0); } // 0xA091179F
	static Any _0x17883570(Any p0) { return invoke<Any>(0x17883570, p0); } // 0x17883570
	static Any GET_WEAPON_ENUM_FOR_AMMO_ENUM(Any p0, Any p1) { return invoke<Any>(0xA8F64D32, p0, p1); } // 0xA8F64D32
	static void SET_WEAPON_GOLD(Actor actor, int weaponId, Any p2) { invoke<Void>(0xAE44869D, actor, weaponId, p2); } // 0xAE44869D
	static int GET_WEAPON_GOLD(Actor actor, int weapon) { return invoke<int>(0x6DBD1DDB, actor, weapon); } // 0x6DBD1DDB
	static Any _0x80B30545(Any p0) { return invoke<Any>(0x80B30545, p0); } // 0x80B30545
	static void FIRE_PROJECTILE(Actor actor, int weapGroup, float p2, Vector3* origin, Vector3* target) { invoke<Void>(0x195A4286, actor, weapGroup, p2, origin, target); }
	static Any _ADD_AMMO_OF_TYPE(Any p0) { return invoke<Any>(0x98B3ABFA, p0); } // 0x98B3ABFA
	static void _SET_ACTOR_AMMO_OF_TYPE(Any p0) { invoke<Void>(0x4372593E, p0); } // 0x4372593E
	static void _SET_ACTOR_MAX_AMMO_AMOUNT(Any p0, Any p1) { invoke<Void>(0x6ADAAD87, p0, p1); } // 0x6ADAAD87 
	static void _SET_ACTOR_INFINITE_AMMO_FLAG(Actor actor, int weaponGroup, BOOL toggle) { invoke<Void>(0x4FE2B586, actor, weaponGroup, toggle); } // 0x4FE2B586 
	static Any _GET_AMMO_AMOUNT(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xE224AC6F, p0, p1, p2, p3); } // 0xE224AC6F
	static Any _GET_MAX_AMMO_AMOUNT(Any p0, Any p1) { return invoke<Any>(0x7AB368CF, p0, p1); } // 0x7AB368CF
	static BOOL _GET_ACTOR_INFINITE_AMMO_FLAG(Actor actor, Any p1) { return invoke<BOOL>(0xC666B987, actor, p1); } // 0xC666B987
	static Any _0xBE39208A(Any p0) { return invoke<Any>(0xBE39208A, p0); } // 0xBE39208A
	static Any _0xBC46E3E1(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xBC46E3E1, p0, p1, p2, p3); } // 0xBC46E3E1
	static Any CREATE_WEAPON_PICKUP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xBF0235B0, p0, p1, p2, p3, p4, p5); } // 0xBF0235B0
	static void REMOVE_ALL_PICKUPS() { invoke<Void>(0x04BF00F0); } // 0x04BF00F0
	static Any _0x118D085E() { return invoke<Any>(0x118D085E); } // 0x118D085E
	static Any _0x78A3CD3D() { return invoke<Any>(0x78A3CD3D); } // 0x78A3CD3D
	static Any _0x2C23CBE7() { return invoke<Any>(0x2C23CBE7); } // 0x2C23CBE7
	static void _0xD695F857(Any p0) { invoke<Void>(0xD695F857, p0); } // 0xD695F857
	static Any _0x96AC812B(Any p0) { return invoke<Any>(0x96AC812B, p0); } // 0x96AC812B
	static Any _0x5AEB2E4F(Any p0) { return invoke<Any>(0x5AEB2E4F, p0); } // 0x5AEB2E4F
	static Any _0x3E8E7D7B(Any p0) { return invoke<Any>(0x3E8E7D7B, p0); } // 0x3E8E7D7B
	static Any _0x7BF01CCB() { return invoke<Any>(0x7BF01CCB); } // 0x7BF01CCB
	static Any _0x8EA46104(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x8EA46104, p0, p1, p2, p3, p4); } // 0x8EA46104
	static Any _0xD2A140BC() { return invoke<Any>(0xD2A140BC); } // 0xD2A140BC
}

namespace STUB
{
	// 0x8E387228
}

namespace GRINGO
{
	static BOOL IS_GRINGO_ACTIVE() { return invoke<BOOL>(0x86F2C24D); } // 0x86F2C24D
	// 0xB9BFCB41
	// 0xB8A48688
	// 0xC70FDA39
	// 0x738FA66B
	// 0x4B29AED2
	// 0x59647303
	// 0x9175FCFA
	// 0x25636669
	// 0xA9F5CDCB
	// 0xCB58D301
	// 0xCB91CC6E
	// 0xA5EDCA4A
	// 0xB1FCFFDC
	// 0x99356925
	// 0xBD269877
	// 0x08D76BB0
	// 0xE9612679
	// 0xFA37C0FA
	// 0x38771B89
	// 0xC426D16F
	// 0xF8F80679
	// 0x78B655B1
	// 0x777842E3
	// 0x7D600F2F
	// 0xBEF32D17
	// 0x2C57A529
	// 0x8EB5CE58
	// 0x7A759A53
	// 0x0DC149BD
	// 0x0B853FD5
	// 0xF8D9688A
	// 0x80317230
	// 0xE2DCFF34
	// 0xF4015EFC
	// 0x0A0E660E
	// 0x5F7176D6
	// 0xAE7B3880
	// 0xBBB2780E
	// 0x761BA4BD
	// 0x6E86FCB5
	// 0x89DE8A75
	// 0x53B9569C
	// 0xEDF3BF37
	// 0xBD503DC2
	// 0xA766EA5C
	// 0x14E53D6F
	// 0x284DD17C
	// 0xE4C686BA
	// 0x3E8F94BE
	// 0xDD807723
	// 0xD6EE9534
	// 0x3FA5FC03
	// 0xAD313D88
	// 0xA20141C0
	// 0x9AD6D5B1
	// 0xD282013F
	// 0xBC32DA9A
	// 0x37D0F3E9
	// 0xCA589BAB
	// 0xF550F8E7
	// 0x54745DB0
	// 0x2F096285
	// 0x7F3020EB
	// 0x8CAF5C5C
	// 0x926FD361
	// 0x3DEA631B
	// 0x5CFBF505
	// 0x3A31175A
	// 0x405E3903
	// 0xCE210220
	// 0xA9E00433
	// 0xECD4F604
	// 0x5AF74E19
	// 0x51581898
	// 0xD62D413C
	// 0x92FE8D74
	// 0x8C2914C4
	// 0x5B46757F
	// 0xD14515A3
	// 0xF95DDBF2
	// 0x6ADC74CE
	// 0xB78BC233
	// 0x5388F37D
	// 0x94F442D0
	// 0x15A0E28B
	// 0x90FBBB8B
	// 0x0208A8E0
	// 0x217B4264
	// 0x5C11B011
	// 0x5F516FC3
	// 0xB62FE25C
	// 0xE18BCD70
	// 0x35279C3F
	// 0xB62D549E
	// 0xE9C74577
	// 0xB8C419C3
	// 0x0B9AE52F
	// 0x0436C0BF
	// 0x4DB7C61C
	// 0xB96874B4
	// 0x4A61BD63
	// 0xADBF3ADF
	// 0x721FC9A4
	// 0x87BA5FE9
	// 0x6263F909
	// 0xB555A648
	// 0xAFD53217
	// 0x29C63CE6
	// 0x698105FC
	// 0x0AF4FCB9
	// 0xEEE9C799
	// 0x98543454
	// 0x6BA667B5
	// 0x24BAABCA
	// 0x5EC1CABF
	// 0x22D573D2
	// 0xFF1FC1EF
	// 0xFACF08C7
	// 0x8A86AF8B
	// 0x869D5D92
	// 0xFA22A365
	// 0x2EFD2B55
	// 0x5851C408
	// 0x1F74EE6C
	// 0x7E4681E8
	// 0x6BA58AC7
	// 0xCF6822D7
	// 0x377B2C54
	// 0xAFF7D382
	// 0xBC3C401F
	// 0x5C6831F9
	// 0x5C2174C7
	// 0x6B1F2FEB
	// 0x15D6F3C7
	// 0x1528F08B
	// 0x69CF9B75
	// 0x30AF0FA8
	// 0x2A7B1EFE
	// 0x554330CA
	static Any GRINGO_UPDATE_INT(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0744FEE8, p0, p1, p2, p3); } // 0x0744FEE8
	// 0x4685D538
	// 0x4DE50AD9
	// 0x39B7D772
	// 0x19411B1F
	// 0xBED45A9A
	// 0xD2680017
	// 0xF0991C9F
	// 0xD7BB1792
	// 0xF573B7DE
	// 0xBF322F5C
}

namespace WEAPON2
{
	// 0xBAC27559
	// 0xA534CD14
	// 0xA72B6620
	// 0x92FE3677
	// 0xEA06907B
	// 0xE0DF7B3B
	// 0xA2597101
	// 0x2AD5D078
	// 0xA6C4E59F
	// 0xF82711CC
	// 0x82609DC7
	// 0x628E3173
	// 0xCE5CCF2E
	// 0x6A9CFA2A
	static char* GET_WEAPON_DISPLAY_NAME(int weaponId) { return invoke<char*>(0x35CD589C, weaponId); } // 0x35CD589C
	// 0x87C5471F
	// 0xBE06C265
	// 0xE8739A48
	// 0x01C7193C
	// 0x0A23A69C
	// 0x0E4B7A33
	// 0xCCE4A339
	// 0xDB679ED9
	static Any GET_AMMO_ENUM(Any p0) { return invoke<Any>(0xD3E16075, p0); } // 0xD3E16075
	// 0x08A655C5
	// 0xCCB57C38
	// 0x2AF84928
	// 0xA677B204
	// 0xD291A820
	// 0xF4641CF4
}

namespace RETICLE
{
	// 0x86BAAC6C
	// 0x8AE7281E
	// 0x5F566576
	// 0xD95C01D2
	// 0x91220723
	// 0x856C3A8A
	// 0x6400E005
	// 0xF1607937
	// 0x0753A098
	// 0xF4429710
	// 0x1468DD56
	// 0x327E4426
	// 0xAC8D3A0C
	// 0x57055A7D
	// 0x5CC16A49
	// 0x7E124E62
	// 0x1EEE7494
	// 0xD19EFFC1
}

namespace MOVIE
{
	// 0x1BED8493
}

namespace ALLOC // FONT
{
	 // 0x724B4E9B
}

namespace DLC
{
	// 0x0728B211
	// 0xEC86DB0E
	// 0x57D9950B
	// 0xF4D0807E
	// 0x853F71F6
}

namespace DECAL // FX
{
	// 0xA5A6A3E3
	// 0x3736FF43
	// 0x065B4197
	static void CLEAR_DECALS() { invoke<Void>(0x43939FD8); } // 0x43939FD8
	// 0x21588246
	static void CREATE_DIRECTION_DECAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xFB4CFBA0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFB4CFBA0
	// 0x7BCE4845
	// 0x9E54C297
	// 0x013A0D25
	// 0x1182C34F
	// 0xD0FB6AF0
	// 0xC00F8181
	// 0x4897DD37
	// 0x6E946AF8
	// 0xB6CA7EBF
	// 0x4710FD93
	// 0x6A0A241A
	static void CANCEL_DEADEYE() { invoke<Void>(0xCB0BDCE9); } // 0xCB0BDCE9
	// 0xFA43DCC5
	// 0xEC906A7A
	// 0xC9FCD3EC
	static void DOF_PUSH() { invoke<Void>(0xF665F9D1); } // 0xF665F9D1
	static void DOF_POP() { invoke<Void>(0x5EBE0C41); } // 0x5EBE0C41
	static void DOF_SET(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEA8964CC, p0, p1, p2, p3); } // 0xEA8964CC
	// 0x47A8DDED
	// 0x3B32AB84
	// 0xCBDD5832
	// 0x1065D334
	// 0xFC261530
	static void CLEAR_TUMBLEWEEDS() { invoke<Void>(0x8852F896); } // 0x8852F896
	static void ALLOW_TUMBLEWEEDS(Any p0) { invoke<Void>(0xFDE8DFCE, p0); } // 0xFDE8DFCE
	// 0x1EE7153B
	// 0x5685A440
	// 0x50904C66
	static void CLEAR_CHARACTER_BLOOD() { invoke<Void>(0x1A676EDF); } // 0x1A676EDF
	// 0x807C9D01
	// 0x9D9E093E
	// 0x32F2D6F1
	// 0xA257C16D
	// 0x3627F773
	// 0x48123591
	// 0xA0AE0C98
}
