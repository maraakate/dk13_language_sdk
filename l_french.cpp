#include "l__language.h"

// FRENCH text

keyname_t keynames[] =
{
	{"TAB", K_TAB},
	{"ENTREE", K_ENTER},
	{"ECHAP", K_ESCAPE},
	{"ESPACE", K_SPACE},
	{"RETOUR", K_BACKSPACE},
	{"HAUT", K_UPARROW},
	{"BAS", K_DOWNARROW},
	{"GAUCHE", K_LEFTARROW},
	{"DROITE", K_RIGHTARROW},
	
	{"ALT", K_ALT},
	{"CTRL", K_CTRL},
	{"MAJ", K_SHIFT},
	
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
	
	{"INSER", K_INS},
	{"SUPPR", K_DEL},
	{"PBAS", K_PGDN},
	{"PHAUT", K_PGUP},
	{"ORIGINE", K_HOME},
	{"FIN", K_END},
	
	{"SOURIS1", K_MOUSE1},
	{"SOURIS2", K_MOUSE2},
	{"SOURIS3", K_MOUSE3},
	{"SOURIS4", K_MOUSE4},	// Knightmare added 5/29/12
	{"SOURIS5", K_MOUSE5},	// Knightmare added 5/29/12
	
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
	
	{"PV_7",			K_KP_HOME },
	{"PV_8",		K_KP_UPARROW },
	{"PV_9",			K_KP_PGUP },
	{"PV_4",	K_KP_LEFTARROW },
	{"PV_5",			K_KP_5 },
	{"PV_6",	K_KP_RIGHTARROW },
	{"PV_1",			K_KP_END },
	{"PV_2",	K_KP_DOWNARROW },
	{"PV_3",			K_KP_PGDN },
	{"PV_ENTR",		K_KP_ENTER },
	{"PV_0",			K_KP_INS },
	{"PV_.",			K_KP_DEL },
	{"PV_/",		K_KP_SLASH },
	{"PV_-",		K_KP_MINUS },
	{"PV_+",			K_KP_PLUS },
	
	{"MOLHAUT", K_MWHEELUP },
	{"MOLBAS", K_MWHEELDOWN },
	
	{"PAUSE", K_PAUSE},
	
	{"M", ';'},	// because a raw semicolon seperates commands
	
	{0,0}
};

