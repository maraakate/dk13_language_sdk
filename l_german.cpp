#include "l__language.h"

// GERMAN text

keyname_t keynames[] =
{
	{"TAB", K_TAB},
	{"RETURN", K_ENTER},
	{"ESC", K_ESCAPE},
	{"LEERTASTE", K_SPACE},
	{"BACKSPACE", K_BACKSPACE},
	{"PFEIL HOCH", K_UPARROW},
	{"PFEIL RUNTER", K_DOWNARROW},
	{"PFEIL LINKS", K_LEFTARROW},
	{"PFEIL RECHTS", K_RIGHTARROW},
	
	{"ALT", K_ALT},
	{"STRG", K_CTRL},
	{"UMSCHALT", K_SHIFT},
	
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

	{"EINFG", K_INS},
	{"ENTF", K_DEL},
	{"BILD RUNTER", K_PGDN},
	{"BILD HOCH", K_PGUP},
	{"POS 1", K_HOME},
	{"ENDE", K_END},

	{"MAUS 1", K_MOUSE1},
	{"MAUS 2", K_MOUSE2},
	{"MAUS 3", K_MOUSE3},
	{"MAUS 4", K_MOUSE4},	// Knightmare added 5/29/12
	{"MAUS 5", K_MOUSE5},	// Knightmare added 5/29/12

	{"JOY 1", K_JOY1},
	{"JOY 2", K_JOY2},
	{"JOY 3", K_JOY3},
	{"JOY 4", K_JOY4},

	{"AUX 1", K_AUX1},
	{"AUX 2", K_AUX2},
	{"AUX 3", K_AUX3},
	{"AUX 4", K_AUX4},
	{"AUX 5", K_AUX5},
	{"AUX 6", K_AUX6},
	{"AUX 7", K_AUX7},
	{"AUX 8", K_AUX8},
	{"AUX 9", K_AUX9},
	{"AUX 10", K_AUX10},
	{"AUX 11", K_AUX11},
	{"AUX 12", K_AUX12},
	{"AUX 13", K_AUX13},
	{"AUX 14", K_AUX14},
	{"AUX 15", K_AUX15},
	{"AUX 16", K_AUX16},
	{"AUX 17", K_AUX17},
	{"AUX 18", K_AUX18},
	{"AUX 19", K_AUX19},
	{"AUX 20", K_AUX20},
	{"AUX 21", K_AUX21},
	{"AUX 22", K_AUX22},
	{"AUX 23", K_AUX23},
	{"AUX 24", K_AUX24},
	{"AUX 25", K_AUX25},
	{"AUX 26", K_AUX26},
	{"AUX 27", K_AUX27},
	{"AUX 28", K_AUX28},
	{"AUX 29", K_AUX29},
	{"AUX 30", K_AUX30},
	{"AUX 31", K_AUX31},
	{"AUX 32", K_AUX32},

	{"ZB_7",			K_KP_HOME },
	{"ZB_8",		K_KP_UPARROW },
	{"ZB_9",			K_KP_PGUP },
	{"ZB_4",	K_KP_LEFTARROW },
	{"ZB_5",			K_KP_5 },
	{"ZB_6",	K_KP_RIGHTARROW },
	{"ZB_1",			K_KP_END },
	{"ZB_2",	K_KP_DOWNARROW },
	{"ZB_3",			K_KP_PGDN },
	{"ZB_ENTER",		K_KP_ENTER },
	{"ZB_0",			K_KP_INS },
	{"ZB_KOMMA",			K_KP_DEL },
	{"ZB_GETEILT",		K_KP_SLASH },
	{"KP_MINUS",		K_KP_MINUS },
	{"KP_PLUS",			K_KP_PLUS },

	{"MAUSRAD HOCH", K_MWHEELUP },
	{"MAUSRAD RUNTER", K_MWHEELDOWN },

	{"PAUSE", K_PAUSE},

	{"SEMIKOLON", ';'},	// because a raw semicolon seperates commands

	{0,0}
};

// vkey conversion table
//==========================================================================
unsigned char  scantokey[128] =
{
//  0           1       2       3       4       5       6       7 
//  8           9       A       B       C       D       E       F 
    0  ,	27,     '1',    '2',    '3',    '4',    '5',    '6', 
    '7',    '8',    '9',    '0',    'ß',    '´',    K_BACKSPACE, 9, // 0 
    'q',    'w',    'e',    'r',    't',    'z',    'u',    'i', 
    'o',    'p',    'ü',    '+',    13 ,    K_CTRL,'a',  's',      // 1 
    'd',    'f',    'g',    'h',    'j',    'k',    'l',    'ö', 
    'ä',    '`',    K_SHIFT,'<',  'y',    'x',    'c',    'v',      // 2 
    'b',    'n',    'm',    ',',    '.',    '-',    K_SHIFT,'*', 
    K_ALT,' ',   0  ,    K_F1, K_F2, K_F3, K_F4, K_F5,   // 3 
    K_F6, K_F7, K_F8, K_F9, K_F10,  K_PAUSE,    0  , K_HOME, 
    K_UPARROW,K_PGUP,K_KP_MINUS,K_LEFTARROW,K_KP_5,K_RIGHTARROW, K_KP_PLUS,K_END, //4 
    K_DOWNARROW,K_PGDN,K_INS,K_DEL,0,0,             0,              K_F11, 
    K_F12,0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0,        // 5
    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0, 
    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0,        // 6 
    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0, 
    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0  ,    0         // 7 
}; 

