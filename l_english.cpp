#include "l__language.h"

// ENGLISH text

keyname_t keynames[] =
{
	{"TAB", K_TAB},
	{"ENTER", K_ENTER},
	{"ESCAPE", K_ESCAPE},
	{"SPACE", K_SPACE},
	{"BACKSPACE", K_BACKSPACE},
	{"UPARROW", K_UPARROW},
	{"DOWNARROW", K_DOWNARROW},
	{"LEFTARROW", K_LEFTARROW},
	{"RIGHTARROW", K_RIGHTARROW},

	{"ALT", K_ALT},
	{"CTRL", K_CTRL},
	{"SHIFT", K_SHIFT},
	
	{"F1", K_F1},
	{"F2", K_F2},
	{"F3", K_F3},
	{"F4", K_F4},
	{"F5", K_F5},
	{"F6", K_F6},
	{"F7", K_F7},
	{"F8", K_F8},
	{"F9", K_F9},
	{"F10", K_F10},
	{"F11", K_F11},
	{"F12", K_F12},

	{"INS", K_INS},
	{"DEL", K_DEL},
	{"PGDN", K_PGDN},
	{"PGUP", K_PGUP},
	{"HOME", K_HOME},
	{"END", K_END},

	{"MOUSE1", K_MOUSE1},
	{"MOUSE2", K_MOUSE2},
	{"MOUSE3", K_MOUSE3},
	{"MOUSE4", K_MOUSE4},	// Knightmare added 5/29/12
	{"MOUSE5", K_MOUSE5},	// Knightmare added 5/29/12

	{"JOY1", K_JOY1},
	{"JOY2", K_JOY2},
	{"JOY3", K_JOY3},
	{"JOY4", K_JOY4},

	{"AUX1", K_AUX1},
	{"AUX2", K_AUX2},
	{"AUX3", K_AUX3},
	{"AUX4", K_AUX4},
	{"AUX5", K_AUX5},
	{"AUX6", K_AUX6},
	{"AUX7", K_AUX7},
	{"AUX8", K_AUX8},
	{"AUX9", K_AUX9},
	{"AUX10", K_AUX10},
	{"AUX11", K_AUX11},
	{"AUX12", K_AUX12},
	{"AUX13", K_AUX13},
	{"AUX14", K_AUX14},
	{"AUX15", K_AUX15},
	{"AUX16", K_AUX16},
	{"AUX17", K_AUX17},
	{"AUX18", K_AUX18},
	{"AUX19", K_AUX19},
	{"AUX20", K_AUX20},
	{"AUX21", K_AUX21},
	{"AUX22", K_AUX22},
	{"AUX23", K_AUX23},
	{"AUX24", K_AUX24},
	{"AUX25", K_AUX25},
	{"AUX26", K_AUX26},
	{"AUX27", K_AUX27},
	{"AUX28", K_AUX28},
	{"AUX29", K_AUX29},
	{"AUX30", K_AUX30},
	{"AUX31", K_AUX31},
	{"AUX32", K_AUX32},

	{"KP_HOME",			K_KP_HOME },
	{"KP_UPARROW",		K_KP_UPARROW },
	{"KP_PGUP",			K_KP_PGUP },
	{"KP_LEFTARROW",	K_KP_LEFTARROW },
	{"KP_5",			K_KP_5 },
	{"KP_RIGHTARROW",	K_KP_RIGHTARROW },
	{"KP_END",			K_KP_END },
	{"KP_DOWNARROW",	K_KP_DOWNARROW },
	{"KP_PGDN",			K_KP_PGDN },
	{"KP_ENTER",		K_KP_ENTER },
	{"KP_INS",			K_KP_INS },
	{"KP_DEL",			K_KP_DEL },
	{"KP_SLASH",		K_KP_SLASH },
	{"KP_MINUS",		K_KP_MINUS },
	{"KP_PLUS",			K_KP_PLUS },

	{"MWHEELUP", K_MWHEELUP },
	{"MWHEELDOWN", K_MWHEELDOWN },

	{"PAUSE", K_PAUSE},

	{"SEMICOLON", ';'},	// because a raw semicolon seperates commands

	{0,0}
};

// vkey conversion table
//==========================================================================
const unsigned char scantokey[128] =
{
//  0		   1	   2	   3	   4	   5	   6	   7
//  8		   9	   A	   B	   C	   D	   E	   F
	0  ,	27,	 '1',	'2',	'3',	'4',	'5',	'6',
	'7',	'8',	'9',	'0',	'-',	'=',	K_BACKSPACE, 9, // 0
	'q',	'w',	'e',	'r',	't',	'y',	'u',	'i',
	'o',	'p',	'[',	']',	13 ,	K_CTRL,'a',  's',	  // 1
	'd',	'f',	'g',	'h',	'j',	'k',	'l',	';',
	'\'' ,	'`',	K_SHIFT,'\\',  'z',	'x',	'c',	'v',	  // 2
	'b',	'n',	'm',	',',	'.',	'/',	K_SHIFT,'*',
	K_ALT,' ',   0  ,	K_F1, K_F2, K_F3, K_F4, K_F5,   // 3
	K_F6, K_F7, K_F8, K_F9, K_F10,  K_PAUSE,	0  , K_HOME,
	K_UPARROW,K_PGUP,K_KP_MINUS,K_LEFTARROW,K_KP_5,K_RIGHTARROW, K_KP_PLUS,K_END, //4
	K_DOWNARROW,K_PGDN,K_INS,K_DEL,0,0,			 0,			  K_F11,
	K_F12,0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0,		// 5
	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0,
	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0,		// 6
	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0,
	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0  ,	0		 // 7
}; 

