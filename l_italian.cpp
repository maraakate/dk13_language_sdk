#include "l__language.h"

// ITALIAN text

keyname_t keynames[] =
{
	{"TAB", K_TAB},
	{"INVIO", K_ENTER},
	{"ESC", K_ESCAPE},
	{"SPAZIO", K_SPACE},
	{"INDIETRO", K_BACKSPACE},
	{"SU", K_UPARROW},
	{"GIÙ", K_DOWNARROW},
	{"SINISTRA", K_LEFTARROW},
	{"DESTRA", K_RIGHTARROW},
	
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
	{"CANC", K_DEL},
	{"PGGIÙ", K_PGDN},
	{"PGSU", K_PGUP},
	{"HOME", K_HOME},
	{"FINE", K_END},

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

	{"TN_HOME",			K_KP_HOME },
	{"TN_SU",		K_KP_UPARROW },
	{"TN_PGSU",			K_KP_PGUP },
	{"TN_SINISTRA",	K_KP_LEFTARROW },
	{"TN_5",			K_KP_5 },
	{"TN_DESTRA",	K_KP_RIGHTARROW },
	{"TN_FINE",			K_KP_END },
	{"TN_GIÙ",	K_KP_DOWNARROW },
	{"TN_PGGIÙ",			K_KP_PGDN },
	{"TN_INVIO",		K_KP_ENTER },
	{"TN_INS",			K_KP_INS },
	{"TN_CANC",			K_KP_DEL },
	{"TN_SLASH",		K_KP_SLASH },
	{"TN_MENO",		K_KP_MINUS },
	{"TN_PIÙ",			K_KP_PLUS },

	{"ROTMOUSESU", K_MWHEELUP },
	{"ROTMOUSEGIÙ", K_MWHEELDOWN },

	{"PAUSA", K_PAUSE},

	{"PUNTO E VIRGOLA", ';'},	// because a raw semicolon seperates commands

	{0,0}
};