char *tongue[] =
{
	"Sie nahmen",              // weapon pickup TX NOTE:+ the items in the weapons section below.
	"Sie verwendeten",                    // health pickup TX NOTE:+ one of the 3 health items below (health kit, Goldenorb, Wraith orb.
	"Sie sind geschützt durch",						  // armor good pickup TX NOTE:+ the items in the armor section below.
	"Sie sind aufgeladen durch",						  // boost pickup TX NOTE:not used - DON'T TRANSLATE.
	"Speicherjuwel aufgehoben",                        // T_PICKUP_SAVEGEM     pick up Save Gem
	
	"STÄRKE",                  // use power boost TX NOTE:must match statusbar.xls .
	"ANGRIFF",                  // use attack boost TX NOTE:must match statusbar.xls .
	"TEMPO",                  // use speed boost TX NOTE:must match statusbar.xls .
	"AKROBATIK",                   // use jump boost TX NOTE:must match statusbar.xls .
	"VITALITÄT",                 // use health boost TX NOTE:must match statusbar.xls .
												
	"Gleich wird's heiß!",              // bomb explode TX NOTE:"let's get out of here!.
	"Sie brauchen eine Flasche, um das zu mischen",  // need bottle to mix ingredients TX NOTE:sentence.
	"Benötigte Gegenstände: ",             // ingredient required TX NOTE:+ bomb item, short desc below.
	"Sie mischen Sprengstoff.",         // bomb created TX NOTE:sentence.
	"Sie fanden ",                // bomb found, TX NOTE:+ one of the ingredients or a bottle.
	"einen Beutel mit Schwefel",						// bomb ingredient 1
	"ein Stück Kohle",              // bomb ingredient 2
	"eine Phiole mit Salpeter",           // bomb ingredient 3
	"eine leere Flasche",             // bomb bottle
	
	"Schwefel",                 // bomb item, short description
	"Kohle",                 // bomb item, short description
	"Salpeter",                // bomb item, short description
												
	"Sie lesen das",              // read book TX NOTE:+ one of two books below.
	"Das können Sie hier nicht verwenden.",        // no read book TX NOTE:sentence.
	"Wyndrax-Zauberbuch",          // Wyndrax spellbook
												
	"Sie nehmen",              // key pickup TX NOTE:one of the 3 following items.
	"den Schlüssel zur Krypta",              // crypt key name
	"den Wyndrax-Schlüssel",             // Wyndrax key name
	"ein Zugangskarte für eine Zelle",          // Prison cell key
	
	"die rote Zugangskarte",						// SCG[11/15/99]: red control card name
	"die blaue Zugangskarte",					// SCG[11/6/99]: blue control card name
	"die grüne Zugangskarte",					// SCG[11/6/99]: green control card name
	"die gelbe Zugangskarte",					// SCG[11/6/99]: yellow control card name
	"den Hex-Schlüsselstein",							// SCG[11/6/99]: hex keystone name
	"den Quad-Schlüsselstein",						// SCG[11/6/99]: quad keystone name
	"den Trigon-Schlüsselstein",						// SCG[11/6/99]: trigon keystone name
	"den Megaschild",							// SCG[11/14/99]: Megashield name
	"den Manaschädel",							// SCG[11/14/99]: 
	"das Gegengift",						// SCG[11/14/99]: 
	"eine Drachme",								// SCG[11/14/99]: 
	"das Horn von Charon",									// SCG[11/14/99]: 
	"eine AEGIS-Tafel mit dem Buchstaben A",				// SCG[11/14/99]: A of AEGIS key name
	"eine AEGIS-Tafel mit dem Buchstaben E",				// SCG[11/14/99]: E of AEGIS key name
	"eine AEGIS-Tafel mit dem Buchstaben G",				// SCG[11/14/99]: G of AEGIS key name
	"eine AEGIS-Tafel mit dem Buchstaben I",				// SCG[11/14/99]: I of AEGIS key name
	"eine AEGIS-Tafel mit dem Buchstaben S",				// SCG[11/14/99]: S of AEGIS key name
	"einen Splitter des Läuterers",					// SCG[11/14/99]: 
	"die schwarze Kiste",							// SCG[11/14/99]: 
	"den Ring des Feuerschutzes",				// SCG[11/14/99]: 
	"den Ring des Schutzes vor Untoten",			// SCG[11/14/99]: 
	"den Ring des Blitzschutzes",			// SCG[11/14/99]: 
	"den Überlebensanzug",							// SCG[11/14/99]: 

	"das Erste-Hilfe-Set",              // health kit
	"die Goldseele",              // Goldensoul
	"die Gespenstersphäre",							// T_WRAITHORB,

	"ein Speicherjuwel",
	"Sie haben kein Speicherjuwel",					//cek[12-13-99]
	"den Heiltrank",							// cek[1-3-00]

	// cek[2-2-00]: altered the following ***********************************************
	"das Wundpäckchen",
	"die Lebensvase",
	"die Heiltrankflasche",
	"die Verbandskiste",
	"den Verbandskasten",
	"Das Gegengift ist leer.\n", // FS: Added CR

// SCG[2/8/00]: messages for completed artifacts
	"Sie haben alle AEGIS-Tafeln gefunden!",
	"Sie haben alle drei Schlüsselsteine gefunden",
	"Sie haben den Läuterer zusammengesetzt!",
	"Sie aßen einige Früchte.\n", // FS
	"Bonus-Speicherjuwel aufgehoben",			// FS
	"Aktueller Gesamtbonus: ",					// FS
};