const char *tongue[] =
{
	"You acquired",								// T_PICKUP_WEAPON	weapon pickup
	"You needed",								// T_PICKUP_HEALTH	health pickup
	"You're protected by",						// T_PICKUP_ARMOR_GOOD	armor good pickup
	"You're energized by",						// T_PICKUP_BOOST		boost pickup
	"Save Gem acquired",						// T_PICKUP_SAVEGEM	pick up Save Gem
												
	"POWER",									// T_USEBOOST_POWER	power boost label
	"ATTACK",									// T_USEBOOST_ATTACK	attack boost label
	"SPEED",									// T_USEBOOST_SPEED	speed boost label
	"ACRO",										// T_USEBOOST_ACRO	jump boost label
	"VITALITY",									// T_USEBOOST_VITA	health boost label

	"Time to boogie",							// T_BOMB_EXPLODE			bomb explode
	"You must have a bottle to mix that in",	// T_BOMB_NEED_BOTTLE		need bottle to mix ingredients
	"Items required:",							// T_BOMB_ITEM_REQUIRED1	ingredient required
	"You create an explosive",					// T_BOMB_CREATED			bomb created
	"You found",								// T_BOMB_FOUND				bomb found, vowel
	"a pouch of sulphur",						// T_BOMB_INGREDIENT_1		bomb ingredient 1
	"a lump of coal",							// T_BOMB_INGREDIENT_2		bomb ingredient 2
	"a vial of saltpeter",						// T_BOMB_INGREDIENT_3		bomb ingredient 3
	"an empty bottle",							// T_BOMB_BOTTLE			bomb bottle
												
	"sulphur",									// T_BOMB_INGREDIENT_SHORT_1	bomb item, short description
	"charcoal",									// T_BOMB_INGREDIENT_SHORT_2	bomb item, short description
	"saltpeter",								// T_BOMB_INGREDIENT_SHORT_3	bomb item, short description
												
	"You read from",							// T_BOOK_READ		read book
	"You can not use this here",				// T_BOOK_NO_READ		no read book
	"Wyndrax's Spellbook",						// T_BOOK_WYNDRAX		Wyndrax spellbook
												
	"You picked up",							// T_KEY_PICKUP		key pickup
	"the Crypt key",							// T_KEY_CRYPT		crypt key name
	"the Wyndrax key",							// T_KEY_WYNDRAX		Wyndrax key name
	"a prison cell keycard",					// T_KEY_PRISONCELL	Prison cell key

	"the red Control Card",						// T_KEY_RED_CARD
	"the blue Control Card",					// T_KEY_BLUE_CARD
	"the green Control Card",					// T_KEY_GREEN_CARD
	"the yellow Control Card",					// T_KEY_YELLOW_CARD
	"the Hex keystone",							// T_KEY_HEX_KEYSTONE
	"the Quad keystone",						// T_KEY_QUAD_KEYSTONE
	"the Trigon keystone",						// T_KEY_TRIGON_KEYSTONE
	"the Megashield",							// T_MEGASHIELD
	"the Manaskull",							// T_SKULL_OF_INVINCIBILITY
	"the Poison Antidote",						// T_POISON_ANTIDOTE
	"the Drachma",								// T_DRACHMA
	"the Horn of Charon",						// T_HORN
	"part of the AEGIS key (A)",				// T_KEY_AEGIS_A
	"part of the AEGIS key (E)",				// T_KEY_AEGIS_E
	"part of the AEGIS key (G)",				// T_KEY_AEGIS_G
	"part of the AEGIS key (I)",				// T_KEY_AEGIS_I
	"part of the AEGIS key (S)",				// T_KEY_AEGIS_S
	"a shard of the Purifier",					// T_PURIFIER_SHARD
	"the Black Chest",							// T_BLACK_CHEST
	"the Ring of Fire Protection",				// T_RING_OF_FIRE
	"the Ring of Undead Protection",			// T_RING_OF_UNDEAD
	"the Ring of Lightning Protection",			// T_RING_OF_LIGHTNING
	"the Envirosuit",							// T_ENVIROSUIT

	"the health kit",							// T_HEALTH_KIT
	"the Goldensoul",							// T_GOLDENSOUL
	"the Wraithorb",							// T_WRAITHORB,

	"a Save Gem",								// T_SAVEGEM
	"You have no save gems",					// cek[12-13-99]
	"the health vial",							// cek[1-3-00]

	// cek[2-2-00]: altered the following ***********************************************
	"the health pack",
	"the life vase",
	"the health flask",
	"the health crate",
	"the health box",
	"The antidote is empty.\n", /* FS: Added CR */

// SCG[2/8/00]: messages for completed artifacts
	"You found all the AEGIS runes!",
	"You found all three keystones!",
	"You have assembled the Purifier",
	"You ate some fruit.\n", /* FS */
	"Bonus Gem acquired", /* FS */
	"Current bonus total: ", /* FS */
	"Lift Codes",	// Knightmare added
};