// vkey conversion table
//==========================================================================
const unsigned char scantokey[128] =
{
//  0           1       2       3       4       5       6       7 
//  8           9       A       B       C       D       E       F 
    0  ,	27,     '1',    '2',    '3',    '4',    '5',    '6', 
    '7',    '8',    '9',    '0',    '\'',    'ì',    K_BACKSPACE, 9,  // 0
    'q',    'w',    'e',    'r',    't',    'y',    'u',    'i', 
    'o',    'p',    'è',    '+',    13 ,    K_CTRL,'a',  's',      // 1 
    'd',    'f',    'g',    'h',    'j',    'k',    'l',    'ò', 
    'à' ,    '`',    K_SHIFT,'<',  'z',    'x',    'c',    'v',      // 2 
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

const char *tongue[] =
{
	"Hai raccolto",                            // weapon pickup TX NOTE:+ the items in the weapons section below.
	"Hai raccolto",			                // health pickup TX NOTE:+ one of the 3 health items below (health kit, Goldenorb, Wraith orb.
	"Hai raccolto",						    // armor good pickup TX NOTE:+ the items in the armor section below.
	"Hai raccolto",						    // boost pickup TX NOTE:not used - DON'T TRANSLATE.
	"Ottenuta gemma di salvataggio!",            // pick up 'save gem'
	
	"POTENZA",                                    // use power boost TX NOTE:must match statusbar.xls .
	"ATTACCO",                                   // use attack boost TX NOTE:must match statusbar.xls .
	"VELOCITÀ",                                    // use speed boost TX NOTE:must match statusbar.xls .
	"BALZO",                                     // use jump boost TX NOTE:must match statusbar.xls .
	"VITALITÀ",                                 // use health boost TX NOTE:must match statusbar.xls .
												
	"È ora di andarsene",                           // bomb explode TX NOTE:"let's get out of here!.
	"Ti serve una bottiglia per la miscelazione",    // need bottle to mix ingredients TX NOTE:sentence.
	"Elementi richiesti: ",                          // ingredient required TX NOTE:+ bomb item, short desc below.
	"Hai creato un esplosivo...",                  // bomb created TX NOTE:sentence.
	"Hai trovato ",                                // bomb found, TX NOTE:+ one of the ingredients or a bottle.
	"un sacchetto di zolfo",						// bomb ingredient 1
	"un pezzo di carbone",                           // bomb ingredient 2
	"una fiala di salnitro",                      // bomb ingredient 3
	"una bottiglia vuota",                          // bomb bottle
		
	"zolfo",                                  // bomb item, short description
	"carbone",                                 // bomb item, short description
	"salnitro",                                // bomb item, short description
		
	"Hai letto ",                            // read book TX NOTE:+ one of two books below.
	"Non puoi farne uso qui.",                // no read book TX NOTE:sentence.
	"il Libro degli incantesimi di Wyndrax",                    // Wyndrax spellbook
		
	"Hai raccolto",                            // key pickup TX NOTE:one of the 3 following items.
	"la chiave della cripta",                            // crypt key name
	"la chiave di Wyndrax",                          // Wyndrax key name
	"la chiave di una cella",                    // Prison cell key
		
	"la scheda di controllo rosso",						// SCG[11/15/99]: red control card name
	"la scheda di controllo blu",					// SCG[11/6/99]: blue control card name
	"la scheda di controllo verde",					// SCG[11/6/99]: green control card name
	"la scheda di controllo giallo",					// SCG[11/6/99]: yellow control card name
	"l'Esagono",							// SCG[11/6/99]: hex keystone name
	"il Quadrilatero",						// SCG[11/6/99]: quad keystone name
	"il Trigono",						// SCG[11/6/99]: trigon keystone name
	"il Megascudo",							// SCG[11/14/99]: Megashield name
	"il teschio del mana",							// SCG[11/14/99]: 
	"l'antidoto al veleno",						// SCG[11/14/99]: 
	"la dracma",								// SCG[11/14/99]: 
	"il Corno di Caronte",						// SCG[11/14/99]: 
	"un pezzo della chiave AEGIS (A)",				// SCG[11/14/99]: A of AEGIS key name
	"un pezzo della chiave AEGIS (E)",				// SCG[11/14/99]: E of AEGIS key name
	"un pezzo della chiave AEGIS (G)",				// SCG[11/14/99]: G of AEGIS key name
	"un pezzo della chiave AEGIS (I)",				// SCG[11/14/99]: I of AEGIS key name
	"un pezzo della chiave AEGIS (S)",				// SCG[11/14/99]: S of AEGIS key name
	"un frammento del Purificatore",					// SCG[11/14/99]: 
	"la cassa nera",							// SCG[11/14/99]: 
	"l'Anello della Protezione dal Fuoco",				// SCG[11/14/99]: 
	"l'Anello della Protezione dai Non-morti",			// SCG[11/14/99]: 
	"l'Anello della Protezione dai Fulmini",			// SCG[11/14/99]: 
	"la tuta anti-ambiente",							// SCG[11/14/99]: 
	
	"il kit medico",                           // health kit
	"l'anima d'oro",                           // Goldensoul
	"la sfera dello spettro",							// wraith orb
		
	"una gemma di salvataggio",                  // 'save gem'
	"Non hai partite salvate",					//cek[12-13-99]
	"la fiala della salute",							// cek[1-3-00]

	// cek[2-2-00]: altered the following ***********************************************
	"il pacchetto della salute",
	"il vaso della salute",
	"il fiasco della salute",
	"la cesta della salute",
	"la scatola della salute",
	"L'antidoto è esaurito.\n", // FS: Added CR

	// SCG[2/8/00]: messages for completed artifacts
	"Hai trovato tutte le rune AEGIS!",
	"Hai trovato le tre chiavi!",
	"Hai assemblato il Purificatore!",
	"Hai mangiato frutta.\n", // FS
	"Ottenuta gemma di premio!",				// FS
	"Numero totale di gemma di premio: ",		// FS
};

// menu-related TX NOTE:all independent words -- no grammatical inflection.
const char *tongue_menu[] =
{
	"Avanti",                                  // key bind to Move Forward
	"Indietro",                                 // key bind to Move Backward
	"Sinistra",                                // key bind to Step Left
	"Destra",                               // key bind to Step Right
	"Attacco",                                   // key bind to Attack
	"Salto",                                     // key bind to Jump/Up
	"Usa/Attiva",                              // key bind to Use/Operate object
	"Abbassati",                                   // key bind to Crouch/Down
	"Arma seg.",                              // key bind to Next Weapon
	"Arma prec.",                              // key bind to Prev Weapon
	"Gira a sinistra",                                // key bind to Turn Left
	"Gira a destra",                               // key bind to Turn Right
	"Corri",                                      // key bind to Run
	"Spostamento lat.",                             // key bind to  Sidestep
	"Guarda in su",                                  // key bind to Look Up
	"Guarda in giù",                                // key bind to Look Down
	"Centra visuale",                              // key bind to Center View
	"Sguardo/mouse",                               // key bind to Mouse Look
	"Sguardo/tastiera",                         // key bind to Keyboard Look
	"Aumenta visuale",                             // key bind to Screen size up
	"Riduci visuale",                           // key bind to Screen size down
	"Mostra tutti HUD",                            // key bind to Show All Huds
	"Apri inv.",                                // key bind to Inventory Open
	"Usa oggetto inv.",                            // key bind to Use Item
	"Oggetto seg.",                                // key bind to Next Item
	"Oggetto prec.",                                // key bind to Prev Item
	"Cambia compagno",                            // key bind to Swap Sidekick
	"Comando seg.",                             // key bind to Command Next
	"Comando prec.",                             // key bind to Command Prev
	"Applica comando",                            // key bind to Command Apply
	
	ARROW_LEFT_STRING  " Sinistra",                 // left arrow key
	ARROW_UP_STRING    " Su",                   // up arrow key
	ARROW_DOWN_STRING  " Giù",                 // down arrow key
	ARROW_RIGHT_STRING " Destra",                // right arrow key
	"--",                    // no bind setting for this key
	
	"Clicca o INVIO per impostare, CANC per eliminare",     // set/delete key TX NOTE:sentence.
	"Clicca o INVIO per selezionare",                 // select key TX NOTE:sentence.
	"Premi il tasto per impostare, ESC per annullare",             // set/abort TX NOTE:sentence.
	
	"Predefiniti",                                 // default button
	
	"Nessuno",                                     // no mouse bindings
	"Movimento sinistra/destra",                          // mouse "move left and right" setting
	"Giro sinistra/destra",                          // mouse "turn left and right" setting
	"Guarda su/giù",                             // mouse "look up and down" setting
	"Movimento avanti/indietro",                           // mouse "move forward and back" setting
	"Inverti asse Y",                           // reverse mouse axis
	"Sguardo col mouse",                               // Mouse-Look
	"Sguardo laterale",                              // Mouse-Look
	"Asse X",                                   // x axis
	"Asse Y ",                                   // y axis
	"Pulsante 1",                                 // button 1 label
	"Pulsante 2",                                 // button 2 label
	"Pulsante 3",                                 // button 3 label
	"Seleziona un comando, ESC per annullare",          // select a command, ESCape to cancel
	"Gira Sx/Dx",                                 // turn left and right, abbreviated
	"Spostamento Sx/Dx",                               // strafe left and right, abbreviated
	"Guarda S/G",                                 // look up and down, abbreviated
	"Movimento A/I",                                 // move forward and back, abbreviated
	"Sensibilità X",                            // mouse sensitivity for x-axis
	"Sensibilità Y",                            // mouse sensitivity for y-axis
	"Configura opzioni mouse:",                 // configure mouse options  TX NOTE:sentence.
	
	"Sfida mortale",                               // 'deathmatch' game
	"Tocco mortale",                                 // 'deathtag' game
	"Cooperativa",                              // 'cooperative' game
		
	"Facile",                                     // easy difficulty
	"Media",                                   // medium difficulty
	"Difficile",                                     // hard difficulty
		
	"Trova partita su Internet",					// SCG[12/1/99]: 
	"Trova partita locale",						// SCG[12/1/99]: 
	"Comincia partita Multigioc",					// SCG[12/1/99]: 
	"LAN",                                      // local area network game
	"Internet",                                 // internet game
		
	"Unisciti",                                     // join server
	"Ospita",                                      // host new  server
	"Aggiungi" ARROW_DOWN_STRING,                   // add address
	"Aggiorna",                                  // refresh network games
	"Impostazione",                                    // player setup
		
	"Velocità connessione",                             // connection speed label
	"28.8k",                                    // connection type 1
	"56.6k",                                    // connection type 2
	"ISDN",                                 // connection type 3
	"Cavo/DSL",                                // connection type 4
	"T1/LAN",                                   // connection type 5
	"Definita dall'utente",                             // connection type 6 TX NOTE:user enters his own connection type.
		
	"Tempo",								// SCG[12/2/99]: 
	"Colore personaggio",						// SCG[12/2/99]: 
	"Espisodio iniziale",							// SCG[12/2/99]: 
	"Scelta squadra",								// SCG[12/1/99]: 
	"Bandiere",								// SCG[12/1/99]: 
	"Colore squadre 1",								// SCG[12/1/99]: 
	"Colore squadre 2",								// SCG[12/1/99]: 
	"Punteggio limite",								// SCG[12/1/99]: 
	// ******************************************

	"Uccisioni",								// SCG[12/1/99]: 

	// ******************************************
	"Livello limite",                              
	"Espisodio iniziale",							// SCG[12/2/99]: 
	"Mappa del gioco",									// SCG[12/1/99]: 
	// ******************************************

	"Modalità partita",                                // game mode (deathmatch,deathtag,co-op)
	"Livello abilità",                              // skill level
	"Tempo",                               // time limit
	"Max giocatori",                              // maximum players
	"Personaggio",                                // character
	"Colore base",                               // base color
	"Via!",                                   // start multiplayer game
		
	"Permanenza arma",                             // weapons remain with you into the next area of play
	"Rigenera oggetti",                            // items rematerialize on the map
	"Genera lontano",                             // place user's character at the farthest point from other players
	"Consenti uscita",                            // allow players to exit the level wihtout being killed first
	"Stessa mappa",                                 // use the same map as last time
	"Rigener. forzata",                            // make the respawn command happen now.
	"Danni per cadute",                           // players take damage from falling down
	"Powerup istant.",                            // make instant power-ups available in the game
	"Ammetti powerup",                             // allow power-ups to be used in the game
	"Ammetti salute",                             // allow health kits to be used in the game
	"Ammetti corazze",                              // allow armor to be used in the game
	"Munizioni infinite",                            // unlimited ammunition
	"Campo visivo",                                // limits the user's field-of-vision
	"Gioco a squadre",                                 // team-play
	"Danni/compagni",                           // hurt teammates allows players to cause damage to team-mates.
	"Cambio rapido",                              // allows a player to change weapons faster than normal
	"Passi",                                // footsteps become audible or silent
	"Ammetti uncino",                               // allow hook
	"Proiettili",                           // show shotgun shells?
	
	"Indirizzo IP server",                        // server internet provider address
	"Nessuna partita locale",                     // no local games found TX NOTE:sentence.
	"Mappa iniziale",                             // starting map
	"Nome server",                              // server name
	"Nome giocatore",                              // player name
	"Nome squadra",                                // team name
	
	"Vuoi fare Harakiri?",                        // confirm quit TX NOTE:Do not translate Harakiri--it's Jpn.
	
	"Sì",                             // 'yes' response
	"No",                             // 'no' response

	"Salva Partita",								// cek[1-3-00] changed from 'save' to 'save game'
	"Carica Config.",								//cek[12-6-99]
	"Salva Config.",								//cek[12-6-99]
	"Elimina",							//cek[12-6-99]
	"Seleziona file di configurazione",				//cek[12-6-99]
	"Cancella file?",						//cek[12-6-99]
												
	"Carica gioco",								//cek[12-6-99]
	"Armat.",									//cek[12-6-99]
	"Salute",									//cek[12-6-99]
	"Livello",									//cek[12-6-99]
	"Mostri",									//cek[12-6-99]
	"Segreti",									//cek[12-6-99]
	"Tempo",										//cek[12-6-99]
	"Totale",									//cek[12-6-99]
	"Episodio",									//cek[12-6-99]

	"Usa sonoro 3D",								//cek[12-6-99]

	"salvato",									//cek[12-7-99]
	"caricato",									//cek[12-7-99]
	"Eliminata",									//cek[12-7-99]

	"Fluidità mouse",								//cek[12-7-99]
	"Rotella su",									//cek[12-7-99]
	"Rotella giù",								//cek[12-7-99]

	"No ALT-TAB",						//cek[12-7-99]
	"Oscillazione arma",							//cek[12-7-99]
	"Cambio arma autom.",						//cek[12-7-99]

	"Intensità",								//cek[12-7-99] cek[12-13-99]
	"Riflesso armi",							//cek[12-7-99]
	"Buchi proiettili",								// SCG[1/4/00]: 

	"Avanti",									//cek[12-9-99]
	"Laterale",										//cek[12-9-99]
	"Su",										//cek[12-9-99]
	"Campo",									//cek[12-9-99]
	"Deviato",										//cek[12-9-99]
	"Usa il joystick",								//cek[12-9-99]
	"Configura assi",							//cek[12-9-99]
	"Configura joystick",						//cek[12-9-99]
	"Seleziona azione per questo pulsante",			//cek[12-9-99]
	"Premi il pulsante del joystick da configurare",
	"Soglia",								//cek[12-9-99]
	"Sensibilità",								//cek[12-9-99]

	"Cattura la bandiera",							//cek[12-10-99]
	"Indietro",									//cek[12-10-99]
	"56.6k",									//cek[12-10-99]
	"Auto",										//cek[12-10-99]
	"Team 1",									//cek[12-10-99]
	"Team 2",									//cek[12-10-99]

	"Esegui introduzione",								//cek[12-13-99]
	"Utilizza abilità",							//cek[12-13-99]
	"Mouse velocità",								//cek[12-13-99]

	"\"Comp. Prendi\"",								// cek[1-3-00]
	"\"Comp. Vieni\"",							// cek[1-3-00]
	"\"Comp. Attacca\"",							// cek[1-3-00]
	"\"Comp. Ritirati\"",							// cek[1-3-00]
	"\"Comp. Fermati\"",							// cek[1-3-00]

	"Seleziona arma %d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)
	"Scorri HUD",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"Prossimo HUD",									// cek[1-5-00]  -- similar in meaning.
	"HUD preced.",									// cek[1-5-00]
	"Usa HUD",									// cek[1-5-00]
	"Parla",										// cek[1-11-00]
	"Punteggi",								// SCG[1/13/00]: 
	"Parla al gruppo",								// cek[1-22-00]
	"%s è già assengnato a %s.",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"Sostituire?",									// cek[1-22-00]

	"Vai alla lobby",								// cek[2-1-00]
	"Comunità DK",								// cek[2-1-00]
	"Continua?",								// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"Vuoi mappe personalizzate, mods e di piu?\nGo to dk.toastednet.org.\nContinuando lancerai il tuo browser.",	// FS: changed to tnet
	"Per tutte le notizie Daikatana\ngo to www.daikatananews.net.\nContinuando lancerai il tuo browser.",	// FS: changed to dknews

	"Arma %d",									// cek[3-6-00]: treat as "weapon 1"
	"Annullano",									// cek[3-9-00]
	"www.daikatananews.net", // FS
	"Vai alla www.daikatananews.net.\nContinuando lancerai il tuo browser.", // FS
	
	"Configura armi", // FS
	"Esplosione istantanea", // FS
	"Commenti della sfida mortale", // FS
	"Salvataggi illimitati", // FS
	"CLB/SM suggerimenti", // FS
	"Controllare la aggiornamenti software", // FS

	"Notice About Mini-Drivers",	// Knightmare added 2/20/13
	"This version of Daikatana no longer\nsupports the 3DFX and PowerVR mini-drivers.\n3DFX users are strongly recommended to\nuse the Metabyte WickedGL drivers.",	// Knightmare added 2/20/13
	"Download WickedGL drivers",		// Knightmare added 2/20/13
	"Vai alla www.3dfxzone.it.\nContinuando lancerai il tuo browser.",	// Knightmare added 2/20/13
	"Switch to default OpenGL",	// Knightmare added 2/20/13

	"Screenshot",	// Knightmare added 1/21/14
	"Screenshot silenzioso",	// Knightmare added 1/21/14
	"Condivisa XP",		// Knightmare added 2/1/14
	"Elimina Partita",	// Knightmare added 2/7/14
	"Cancella Partita?",	// Knightmare added 2/7/14
	"Tasto Shift", // FS: For Mouse and Keyboard
	"Abbiamo speso un sacco di tempo, riparando\nle mappe originali e aggiungendo funzionalità\nsottile per il Sidekick AI quali rigenerare la\nsalute.  Il gioco è molto più divertente\ncon le spalle.", // FS: For no sidekicks
	"Sei sicuro di che voler giocare senza di loro?", // FS: For no sidekicks

	"Spinta Potenza",		// FS: Added by request
	"Spinta Attacco",		// FS: Added by request
	"Spinta Velocità",		// FS: Added by request
	"Spinta Balzo",			// FS: Added by request
	"Spinta Vitalità",		// FS: Added by request

	"Pulsante 4",			// Knightmare 1/30/15- button 4 label
	"Pulsante 5", 			// Knightmare 1/30/15- button 5 label
	"Accelerazione",		/* FS*/
};

const char *tongue_menu_options[] =
{
	"Corsa continua",                               // makes user's characters run everywhere
	"Visuale centrata",                               // look + jump
	"Visuale laterale",                               // look + strafe (shoot wildly)
	"Puntamento automatico",                           // computer aims at nearest target for the user
	"Mirino",                                // a crosshair is displayed
	"Arma visibile",                           // weapon is shown
	"Sottotitoli",                                // subtitles
	
	"Volume effetti sonori",                      // volume for sound fx
	"Volume musica",                             // volume for music
	"Volume film",                         // volume for cinematics
	
	"Software",                                 // video mode, software
	"OpenGL",                                   // video mode, opengl
	"Applica modifiche",                            // apply video mode changes TX NOTE:sentence.
	
	"Pieno schermo",                               // make view use the full screen
	"Ombre",                                  // allow shadows
	"Driver",                                   // video driver
	"Risoluzione",                               // choose/set screen display resolution
	"Dimensioni schermo",                              // choose/set screen size
	"Luminosità",                               // choose/set brightness
	"Qualità texture",                          // choose/set quality of 3D image textures
	"Visibilità barra di stato",                     // choose/set whether the status bar is visible.
	"Dettaglio nebbia/acqua",							// SCG[12/4/99]: 
	
	"Ronin",									// difficulty level easy
	"Samurai",									// difficulty level medium
	"Shogun",									// difficulty level hard
	"Neve e pioggia",							// cek[1-11-00]
	"Nebbia",										// cek[1-11-00]		
	
	"Riprodurre i Suoni Powerup", // FS
	"Riprodurre i Suoni Mancante", // FS
	"Riprodurre i Suoni Sidekick", // FS
	
	"Filtro Anisotropico",	// Knightmare added 5/29/12
	"Larghezza Personalizzata",	// Knightmare added 5/29/12
	"Altezza Personalizzata",	// Knightmare added 5/29/12
	"Dimensioni barra di stato",	// Knightmare added 6/14/12
	"Sincronizzazione Verticale",	// Knightmare added 10/4/12
	"Aggiornamento Asincrono",		// Knightmare added 10/4/12
	"Frequenza di aggiornamento",	// Knightmare added 10/4/12
	"Formato screenshot",			// Knightmare added 3/11/13
	"Spot",				// Knightmare added 5/10/13
	"Volume",			// Knightmare added 5/10/13

	"Scarica Opzioni",		// Knightmare added 11/19/13
	"Consentire il download",	// Knightmare added 11/19/13
	"Consentire il HTTP download",	// FS added 03/29/15
	"mappe / texture",		// Knightmare added 11/19/13
	"suoni",				// Knightmare added 11/19/13
	"modelli",				// Knightmare added 11/19/13
	"Tasso di suono",		// Knightmare added 2/2/14
	"Motore audio",			// Knightmare added 7/8/16
	"Lingua", /* FS: Multi-Lang DLL */
	"No aiutanti", /* FS: No sidekicks new game option */
	"Gemme Bonus", /* FS: Bonus save gems */

	/* FS: More Options! */
	"Pagina 1",
	"Pagina 2",
	"Visualizza il Framerate",
	"Comandi della console di Q3A",
	"Cinematiche in-game",
	"Nuova Auto-completamento",
	"Chat messaggio priorità",
	"Sidekick uscita allarme",
	"Record auto demo",
	"Lampi di danni",
	"Visualizza Tempo",
	"Coda di messaggi",
	"Formato musicale preferito",
	// Knightmare added 3/5/17
	"Schermi di carico rumoroso",
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
	"8/8",
	"4/8",
	"2/8",
	"1/8"
};

// weapon names TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_weapons[] =
{
	"No munizioni",		//only shows up if you have no ammo for the weapon you're trying to use. TX NOTE:treat like sentence "you have "no ammo".
	"la balestra",
	"le frecce della balestra",
	"il lanciadardi",
	"i dardi",
	"il Vitzatergo al C4",
	"i globi di C4",
	"la Daikatana",
	"il disco di Dedalo",
	"il disco",
	"il guanto frantumatore",
	"l'Automark 2020", // TX NOTE:a ficticious automatic pistol--US game currently reads "Glock", but that's a trademark.
	"i proiettili",
	"il maglio",
	"il disintegratore a ioni",
	"la sfera di ioni",
	"il kineticore",
	"la palla d'acciaio",
	"il metamaser",
	"le munizioni del metamaser",
	"l'incubo di Nharre",
	"alcuni brandelli",					// SCG[11/28/99]: 
	"il novabeam",
	"una novacell",					// SCG[11/28/99]: 
	"il ripgun",
	"le Rip-Ups",					// Knightmare changed 8/29/14
	"l'onda d'urto",
	"la sfera dello shock",
	"il fucile semiautomatico",
	"le cartucce",
	"il sidewinder",
	"i missili sidewinder",			// SCG[11/28/99]: 
	"l'artiglio d'argento",		
	"il lanciagranate",
	"le granate",
	"lo scettro di Stavros",
	"le rocce di lava",
	"il bagliore solare",
	"il bagliore solare",
// SCG[1/4/00]: 	"l'arpione elettrico",
	"il tridente di Poseidone",
	"le punte del tridente",
	"il bastone velenoso",
	"la sfera dello shock",					// SCG[1/4/00]: changed in english version
	"il ciuffo di Wyndrax",
	"i ciuffi",
	"L'occhio di Zeus",
	"il dardo",
	"le mani di gas definitive",


// FS: Needed for Configure Weapons Menu
	"Disintegratore a ioni",
	"Vitzatergo al C4",
	"Fucile semiautomatico",
	"Sidewinder",
	"Onda d'urto",
	"Disco di Dedalo",
	"Bastone velenoso",
	"Bagliore solare",
	"Maglio",
	"Tridente di Poseidone",
	"Mano di Zeus",
	"Lanciadardi",
	"Scettro di Stavros",
	"Balestra",
	"Ciuffo di Wyndrax",
	"Incubo di Nharre",
	"Automark 2020",
	"Lanciagranate",
	"Kineticore",
	"Ripgun",
	"Novabeam",
	"Metamaser",

	// Knightmare 8/29/13- Cordite grenades was stealing ripgun ammo identifier
	"le granate di cordite"
};

// armor TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_armors[] =
{
	"la corazza in plasteel",
	"la corazza cromata",
	"la corazza d'argento",
	"la corazza d'oro",
	"la corazza di maglia",
	"la corazza di diamante nero",
	"la corazza di Kevlar",
	"la corazza d'ebanite"
};

// monster names TX NOTE:NOMINITIVE CASE. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters[] =
{
	"Il cinghiale da battaglia robotizzato",
	"Il prigioniero nero",
	"Il buboide",         // TX NOTE:must match script.
	"La telecamera robotizzata",
	"Il centurione",
	"Il mitragliere volante",
	"La cariatide",
	"Il coccodrillo",
	"La sfera della morte robotizzata",
	"Il pipistrello dell'Apocalisse",
	"Il dragone",         // TX NOTE:must match script.
	"Lo gnomo",
	"La gang di donne",
	"Il traghettatore",
	"L'arciere",
	"La rana robotizzata",
	"Re Garroth",
	"Il pesce d'oro",
	"Il grifone",
	"L'arpia",
	"Il carceriere",
	"Kage",
	"Il primo cavaliere",
	"Il secondo cavaliere",
	"La scimmia da laboratorio",
	"L'uomo del laboratorio",
	"La pistola laser robotizzata",
	"Il lupo mannaro",
	"Medusa",         // TX NOTE:must match script.
	"Il minotauro",
	"La guardia di Mishima",         // TX NOTE:must match script.
	"Nharre",              // TX NOTE:must match script  don't translate
	"Il topo della peste",
	"Il topo di fogna",
	"Il sacerdote",
	"Il prigioniero",
	"Il proto-bozzolo robotizzato",
	"Il cervello artigliato",
	"Il RageMaster 5000 robotizzato",
	"Il membro della gang coi razzi",
	"Il poliziotto militare coi razzi",
	"Il verme putrefatto",
	"Il satiro",
	"Il commando della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"Il capitano della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"La ragazza della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"Lo squalo",
	"La zanzara assassina",
	"Lo scheletro",
	"Il lavoratore magro",
	"Il lavoratore grasso",
	"Il servo di fango robotizzato",
	"Il piccolo ragno",
	"Il ragno",
	"Stavros",         // TX NOTE:must match script.
	"Il chirurgo",
	"Il ladro",
	"La zanzara del tuono",
	"Il membro della gang con l'Uzi",
	"Il prigioniero bianco",
	"Lo stregone",         // TX NOTE:must match script.
	"Wyndrax",         // TX NOTE:must match script.
	"Gabbiano",
	"Lucciola",
	"Spiritello",
	"Mikiko",									// SCG[12/5/99]: 
	"Fantasma", // FS
	"DopeFish" // FS
};

// monster names ACCUSATIVE CASE. NOT USED IN ENGLISH. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters_acc[] =
{
	"il cinghiale da battaglia robotizzato",
	"il prigioniero nero",
	"il buboide",         // TX NOTE:must match script.
	"la telecamera robotizzata",
	"il centurione",
	"il mitragliere volante",
	"la cariatide",
	"il coccodrillo",
	"la sfera della morte robotizzata",
	"il pipistrello dell'Apocalisse",
	"il dragone",         // TX NOTE:must match script.
	"lo gnomo",
	"la gang di donne",
	"il traghettatore",
	"l'arciere",
	"la rana robotizzata",
	"Re Garroth",
	"il pesce d'oro",
	"il grifone",
	"l'arpia",
	"il carceriere",
	"Kage",
	"il primo cavaliere",
	"il secondo cavaliere",
	"la scimmia da laboratorio",
	"l'uomo del laboratorio",
	"la pistola laser robotizzata",
	"il lupo mannaro",
	"Medusa",         // TX NOTE:must match script.
	"il minotauro",
	"la guardia di Mishima",         // TX NOTE:must match script.
	"Nharre",              // TX NOTE:must match script  don't translate
	"il topo della peste",
	"il topo di fogna",
	"il sacerdote",
	"il prigioniero",
	"il proto-bozzolo robotizzato",
	"il cervello artigliato",
	"il RageMaster 5000 robotizzato",
	"il membro della gang coi razzi",
	"il poliziotto militare coi razzi",
	"il verme putrefatto",
	"il satiro",
	"il commando della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"il capitano della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"la ragazza della Marina",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"lo squalo",
	"la zanzara assassina",
	"lo scheletro",
	"il lavoratore magro",
	"il lavoratore grasso",
	"il servo di fango robotizzato",
	"il piccolo ragno",
	"il ragno",
	"Stavros",         // TX NOTE:must match script.
	"il chirurgo",
	"il ladro",
	"la zanzara del tuono",
	"il membro della gang con l'Uzi",
	"il prigioniero bianco",
	"lo stregone",         // TX NOTE:must match script.
	"Wyndrax",         // TX NOTE:must match script.
	"il gabbiano",
	"il lucciola",
	"lo spiritello",
	"Mikiko",
	"Fantasma",
	"DopeFish" // FS
};

const char *tongue_world[] =
{
	"continua",                                 // triggers to go until sequence complete TX NOTE:## +.
	"Sequenza completata",                         // trigger sequence completed TX NOTE:sentence.
	
	"Ti serve",                              // need a specific key TX NOTE:followed by the key needed.
	"Ti serve la chiave giusta\n",               // wrong key in possession TX NOTE:sentence.
		
	"Non si può aprire in questo modo\n",					       // Can't be opened this way

	"Il veleno sta abbandonando tuo corpo\n",    // poison expiring TX NOTE:sentence.
	"I tuoi ossigenatori sono quasi esauriti\n",           // oxylung expiring TX NOTE:sentence.
	"La tua radioprotezione si sta esaurendo\n",                // envirosuit expiring TX NOTE:sentence.
	"Il tuo megascudo si sta esaurendo\n",                 // megashield expiring TX NOTE:sentence.
	"La sfera dello spettro si sta esaurendo\n",                   // wraith orb expiring TX NOTE:sentence.
	"La potenza bonus si sta esurendo\n",				  // power boost expiring TX NOTE:sentence.
	"L'attacco bonus si sta esaurendo\n",                // attack boost expiring TX NOTE:sentence.
	"La velocità bonus si sta esaurendo\n",                 // speed boost expiring TX NOTE:sentence.
	"Il balzo bonus si sta esaurendo\n",             // jump boost expiring TX NOTE:sentence.
	"La vitalità bonus si sta esaurendo\n",              // health boost expiring TX NOTE:sentence.

	"si è unito alla partita",                            // player joined the game TX NOTE:NAME +.
	"è uscito dal livello",                           // player exited the level TX NOTE:NAME +.
	
	"Hiro Miyamoto",               // Hiro Miyamoto's full name TX NOTE:same as in script.
	"Superfly Johnson",              // Superfly's full name TX NOTE:same as in script.
	"Mikiko Ebihara",               // Mikiko's full name TX NOTE:same as in script.
	
	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK
	"",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER

	"Impossibile uscire dal livello senza\n",				// SCG[10/18/99]: no exiting level without sidekicks
	"Non puoi uscire senza\n",						// SCG[11/9/99]: No exiting without a key
	"Avvelenato!\n",								// NSS[11/29/99]: Needed a generic and yet global poisoned message

	"Hai trovato un segreto!\n",						// cek[1-3-00]
	"Il teschio del mana si sta esaurendo.\n",                   // cek[2-9-00]
	"Pinned!\n", // FS
	"Strage!\n", // FS
	"Buone Feste da 1.3 squadra Daikatana!\n", // FS
	"e" // FS
};

const char *tongue_deathmsg_daikatana[] =
{
	"%s è stato fatto a fette da %s\n"
};

const char *tongue_deathmsg_self[] =
{
	" si è spaccato il cranio\n",                          // death, fell TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è annegato\n",                             // death, drowned TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato abbrustolito\n",                                // death, lava TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato ricoperto di melma\n",                                 // death, slimed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato avvelenato\n",                                // death, poison TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"si è stancato di vivere\n",                             // death, killed self TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato telefraggato\n",                            // death, teleport TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato triturato\n",                            // death, crushed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	
	"si è mangiato una cucchiaiata di C4\n",                        // death, C4 explosives TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"è stato congelato solido.\n",							// FS: death, frozen
	"è stato sconvolto da un fulmine.\n"					// FS: death, shocked by lightning bolts in e3
};

const char *tongue_deathmsg_weapon1[] =
{
	"%s è stato umiliato da %s!\n",
	"%s ha spedito %s all'inferno!\n",
	"%s è stato ionizzato da %s!\n",
	"%s ha sbriciolato %s!\n",
	"%s ha riempito di piombo %s!\n",
	"%s ha cavalcato i razzi di %s!\n",
	"%s ha fulminato %s!\n"
};

const char *tongue_deathmsg_weapon2[] =
{
	"%s ha giocato a frisbee estremo con %s!\n",
	"%s si è abbattuto su %s!\n",
	"%s ha polverizzato %s!\n",
	"%s ha ridicolizzato %s!\n",
	"%s ha fatto a fette %s!\n",
	"%s si è inginocchiato davanti a Zeus!\n"
};

const char *tongue_deathmsg_weapon3[] =
{
	"%s è stato dilaniato da %s!\n",
	"%s è stato impalato da %s!\n",
	"%s ha assaggiato la furia di %s!\n",
	"%s è stato carbonizzato dalla meteora di %s!\n",
	"%s ha assaggiato l'alta tensione di %s!\n",
	"%s è stato massacrato dal demone di %s!\n"
};

const char *tongue_deathmsg_weapon4[] =
{
	"%s si è mangiato %s!\n",
	"%s ha devastato %s!\n",
	"%s è stato squarciato da %s!\n",
	"%s ha ridotto a brandelli %s!\n",
	"%s è stato congelato da %s!\n",
	"%s ha aperto una voragine in %s!\n",
	"%s è stato maserizzato da %s!\n"
};

const char *tongue_scoreboard[] =
{
	"Nome",
	"Uccisioni",
	"Ping",
	"Tempo",
	"Colpi",
	"Centri",
	"Morti",
	"Punti"
};

const char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"Seleziona la difficoltà:",           // difficulty header TX NOTE:using karate skill levels.
	"Cintura bianca",                   // newbie
	"Cintura blu",                    // average
	"Cintura nera"                    // expert (or so they think!)
};