// menu-related TX NOTE:all independent words -- no grammatical inflection.
char *tongue_menu[] =
{
	"Schritt vor",                 // key bind to Move Forward
	"Schritt zurück",                 // key bind to Move Backward 
	"Seitwärts links",                // key bind to Step Left JG:990802
	"Seitwärts rechts",                // key bind to Step Right JG:990802
	"Angriff",                  // key bind to Attack
	"Springen",                   // key bind to Jump/Up
	"Benutzen",               // key bind to Use/Operate object JG:990802
	"Kriechen",                  // key bind to Crouch/Down
	"Nächste Waffe",               // key bind to Next Weapon
	"Vorherige Waffe",               // key bind to Prev Weapon
	"Drehung links",                // key bind to Turn Left JG:990802
	"Drehung rechts",                // key bind to Turn Right JG:990802
	"Laufen",                   // key bind to Run
	"Seitwärts",                 // key bind to Sidestep JG:990802
	"Blick hoch",                 // key bind to Look Up JG:990802
	"Blick runter",                // key bind to Look Down JG:990802
	"Blick zentrieren",               // key bind to Center View
	"Mausblick",                // key bind to Mouse Look
	"Tastatur-Sicht",                 // key bind to Keyboard Look JG:990802  
	"Vergrößern",                             // key bind to increase screen size
	"Verkleinern",                           // key bind to decrease screen size
	"HUDs zeigen",                            // key bind to Show All Huds
	"Gepäck öffnen",                // key bind to Inventory Open
	"Gegenstand benutzen",              // key bind to Use Item
	"Nächsten Gegenstand",                // key bind to Next Item
	"Vorherigen Gegenstand",                // key bind to Prev Item
	"Partner wechseln",                            // key bind to Swap Sidekick
	"Nächster Befehl",                             // key bind to Command Next
	"Vorheriger Befehl",                             // key bind to Command Prev
	"Befehl anwenden",                            // key bind to Command Apply
	
	ARROW_LEFT_STRING " Links",         // left arrow key
	ARROW_UP_STRING  " Aufwärts",          // up arrow key
	ARROW_DOWN_STRING " Abwärts",         // down arrow key
	ARROW_RIGHT_STRING " Rechts",        // right arrow key
	"--",                    // no bind setting for this key
	
	"ENTER zum Bestätigen; DEL zum Löschen.",   // set/delete key TX NOTE:sentence.
	"Um auszuwählen, ENTER drücken.",         // select key TX NOTE:sentence. JG:990802
	"Um abzubrechen, ESC drücken.",       // set/abort TX NOTE:sentence. JG:990802
	
	"Standard",                 // default button Standardeinstellungen JG:990802
	
	"Keine",                   // no mouse bindings
	"Links/rechts bewegen",             // mouse "move left and right" setting JG:990802
	"Links/rechts drehen",             // mouse "turn left and right" setting JG:990802
	"Oben/unten sehen",               // mouse "look up and down" setting JG:990802
	"Vorwärts/Zurück",              // mouse "move forward and back" setting
	"Y-Achse umkehren",              // reverse mouse axis
	"Mausblick",                // Mouse-Look
	"Blick/Feuern",               // Mouse-strafe
	"X-Achse",                  // x axis
	"Y-Achse",                  // y axis
	"Taste 1",                 // button 1 label
	"Taste 2",                 // button 2 label
	"Taste 3",                 // button 3 label
	"Befehl auswählen (ESC zum Abbrechen).",     // select a command, ESCape to cancel JG:990802
	"Zur Seite drehen",                 // turn left and right, abbreviated
	"Zur Seite gehen",                // strafe left and right, abbreviated
	"Oben/unten sehen",                 // look up and down, abbreviated
	"Vorwärts/Zurück",                 // move forward and back, abbreviated
	"Sensitivität X-Achse",              // mouse sensitivity for x-axis
	"Sensitivität Y-Achse",              // mouse sensitivity for y-axis 
	"Mausoptionen konfigurieren:",         // configure mouse options TX NOTE:sentence.

	"Deathmatch",                               // 'deathmatch' game
	"Deathtag",                                 // 'deathtag' game
	"Kooperativ",               // 'cooperative' game

	"Einfach",                   // easy difficulty
	"Mittel",                  // medium difficulty
	"Schwer",                   // hard difficulty

	"Internetspiel suchen",					// SCG[12/1/99]: 
	"Netzwerkspiel suchen",						// SCG[12/1/99]: 
	"Mehrspielerrunde starten",					// SCG[12/1/99]: 

	"Netzwerk",                                      // local area network game
	"Internet",                                 // internet game

	"Teilnehmen",                   // join server
	"Neu anlegen",                   // new server
	"Hinzufügen" ARROW_DOWN_STRING,          // add address
	"Aktualisieren",                 // refresh network games (13 chars--must enlarge button)
	"Setup",                                    // player setup

	"Übertragungsrate",               // connection speed label
	"28.8 KB",                  // connection type 1
	"56.6 KB",                  // connection type 2
	"ISDN",										// connection type 3
	"Kabel/DSL",                // connection type 4
	"T1/Netzwerk",                  // connection type 5
	"Benutzerdefiniert",               // connection type 6 TX NOTE:user enters his own connection type.

	"Zeitlimit",								// SCG[12/2/99]: 
	"Farbe der Spielfigur",							// SCG[12/2/99]: 
	"Anfangsepisode",							// SCG[12/2/99]: 
	"Mannschaft",								// SCG[12/1/99]: 
	"Flag-Limit",								// SCG[12/1/99]: 
	"Farbe Team 1",								// SCG[12/1/99]: 
	"Farbe Team 2",								// SCG[12/1/99]: 
	"Punktelimit",								// SCG[12/1/99]: 
	"Abschußlimit",								// SCG[12/1/99]: 
	"Level-Limit",								// frag limit
	"Anfangsepisode",							// SCG[12/2/99]: 
	"Karte",									// SCG[12/1/99]: 
	"Spielmodus",                // game mode (deathmatch,deathtag,co-op)
	"Fähigkeiten",               // skill level
	"Zeitlimit",                // time limit
	"Max. Spieler",               // maximum players
	"Spielfigur",                // character
	"Farbe",                // base color
	"Start!",									// start multiplayer game
												
	"Waffen bleiben",               // weapons remain with you into the next area of play
	"Neue Gegenstände",              // items rematerialize on the map JG:990802
	"Sichere Position",               // place user's character at the farthest point from other players 
	"Notausgang",              // allow players to exit the level wihtout being killed first 
	"Gleiche Karte",                 // use the same map as last time
	"Wiederbelebung",              // make the respawn command happen now. JG:990802
	"Sturzschaden",              // players take damage from falling down JG:990802
	"Sofort-Powerups",              // make instant power-ups available in the game
	"Erlaube Powerups",               // allow power-ups to be used in the game JG:990802
	"Erlaube Heilung",               // allow health kits to be used in the game JG:990802
	"Erlaube Rüstung",               // allow armor to be used in the game JG:990802
	"Unbegrenzte Munition",              // unlimited ammunition  JG:990802
	"Sicht beschränken",                // limits the user's field-of-vision JG:990802
	"Mannschaftsspiel",                 // team-play
	"Verletzungen",              // hurt teammates allows players to cause damage to team-mates. JG:990802
	"Schnellwahl",               // allows a player to change weapons faster than normal JG:990802
	"Schritte",                // footsteps become audible or silent 
	"Erlaube Hook",                // allow hook  JG:990802 (grappling hook)
	"Munitionshülsen",              // show shotgun shells?
												
	"Server-IP-Adresse",            // server internet provider address
	"Keine Spiele gefunden",           // no local games found TX NOTE:sentence.
	"Karte starten",               // starting map
	"Servername",               // server name
	"Spielername",               // player name
	"Mannschaft ",                // team name
												
	"Harakiri begehen?",            // confirm quit TX NOTE:Do not translate Harakiri--it's Jpn.
												
	"Ja",										// yes, acknowledgement
	"Nein",										 // no, acknowledgement
	"Speichern",

	"Konf. laden",								//cek[12-6-99]
	"Konf. sichern",							//cek[12-6-99]
	"Konf. löschen",							//cek[12-6-99]
	"Konfigurationsdatei auswählen",				        //cek[12-6-99]
	"Ausgewählte Datei löschen?",						//cek[12-6-99]
	
	"Spiel laden",								//cek[12-6-99]
	"Rüst.",									//cek[12-6-99]
	"Ges.",									        //cek[12-6-99]
	"Stufe",									//cek[12-6-99]
	"Gegner",									//cek[12-6-99]
	"Geheimnisse",									//cek[12-6-99]
	"Zeit",										//cek[12-6-99]
	"Gesamt",									//cek[12-6-99]
	"Episode",									//cek[12-6-99]

	"3D-Sound",								//cek[12-6-99]

	"gespeichert",									//cek[12-7-99]
	"geladen",									//cek[12-7-99]
	"gelöscht",									//cek[12-7-99]

	"Mausglättung",						         		//cek[12-7-99]
	"Rad hoch",									//cek[12-7-99]
	"Rad runter",								//cek[12-7-99]

	"ALT-TAB nicht erlaubt",						//cek[12-7-99]
	"Blut und Gemetzel",						//cek[12-7-99]
	"Waffen bewegen sich",							//cek[12-7-99]
	"Auto-Waffentausch",						//cek[12-7-99]
	"Intensität",									//cek[12-7-99]
	"Glänzende Waffen",							//cek[12-7-99]
	"Einschußlöcher",								// SCG[1/4/00]: 

	"Vorwärts",									//cek[12-9-99]
	"Seitwärts",										//cek[12-9-99]
	"Rauf",										//cek[12-9-99]
	"Steigung",									//cek[12-9-99]
	"Ausweichen",										//cek[12-9-99]
	"Joystick benutzen",								//cek[12-9-99]
	"Achse konfigurieren",							//cek[12-9-99]
	"Joystickoptionen konfigurieren:",				//cek[12-9-99]
	"Eine Funktion für diesen Knopf auswählen",			//cek[12-9-99]
	"Um fortzufahren, Joystickbutton drücken",		//cek[12-9-99]
	"Grenzwert",								//cek[12-9-99]
	"Empfindlichkeit",								//cek[12-9-99]

	"Capture the Flag",							//cek[12-10-99]
	"Zurück",										//cek[12-10-99]
	"56,6 KB",									//cek[12-10-99]
	"Auto",										//cek[12-10-99]
	"Team 1",									//cek[12-10-99]
	"Team 2",									//cek[12-10-99]

	"Intro abspielen",								//cek[12-13-99]
	"Handicap-System",							        //cek[12-13-99]
	"Mausgeschwindigkeit",								//cek[12-13-99]

	"Partner: Nimm",							// cek[1-3-00]
	"Partner: Komm",							// cek[1-3-00]
	"Partner: Angriff",							// cek[1-3-00]
	"Partner: Rückzug",							// cek[1-3-00]
	"Partner: Bleib",							// cek[1-3-00]

	"Wähle Waffe %d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)

	"HUD: durchlaufen",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"HUD: nächstes",									// cek[1-5-00]  -- similar in meaning.
	"HUD: vorheriges",									// cek[1-5-00]
	"HUD: benutzen",									// cek[1-5-00]

	"Nachricht",										// cek[1-11-00]
	"Abschussliste",								// SCG[1/13/00]: 
	"Befehl an Team",								// cek[1-22-00]
	"%s ist bereits %s zugewiesen",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"Ersetzen?",									// cek[1-22-00]

	"Toastednet",								// FS: changed to tnet
	"DK-News",								// cek[2-1-00]
	"Möchten Sie fortfahren?",						// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"Custom-Maps, Mods und mehr gesucht?\nGehen Sie auf dk.toastednet.org.\nMit Klick auf 'Ja' starten Sie ihren Browser.",	// FS: changed to tnet
	"Sie wünschen Neuigkeiten zu Daikatana?\nDann suchen Sie www.daikatananews.net auf.\nMit Klick auf 'Ja' starten Sie ihren Browser.",	// FS: changed to dknews			// cek[2-1-00]

	"Waffe %d",									// cek[3-6-00]: treat as "weapon 1"
	"Abbrechen",									// cek[3-9-00]
	"www.daikatananews.net", // FS: changed to dknews													// cek[3-9-00]
	"Zu www.daikatananews.net wechseln?\nMit Klick auf 'Ja' starten Sie ihren Browser.",			// cek[3-9-00]
	
	"Waffenkonfiguration", // FS
	"Instagib", // FS
	"Deathmatch Kommentar", // FS
	"Unbegrenzt speichern", // FS
	"CTF/DT Hinweise", // FS
	"Nach Updates suchen", // FS

	"Hinweis zu Mini-Drivers",	// Knightmare added 2/20/13
	"Diese Version von Daikatana unterstützt nicht\nlänger die 3DFX und PowerVR Mini-Treiber.\n3DFX Usern wird dringend empfohlen die\nMetabyte WickedGL-Treiber zu benutzen.",	// Knightmare added 2/20/13
	"Download WickedGL-Treiber",		// Knightmare added 2/20/13
	"Zu www.3dfxzone.it wechseln? \nMit Klick auf 'Ja' starten Sie ihren Browser.",	// Knightmare added 2/20/13
	"Zu OpenGL-Standard wechseln?",	// Knightmare added 2/20/13

	"Screenshot",	// Knightmare added 1/21/14
	"Stiller Screenshot",	// Knightmare added 1/21/14
	"Erfahrungspunkte teilen",	// Knightmare added 2/1/14
	"Spiel löschen",	// Knightmare added 2/7/14
	"Ausgewähltes Spiel löschen?",	// Knightmare added 2/7/14
	"Umschalttaste", // FS: For Mouse and Joystick
	"Wir haben viel Zeit darauf verwandt, die original\nKarten zu reparieren und haben außerdem weitere\nBesonderheiten, wie Regeneration der Gesundheit\nund einer verbesserten Partner-KI hinzugefügt.\nDas Spiel macht mehr Spaß mit Partnern.", // FS: For no sidekicks
	"Wollen Sie wirklich ohne Partner spielen?", // FS: For no sidekicks

	"Erhöhe Stärke",		// FS: Added by request
	"Erhöhe Angriff",		// FS: Added by request
	"Erhöhe Tempo",		// FS: Added by request
	"Erhöhe Akrobatik",		// FS: Added by request
	"Erhöhe Vitalität",	// FS: Added by request

	"Taste 4",			// Knightmare 1/30/15- button 4 label
	"Taste 5"			// Knightmare 1/30/15- button 5 label
};

