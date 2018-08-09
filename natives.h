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


static Actor GET_PLAYER_ACTOR(Player player) { return invoke<Actor>(0xE8CFDD53, player); } // 0xE8CFDD53
static void SET_ACTOR_INVULNERABILITY(Actor actor, BOOL toggle) { invoke<Void>(0xE38EF526, actor, toggle); }
static void GIVE_WEAPON_TO_ACTOR(Actor actor, int weaponId, int ammoCount, BOOL p3, Any p4) { invoke<Void>(0x6AA0EAF2, actor, weaponId, ammoCount, p3, p4); }
static void _SET_ACTOR_INFINITE_AMMO_FLAG(Actor actor, int weaponGroup, BOOL toggle) { invoke<Void>(0x4FE2B586, actor, weaponGroup, toggle); }
