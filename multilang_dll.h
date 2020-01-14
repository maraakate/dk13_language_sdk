#ifndef __MULTILANG_H
#define __MULTILANG_H

#define	LANGDLL_API_VERSION		15

typedef struct
{
	/* if api_version is different, the dll cannot be used */
	int		api_version;

	const char *(*tongue);
	const char *(*tongue_menu);
	const char *(*tongue_menu_autoupdate);
	const char *(*tongue_menu_joystick);
	const char *(*tongue_menu_options);
	const char *(*texture_quality_desc);
	const char *(*tongue_weapons);
	const char *(*tongue_armors);
	const char *(*tongue_monsters);
	const char *(*tongue_world);
	const char *(*tongue_deathmsg_daikatana);
	const char *(*tongue_deathmsg_self);
	const char *(*tongue_deathmsg_weapon1);
	const char *(*tongue_deathmsg_weapon2);
	const char *(*tongue_deathmsg_weapon3);
	const char *(*tongue_deathmsg_weapon4);
	const char *(*tongue_scoreboard);
	const char *(*tongue_difficulty);
	const char *(*tongue_skincolors);
	const char *(*tongue_statbar);
	const char *(*tongue_weapon_misc);
	const char *(*tongue_sidekick);
	const char *(*tongue_ctf);
	const char *(*tongue_deathtag);
	const char *(*tongue_save_error);
	const char *(*tongue_quit_msgs);
	const char *(*tongue_quit_msgs_rare);
} language_export_t;

#endif // __MULTILANG_H