char *tongue_menu_options[] =
{
	"Immer laufen",                // makes user's characters run everywhere
	"Schauen und springen",                // look + jump
	"Schauen und feuern",                // look + strafe (shoot wildly)
	"Automatisch zielen",              // computer aims at nearest target for the user
	"Fadenkreuz",                // a crosshair is displayed 
	"Waffe sichtbar",              // weapon is visible
	"Untertitel",                   //subtitles

	"SFX-Lautstärke",           // volume for sound fx
	"Musiklautstärke",               // volume for music
	"Filmlautstärke",                         // volume for cinematics

	"Software",                                 // video mode, software
	"OpenGL",                                   // video mode, opengl
	"Änderungen übernehmen",              // apply video mode changes TX NOTE:sentence.

	"Vollbild",                // make view use the full screen
	"Schatten",                 // allow shadows
	"Treiber",                  // video driver
	"Auflösung",                // choose/set screen display resolution
	"Bildschirmgröße",               // choose/set screen size
	"Helligkeit",                // choose/set brightness
	"Texturqualität",             // choose/set quality of 3D image textures 
	"Statusleiste sichtbar",           // choose/set whether the status bar is visible.
	"Nebel- und Wasserdetails",				// SCG[12/4/99]: 
	"Ronin",									// difficulty level easy
	"Samurai",									// difficulty level medium
	"Shogun",									// difficulty level hard

	"Schnee und Regen",							// cek[1-11-00]
	"Nebel",										// cek[1-11-00]		
	
	"Powerup-Geräusche wiedergeben", // FS
	"Fehlende Sounds abspielen", // FS
	"Partnerdialoge wiedergeben", // FS

	"Anisotrope Filterung",	// Knightmare added 5/29/12
	"Benutzerdefinierte Breite",	// Knightmare added 5/29/12
	"Benutzerdefinierte Höhe",	// Knightmare added 5/29/12
	"Statusleiste Größe",		// Knightmare added 6/14/12
	"Vertikale Sync.",		// Knightmare added 10/4/12
	"Async. Refresh",		// Knightmare added 10/4/12
	"Aktualisierungsrate",		// Knightmare added 10/4/12
	"Screenshot-Format",			// Knightmare added 3/11/13
	"Punkt",				// Knightmare added 5/10/13
	"Volume",			// Knightmare added 5/10/13

	"Download-Optionen",		// Knightmare added 11/19/13
	"Ermögliche Download",	// Knightmare added 11/19/13
	"Ermögliche HTTP Download",	// FS added 03/29/15
	"Karten / Texturen",		// Knightmare added 11/19/13
	"Sounds",				// Knightmare added 11/19/13
	"Modelle",				// Knightmare added 11/19/13
	"Sound-Rate",			// Knightmare added 2/2/14
	"Audio-Engine",			// Knightmare added 7/8/16
	"Sprache", /* FS: Multi-Lang DLL */
	"Keine Partner", /* FS: No sidekicks new game option */
	"Bonus Speicherjuwel", /* FS: Bonus save gems */

	/* FS: More Options! */
	"Seite 1",
	"Seite 2",
	"Framerate anzeigen",
	"Q3A Konsolenbefehle",
	"Zwischensequenzen",
	"Autovervollständigung",
	"Chat-Nachricht",
	"Sidekick Warnung",
	"Auto-Demoaufnahme",
	"Schadenstreffer",
	"Uhrzeit zeigen",
	"Chat-Warteschlange",
	"Bevorzugtes Musikformat",
	// Knightmare added 3/5/17
	"Lauter Ladebildschirm",
	"Antialiasing", /* FS */

	/* FS: Window mode picker */
	"Window Mode",
	"Windowed",
	"Borderless",

	/* FS: Video Options Page 2 */
	"Self Shadows",
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
};

