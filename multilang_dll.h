#ifndef __MULTILANG_H
#define __MULTILANG_H

#ifndef NULL
#define NULL 0
#endif

typedef unsigned char 		byte;

#define	LANGDLL_API_VERSION		10

typedef struct
{
	/* if api_version is different, the dll cannot be used */
	int		api_version;

	char *(*tongue);
	char *(*tongue_menu);
	char *(*tongue_menu_autoupdate);
	char *(*tongue_menu_joystick);
	char *(*tongue_menu_options);
	char *(*texture_quality_desc);
	char *(*tongue_weapons);
	char *(*tongue_armors);
	char *(*tongue_monsters);
	char *(*tongue_world);
	char *(*tongue_deathmsg_daikatana);
	char *(*tongue_deathmsg_self);
	char *(*tongue_deathmsg_weapon1);
	char *(*tongue_deathmsg_weapon2);
	char *(*tongue_deathmsg_weapon3);
	char *(*tongue_deathmsg_weapon4);
	char *(*tongue_scoreboard);
	char *(*tongue_difficulty);
	char *(*tongue_skincolors);
	char *(*tongue_statbar);
	char *(*tongue_weapon_misc);
	char *(*tongue_sidekick);
	char *(*tongue_ctf);
	char *(*tongue_deathtag);
	char *(*tongue_save_error);
	char *(*tongue_quit_msgs);
	char *(*tongue_quit_msgs_rare);
} language_export_t;

#endif // __MULTILANG_H