const char *tongue_skincolors[] =
{
	"Blu",                         // blue
	"Verde",                        // green
	"Rosso",                          // red
	"Oro"                          // gold
};

const char *tongue_statbar[] =
{
	"POTENZA",                        // skill 'power' label
	"ATTACCO",                       // skill 'attack' label
	"VELOCITÀ",												// skill 'speed' label
	"BALZO",													// skill 'acrobatic' label
	"VITALITÀ",											// skill 'vitality' label

	// not used in non-english versions
	"ARMOR",																	 // armor label
	"SALUTE",																	 // health label
	"MUNIZIONE",																	 // ammo label
	"UCCISIONI",																	 // kills label
	"LIVELLO",																	 // experience points label

	"NUOVO LIVELLO!",                    // experience level up
	"Seleziona",               // select skill
	"Aggiungi punti",            // add point to skill

	"CARICAMENTO..."                    // loading new level
};

const char *tongue_weapon_misc[] =
{
	"I moduli C4 sono destabilizzanti!\n"    // C4 modules are de-stabilizing
};

const char *tongue_sidekick[] =    // sidekick commands
{ 
	"Raccogli",	                      // 'get' item command
	"Segui",                          // 'come here', 'come to me'
	"Stai qui",                       // 'stay' command, 'don't move'
	"Attacca",                        // 'attack' command
	"Non attaccare",                  // 'back off', 'move away'
		
	"Potrei avere"                      //  asking to pick up an item: "Can I have the shotgun?"
};