//descriptions for the texture quality settings.
char *texture_quality_desc[] =
{
	"Voll",
	"Halb",
	"1/4",
	"1/8"
};

// weapon names TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
char *tongue_weapons[] =
{
	"keine Munition",		//only shows up if you have no ammo for the weapon you're trying to use. TX NOTE:treat like sentence "you have "no ammo".
	"Ballista",
	"Munition für die Ballista",
	"den Bolzer",
	"Bolzen",
	"C4-Vitzatergo",
	"C4-Pakete",
	"das Daikatana",
	"den Diskus von Dädalus",
	"den Diskus",
	"den Disruptor-Handschuh",
	"die Automark 2020", //TX NOTE:a ficticious automatic pistol--US game currently reads "Glock", but that's a trademark.
	"einige Gewehrkugeln",
	"einen Hammer",
	"den Ionen-Blaster",
	"das Ionenpack",					// SCG[11/28/99]: [accusative=You picked up...]
	"Kineticore",
	"Rail-Ball",
	"Metamaser",
	"Munition für den Metamaser",
	"Nharres Alptraum",
	"ein bißchen Fleisch",					// SCG[11/28/99]: 
	"Novastrahl",
	"Novapack",								//JK [01/26/00]
	"Ripgun",
	"Rip-Ups",					// Knightmare changed 8/29/14
	"Shockwelle",
	"Schock-Sphäre",
	"Shotcycler",
	"Munition",
	"Sidewinder",
	"Sidewinder-Raketen",			// SCG[11/28/99]: 
	"Silberkralle",
	"Slugger",
	"Slugs",
	"Stavros' Stab",
	"Lava-Steine",
	"Sunflare",
	"Sunflare",
	"Poseidons Dreizack",
	"Dreizack-Spitzen",
	"Gifter",
	"Gift einer Kobra",					// SCG[11/28/99]: 
	"Wyndrax Hauch",
	"Hauchladungen",
	"Hand des Zeus",
	"Bolzen",
	"Ultimative Gashände",

// FS: Needed for Configure Weapons Menu
	"Ionen-Blaster",
	"C4-Vitzatergo",
	"Shotcycler",
	"Sidewinder",
	"Shockwelle",
	"Diskus von Dädalus",
	"Gifter",
	"Sunflare",
	"Hammer",
	"Poseidons Dreizack",
	"Hand des Zeus",
	"Bolzer",
	"Stavros' Stab",
	"Ballista",
	"Wyndrax Hauch",
	"Nharres Alptraum",
	"Automark 2020",
	"Slugger",
	"Kineticore",
	"Ripgun",
	"Novastrahl",
	"Metamaser",

	// Knightmare 8/29/13- Cordite grenades was stealing ripgun ammo identifier
	"Cordit-Granaten"
};

