#include "l__language.h"

#if _MSC_VER
//	for C++ classes that will be used in other DLLs
#ifndef	DllExport_Plus
#define DllExport_Plus __declspec(dllexport)
#endif
//	for functions the Quake engine calls (not in C++)
#ifndef	DllExport
#define DllExport	extern "C"	__declspec( dllexport )
#endif
#else	// for unix
#undef DllExport_Plus
#undef DllExport
#define DLLExport_Plus
#define DllExport extern "C"
#endif

language_export_t lang;

DllExport language_export_t *GetLangAPI (void *import)
{

	lang.api_version = LANGDLL_API_VERSION;
	lang.tongue = tongue;
	lang.texture_quality_desc = texture_quality_desc;
	lang.tongue_armors = tongue_armors;
	lang.tongue_ctf = tongue_ctf;
	lang.tongue_deathmsg_daikatana = tongue_deathmsg_daikatana;
	lang.tongue_deathmsg_self = tongue_deathmsg_self;
	lang.tongue_deathmsg_weapon1 = tongue_deathmsg_weapon1;
	lang.tongue_deathmsg_weapon2 = tongue_deathmsg_weapon2;
	lang.tongue_deathmsg_weapon3 = tongue_deathmsg_weapon3;
	lang.tongue_deathmsg_weapon4 = tongue_deathmsg_weapon4;
	lang.tongue_deathtag = tongue_deathtag;
	lang.tongue_difficulty = tongue_difficulty;
	lang.tongue_menu = tongue_menu;
	lang.tongue_menu_autoupdate = tongue_menu_autoupdate;
	lang.tongue_menu_options = tongue_menu_options;
	lang.tongue_menu_joystick = tongue_menu_joystick;
	lang.tongue_monsters = tongue_monsters;
	lang.tongue_quit_msgs = tongue_quit_msgs;
	lang.tongue_quit_msgs_rare = tongue_quit_msgs_rare;
	lang.tongue_save_error = tongue_save_error;
	lang.tongue_scoreboard = tongue_scoreboard;
	lang.tongue_sidekick = tongue_sidekick;
	lang.tongue_skincolors = tongue_skincolors;
	lang.tongue_statbar = tongue_statbar;
	lang.tongue_weapon_misc = tongue_weapon_misc;
	lang.tongue_weapons = tongue_weapons;
	lang.tongue_world = tongue_world;

	return &lang;
}    