const char *tongue_ctf[] =
{
	"la Bandiera rossa",
	"la Bandiera blu",
	"Squadra sconosciuta",

	"Bandiera %s",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"Rosso",
	"Blu",
	"Cromo",
	"Metallo",
	"Verde",
	"Arancione",
	"Viola",
	"Giallo",

	"Punteggio attuale: %s:%d, %s:%d\n",
	"Hai catturato: %s!\n",
	"%s della tua squadra ha catturato: %s!\n",
	"%s della squadra %s ha catturato la tua bandiera!\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"Hai afferrato: %s\n",
	"%s della tua squadra ha afferrato: %s\n",
	"%s ha rubato la tua bandiera\n",
	"%s è stata recuperata\n",

	"%d è un numero non valido. Usa 1 o 2\n",
	"Sei nella squadra %d (%s)\n",
	"Sei già nella squadra %d\n",
	"%s è entrato nella squadra %s\n",									// translate same as with the %s team above

	"La squadra %s ha vinto!\nPunteggio finale: %s:%d, %s:%d\n",		// translate same as with the %s team above
	"Pareggio!\n",
	"Tempo scaduto!\n",
	"Limite di catture raggiunto!\n",

	"Preparati per i tempi supplementari!\n", // FS
	"Hai la bandiera nemica. Torna alla base!\n", // FS
	"Il nemico ha la tua bandiera! Riprendila!\n" // FS
};