// armor TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
char *tongue_armors[] =
{
	"Eisenrüstung",
	"Chromrüstung",
	"Silberrüstung",
	"Goldrüstung",
	"Kettenrüstung",
	"Rüstung aus schwarzem Adamant",
	"Kevlar-Rüstung",
	"Ebonit-Rüstung"
};

// monster names TX NOTE:NOMINITIVE CASE. translate what you can. "localize" spellings of anything else.
char *tongue_monsters[] =
{
	"RoboCo-Kampfeber",
	"Schwarzer Gefangene",
	"Buboid",
	"RoboCo-Cambot",
	"Zenturio",
	"Cerberus",
	"Fliegender Schütze",
	"Karyatide",
	"RoboCo-Krokodil",
	"RoboCo-Todessphäre",
	"Fledermaus des Todes",
	"Drache",
	"Zwerg",
	"Femgang",
	"Fährmann",
	"Bogenschütze",
	"RoboCo-Froschinator",
	"König Garroth",
	"Goldfisch",
	"Griffon",
	"Harpyie",
	"Mitgefangener",
	"Kage",
	"Paladin des Höllenfeuers",
	"Voltaische Walküre",
	"Laboraffe",
	"Laborarbeiter",
	"RoboCo-Lasergat",
	"Lycanthir",
	"Medusa",
	"Mishimas Wachen",
	"Nharre der Totenbeschörer",
	"Pest-Ratte",
	"Kanal-Ratte",
	"Priester",
	"Gefangener",
	"RoboCo-Protopod",
	"Psyclaw",
	"Roboco RageMaster 5000",
	"Raketen-Gang-Mitglied",
	"SEAL-Raketenkanonier",
	"Rotwurm",
	"Satyr",
	"SEAL-Kämpfer",
	"SEAL-Captain",
	"SEAL-Schütze",
	"Hai",
	"Schlachter",
	"Skelett",
	"Arbeiter",
	"Fetter Arbeiter",
	"Roboco-Drecksarbeiter",
	"Kleine Spinne",
	"Spinne",
	"Stavros der Zauberer",
	"Chirurg",
	"Dieb",
	"RoboCo Donner-Skeet",
	"Uzi-Gang-Mitglied",
	"Weißer Gefangene",
	"Magier",
	"Wyndrax der Magier",
	"Möwe",
	"Feuerfliege",
	"Wispe",
	"Mikkiko",
	"Geist",
	"Der DopeFisch",
};

char *tongue_world[] =
{
	"weitere Sache(n) gibt's zu tun.",                 // triggers to go until sequence complete TX NOTE:## +.
	"Sequenz vollständig",             // trigger sequence completed TX NOTE:sentence.
	
	"Sie brauchen",               // need a specific key TX NOTE:followed by the key needed.
	"Sie brauchen den richtigen Schlüssel.\n",        // wrong key in possession TX NOTE:sentence.
	"Kann nicht auf diesem Weg geöffnet werden.\n",
	
	"Die Wirkung des Giftes läßt nach.\n",  // poison expiring TX NOTE:sentence.
	"Ihre Sauerstoffflasche ist fast leer.\n",      // oxylung expiring TX NOTE:sentence.
	"Ihre Überlebensanzug bietet gleich keinen Schutz mehr.\n",        // envirosuit expiring TX NOTE:sentence.
	"Grüner Elf mag schlechtes Essen.\n",         // megashield expiring TX NOTE:sentence.
	"Die Gespenstersphäre wird schwächer.\n",          // wraith orb expiring TX NOTE:sentence.
	"Die Extra-Energie ist fast aufgebraucht.\n",				 // power boost expiring TX NOTE:sentence.
	"Die Extra-Angriffsstärke läßt nach.\n",        // attack boost expiring TX NOTE:sentence.
	"Der Geschwindigkeitschub wird schwächer.\n",         // speed boost expiring TX NOTE:sentence.
	"Der Akrobatikschub ist wird schwächer.\n",       // jump boost expiring TX NOTE:sentence.
	"Der Vitalitätsschub ist wird schwächer.\n",       // health boost expiring TX NOTE:sentence.
	
	"ist dem Spiel beigetreten",              // player joined the game TX NOTE:NAME +.
	"hat das Level verlassen",              // player exited the level TX NOTE:NAME +.
	
	"Hiro Miyamoto",               // Hiro Miyamoto's full name TX NOTE:same as in script.
	"Superfly Johnson",              // Superfly's full name TX NOTE:same as in script.
	"Mikiko Ebihara",               // Mikiko's full name TX NOTE:same as in script.
	
	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"Sie wurden wegen Spamming gekickt",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK // FS: Updated this
	"wurde wegen Spamming gekickt",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK // FS: Updated this
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"Unbekannter Spieler",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER // FS: Updated this
	
	"Kann den Bereich nicht verlassen: Es fehl(t/en): \n",					// SCG[10/18/99]: no exiting level without sidekicks 
	"Kann nicht gehen ohne: \n",					// SCG[10/18/99]: no exiting level without sidekicks 
	"Vergiftet!\n",									// NSS[11/29/99]: Needed a generic and yet global poisoned message

	"Du hast ein Geheimnis entdeckt!\n",						// cek[1-3-00]
	"Die Wirkung des Manaschädel läßt nach.\n",
	"Festgenagelt!\n", // FS
	"Massaker!\n", // FS
	"Frohe Feiertage von der Daikatana 1.3 Team!\n", // FS
	"und" // FS
};

char *tongue_deathmsg_daikatana[] =
{
	"%s wird aufgeschlitzt von %s\n"				//Daikatana
};

char *tongue_deathmsg_self[] =
{
	"'s Schädel scheint aufgeplatzt zu sein.\n",             // death, fell TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"hat zuviel Wasser inhaliert.\n",               // death, drowned TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"ist schön knusprig.\n",                // death, lava TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"ist weggeschleimt worden.\n",                 // death, slimed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"hat sich den Magen verdorben.\n",                // death, poison TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"war des Lebens überdrüssig.\n",           // death, killed self TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"ist verteleportiert.\n",              // death, teleport TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"wurde eingestampft.\n",              // death, crushed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	
	"hat sich an C4 verschluckt.\n",            // death, C4 explosives TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"wurde festgefroren.\n",							// FS: death, frozen
	"vom Blitz erschlagen.\n"                   // FS: death, shocked by lightning bolts in e3

};