// vkey conversion table
//==========================================================================
const unsigned char scantokey[128] =
{
//  0           1       2       3       4       5       6       7
//  8           9       A       B       C       D       E       F 
    0  ,	27,     '1',    '2',    '3',    '4',    '5',    '6', 
    '7',    '8',    '9',    '0',    ')',    '=',    K_BACKSPACE, 9, // 0 
    'a',    'z',    'e',    'r',    't',    'y',    'u',    'i', 
    'o',    'p',    '^',    '$',    13 ,    K_CTRL,'q',  's',      // 1 
    'd',    'f',    'g',    'h',    'j',    'k',    'l',    'm', 
    '�' ,    '`',    K_SHIFT,'\\',  'w',    'x',    'c',    'v',      // 2 
    'b',    'n',    ',',    ';',    ':',    '!',    K_SHIFT,'*', 
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

const char *tongue[] =
{
	"Vous avez ramass�",                            // weapon pickup TX NOTE:+ the items in the weapons section below.
	"Vous avez ramass�",			                // health pickup TX NOTE:+ one of the 3 health items below (health kit, Goldenorb, Wraith orb.
	"Vous avez ramass�",						    // armor good pickup TX NOTE:+ the items in the armor section below.
	"Vous avez ramass�",						    // boost pickup TX NOTE:not used - DON'T TRANSLATE.
	"Gemme de sauvegarde r�cup�r�e",            // pick up 'save gem'
	
	"FORCE",                                    // use power boost TX NOTE:must match statusbar.xls .
	"ADRESSE",                                   // use attack boost TX NOTE:must match statusbar.xls .
	"VITESSE",                                    // use speed boost TX NOTE:must match statusbar.xls .
	"AGILITE",                                     // use jump boost TX NOTE:must match statusbar.xls .
	"VITALITE",                                 // use health boost TX NOTE:must match statusbar.xls .
	
	"Va falloir se bouger !",                           // bomb explode TX NOTE:"let's get out of here!.
	"Vous avez besoin d'une bouteille.",    // need bottle to mix ingredients TX NOTE:sentence.
	"Objets n�cessaires :",                          // ingredient required TX NOTE:+ bomb item, short desc below.
	"Vous avez cr�� un explosif...",                  // bomb created TX NOTE:sentence.
	"Vous avez trouv�",                                // bomb found, TX NOTE:+ one of the ingredients or a bottle.
	"une poche de soufre",						// bomb ingredient 1
	"un morceau de charbon",                           // bomb ingredient 2
	"une fiole de salp�tre",                      // bomb ingredient 3
	"une bouteille vide",                          // bomb bottle
	
	"soufre",                                  // bomb item, short description
	"charbon",                                 // bomb item, short description
	"salp�tre",                                // bomb item, short description
	
	"Vous avez lu",                            // read book TX NOTE:+ one of two books below.
	"Vous ne pouvez pas le faire.",                // no read book TX NOTE:sentence.
	"le Livre de Sorts de Wyndrax",                    // Wyndrax spellbook
	//	"le Manuscrit Satanique",                 // Satanic book of evil TX NOTE: Removed 12/9/99
	
	"Vous avez ramass�",                            // key pickup TX NOTE:one of the 3 following items.
	"la cl� de la crypte",                            // crypt key name
	"la cl� de Wyndrax",                          // Wyndrax key name
	"une cl� de cellule",                    // Prison cell key
	
	"la carte d'acc�s rouge",						// SCG[11/15/99]: red control card name
	"la carte d'acc�s bleue",					// SCG[11/6/99]: blue control card name
	"la carte d'acc�s verte",					// SCG[11/6/99]: green control card name
	"la carte d'acc�s jaune",					// SCG[11/6/99]: yellow control card name
	"la cl� de pierre hexagonale",							// SCG[11/6/99]: hex keystone name
	"la cl� de pierre carr�e",						// SCG[11/6/99]: quad keystone name
	"la cl� de pierre triangulaire",						// SCG[11/6/99]: trigon keystone name
	"le M�gabouclier",							// SCG[11/14/99]: Megashield name
	"le Cr�ne de Mana",							// SCG[11/14/99]: 
	"l'Antidote.",						// SCG[11/14/99]: 
	"le Drachme.",								// SCG[11/14/99]: 
	"la Corne de Charon.",									// SCG[11/14/99]: 
	"une tablette avec la lettre Aplha",				// SCG[11/14/99]: A of AEGIS key name
	"une tablette avec la lettre Epsilon",				// SCG[11/14/99]: E of AEGIS key name
	"une tablette avec la lettre Gamma",				// SCG[11/14/99]: G of AEGIS key name
	"une tablette avec la lettre Iota",				// SCG[11/14/99]: I of AEGIS key name
	"une tablette avec la lettre Sigma",				// SCG[11/14/99]: S of AEGIS key name
	"un �clat du Purificateur",					// SCG[11/14/99]: 
	"le coffret noir",							// SCG[11/14/99]: 
	"l'anneau de protection contre le feu",				// SCG[11/14/99]: 
	"l'anneau de protection contre les mort-vivants",			// SCG[11/14/99]: 
	"l'anneau de protection contre la foudre",			// SCG[11/14/99]: 
	"l'envirocombinaison",							// SCG[11/14/99]: 
	
	"le kit de sant�",                           // health kit
	"l'Ame Dor�e",                           // Goldensoul
	"l'Orbe de l'ombre",							// wraith orb
	
	"une Gemme de sauvegarde",                  // 'save gem'
	"Vous n'avez pas des Gemmes des sauvegardez",		// JK [12-13-99]
	"la fiole de sant�",							   // cek[1-3-00]

	// cek[2-2-00]: altered the following ***********************************************
	"le pack de sant�",
	"le flacon de vie",
	"la flasque de sant�",
	"la caisse de sant�",
	"la bo�te de sant�",
	"Plus d'antidote.\n", /* FS: Added CR */

	// SCG[2/8/00]: messages for completed artifacts
	"Vous avez d�couvert toutes les tablettes AEGIS !",
	"Vous avez d�couvert les trois cl�s de pierre !",
	"Vous avez assembl� le Purificateur !",
	"Vous avez mang� quelques fruits.\n", /* FS */
	"Gemme de bonus r�cup�r�e",					/* FS */
	"Nombre total de gemme de bonus: ",				/* FS */
	"Codes de Levage",		// Knightmare added
};

// menu-related
const char *tongue_menu[] =
{
	"Avancer",                                  // key bind to Move Forward
	"Reculer",                                 // key bind to Move Backward
	"Gauche",                                // key bind to Step Left
	"Droite",                               // key bind to Step Right
	"Attaquer",                                   // key bind to Attack
	"Sauter",                                     // key bind to Jump/Up
	"Utiliser",                              // key bind to Use/Operate object
	"S'accroupir",                                   // key bind to Crouch/Down
	"Arme suivante",                              // key bind to Next Weapon
	"Arme pr�c�dente.",                              // key bind to Prev Weapon
	"Tourner gauche",                                // key bind to Turn Left
	"Tourner droite",                               // key bind to Turn Right
	"Courir",                                      // key bind to Run
	"Eviter",                                 // key bind to  Sidestep
	"Regarder haut",                                  // key bind to Look Up
	"Regarder bas",                                // key bind to Look Down
	"Centrer",                              // key bind to Center View
	"Vue souris",                                // key bind to Mouse Look
	"Vue clavier",                                  // key bind to Keyboard Look
	"Ecran plus grand",                             // key bind to increase screen size
	"Ecran plus petit",                           // key bind to decrease screen size
	"Tous les HUD",                            // key bind to Show All Huds (heads-up-displays)
	"Ouvrir Inv.",                                // key bind to Inventory Open
	"Utiliser obj.",                            // key bind to Use Item
	//  "Laisser obj.",                                // key bind to Drop Item
	"Objet suiv.",                                // key bind to Next Item
	"Objet pr�c.",                                // key bind to Prev Item
	"Permuter acolyte",                            // key bind to Swap Sidekick
	"Suivant",                             // key bind to Command Next
	"Pr�c�dent",                             // key bind to Command Prev
	"Appliquer",                            // key bind to Command Apply
	
	ARROW_LEFT_STRING  " Gauche",                 // left arrow key
	ARROW_UP_STRING    " Haut",                   // up arrow key
	ARROW_DOWN_STRING  " Bas",                 // down arrow key
	ARROW_RIGHT_STRING " Droite",                // right arrow key
	"--",                                       // no bind setting for this key
	
	"Cliquez / ENTR�E : assigner SUPPR : annuler.",     // set/delete key TX NOTE:sentence.
	"Cliquez ou ENTR�E pour s�lectionner",                 // select key TX NOTE:sentence.
	"Appuyez sur la touche d�sir�e/ECHAP pour annuler.",             // set/abort TX NOTE:sentence.
	
	"Par d�faut",                                 // default button
	
	"Aucune",                                     // no mouse bindings
	"Gauche/Droite",                          // mouse "move left and right" setting
	"Tourner Gauche/Droite",                          // mouse "turn left and right" setting
	"Regarder Haut/Bas",                             // mouse "look up and down" setting
	"Avancer/Reculer",                           // mouse "move forward and back" setting
	"Souris invers�e",                           // reverse mouse axis
	"Vue souris",                               // Mouse-Look
	"Vue glisser",                              // Mouse-Look// ?????????????
	"Axe X",                                   // x axis
	"Axe Y",                                   // y axis
	"Bouton 1",                                 // button 1 label
	"Bouton 2",                                 // button 2 label
	"Bouton 3",                                 // button 3 label
	"S�lectionnez un contr�le, ECHAP pour annuler",          // select a command, ESCape to cancel
	"Tourner G/D",                                 // turn left and right, abbreviated
	"Glisser G/D",                               // strafe left and right, abbreviated
	"Regarder H/B",                                 // look up and down, abbreviated
	"Av./Rec.",                                 // move forward and back, abbreviated
	"Sensibilit� horizontale",                            // mouse sensitivity for x-axis
	"Sensibilit� verticale",                            // mouse sensitivity for y-axis
	"Configuration souris :",                 // configure mouse options  TX NOTE:sentence.
	
	"Match � mort",                               // 'deathmatch' game
	"Jeu mortel",                                 // 'deathtag' game//???????????
	"Coop�ratif",                              // 'cooperative' game
	
	"Ronin",                                     // easy difficulty
	"Samurai",                                   // medium difficulty
	"Shogun",                                     // hard difficulty
	
	"Partie Internet",					// JK [12/9/99]
	"Partie en local",						// JK [12/9/99]
	"Lancer multijoueur",							// JK [12/9/99]
	
	"LAN",                                      // local area network game
	"Internet",                                 // internet game
	
	"Rejoindre",                                 // join server
	"H�te",                                      // host new  server
	"Ajouter " ARROW_DOWN_STRING,                   // add address
	"Actualiser",                                  // refresh network games
	"Configurer",                                    // player setup

	
	"Connexion",                             // connection speed label
	"28.8k",                                    // connection type 1
	"56.6k",                                    // connection type 2
	"ISDN",                                 // connection type 3
	"Cable/DSL",                                // connection type 4
	"T1/LAN",                                   // connection type 5
	"Personnalis�e",                             // connection type 6 TX NOTE:user enters his own connection type.
	
	"Limte de Temps",							// JK [12/09/99]
	"Couleur Personnage",					// JK [12/09/99]
	"Lancer �pisode",						// JK [12/09/99]
	"Equipe",							// JK [12/09/99]
	"Limite de CDD",							// JK [12/09/99]
	"Couleur �quipe 1",						// JK [12/09/99]
	"Couleur �quipe 2",						// JK [12/09/99]
	"Limite de Score",							// JK [12/09/99]
	"Limite de Tu�s",                               // frag limit TX NOTE:frag = number of times you can die before re-starting the game.
	"Niveau Max",							// JK [12/09/99]
	"Lancer �pisode",						// JK [12/09/99]
	"Type de partie",                                // game mode (deathmatch,deathtag,co-op)
	"Mode de Jeu",								// JK [12/09/99]
	"Niveau de Difficult�",                              // skill level
	"Temps",                               // time limit
	"Nb/joueurs",                              // maximum players
	"Personnage",                                // character
	"Couleur de Base",                               // base color
	"Jouer !",                                   // start multiplayer game
	
	"Conserver/armes",                             // weapons remain with you into the next area of play
	"Remat�r./objets",                            // items rematerialize on the map
	"R�sur./�loign�e",                             // place user's character at the farthest point from other players
	"Quitter",                            // allow players to exit the level wihtout being killed first
	"Carte identique",                                 // use the same map as last time
	"R�sur./forc�e",                            // make the respawn command happen now.
	"D�g�ts de chute",                           // players take damage from falling down
	"Bonus instant.",                            // make instant power-ups available in the game
	"Autoriser bonus",                             // allow power-ups to be used in the game
	"Autoriser sant�",                             // allow health kits to be used in the game
	"Autoriser armure",                              // allow armor to be used in the game
	"Mun. illimit�es",                            // unlimited ammunition
	"Champ/vision",                                // limits the user's field-of-vision
	"Jeu en �quipe",                                 // team-play
	"Blesser",                           // hurt teammates allows players to cause damage to team-mates.
	"Echange rapide",                              // allows a player to change weapons faster than normal
	"Pas",                                // footsteps become audible or silent ? ? ? not sure of the translation yet
	"Grappin",                               // allow hook ?????????????
	"Montrer/douilles",                           // show shotgun shells?
	
	"Adresse IP du serveur",                        // server internet provider address
	"Aucune partie locale trouv�e",                     // no local games found TX NOTE:sentence.
	"Lancement de la carte",                             // starting map
	"Nom du serveur",                              // server name
	"Nom du joueur",                              // player name
	"Nom de l'�quipe",                                // team name
	
	"Hara-kiri ?",                        // confirm quit TX NOTE:Do not translate Harakiri--it's Jpn.
	
	"Oui",                            // 'yes' response
	"Non",                              // 'no' response
	"Sauvegarder",									//JK [12-9-99]
	
	"Charger",								//cek[12-6-99]
	"Sauvegarder",								//cek[12-6-99]
	"Effacer",							//cek[12-6-99]
	"S�lectionner fichier configuration",				//cek[12-6-99]
	"Effacer s�lection ?",						//cek[12-6-99]
	
	"Charger jeu",								//cek[12-6-99]
	"Armure ",									//cek[12-6-99]
	"Sante",									//cek[12-6-99]
	"Niveau",									//cek[12-6-99]
	"Monstres",									//cek[12-6-99]
	"Secrets",									//cek[12-6-99]
	"Temps",										//cek[12-6-99]
	"Total",									//cek[12-6-99]
	"�pisode",									//cek[12-6-99]
	
	"Son 3D",								//cek[12-6-99]
	
	"Sauvegard�",								//cek[12-7-99]
	"Charg�",									//cek[12-7-99]
	"Effac�",									//cek[12-7-99]
	
	"Souris fluide",								//cek[12-7-99]
	"Molette haut",								//cek[12-7-99]
	"Molette bas",								//cek[12-7-99]
	
	"Interdire ALT-TAB",						//cek[12-7-99]
	"Armes anim�es",						//cek[12-7-99]
	"Change Armes-Auto",						//cek[12-7-99]
	
	"Lumi�re",									//cek[12-7-99]
	"Reflets armes",							//cek[12-7-99]
	"Impacts",								// SCG[1/4/00]: JK [2/8/00]
	
	"Avancer",									//cek[12-9-99]
	"Lat�ral",										//cek[12-9-99]
	"Haut",										//cek[12-9-99]
	"Vers le Haut",									//cek[12-9-99]
	"D�vier",										//cek[12-9-99]
	"Utiliser joystick",								//cek[12-9-99]
	"Configurer l'axe",							//cek[12-9-99]
	"Configurer joystick",						//cek[12-9-99]
	"Choisissez un action pour cette bouton",			//cek[12-9-99]
	"Appuyez sur le bouton du joystick d�sir�",			//cek[12-9-99]
	"Seuil",								//cek[12-9-99]
	"Sensibilit�",								//cek[12-9-99]
	
	"Capture du Drapeau",							//cek[12-10-99]
	"Returne",										//cek[12-10-99]
	"56.6k",									//cek[12-10-99]
	"Auto",										//cek[12-10-99]
	"Equipe 1",									//cek[12-10-99]
	"Equipe 2",									//cek[12-10-99]
	
	"Jouer film",								// JK [12-13-99]
	"Utilisez/Abilit�",							// JK [12-13-99]
	"Vitesse de souris",							// JK [12-13-99]
	"RAMASSE",								// cek[1-3-00]
	"AMENE-TOI",							// cek[1-3-00]
	"ATTAQUE",							// cek[1-3-00]
	"ATTAQUE PAS",							// cek[1-3-00]
	"REST'LA",							// cek[1-3-00]

	"S�lection arme %d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)

	"DEFIL. HUD",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"HUD SUIV.",									// cek[1-5-00]  -- similar in meaning.
	"HUD PREC.",									// cek[1-5-00]
	"UTILISER HUD",									// cek[1-5-00]

	"Discuter",										// cek[1-11-00]
	"Scores",								// SCG[1/13/00]: 
	"Message �quipe",								// cek[1-22-00]
	"%s sert d�j� pour %s",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"Remplacer ?",									// cek[1-22-00]

	"Toastednet",								// cek[2-1-00]
	"Infos DK",								// cek[2-1-00]
	"Continuer ?",								// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"Vous voulez des cartes personnalisees, mods et plus?\nvisiter dk.toastednet.org.\nLancer le navigateur Internet ?",	/* FS: Changed to TNET */
	"Pour toutes vos nouvelles Da�katana\nvisiter www.daikatanannews.net.\nLancer le navigateur Internet ?",			/* FS: Changed to DKNEWS.NET */

	"Arme %d",									// cek[3-6-00]: treat as "weapon 1"
	"Annulent",									// cek[3-9-00]
	"www.daikatananews.net",													/* FS: Changed to DKNEWS.NET */
	"Aller au www.daikatananews.net.\nLancer le navigateur Internet ?",			/* FS: Changed to DKNEWS.NET */
	
	"Configure Weapons", /* FS */
	"Instagib", /* FS */
	"Deathmatch taunts", /* FS */
	"Unlimited saves", /* FS */
	"CTF/DT hints", /* FS */
	"V�rifier les mises � jour logicielles", /* FS */
	"Mises � jour b�ta", /* FS */

	"Notice About Mini-Drivers",	// Knightmare added 2/20/13
	"This version of Daikatana no longer\nsupports the 3DFX and PowerVR mini-drivers.\n3DFX users are strongly recommended to\nuse the Metabyte WickedGL drivers.",	// Knightmare added 2/20/13
	"T�l�charger WickedGL drivers",		// Knightmare added 2/20/13
	"Aller au www.3dfxzone.it.\nLancer le navigateur Internet ?",	// Knightmare added 2/20/13
	"Switch to default OpenGL",	// Knightmare added 2/20/13

	"Capture d'�cran",	// Knightmare added 1/21/14
	"Capture d'�cran silent",	// Knightmare added 1/21/14
	"XP partag�e",	// Knightmare added 2/1/14
	"Effacer jeu",	// Knightmare added 2/7/14
	"Effacer jeu?",	// Knightmare added 2/7/14
	"Touche Maj", /* FS: For Mouse and Joystick */
	"Nous avons pass� beaucoup de temps �\nr�parer les cartes originales et en ajoutant\ndes caract�ristiques subtiles � l'IA de Sidekick\ncomme r�g�n�rer la sant�.  Le jeu est\nbeaucoup plus agr�able avec des acolytes.", /* FS: For no sidekicks */
	"�tes-vous s�r de que vouloir jouer sans eux?", /* FS: For no sidekicks */

	"Pouss�e Force",		/* FS: Added by request. */
	"Pouss�e Adresse",		/* FS: Added by request. */
	"Pouss�e Vitesse",		/* FS: Added by request. */
	"Pouss�e Agilite",		/* FS: Added by request. */
	"Pouss�e Vitalit�",		/* FS: Added by request. */
	"Sauvegarde Rapide",	/* FS: Added by request. */
	"Chargement Rapide",	/* FS: Added by request. */

	"Bouton 4",			// Knightmare 1/30/15- button 4 label
	"Bouton 5",			// Knightmare 1/30/15- button 5 label
	"Acc�l�ration",	/* FS */
};

const char *tongue_menu_options[] =
{
	"Toujours courir",                               // makes user's characters run everywhere
	"Vue en saut",                               // look + jump ????????????
	"Vue rafale",                               // look + strafe (shoot wildly) ? ? ? ? ? ? ?
	"Vis�e automatique",                           // computer aims at nearest target for the user
	"Mire",                                // a crosshair is displayed
	"Arme visible",                           // weapon is shown
	"Sous-titres",                                // subtitles
	
	"Volume des effets sonores",                      // volume for sound fx
	"Volume de la musique",                             // volume for music
	"Volume des voix",                         // volume for cinematics

	"Logiciel",                                 // video mode, software
	"OpenGL",                                   // video mode, opengl
	"Appliquer modifications",                            // apply video mode changes TX NOTE:sentence.

	"Plein �cran",                               // make view use the full screen
	"Ombres",                                  // allow shadows
	"Pilote",                                   // video driver
	"R�solution",                               // choose/set screen display resolution
	"Taille de l'�cran",                              // choose/set screen size
	"Luminosit�",                               // choose/set brightness
	"Qualit� textures",                          // choose/set quality of 3D image textures
	"Afficher barre d'�tat",                    // choose/set whether the status bar is visible.
	"Effets Brouillard / eau",								// tessellation
	"Ronin",
	"Samurai",
	"Shogun",

	"Neige / Pluie",							// cek[1-11-00]
	"Brouillard",										// cek[1-11-00]

	"Jeu des Sons Powerup", /* FS */
	"Jeu des Sons Manquant", /* FS */
	"Jeu des Sons Sidekick", /* FS */

	"Filtre Anisotrope",	// Knightmare added 5/29/12
	"Largeur Personnalis�",	// Knightmare added 5/29/12
	"Hauteur Personnalis�",	// Knightmare added 5/29/12
	"Taille barre d'�tat",	// Knightmare added 6/14/12
	"Synchronisation Verticale",	// Knightmare added 10/4/12
	"Actualisation Asynchrone",		// Knightmare added 10/4/12
	"Taux de rafra�chissement",		// Knightmare added 10/4/12
	"Format de capture d'�cran"	,	// Knightmare added 3/11/13
	"Spot",				// Knightmare added 5/10/13
	"Volume",			// Knightmare added 5/10/13

	"Options de T�l�chargement",	// Knightmare added 11/19/13
	"Autoriser le t�l�chargement",	// Knightmare added 11/19/13
	"Autoriser le HTTP t�l�chargement",	/* FS added 03/29/15 */
	"cartes / textures",			// Knightmare added 11/19/13
	"sons",							// Knightmare added 11/19/13
	"mod�les",						// Knightmare added 11/19/13
	"Son taux",						// Knightmare added 2/2/14
	"Moteur audio",			// Knightmare added 7/8/16
	"Langue", /* FS: Multi-Lang DLL */
	"Pas de acolytes", /* FS: No sidekicks new game option */
	"Gemmes Bonus", /* FS: Bonus save gems */

	/* FS: More Options! */
	"Page 1",
	"Page 2",
	"Voir la Framerate",
	"Commandes de la Console Q3A",
	"Cin�matiques in-game",
	"Nouvelle saisie semi-automatique",
	"Chat la priorit� du message",
	"Acolyte quitter avertissement",
	"Auto-enregistrement d�mos",
	"Flashs de dommages",
	"Afficher l�heure",
	"File d�attente de message",
	"Format de musique pr�f�r�",
	// Knightmare added 3/5/17
	"�crans de chargement bruyant",
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
	"Totale",
	"Moiti�",
	"Quart",
	"Huiti�me"
};

// weapon names TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_weapons[] =
{
	"plus de munitions",		//only shows up if you have no ammo for the weapon you're trying to use. TX NOTE:treat like sentence "you have "no ammo".
	"la Baliste",
	"des Carreaux de Baliste",
	"l'Arbal�te",
	"les Carreaux",
	"le C4 Vizatergo",
	"les charges de C4",
	"le Da�katana",
	"le Disque de D�dale",
	"le Disque",
	"le Gant de Perturbation",
	"l'Automark 2020", //
	"les Balles",
	"le Marteau",
	"le Blaster � ions",
	"des balles ionisantes",
	"le Cin�ticore",
	"la Boule clout�e",//
	"le M�tamaseur",
	"le M�tamaseur",
	"le Cauchemar de Nharre",
	"les Entrailles", 
	"le Rayon Nova",
	"la charge pour Nova",
	"la D�vastatrice",
	"les Rip-Ups",			// Knightmare changed 8/29/14
	"l'Onde de Choc",
	"la Sph�re de choc",
	"l'Autoshotgun",
	"les cartouches",
	"le Sidewinder",
	"les Fus�e de Sidewinder",
	"les Griffes Argent�es",
	"le M�gashotgun",
	"les Bastos",
	"le B�ton de Stavros",
	"les Rochers de Lave",
	"la Br�lure Solaire",
	"la Br�lure Solaire",
	"le Trident de Pos�idon",
	"les pointes du Trident.",
	"le B�ton serpent.",
	"le venin de cobra.",
	"le Globe de Wyndrax",
	"les D�charges",
	"l'Oeil de Zeus.",
	"l'Eclair.",
	"les Mains de l'Apocalypse",

	/* FS: Needed for Configure Weapons Menu */
	"Blaster � ions",
	"C4 Vizatergo",
	"Autoshotgun",
	"Sidewinder",
	"Onde de Choc",
	"Disque de D�dale",
	"B�ton serpent",
	"Br�lure Solaire",
	"Marteau",
	"Poseidon's Trident",
	"Oeil de Zeus",
	"Bolter",
	"B�ton de Stavros",
	"Baliste",
	"Globe de Wyndrax",
	"Cauchemar de Nharre",
	"Automark 2020",
	"M�gashotgun",
	"Cin�ticore",
	"D�vastatrice",
	"Rayon Nova",
	"M�tamaseur",

	// Knightmare 8/29/13- Cordite grenades was stealing ripgun ammo identifier
	"les Grenades � cordite"
};

// armor TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_armors[] =
{
	"l'Armure de plastiacier.",
	"l'Armure chromatique.",
	"l'Armure d'argent.",
	"l'Armure d'or.",
	"la Cotte de mailles.",
	"l'Armure noire.",
	"l'Armure de kevlar.",
	"l'Armure d'�bonite."
};

// monster names TX NOTE:NOMINITIVE CASE. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters[] =
{
	"Le Sanglier de Combat RoboCo",
	"Le Prisonnier Noir",
	"Le Buboid",         
	"Le Robocame RoboCo",
	"Le Centurion",
	"L'Artilleur Volant",
	"La Colonne Caratyde",
	"Le Crox",
	"La Sph�re Mortelle RoboCo",
	"La Chauve-Souris de l'Apocalypse",
	"Le Dragon",         
	"Le Nain",
	"Le Gang des Femmes",
	"Le Passeur",
	"Le Fletcher",
	"Le Crapauteur RoboCo",
	"Le Roi Garroth",
	"Le Poisson Rouge",
	"Le Griffon",
	"La Harpie",
	"L'Intern�",
	"Kage",
	"Le Premier Chevalier",
	"Le Second Chevalier",
	"Le Singe de Laboratoire",
	"Le Laborantin",
	"Le Laser RoboCo",
	"Lycanthir",
	"M�duse",         
	"Le Minotaure",
	"Le Garde Mishima",         
	"Nharre",                   
	"Le Rat de la Peste",
	"Le Rat d'�gout"
	"Le Pr�tre",
	"Le Prisonnier",
	"Le Protopode RoboCo",
	"La Pince Psychique",
	"Le RageMaster 5000 Roboco",
	"Le Membre du Gang des Roquettes",
	"Le PM Roquettes",
	"Le Ver Putr�fi�",
	"Le Satyre",
	"Le Commando SEAL",         
	"Le Capitaine SEAL",         
	"La SEAL",         
	"Le Requin",
	"Le Boucher",
	"Le Squelette",
	"L'Ouvrier Emaci�",
	"L'Ouvrier Ob�se",
	"La Cr�ature des Egouts Roboco",
	"La Petite Araign�e",
	"L'Araign�e",
	"Stavros",        
	"Le Chirurgien",
	"Le Voleur",
	"Le Tonnerre",
	"Le Membre du Gang Uzi",
	"Le Prisonnier Blanc",
	"Le Sorcier",         // TX NOTE:must match script.
	"Wyndrax",         // TX NOTE:must match script.
	"Mouette",
	"Papillon",
	"Eph�m�re",
	"Mikiko",
	"Ghost", /* FS */
	"The DopeFish" /* FS */
};

// monster names ACCUSATIVE CASE. NOT USED IN ENGLISH. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters_acc[] =
{
	"le Sanglier de Combat RoboCo",
	"le Prisonnier Noir",
	"le Buboid",         // TX NOTE:must match script.
	"le Robocame RoboCo",
	"le Centurion",
	"l'Artilleur Volant",
	"la Colonne Caratyde",
	"le Crox",
	"la Sph�re Mortelle RoboCo",
	"la Chauve-Souris de l'Apocalypse",
	"le Dragon",         // TX NOTE:must match script.
	"le Nain",
	"le Gang des Femmes",
	"le Passeur",
	"le Fletcher",//????????
	"le Crapauteur RoboCo",
	"le Roi Garroth",
	"le Poisson Rouge",
	"le Griffon",
	"la Harpie",
	"l'Intern�",
	"Kage",
	"le Premier Chevalier",
	"le Second Chevalier",
	"le Singe de Laboratoire",
	"le Laborantin",
	"le Laser RoboCo",
	"le Lycanthir",
	"M�duse",         // TX NOTE:must match script.
	"le Minotaure",
	"le Garde Mishima",         // TX NOTE:must match script.
	"Nharre",              // TX NOTE:must match script  don't translate
	"le Rat de la Peste",
	"le Rat d'�gout"
	"le Pr�tre",
	"le Prisonnier",
	"le Protopode RoboCo",
	"la Pince Psychique",
	"le RageMaster 5000 RoboCo",
	"le Membre du Gang des Roquettes",
	"le PM Roquettes",
	"le Ver Putr�fi�",
	"le Satyre",
	"le Commando SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"le Capitaine SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"la SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"le Requin",
	"le Boucher",//?????
	"le Squelette",
	"l'Ouvrier Emaci�",
	"l'Ouvrier Ob�se",
	"la Cr�ature des Egouts Roboco",
	"la Petite Araign�e",
	"l'Araign�e",
	"Stavros",         // TX NOTE:must match script.
	"le Chirurgien",
	"le Voleur",
	"le Tonnerre",//????????
	//	"l'Agresseur Roboco",//??????
	"le Membre du Gang Uzi",
	"le Prisonnier Blanc",
	"le Sorcier",         // TX NOTE:must match script.
	"Wyndrax",         // TX NOTE:must match script.
	"Mouette",
	"Papillon",
	"Eph�m�re",
	"Mikiko",
	"Ghost", /* FS */
	"The DopeFish" /* FS */
};

const char *tongue_world[] =
{
	"encore",                                 // triggers to go until sequence complete TX NOTE:## +.
	"S�quence termin�e ",                         // trigger sequence completed TX NOTE:sentence.
	
	"Vous devez avoir",                              // need a specific key TX NOTE:followed by the key needed.
	"Vous avez besoin de la cl� correspondante.\n",               // wrong key in possession TX NOTE:sentence.
	"Ouverture impossible de cette fa�on.\n",					       // Can't be opened this way

	"Vous sentez que le poison se dissipe.\n",    // poison expiring TX NOTE:sentence.
	"Vos oxypoumons sont pratiquement hors d'�tat.\n",           // oxylung expiring TX NOTE:sentence.
	"Votre envirocombinaison est pratiquement hors d'�tat.\n",                // envirosuit expiring TX NOTE:sentence.
	"Votre M�gabouclier est pratiquement hors d'�tat.\n",                 // megashield expiring TX NOTE:sentence.
	"L'Orbe de l'ombre bl�mit.\n",                   // wraith orb expiring TX NOTE:sentence.
	"Le Booster de Force s'�puise.\n",				  // power boost expiring TX NOTE:sentence.
	"Le Booster d'Adresse s'�puise.\n",                // attack boost expiring TX NOTE:sentence.
	"Le Booster de Vitesse s'�puise.\n",                 // speed boost expiring TX NOTE:sentence.
	"Le Booster d'Agilit� s'�puise.\n",             // jump boost expiring TX NOTE:sentence.
	"Le Booster de Vitalit� s'�puise.\n",              // health boost expiring TX NOTE:sentence.
	
	"vient d'entrer la partie.",                            // player joined the game TX NOTE:NAME +.
	"a quitt� le niveau",                           // player exited the level TX NOTE:NAME +.
	
	"Hiro Miyamoto",                              // Hiro Miyamoto's full name TX NOTE:same as in script.
	"Superfly Johnson",                           // Superfly's full name TX NOTE:same as in script.
	"Mikiko Ebihara",                             // Mikiko's full name TX NOTE:same as in script.

	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"Vous avez �t� expuls� pour du spam",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK /* FS: Updated this */
	"a �t� expuls� pour du spam",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK /* FS: Updated this */
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"Inconnu Player!",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER /* FS: Updated this */
	
	"Impossible de quitter ce niveau sans\n",			// SCG[10/18/99]: no exiting level without sidekicks 
	"Impossible de sortir d'ici sans\n",						// SCG[11/9/99]: No exiting without a key
	"Empoisonn� !\n",

	"Vous avez d�couvert un passage secret !\n",						// cek[1-3-00]
	"Le Cr�ne de Mana s'�puise.\n",                   // cek[2-9-00]
	"�pingl�!\n", /* FS */
	"Massacre!\n", /* FS */
	"Joyeuses F�tes de l'�quipe Daikatana 1.3!\n", /* FS */
	"et" /* FS */
};

const char *tongue_deathmsg_daikatana[] =
{
	"%s a �t� d�coup� en rondelles par %s\n"
};

const char *tongue_deathmsg_self[] =
{
	"s'est fracass� le cr�ne.\n",                          // death, fell TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"s'est noy�(e).\n",                             // death, drowned TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"est carbonis�(e).\n",                                // death, lava TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"est tout(e) gluant(e).\n",                                 // death, slimed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"s'est fait pourrir.\n",                                // death, poison TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"votre vie s'en est all�e...\n",                             // death, killed self
	"a eu un p�pin de t�l�porteur.\n",                            // death, teleport TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"s'est fait �craser.\n",                            // death, crushed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	
	"dig�re mal le C4.\n",                        // death, C4 explosives TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"est gel�.\n",							/* FS: death, frozen */
	"est choqu� par la foudre.\n"					/* FS: death, shocked by lightning bolts in e3 */

};

const char *tongue_deathmsg_weapon1[] =
{
	"%s s'est fait humilier par %s !\n",
	"%s a salement mat� %s !\n",
	"%s a �t� ionis� par %s !\n",
	"%s a transform� %s en tas de boue !\n",
	"%s a pulv�ris� %s !\n",
	"%s a go�t� aux roquettes de %s !\n",
	"%s a latt� %s !\n"
};

const char *tongue_deathmsg_weapon2[] =
{
	"%s a jou� au Frisbee infernal avec %s !\n",
	"%s est tomb� sur %s !\n",
	"%s a transform� %s en miasmes !\n",
	"%s s'est expliqu� avec %s !\n",
	"%s a d�compos� %s !\n",
	"%s s'est agenouill� devant Zeus !\n"
};

const char *tongue_deathmsg_weapon3[] =
{
	"%s s'est fait d�couper comme un jambon par %s !\n",
	"%s s'est f�ch� avec %s !\n",
	"%s a go�t� � la col�re de %s !\n",
	"%s a �t� la victime de l'apocalypse selon %s !\n",
	"%s s'est fait branch� par %s !\n",
	"%s aurait besoin d'un exorciste, merci %s !\n"
};

const char *tongue_deathmsg_weapon4[] =
{
	"%s a eu une discussion d'hommes avec %s !\n",
	"%s a mis %s sur orbite !\n",
	"%s s'est fait �ventr� par %s !\n",
	"%s a �charp� %s !\n",
	"%s s'est fait geler par %s !\n",
	"%s a fait de jolis trous dans %s !\n",
	"%s a trouv� son ma�tre, %s !\n"
};

const char *tongue_scoreboard[] =
{
	"Nom",
	"Tu�s",
	"Ping",
	"Temps",
	"Tirs",
	"Touch�s",
	"Mort",
	"Score"
};

const char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"Niveau de difficult� :",           // difficulty header TX NOTE:using karate skill levels.
	"Ceinture blanche",                   // newbie
	"Ceinture bleue",                    // average
	"Ceinture noire"                    // expert (or so they think!)
};