const char *tongue_deathtag[] =
{
	"Bomba",														// as in backpack
	"Bomba %s",													// as in red pack
	"Il limite di punti è stato raggiunto!\n",
	"Il tuo tempo si sta esaurendo!\n",
	"Il tuo tempo è scaduto!\n",

	"%s della squadra %s ha afferrato: %s!\n",				// translate using the '%s team' guidelines above

	"La tua squadra ha conquistato un punto!\n",
	"La tua squadra ha conquistato %d punti!\n",								// you get 2 points
	"La squadra %s a conquistato un punto!\n",								// translate using the '%s team' guidelines above
	"La squadra %s ha conquistato %d punti!\n",							// The red team gets 2 points

	"Hai segnato!\n",
	"%s della tua squadra ha segnato!\n",
	"%s della squadra %s ha segnato!\n",

	"Hai la bomba!  Vai a segnare!\n", // FS
	"l'altra squadra ha la bomba!\n" // FS
};

/* FS: v1.2 additions */
const char *tongue_save_error[] =
{
	"Per poter salvare deve essere in corso un gioco locale!\n",
	"Devi essere nel gioco per poter salvare!\n",
	"Non puoi salvare durante la sfida mortale!n",
	"Non puoi salvare durante un filmato!\n",
	"Non puoi salvare il gioco quando sei morto!\n",
	"Non puoi salvare durante gli intervalli!\n",
	"Non puoi salvare qui!\n"
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
	"Aggiornamento disponibile",
	"C'è una nuova versione di Daikatana v1.3 disponibile.\nVuoi scaricarlo?\nÈ possibile disattivare gli aggiornamenti automatici del\nmenu delle opzioni.",
	"Dati PAK verifica fallita.\nE 'errore usare i dati PAK v1.0.\nDaikatana v1.3 richiedono v1.2 dati PAK.\nClicca per l'aggiornamento.",
	"Daikatana verificherà i dati PAK è v1.2.\nTempo di prova 30 secondi sul vecchio computer.\nLa prova viene eseguita una volta.",
	"C'è una nuova versione di Daikatana v1.3 Mappa dei dati disponibile.\nVuoi scaricarlo?\nÈ possibile disattivare gli aggiornamenti automatici del\nmenu delle opzioni.",
	"Download Aggiornamento",
	"Verifica PAK dati",
	"No Grazie",
	"Vai alla dk.toastednet.org.\nContinuando lancerai il tuo browser.",
	"Scaricare l'aggiornamento",
	"File: ",
	"Dimensione: ",
	"Stato: ",
	"Inattivo",
	"Collegamento",
	"Download",
	"Estrazione",
	"Finito",
	"Fallito",
	"Abortire",
	"OK",
	"Scarica Finito!",
	"Notizia"
};