char *tongue_deathmsg_weapon1[] =		// %s = name of attacker/victim
{
	"%s wurde von %s gedemütigt!\n",					//disruptor glove- NOTE:use your own appropriate slang.
	"%s verpaßte %s den letzten Husten!\n",			//ultimate gashands
	"%s wurde von %s ionisiert!\n",					//Ion blaster
	"%s hat %s gleichmäßig verteilt!\n",					//C4
	"%s hat %s seinen Doppellauf verpaßt!\n",					//Shotcycler
	"%s geht dank %s ab wie eine Rakete!\n",						//Sidewinder
	"%s hat %s geschüttelt, nicht gerührt!\n"							//Shockwave
};

char *tongue_deathmsg_weapon2[] =		// %s = name of attacker/victim
{
	"%s hat mit %s Dodgeball gespielt!\n",		//Discus- NOTE:use your own appropriate slang.
	"%s hat %s vergiftet!\n",						//venomous
	"%s hat %s schön knusprig gebräunt!\n",		//Sunflare
	"%s hat %s geplättet!\n",						//Hammer
	"%s hat %s gebissen!\n",					//trident
	"%s kniet vor Zeus nieder!\n"					//Zeus
};

char *tongue_deathmsg_weapon3[] =		// %s = name of attacker/victim
{
	"%s wurde von %s tranchiert!\n",			//Silverclaw- NOTE:use your own appropriate slang.
	"%s hat %s den Ast abgeknickt!\n",						//Bolter
	"%s hat %s etwas Holz überreicht!\n",					//Ballista
	"%s wurde von %ss Meteor verkokelt!\n",		//Stave
	"%s steht dank %s tierisch unter Strom!\n",	//Wisp
	"%s hat %ss Dämon kennengelernt!\n"				//Nightmare
};

char *tongue_deathmsg_weapon4[] =		// %s = name of attacker/victim
{
	"%s hat %s eine Metallfüllung verpaßt!\n",					//Glock- NOTE:use your own appropriate slang.
	"%s bombardiert %s!\n",						//Slugger
	"%s wurde von %s geschnetzelt!\n",				//Ripgun
	"%s hat mit %s eine ziemliche Sauerei veranstaltet!\n",				//Cordite
	"%s wurde von %s vereist!\n",						//Kineticore
	"%s hat %s gelocht und abgeheftet!\n",					//Novebeam
	"%s bekam Masern von %s!\n"						//Metamaser
};

char *tongue_scoreboard[] =
{
	"Name",
	"Abschüsse",
	"Ping",
	"Zeit",
	"Schüsse",
	"Treffer",
	"Gestorben",
	"Punkte"										// cek[1-22-00]

};

char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"Schwierigkeitsgrad wählen:",      // difficulty header TX NOTE:using karate skill levels.
	"Ronin",	                   // newbie
	"Samurai",                    // average
	"Shogun"                    // expert (or so they think!)
};

char *tongue_skincolors[] =
{
	"Blau",             // blue
	"Grün",            // green
	"Rot",             // red
	"Gold"                          // gold
};

char *tongue_statbar[] =
{
	"STÄRKE",             // skill 'power' label
	"ANGRIFF",            // skill 'attack' label
	"TEMPO",              // skill 'speed' label
	"AKROBATIK",          // skill 'acrobatic' label
	"VITALITÄT",          // skill 'vitality' label

	"RÜSTUNG",              // armor label
	"GESUNDHEIT",					// health label
	"MUNITION",						// ammo label
	"ABSCHÜSSE",					    // kills label
	"STUFE", 		// experience points label

	"STUFE HOCH!",          // experience level up
	"Wählen",     // select skill
	"Erfahrungspunkt zuweisen",  // add point to skill

	"Lädt..."                    // loading new level
};

char *tongue_weapon_misc[] =
{
    "C4-Ladungen werden instabil!"    // C4 modules are de-stabilizing
};

char *tongue_sidekick[] =    // sidekick commands
{
	"Heb's auf",	                    // 'get', 'pick up' item command
	"Komm' her",                      // 'come here', 'come to me'
	"Bleib",                          // 'stay' command, 'don't move'
	"Greif' an",                      // 'attack' command
	"Rückzug",                // 'back off', 'move away'

	"Gib mir"                      //  asking to pick up an item: "Can I have the ...?" or "i need the..."
};

char *tongue_ctf[] =
{
	"Rote Flagge",
	"Blaue Flagge",
	"Unbekanntes Team",

	"%s Flagge",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"Rot",
	"Blau",
	"Chrom",
	"Stahl",
	"Grün",
	"Orange",
	"Lila",
	"Gelb",

	"Spielstand jetzt %s:%d, %s:%d\n",
	"Sie erobern die %s!\n",
	"%s aus Ihrem Team erobert die %s!\n",
	"%s vom Team %s erobert Ihre Flagge!\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"Sie schnappen sich die %s\n",
	"%s aus Ihrem Team schnappt sich die %s\n",
	"%s hat Ihre Fahne gestohlen\n",
	"Die %s wurde zurückgebracht\n",

	"%d ist eine ungültige Teamnummer. Verwenden Sie 1 oder 2\n",
	"Sie gehören zu Team %d (%s)\n",
	"Sie sind schon in Team %d\n",
	"%s schließt sich Team %s an\n",									// translate same as with the %s team above

	"Das Team %s hat gewonnen!\nEndergebnis: %s:%d, %s:%d\n",		// translate same as with the %s team above
	"Das Spiel endet unentschieden!\n",
	"Die Zeit ist abgelaufen!\n",
	"Das Limit wurde erreicht!\n",

	"Sie bereit für Überstunden!\n", // FS
	"Sie haben die gegnerische Flagge. Zurück zur Basis!\n", // FS
	"Die Gegner haben eure Fahne! Holt sie Euch zurück!\n" // FS
};