// menu-related
const char *tongue_menu[] =
{
	"Forward",								  // key bind to Move Forward
	"Backward",								 // key bind to Move Backward
	"Step Left",								// key bind to Step Left
	"Step Right",							   // key bind to Step Right
	"Attack",								   // key bind to Attack
	"Jump",									 // key bind to Jump/Up
	"Use/Operate",							  // key bind to Use/Operate object
	"Crouch",								   // key bind to Crouch/Down
	"Next Weapon",							  // key bind to Next Weapon
	"Prev Weapon",							  // key bind to Prev Weapon
	"Turn Left",								// key bind to Turn Left
	"Turn Right",							   // key bind to Turn Right
	"Run",									  // key bind to Run
	"Sidestep",								 // key bind to  Sidestep
	"Look Up",								  // key bind to Look Up
	"Look Down",								// key bind to Look Down
	"Center View",							  // key bind to Center View
	"MouseLook",								// key bind to Mouse Look
	"KeyLook",								  // key bind to Keyboard Look
	"View Size Up",							 // key bind to Screen size up
	"View Size Down",						   // key bind to Screen size down
	"Show All Huds",							// key bind to Show All Huds
	"Inv. Open",								// key bind to Inventory Open
	"Use Inv. Item",							// key bind to Use Item
	"Next Item",								// key bind to Next Item
	"Prev Item",								// key bind to Prev Item
	"Swap Sidekick",							// key bind to Swap Sidekick
	"Command Next",							 // key bind to Command Next
	"Command Prev",							 // key bind to Command Prev
	"Command Use",								// key bind to Command Apply				// cek[1-5-00] changed from Apply to Use

	ARROW_LEFT_STRING  " Left",				 // left arrow key
	ARROW_UP_STRING	" Up",				   // up arrow key
	ARROW_DOWN_STRING  " Down",				 // down arrow key
	ARROW_RIGHT_STRING " Right",				// right arrow key
	"--",									   // no bind setting for this key

	"Click or Enter to set, DEL to delete",	 // set/delete key
	"Click or Enter to select",				 // select key
	"Hit key to set, ESC to abort",			 // set/abort
	
	"Defaults",								 // default button
	
	"None",									 // no mouse bindings
	"Move Left/Right",						  // mouse "move left and right" setting
	"Turn Left/Right",						  // mouse "turn left and right" setting
	"Look Up/Down",							 // mouse "look up and down" setting
	"Move For./Back",						   // mouse "move forward and back" setting
	"Reverse Y-Axis",						   // reverse mouse axis
	"Mouse Look",							   // Mouse-Look
	"Look Strafe",							  // Mouse-Look
	"X Axis",								   // x axis
	"Y Axis",								   // y axis
	"Button 1",								 // button 1 label
	"Button 2",								 // button 2 label
	"Button 3",								 // button 3 label
	"Select a command, ESC to cancel",		  // select a command, ESCape to cancel
	"Turn L/R",								 // turn left and right, abbreviated
	"Strafe L/R",							   // strafe left and right, abbreviated
	"Look U/D",								 // look up and down, abbreviated
	"Move F/B",								 // move forward and back, abbreviated
	"Horizontal sensitivity",				   // mouse sensitivity for x-axis				//cek[12-13-99]
	"Vertical sensitivity",					 // mouse sensitivity for y-axis				//cek[12-13-99]
	"Configure Mouse options:",				 // configure mouse options

	"Deathmatch",							   // 'deathmatch' game
	"Deathtag",								 // 'deathtag' game
	"Cooperative",							  // 'cooperative' game

	"Easy",									 // easy difficulty
	"Medium",								   // medium difficulty
	"Hard",									 // hard difficulty

	"Find an Internet Game",					// SCG[12/1/99]: 
	"Find a Local Game",						// SCG[12/1/99]: 
	"Start a Multiplayer Game",					// SCG[12/1/99]: 

	"LAN",									  // local area network game
	"Internet",								 // internet game

	"Join",									 // join server
	"Host",									 // host new server
	"Add " ARROW_DOWN_STRING,				   // add address
	"Refresh",								  // refresh network games
	"Setup",									// player setup

	"Connect Rate",							 // connection speed label
	"28.8k",									// connection type 1
	"56.6k",									// connection type 2
	"ISDN",										// connection type 3
	"Cable/DSL",								// connection type 4
	"T1/LAN",								   // connection type 5
	"User Defined",							 // connection type 6

	"Time Limit",								// SCG[12/2/99]: 
	"Character Color",							// SCG[12/2/99]: 
	"Starting Episode",							// SCG[12/2/99]: 
	"Team Choice",								// SCG[12/1/99]: 
	"CTF Limit",								// SCG[12/1/99]: 
	"Team1 Color",								// SCG[12/1/99]: 
	"Team2 Color",								// SCG[12/1/99]: 
	"Score Limit",								// SCG[12/1/99]: 
	"Frag Limit",								// SCG[12/1/99]: 
	"Level Limit",								// level limit
	"Starting Episode",							// SCG[12/2/99]: 
	"Game Map",									// SCG[12/1/99]: 
	"Game Mode",								// game mode (deathmatch,deathtag,co-op)
	"Skill Level",								// skill level
	"Time Limit",								// time limit
	"Max Players",								// maximum players
	"Character",								// character
	"Base Color",								// base color
	"Start!",									// start multiplayer game
												
	"Weapons Stay",								// weapons remain
	"Items Respawn",							// items rematerialize
	"Spawn Frthst",								// spawn farthest point from players
	"Allow Exiting",							// allow exiting of the level
	"Same Map",									// same map
	"Force Respawn",							// force respawn
	"Falling Damage",							// players take falling damage
	"Instnt Pwrups",							// instant power-ups
	"Allow Pwrups",								// allow power-ups
	"Allow Health",								// allow health kits
	"Allow Armor",								// allow armor
	"Infinite Ammo",							// unlimited ammunition
	"Fixed FOV",								// fixed field-of-vision
	"Teamplay",									// team-play
	"Hurt Teammates",							// hurt teammates
	"Fast Switch",								// fast weapon switch
	"Footsteps",								// footsteps audible
	"Allow Hook",								// allow hook
	"Shotgun Shells",							// show shotgun shells?
												
	"Server IP Address",						// server internet provider address
	"No local games found",						// no local games found
	"Starting Map",								// starting map
	"Server Name",								// server name
	"Player Name",								// player name
	"Team Name",								// team name
												
	"Perform Harakiri?",						// confirm quit
												
	"Yes",										// yes, acknowledgement
	"No",										 // no, acknowledgement
	"Save Game",								// cek[1-3-00] changed from 'save' to 'save game'

	"Load Config",								//cek[12-6-99]
	"Save Config",								//cek[12-6-99]
	"Delete Config",							//cek[12-6-99]
	"Select Configuration File",				//cek[12-6-99]
	"Delete selection?",						//cek[12-6-99]
												
	"Load Game",								//cek[12-6-99]
	"Armor",									//cek[12-6-99]
	"Health",									//cek[12-6-99]
	"Level",									//cek[12-6-99]
	"Monsters",									//cek[12-6-99]
	"Secrets",									//cek[12-6-99]
	"Time",										//cek[12-6-99]
	"Total",									//cek[12-6-99]
	"Episode",									//cek[12-6-99]

	"Use 3d sound",								//cek[12-6-99]

	"Saved",									//cek[12-7-99]
	"Loaded",									//cek[12-7-99]
	"Deleted",									//cek[12-7-99]

	"Smooth mouse",								//cek[12-7-99]
	"Wheel up",									//cek[12-7-99]
	"Wheel down",								//cek[12-7-99]

	"No ALT-TAB allowed",						//cek[12-7-99]
	"Weapon bobbing",							//cek[12-7-99]
	"Auto-switch weapons",						//cek[12-7-99]

	"Texture Gamma",							/* FS: Was "Intensity" */
	"Shiny weapons",							//cek[12-7-99]
	"Bullet Holes",								// SCG[1/4/00]

	"Forward",									//cek[12-9-99]
	"Side",										//cek[12-9-99]
	"Up",										//cek[12-9-99]
	"Pitch",									//cek[12-9-99]
	"Yaw",										//cek[12-9-99]
	"Use joystick",								//cek[12-9-99]
	"Configure axis",							//cek[12-9-99]
	"Configure joystick options",				//cek[12-9-99]
	"Select an action for this button",			//cek[12-9-99]
	"Press a joystick button to configure",		//cek[12-9-99]
	"Threshold",								//cek[12-9-99]
	"Sensitivity",								//cek[12-9-99]

	"Capture the Flag",							//cek[12-10-99]
	"Back",										//cek[12-10-99]
	"56.6k",									//cek[12-10-99]
	"Auto",										//cek[12-10-99]
	"Team 1",									//cek[12-10-99]
	"Team 2",									//cek[12-10-99]

	"Play Intro Movie",							//cek[12-13-99]
	"Use skill system",							//cek[12-13-99]
	"Mouse speed",								//cek[12-13-99]

	"Sidekick GET",								// cek[1-3-00]
	"Sidekick COME",							// cek[1-3-00]
	"Sidekick ATTACK",							// cek[1-3-00]
	"Sidekick BACKOFF",							// cek[1-3-00]
	"Sidekick STAY",							// cek[1-3-00]

	"Select Weapon %d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)

	"HUD Cycle",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"HUD Next",									// cek[1-5-00]  -- similar in meaning.
	"HUD Prev",									// cek[1-5-00]
	"HUD Use",									// cek[1-5-00]

	"Talk",										// cek[1-11-00]
	"Scoreboard",								// SCG[1/13/00]: 
	"Talk to team",								// cek[1-22-00]
	"%s is already assigned to %s",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"Replace?",									// cek[1-22-00]

	"Toastednet",								/* FS: changed to tnet */
	"DK News",									/* FS: changed to dknews */
	"Continue?",								// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"Want custom maps, mods and more?\nGo to dk.toastednet.org.\nContinuing will launch your web browser.",	/* FS: changed to tnet */
	"For all your Daikatana news\ngo to www.daikatananews.net.\nContinuing will launch your web browser.",	/* FS: changed to dknews */

	"Weapon %d",
	"Cancel",									// cek[3-9-00]
	"www.daikatananews.net", /* FS: changed to dknews */
	"Go to www.daikatananews.net.\nContinuing will launch your web browser.",			// cek[3-9-00]
	
	"Configure Weapons", /* FS */
	"Instagib", /* FS */
	"Deathmatch taunts", /* FS */
	"Unlimited saves", /* FS */
	"CTF/DT hints", /* FS */
	"Check for Updates", /* FS */
	"Beta Updates", /* FS */

	"Notice About Mini-Drivers",	// Knightmare added 2/20/13
	"This version of Daikatana no longer\nsupports the 3DFX and PowerVR mini-drivers.\n3DFX users are strongly recommended to\nuse the Metabyte WickedGL drivers.",	// Knightmare added 2/20/13
	"Download WickedGL drivers",		// Knightmare added 2/20/13
	"Go to www.3dfxzone.it.\nContinuing will launch your web browser.",	// Knightmare added 2/20/13
	"Switch to default OpenGL",	// Knightmare added 2/20/13

	"Screenshot",	// Knightmare added 1/21/14
	"Silent screenshot",	// Knightmare added 1/21/14
	"Shared XP",	// Knightmare added 2/1/14
	"Delete Game",	// Knightmare added 2/7/14
	"Delete savegame?",	// Knightmare added 2/7/14
	"Shift Key",	/* FS: For Mouse and Joystick */
	"We have spent a lot of time repairing the\noriginal maps and adding subtle features to\nthe Sidekick AI such as regenerating health.\nThe game is more enjoyable with Sidekicks.", /* FS: For no sidekicks */
	"Are you sure you want to play without them?\n", /* FS: For no sidekicks */

	"Boost Power",		/* FS: Added by request. */
	"Boost Attack",		/* FS: Added by request. */
	"Boost Speed",		/* FS: Added by request. */
	"Boost Acro",		/* FS: Added by request. */
	"Boost Vitality",	/* FS: Added by request. */
	"Quick Save",		/* FS: Added by request. */
	"Quick Load",		/* FS: Added by request. */

	"Button 4",			// Knightmare 1/30/15- button 4 label
	"Button 5",			// Knightmare 1/30/15- button 5 label
	"Mouse Acceleration",		/* FS */
};