const char *tongue_skincolors[] =
{
	"Bleu",                         // blue
	"Vert",                        // green
	"Rouge",                          // red
	"Dor�"                          // gold
};

const char *tongue_statbar[] =
{
	"FORCE",                        // skill 'power' label
	"ADRESSE",                       // skill 'attack' label
	"VITESSE",												// skill 'speed' label
	"AGILITE",													// skill 'acrobatic' label
	"VITALITE",											// skill 'vitality' label
	
	// not used in non-english versions
	"ARMURE",																	 // armor label
	"SANTE",																	 // health label
	"MUNITION",																	 // ammo label
	"TUES",																	 // kills label
	"POINTS",																	 // experience points label
	
	"NIVEAU +1!",                    // experience level up
	"S�lection",               // select skill
	"Ajouter point",            // add point to skill
	
	"CHARGEMENT..."                   // loading new level
};

const char *tongue_sidekick[] =    // sidekick commands
{
	"Ramasse",		                        // 'get' item command
	"Amene-toi",                           // 'come here', 'come to me'
	"Rest'la",                           // 'stay' command, 'don't move'
	"Attaque",                         // 'attack' command
	"Attaque-pas",                        // 'back off', 'move away'
	
	"Je peux avoir"                         // requesting to pick up an item
};

const char *tongue_ctf[] =
{
	"Drapeau rouge",
	"Drapeau bleu",
	"Inconnu",

	"%s Flag",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"Rouge",
	"Bleu",
	"Chrome",
	"M�tal",
	"Vert",
	"Orange",
	"Violet",
	"Jaune",

	"Score: %s:%d, %s:%d\n",
	"Vous avez captur� le %s!\n",
	"Votre co�quipier %s a captur� le %s!\n",
	"%s de l'�quipe %s a captur� votre drapeau!\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"Vous avez ramass� le %s\n",
	"Votre co�quipier %s a ramass� le %s\n",
	"%s a vol� votre drapeau\n",
	"Le %s a �t� r�cup�r�\n",

	"%d n'est pas un chiffre accept�. Utilisez 1 ou 2\n",
	"Vous faites partie de l'�quipe %d (%s)\n",
	"Vous �tes d�j� dans l'�quipe %d\n",
	"%s a rejoint l'�quipe %s\n",									// translate same as with the %s team above

	"Victoire de l'�quipe %s!\nScore final: %s :%d, %s :%d\n",		// translate same as with the %s team above
	"C'est un match nul!\n",
	"Temps �coul�!\n",
	"Limite de capture atteinte!\n",

	"Pr�parez-vous pour des heures suppl�mentaires!\n", /* FS */
	"Vous avez le drapeau ennemi. Retour � la base!\n", /* FS */
	"L'ennemi a votre drapeau! Obtenez le drapeau de retour!\n" /* FS */
};