char *tongue_deathtag[] =
{
	"Bombe",														// as in backpack
	"%s Bombe",													// as in red pack
	"Punktelimit erreicht!\n",
	"Ihre Zeit wird knapp!\n",
	"Ihre Zeit ist abgelaufen!\n",

	"%s vom Team %s schnappt sich die %s!\n",				// translate using the '%s team' guidelines above

	"Ihr Team erhält einen Punkt!\n",
	"Ihr Team erhält %d Punkte!\n",								// you get 2 points
	"Das %s Team erhält einen Punkt!\n",								// translate using the '%s team' guidelines above
	"Das %s Team erhält %d Punkte!\n",							// The red team gets 2 points

	"Sie punkten!\n",
	"%s aus Ihrem Team hat Punkte gemacht!\n",
	"%s vom Team %s hat Punkte gemacht!\n",

	"Sie haben die Bombe! Mach' den Punkt!\n", // FS
	"Das andere Team hat seine Bombe!\n" // FS
};

/* FS: v1.2 additions */
char *tongue_save_error[] =
{
	"Speichern ist nur in einem lokalen Spiel möglich!\n",
	"Sir, ohne Spiel - kein Speichern!\n",
	"Im Deathmatch-Modus können Sie nicht speichern!\n",
	"Während einer Filmsequenz können Sie nicht speichern!\n",
	"Wenn Sie tot sind, können Sie auch nicht speichern!\n",
	"Während der Pause können Sie nicht speichern!\n",
	"Hier können Sie nicht speichern!\n"
};

/* FS: Mult-Lang DLL */
char *tongue_quit_msgs[] =
{
	"Du dachtest wohl, du wärst groß und stark,|aber bist wirklich nur ein kleines Baby, oder?",
	// "Ya thought you were a big boy, but you're|really just a baby boy, aren't you?",

	"Willst du dieses Spiel aufgeben,|wie alles andere im Leben?",
	// "Are you gonna quit this game just like|you quit everything else in life?",

	"Gehst du, weil die schöne Harfenmusik und die|schaurigen Grillen dich zum Weinen bringen?",
	// "Does the pretty harp music and the scary|crickets make you cry and quit?",

	"Beendest du, weil diese ganzen Zeitreisen|dich fertig machen und verwirren?",
	// "Does all this time travel really boggle|you down, confuse you and make you quit?",

	"Rennst du aus Angst vor den gruseligen Monstern|und gemeinen Robotern zu deiner Mami?",
	// "Did the scary monsters and mean robots|make you run to your mommy?",

	"Denk daran: Du bist erst wirklich fertig mit dem Spiel,|wenn du den Dopefish gefunden hast. Jetzt beenden?",
	// "Just remember: you haven't actually finished this game,|if you haven't found the Dopefish.  Quit now?",

	"Du erträgst diese Hardcore Action wohl nicht mehr?|Rennst weg wie ein kleines Baby|und musst ins Bett, was?",
	// "Can't take much more of this hardcore action, eh?  |Gotta run like a little baby and go to bed, right?",

	"Wenn du jetzt gehst, fange ich an einen|Shoggoth zu beschwören der dich zerfetzen wird,|während du schläfst. Ist das ok?",
	// "If you leave now, I'll start working on|summoning a Shoggoth to come tear you apart|while you sleep.  Is that ok?",

	"Weißt du was? Während du weg bist, haue ich|den ganzen Monstern auf die Fresse, so dass|sie WIRKLICH SAUER sind, wenn du das nächste|Mal spielst, ok?",
	// "Hey, guess what?  When you leave,|I'm going to start smacking all the monsters around|so they're REALLY MAD next time you play, ok?",

	"Während du weg bist werde ich beweisen ob|P != NP ist, ok?", // oder "Während du weg bist, arbeite ich weiter an der großen vereinheitlichten Theorie, ok?"
	// "While you're gone, I'm going to keep|working on the Grand Unified Theory, ok?",

	"Was zur Hölle ist bei dir eigentlich schiefgelaufen?", 
	// "Are you broken?",

	"Hey, nimm dich in Acht vor den düsteren Navy|Seals in der San Francisco Episode, ok?", 
	// "Hey, watch out for the Dark Troopers in the|San Francisco episode, ok?",

	"Du bist kein besonders toller Hecht, oder?", 
	// "You're not much of a Kraken, are you?"

	"Ist das Spiel der Auslöser?|Wenn ja, bist du ein schwaches und erbärmliches|Nagetier und wirst an dem Greif verfüttert!"
	// "Does this game trigger you?  If so, you're a weak and pathetic rodent and will be fed to the griffin!"
};

char *tongue_quit_msgs_rare[] =
{
	"Während du weg bist, werde ich ein bisschen|im Internet surfen. Einverstanden?",	// "While you're away I think I'll link into some internet|sites and surf for a while.  Is that okay with you?",
	"Willst du aus mir raus?", // "Get out of me?",
	"Schluckst du?", // "Suck it down(tm)?",
	"Ist der Affe schon gelandet?", // "Has the monkey landed yet?"
};

/* FS: Wasn't originally translated.  Reported by Robert. */
char *tongue_menu_joystick[] =
{
	"Konfiguriere Bewegung",
	"Keine",
	"Vorwärts/Rückwärts",
	"Hoch/runter gucken",
	"Seitwärts laufen",
	"Drehen" /* or "Links/rechts gucken" */,
	"Hoch", "Erweitert",
	"Konfiguriere Joystick-Achse",
	"Absolut (Stick)"
};

/* FS: Seperated these from tongue_menu */
char *tongue_menu_autoupdate[] =
{
	"Update verfügbar",
	"Eine neue Version von Daikatana v1.3\nist verfügbar.",
	"Ihre PAK-Dateien sind veraltet.\nEs können keine v1.0 PAK-Dateien verwendet werden.\nDaikatana v1.3 benötigt v1.2 PAK-Dateien.\nFür das Upgrade hier klicken.",
	"Daikatana wird die PAK-Dateien verifizieren.\nDie Überprüfung kann auf älteren Computern 30 Sek.\ndauern und wird nur ein einziges Mal durchgeführt.",
	"Eine neue Version von Daikatana v1.3 Karten\nist verfügbar.",
	"Update herunterladen",
	"PAK-Dateien verifizieren",
	"Nein Danke",
	"Zu dk.toastednet.org wechseln?\nMit Klick auf 'Ja' starten Sie ihren Browser.",
	"Update wird heruntergeladen",
	"Datei: ",
	"Größe: ",
	"Status: ",
	"Inaktiv",
	"Verbinden",
	"Wird heruntergeladen",
	"Extrahieren",
	"Fertig",
	"Versagen",
	"Abbrechen",
	"OK",
	"Download fertig!"
};