const char *tongue_menu_options[] =
{
	"Always Run",							   // always run
	"Lookspring",							   // look-spring
	"Lookstrafe",							   // look-strafe
	"Auto-targeting",						   // auto-targeting
	"Crosshair",								// crosshair
	"Weapon Visible",						   // weapon visible
	"Subtitles",								// subtitles

	"Sound Effect Volume",					  // volume for sound fx
	"Music Volume",							 // volume for music
	"Voices Volume",						 // volume for voices

	"Software",								 // video mode, software
	"OpenGL",								   // video mode, opengl
	"Apply Changes",							// apply video mode changes

	"Fullscreen",							   // fullscreen
	"Shadows",								  // shadows
	"Driver",								   // video driver
	"Resolution",							   // resolution
	"Screen Size",							  // screen size
	"Brightness",							   // brightness
	"Texture Quality",						  // texture quality
	"Status Bar Visibility",					// status bar visibility
	"Fog/Water Detail",							// SCG[12/4/99]: 
	"Ronin",									// difficulty level easy
	"Samurai",									// difficulty level medium
	"Shogun",									// difficulty level hard

	"Snow and Rain",							// cek[1-11-00]
	"Fog",										// cek[1-11-00]
	
	"Play Powerup Sounds", /* FS */
	"Play Missing Sounds", /* FS */
	"Play Sidekick Chatter", /* FS */

	"Anisotropic Filter",	// Knightmare added 5/29/12
	"Custom Width",		// Knightmare added 5/29/12
	"Custom Height",	// Knightmare added 5/29/12
	"Status Bar Size",	// Knightmare added 6/14/12
	"V-Sync",			// Knightmare added 10/4/12
	"Async refresh",	// Knightmare added 10/4/12
	"Refresh rate",		// Knightmare added 10/4/12
	"Screenshot format",// Knightmare added 3/11/13
	"Spot",				// Knightmare added 5/10/13
	"Volume",			// Knightmare added 5/10/13

	"Download Options",		// Knightmare added 11/19/13
	"Allow downloading",	// Knightmare added 11/19/13
	"Allow HTTP downloading",		/* FS added 03/29/15 */
	"maps / textures",		// Knightmare added 11/19/13
	"sounds",				// Knightmare added 11/19/13
	"models",				// Knightmare added 11/19/13
	"Sound Rate",			// Knightmare added 2/2/14
	"Audio Engine",			// Knightmare added 7/8/16
	"Language",
	"No Sidekicks", /* FS: No sidekicks new game option */
	"Bonus Gems", /* FS: Bonus save gems */

	/* FS: More Options! */
	"Page 1",
	"Page 2",
	"Show Framerate",
	"Q3A Console cmds",
	"In-game Cinematics",
	"New Auto-complete",
	"Chat msg prioritizing",
	"Sidekick exit warning",
	"Auto-record Demos",
	"Damage Flashes",
	"Show Time",
	"Message Queue",
	"Preferred Music Format",
	// Knightmare added 3/5/17
	"Noisy Load Screens",
	"Antialiasing", /* FS */

	/* FS: Window mode picker */
	"Window Mode",
	"Windowed",
	"Borderless",

	/* FS: Video Options Page 2 */
	"Self Shadows",
	"Debris Shadows",
	"Dynamic Lights",
	"Particles",
	"Reduced Particles",
	"Legacy Renderer",
	"8-bit Textures",
	"Multi-texturing",
	"Vertex Arrays",
	"Hardware Gamma",
	"Glow Surfaces",
	"Texture Filter",
	"Bilinear",
	"Trilinear",

	"Field of Vision",
	"Gun Field of Vision",
};