const char *tongue_deathtag[] =
{
	"Bombe",														// as in backpack
	"Bombe %s",													// as in red pack
	"Limite de score atteinte!\n",
	"Le temps s'�gr�ne!\n",
	"C'est fini!\n",

	"%s de l'�quipe %s a ramass� %s!\n",				// translate using the '%s team' guidelines above

	"Un point pour votre �quipe!\n",
	"%d points pour votre �quipe!\n",								// you get 2 points
	"Un point pour l'�quipe %s!\n",								// translate using the '%s team' guidelines above
	"%d points pour l'�quipe %s!\n",							// The red team gets 2 points

	"Un point pour vous!\n",
	"Un point pour %s!\n",
	"Un point pour %s de l'�quipe %s!\n",

	"Vous avez la bombe! Aller marquer!\n", /* FS */
	"L'autre �quipe a sa bombe!\n" /* FS */
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

/* FS: Mult-Lang DLL */
/* FS: FIXME: Translate */
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

/* FS: FIXME: Translate.  Wasn't originally translated.  Reported by Robert. */
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
	"Mise � jour disponible",
	"Il existe un nouveau version de Daikatana v1.3 disponible.\nVoulez-vous t�l�charger?\nVous pouvez d�sactiver les mises � jour automatiques dans\nmenu Options.",
	"Il existe une nouvelles mises de la carte pak disponible.\nCela peut affecter votre connectivit� aux serveurs.\nDo you want to download it?\nVoulez-vous t�l�charger?\nVous pouvez d�sactiver les mises � jour automatiques dans\nmenu Options.",
	"T�l�charger la mise � jour",
	"Verifiera PAK fichiers",
	"Non Merci",
	"Aller au dk.toastednet.org.\nLancer le navigateur Internet ?",
	"T�l�chargement de la mise � jour",
	"Fichier: ",
	"Taille: ",
	"Statut: ",
	"Inactif",
	"De liaison",
	"T�l�chargement",
	"Extraction",
	"Fini",
	"�chou�",
	"Avorter",
	"OK",
	"T�l�chargement fini!",
	"Nouvelles"
};