//descriptions for the texture quality settings.
const char *texture_quality_desc[] =
{
	"Full",
	"Half",
	"Quarter",
	"Eighth"
};


// weapon names
const char *tongue_weapons[] =
{
	"No Ammo",
	"the Ballista",
	"the Ballista logs",
	"the Bolter",
	"the Bolts",
	"the C4 Vitzatergo",
	"a C4 pack",
	"the Daikatana",
	"the Discus of Daedalus",
	"a Discus",
	"the Disruptor Glove",
	"the Glock 2020",
	"some bullets",
	"the Hades Hammer",
	"the Ion Blaster",
	"an Ion pack",					// SCG[11/28/99]: 
	"the Kineticore",
	"the Kinespheres",
	"the Metamaser",
	"the Metamaser",
	"Nharre's Nightmare",
	"some gibs",					// SCG[11/28/99]: 
	"the Novabeam",
	"a Novacell",					// SCG[11/28/99]: 
	"the Ripgun",
	"the Rip-Ups",					// Knightmare changed 8/29/14
	"the Shockwave",
	"the Shock Sphere",
	"the Shotcycler",
	"Shotcycler Shells",
	"the Sidewinder",
	"Sidewinder Rockets",			// SCG[11/28/99]: 
	"the Silverclaw",
	"the Slugger",
	"the Slugs",
	"Stavros' Stave",
	"Lava Rocks",
	"a Sunflare",
	"a Sunflare",
	"Poseidon's Trident",
	"the Trident Tips",
	"the Venomous",
	"Cobra Venom",					// SCG[11/28/99]: 
	"Wyndrax's Wisp",
	"a Wisp",
	"the Eye of Zeus",
	"a mystic Eye",
	"the Ultimate Gas Hands",

	/* FS: Needed for Configure Weapons Menu */
	"Ion Blaster",
	"C4 Vitzatergo",
	"Shotcycler",
	"Sidewinder",
	"Shockwave",
	"Discus of Deadalus",
	"Venomous",
	"Sunflare",
	"Hammer of Hades",
	"Poseidon's Trident",
	"Eye of Zeus",
	"Bolter",
	"Stavros' Stave",
	"Ballista",
	"Wyndrax's Wisp",
	"Nharre's Nightmare",
	"Glock 2020",
	"Slugger",
	"Kineticore",
	"Ripgun",
	"Novabeam",
	"Metamaser",

	// Knightmare 8/29/13- Cordite grenades was stealing ripgun ammo identifier
	"Cordite Grenades"
};

const char *tongue_armors[] =
{
	"the Plasteel Armor",
	"the Chromatic Armor",
	"the Silver Armor",
	"the Gold Armor",
	"the Chainmail Armor",
	"the Black Adamant Armor",
	"the Kevlar Armor",
	"the Ebonite Armor"
};

// monster names
const char *tongue_monsters[] =
{
	"RoboCo Battle Boar",
	"Black Prisoner",
	"Buboid",
	"RoboCo Cambot",
	"Centurion",
	"Cerberus",
	"Flying Chaingunner",
	"Caryatid",
	"RoboCo Crox",
	"RoboCo Deathsphere",
	"Doom Bat",
	"Dragon",
	"Dwarf",
	"Femgang",
	"Ferryman",
	"Fletcher",
	"RoboCo Froginator",
	"King Gharroth",
	"Goldfish",
	"Griffon",
	"Harpy",
	"Inmater",
	"Kage",
	"Hellfire Paladin",
	"Voltaic Valkyrie",
	"Lab Monkey",
	"Cryotech",
	"RoboCo Lasergat",
	"Lycanthir",
	"Medusa",
	"Mishima Guard",
	"Nharre the Necromancer",
	"Plague Rat",
	"Pipe Rat",
	"Priest",
	"Prisoner",
	"RoboCo Protopod",
	"Psyclaw",
	"RoboCo Ragemaster 5000",
	"Gang Rocketeer",
	"Navy SEAL Rocketeer",
	"Rotworm",
	"Satyr",
	"NAVY SEAL Commando",
	"Navy SEAL Captain",
	"Navy SEAL Shotgunner",
	"Shark",
	"Slaughterskeet",
	"Skeleton",
	"Skinny Worker",
	"Fat Worker",
	"RoboCo Sludge Minion",
	"Small Spider",
	"Spider",
	"Stavros the Sorceror",
	"Surgeon",
	"Thief",
	"RoboCo Thunderskeet",
	"Gang Uzi",
	"White Prisoner",
	"Wizard",
	"Wyndrax the Wizard",
	"Seagull",
	"Firefly",
	"Wisp",
	"Mikiko",
	"Ghost",
	"The DopeFish"
};

const char *tongue_world[] =
{
	"more to go",								 // triggers to go until sequence complete
	"Sequence completed",						 // trigger sequence completed

	"You must have",							  // need a specific key
	"You must have the proper key!\n",			   // wrong key in possession
	"Can't be opened this way\n",					  // SCG[11/1/99]: Can't be opened this way

	"You feel the poison leaving your system.\n",	// poison expiring
	"Your oxylungs are almost used up.\n",		   // oxylung expiring
	"Your envirosuit is expiring.\n",				// envirosuit expiring
	"Green Elf needs food badly.\n",				 // megashield expiring
	"The Wraith Orb is waning.\n",				   // wraith orb expiring
	"Power Boost is running out.\n",				  // power boost expiring
	"Attack Boost is running out.\n",				// attack boost expiring
	"Speed Boost is running out.\n",				 // speed boost expiring
	"Acrobatic Boost is running out.\n",			 // jump boost expiring
	"Vitality Boost is running out.\n",			  // health boost expiring

	"joined the game",							// player joined the game
	"exited the level",						   // player exited the level

	"Hiro Miyamoto",							  // Hiro Miyamoto's full name
	"Superfly Johnson",						   // Superfly's full name
	"Mikiko Ebihara",							 // Mikiko's full name

	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"You were kicked for spamming",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK /* FS: Updated this */
	"was kicked for spamming",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK /* FS: Updated this */
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"Unknown Player!",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER /* FS: Updated this */

	"Cannot exit area without\n",				// SCG[10/18/99]: no exiting level without sidekicks
	"Cannot exit without\n",				// SCG[11/9/99]: No exiting without a key
	"Poisoned!\n",						// NSS[11/29/99]: Needed a generic and yet global poisoned message

	"You found a secret!\n",					// cek[1-3-00]
	"The Manaskull is waning.\n",				   // cek[2-9-00]
	"Pinned!\n", /* FS */
	"Massacre!\n", /* FS */
	"Happy Holidays from the Daikatana 1.3 team!\n", /* FS */
	"and" /* FS */
};

const char *tongue_deathmsg_daikatana[] =
{
	"%s was sliced open by %s\n"
};

const char *tongue_deathmsg_self[] =
{
	"'s skull appears to be split open.\n",			// death, fell
	"sucked it down.\n",							// death, drowned
	"goes crispy.\n",								// death, lava
	"was slimed.\n",								// death, slimed
	"succumbed to the poison.\n",					// death, poison
	"failed at life.\n",							// death, killed self
	"was telefragged.\n",							// death, teleport
	"was compressed into a gib pile.\n",			// death, crushed
	"ate a full load of C4.\n",						// death, C4
	"was frozen solid.\n",							/* FS: death, frozen */
	"was shocked by lightning.\n"					/* FS: death, shocked by lightning bolts in e3 */
};

const char *tongue_deathmsg_weapon1[] =
{
	"%s was humiliated by %s!\n",
	"%s ultra-smacked %s into oblivion!\n",
	"%s was ionized by %s!\n",
	"%s made a mess of %s!\n",
	"%s double-barrelled %s!\n",
	"%s rode %s's rocket!\n",
	"%s shook up %s!\n"
};

const char *tongue_deathmsg_weapon2[] =
{
	"%s played ultimate frisbee with %s!\n",
	"%s venomized %s!\n",
	"%s turned %s into a burning inferno!\n",
	"%s hammered-down %s!\n",
	"%s punctured %s!\n",
	"%s kneeled before Zeus!\n"
};

const char *tongue_deathmsg_weapon3[] =
{
	"%s was carved like a ham by %s!\n",
	"%s took %s's twig!\n",
	"%s took %s's hardwood!\n",
	"%s was burnt down by %s's meteor!\n",
	"%s handled some of %s's high voltage!\n",
	"%s was done by %s's demon!\n"
};

const char *tongue_deathmsg_weapon4[] =
{
	"%s popped a cap in %s!\n",
	"%s shell-shocked %s!\n",
	"%s was ripped down by %s!\n",
	"%s made a nasty mess of %s!\n",
	"%s was iced by %s!\n",
	"%s burnt a hole in %s!\n",
	"%s was masered by %s!\n"
};

const char *tongue_scoreboard[] =
{
	"Name",
	"Kills",
	"Ping",
	"Time",
	"Shots",
	"Hits",
	"Died",
	"Score"										// cek[1-22-00]
};

const char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"Select Difficulty:",		   // difficulty header
	"Ronin",					   // newbie
	"Samurai",					// average
	"Shogun"					// expert (or so they think!)
};

const char *tongue_skincolors[] =
{
	"Blue",						 // blue
	"Green",						// green
	"Red",						  // red
	"Gold"						  // gold
};

const char *tongue_statbar[] =
{
	"POWER",						// skill 'power' label
	"ATTACK",					   // skill 'attack' label
	"SPEED",												// skill 'speed' label
	"ACRO",													// skill 'acrobatic' label
	"VITALITY",											// skill 'vitality' label

	"ARMOR",						// armor label
	"HEALTH",												// health label
	"AMMO",													// ammo label
	"FRAGS",												// kills label
	"LEVEL",  											// experience points label

	"LEVEL UP!",					// experience level up
	"Select",					   // select skill
	"Assign Skill Point",					// add point to skill

	"LOADING..."					// loading new level
};

const char *tongue_sidekick[] =	// sidekick commands
{
	"GET",							// 'get' item command
	"COME",						  // 'come here', 'come to me'
	"STAY",						   // 'stay' command, 'don't move'
	"ATTACK",						 // 'attack' command
	"BACK OFF",					   // 'back off', 'move away'

	"Can I have"					  //  asking to pick up an item: "Can I have the shotgun?"
};

const char *tongue_ctf[] =
{
	"Red Flag",
	"Blue Flag",
	"Unknown team",

	"%s Flag",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"Red",
	"Blue",
	"Chrome",
	"Steel",
	"Green",
	"Orange",
	"Purple",
	"Yellow",

	"Score is now: %s:%d, %s:%d\n",
	"You have captured the %s!\n",
	"%s from your team has captured the %s!\n",
	"%s from the %s team has captured your flag!\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"You grabbed the %s\n",
	"%s from your team has grabbed the %s\n",
	"%s has stolen your flag\n",
	"The %s has been returned\n",

	"%d is an invalid team number.  Use 1 or 2\n",
	"You are on team %d (%s)\n",
	"You are already on team %d\n",
	"%s joined the %s team\n",									// translate same as with the %s team above

	"The %s team has won!\nFinal score: %s:%d, %s:%d\n",		// translate same as with the %s team above
	"The game is a tie!\n",
	"Time has expired!\n",
	"The capture limit has been reached!\n",

	"Get ready for overtime!\n", /* FS */
	"You have the enemy flag.  Return to base!\n", /* FS */
	"The enemy has your flag!  Get the flag back!\n" /* FS */
};

const char *tongue_deathtag[] =
{
	"Bomb",														// as in backpack
	"%s Bomb",													// as in red pack
	"The score limit has been reached!\n",
	"Your time is running out!\n",
	"Your time just ran out!\n",

	"%s from the %s team has grabbed the %s!\n",				// translate using the '%s team' guidelines above

	"Your team gets a point!\n",
	"Your team gets %d points!\n",								// you get 2 points
	"The %s team gets a point!\n",								// translate using the '%s team' guidelines above
	"The %s team gets %d points!\n",							// The red team gets 2 points

	"You scored!\n",
	"%s from your team has scored!\n",
	"%s from the %s team has scored!\n",

	"You have the Bomb!  Go score!\n", /* FS */
	"The other team has their Bomb!\n" /* FS */
};

/* FS: v1.2 additions */
const char *tongue_save_error[] =
{
	"You must be running a local game to save!\n",
	"You must be in a game to save!\n",
	"You can not save in deathmatch!\n",
	"You can not save during a cinematic!\n",
	"You can not save while dead!\n",
	"You can not save during intermission!\n",
	"You can not save here!\n"
};

const char *tongue_quit_msgs[] =
{
	"Ya thought you were a big boy, but you're|really just a baby boy, aren't you?",
	"Are you gonna quit this game just like|you quit everything else in life?",
	"Does the pretty harp music and the scary|crickets make you cry and quit?",
	"Does all this time travel really boggle|you down, confuse you and make you quit?",
	"Did the scary monsters and mean robots|make you run to your mommy?",
	"Just remember: before you actually finish this game,|make sure you find the sandalwood box.  Quit now?",
	"Can't take much more of this hardcore action, eh?  |Gotta run like a little baby and go to bed, right?",
	"If you leave now, I'll start working on|summoning a Shoggoth to come tear you apart|while you sleep.  Is that ok?",
	"Hey, guess what?  When you leave,|I'm going to start smacking all the monsters around|so they're REALLY MAD next time you play, ok?",
	"While you're gone, I'm going to keep|working on the Grand Unified Theory, ok?",
	"Are you broken?",
	"Hey, watch out for the Dark Troopers in the|San Francisco episode, ok?",
	"You're not much of a Kraken, are you?",
	"Does this game trigger you?|If so, you're a weak and pathetic rodent|and will be fed to the griffin!"
};

const char *tongue_quit_msgs_rare[] =
{
	"While you're away I think I'll link into some internet|sites and surf for a while.  Is that okay with you?",
	"Get out of me?",
	"Suck it down(tm)?",
	"Has the monkey landed yet?"
};

/* FS: Wasn't originally translated.  Reported by Robert. */
const char *tongue_menu_joystick[] =
{
	"Configure Motion",
	"None",
	"Forward (walk)",
	"Look (pitch)",
	"Side (strafe)",
	"Turn (yaw)",
	"Up",
	"Advanced",
	"Configure joystick axis",
	"Absolute (stick)",
};

/* FS: Seperated these from tongue_menu */
const char *tongue_menu_autoupdate[] =
{
	"Update Available",
	"There is a new version of Daikatana v1.3 available.\nDo you want to download it?\nYou can disable auto-updates in the\noptions menu.",
	"Your PAK files are out of date.\nYou may be using v1.0 PAK files.\nDaikatana v1.3 requires v1.2 PAKs.\nClick the button for upgrade information.",
	"Daikatana will now verify your PAK files\nto ensure they are updated to v1.2.\nThis may take up to 30 seconds on\nold hardware.\nThis check will only be run once.",
	"There is a new map updates pak available.\nThis can affect your connectivity to servers.\nDo you want to download it?\nYou can disable auto-updates in the\noptions menu.",
	"Download Update",
	"Verify PAK Files",
	"No Thanks",
	"Go to dk.toastednet.org.\nContinuing will launch your web browser.",
	"Downloading Update",
	"File: ",
	"Size: ",
	"Status: ",
	"Inactive",
	"Connecting",
	"Downloading",
	"Extracting",
	"Finished",
	"Failed",
	"Abort",
	"OK",
	"Download Finished!",
	"Whats New?"
};
