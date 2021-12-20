#include "l__language.h"

// SPANISH text

keyname_t keynames[] =
{
	{"TAB", K_TAB},
	{"INTRO", K_ENTER},
	{"ESC", K_ESCAPE},
	{"ESPACIO", K_SPACE},
	{"RETROCESO", K_BACKSPACE},
	{"ARRIBA", K_UPARROW},
	{"ABAJO", K_DOWNARROW},
	{"IZQUIERDA", K_LEFTARROW},
	{"DERECHA", K_RIGHTARROW},
	
	{"ALT", K_ALT},
	{"CONTROL", K_CTRL},
	{"MAY�S", K_SHIFT},
	
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

	{"INSERT", K_INS},
	{"SUPR", K_DEL},
	{"AVP�G", K_PGDN},
	{"REP�G", K_PGUP},
	{"INICIO", K_HOME},
	{"FIN", K_END},

	{"RAT�N1", K_MOUSE1},
	{"RAT�N2", K_MOUSE2},
	{"RAT�N3", K_MOUSE3},
	{"RAT�N4", K_MOUSE4},	// Knightmare added 5/29/12
	{"RAT�N5", K_MOUSE5},	// Knightmare added 5/29/12

	{"JOYSTICK1", K_JOY1},
	{"JOYSTICK2", K_JOY2},
	{"JOYSTICK3", K_JOY3},
	{"JOYSTICK4", K_JOY4},

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

	{"TEC_INICIO",			K_KP_HOME },
	{"TEC_ARRIBA",		K_KP_UPARROW },
	{"TEC_REP�G",			K_KP_PGUP },
	{"TEC_IZQUIERDA",	K_KP_LEFTARROW },
	{"TEC_5",			K_KP_5 },
	{"TEC_DERECHA",	K_KP_RIGHTARROW },
	{"TEC_FIN",			K_KP_END },
	{"TEC_ABAJO",	K_KP_DOWNARROW },
	{"TEC_AVP�G",			K_KP_PGDN },
	{"TEC_INTRO",		K_KP_ENTER },
	{"TEC_INSERT",			K_KP_INS },
	{"TEC_SUPR",			K_KP_DEL },
	{"TEC_BARRA",		K_KP_SLASH },
	{"TEC_MENOS",		K_KP_MINUS },
	{"TEC_M�S",			K_KP_PLUS },

	{"SUBIR", K_MWHEELUP },
	{"BAJAR", K_MWHEELDOWN },

	{"PAUSA", K_PAUSE},

	{"PUNTO Y COMA", ';'},	// because a raw semicolon seperates commands

	{0,0}
};

// vkey conversion table
//==========================================================================
const unsigned char scantokey[128] =
{
//  0           1       2       3       4       5       6       7 
//  8           9       A       B       C       D       E       F 
    0  ,	27,     '1',    '2',    '3',    '4',    '5',    '6', 
    '7',    '8',    '9',    '0',    '\'',    '�',    K_BACKSPACE, 9, // 0 
    'q',    'w',    'e',    'r',    't',    'y',    'u',    'i', 
    'o',    'p',    '`',    '+',    13 ,    K_CTRL,'a',  's',      // 1 
    'd',    'f',    'g',    'h',    'j',    'k',    'l',    '�', 
    '�' ,    '`',    K_SHIFT,'�',  'z',    'x',    'c',    'v',      // 2 
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
	"Has recogido",                            // weapon pickup TX NOTE:+ the items in the weapons section below.
	"Has recogido",			                // health pickup TX NOTE:+ one of the 3 health items below (health kit, Goldenorb, Wraith orb.
	"Has recogido",						    // armor good pickup TX NOTE:+ the items in the armor section below.
	"Has recogido",						    // boost pickup TX NOTE:not used - DON'T TRANSLATE.
	"�Obtenida la gema para guardar la partida",             // pick up 'save gem'
	
	"POTENCIA",                                    // use power boost TX NOTE:must match statusbar.xls .
	"ATAQUE",                                   // use attack boost TX NOTE:must match statusbar.xls .
	"VELOCIDAD",                                    // use speed boost TX NOTE:must match statusbar.xls .
	"ACROBACIA",                                     // use jump boost TX NOTE:must match statusbar.xls .
	"VITALIDAD",                                 // use health boost TX NOTE:must match statusbar.xls .
												
	"�V�monos de aqui!",                           // bomb explode TX NOTE:"let's get out of here!.
	"Necesitas una botella para mezclar eso.",    // need bottle to mix ingredients TX NOTE:sentence.
	"Objetos necesarios: ",                          // ingredient required TX NOTE:+ bomb item, short desc below.
	"Has fabricado un explosivo...",                  // bomb created TX NOTE:sentence.
	"Has encontrado",                                // bomb found, TX NOTE:+ one of the ingredients or a bottle.
	"una bolsita de azufre",						// bomb ingredient 1
	"un trozo de carb�n",                           // bomb ingredient 2
	"un frasco de nitrato de sodio",                      // bomb ingredient 3
	"una botella vac�a",                          // bomb bottle
		
	"azufre",                                  // bomb item, short description
	"carb�n",                                 // bomb item, short description
	"nitrato de sodio",                                // bomb item, short description
		
	"Lees ",                            // read book TX NOTE:+ one of two books below.
	"Esto no se puede usar aqu�.",                // no read book TX NOTE:sentence.
	"el libro de hechizos de Wyndrax",                    // Wyndrax spellbook
		
	"Has recogido",                            // key pickup TX NOTE:one of the 3 following items.
	"la llave de la cripta",                            // crypt key name
	"la llave de Wyndrax",                          // Wyndrax key name
	"una tarjeta de acceso a una celda",                    // Prison cell key
		
	"la tarjeta de control roja",						// SCG[11/15/99]: red control card name
	"la tarjeta de control azul",					// SCG[11/6/99]: blue control card name
	"la tarjeta de control verde",					// SCG[11/6/99]: green control card name
	"la tarjeta de control amarilla",					// SCG[11/6/99]: yellow control card name
	"la Llave hexagonal",							// SCG[11/6/99]: hex keystone name
	"la llave cuadrangular",						// SCG[11/6/99]: quad keystone name
	"la llave triangular",						// SCG[11/6/99]: trigon keystone name
	"el megaescudo",							// SCG[11/14/99]: Megashield name
	"la calavera m�gica",							// SCG[11/14/99]: 
	"el ant�doto del veneno",						// SCG[11/14/99]: 
	"el Dracma",								// SCG[11/14/99]: 
	"el cuerno de Caronte",						// SCG[11/14/99]: 
	"la letra A de la clave AEGIS",				// SCG[11/14/99]: A of AEGIS key name
	"la letra E de la clave AEGIS",				// SCG[11/14/99]: E of AEGIS key name
	"la letra G de la clave AEGIS",				// SCG[11/14/99]: G of AEGIS key name
	"la letra I de la clave AEGIS",				// SCG[11/14/99]: I of AEGIS key name
	"la letra S de la clave AEGIS",				// SCG[11/14/99]: S of AEGIS key name
	"un fragmento del purificador",					// SCG[11/14/99]: 
	"el arca negra",							// SCG[11/14/99]: 
	"el anillo de proteccion contra el fuego",				// SCG[11/14/99]: 
	"el anillo de la inmortalidad",			// SCG[11/14/99]: 
	"el anillo de proteccion contra el rel�mpago",			// SCG[11/14/99]: 
	"el entorno-traje",							// SCG[11/14/99]: 
	
	"el botiqu�n",                           // health kit
	"el alma dorada",                           // Goldensoul
	"la esfera espectral",							// wraith orb
		
	"una piedra preciosa de salvaci�n",								// T_SAVEGEM
	"No tienes piedra preciosa de salvaci�n",					//cek[12-13-99]
	"el frasco de vitalidad",							// cek[1-3-00]

	// cek[2-2-00]: altered the following ***********************************************
	"el paquete de vitalidad",
	"el vaso de la vida",
	"la botella de vitalidad",
	"el caj�n de vitalidad",
	"la caja de vitalidad",
	"Se ha terminado el ant�doto.\n", /* FS: Added CR */

// SCG[2/8/00]: messages for completed artifacts
	"�Encontraste todas las tabletas AEGIS!",
	"�Encontraste las tres piedras angulares!",
	"has ensamblado el Purificador",
	"Comiste algo de fruta.\n", /* FS */
	"�Obtenida la gema prima",				/* FS */
	"N�mero total de gema prima: ",			/* FS */
	"C�digos de Elevaci�n",		// Knightmare added
};

// menu-related TX NOTE:all independent words -- no grammatical inflection.
const char *tongue_menu[] =
{
	"Adelante",                                  // key bind to Move Forward
	"Atr�s",                                 // key bind to Move Backward 
	"Paso/izquierda",                                // key bind to Step Left
	"Paso/derecha",                               // key bind to Step Right
	"Atacar",                                   // key bind to Attack
	"Saltar",                                     // key bind to Jump/Up
	"Usar/manipular",                              // key bind to Use/Operate object
	"Agacharse",                                   // key bind to Crouch/Down
	"Arma siguiente",                              // key bind to Next Weapon
	"Arma anterior",                              // key bind to Prev Weapon
	"Girar/izquierda",                                // key bind to Turn Left
	"Girar/derecha",                               // key bind to Turn Right
	"Correr",                                      // key bind to Run
	"Paso lateral",                                 // key bind to  Sidestep
	"Mirar arriba",                                  // key bind to Look Up
	"Mirar abajo",                                // key bind to Look Down
	"Centrar vista",                              // key bind to Center View
	"Mirar con rat�n",                                // key bind to Mouse Look
	"Mirar con teclas",                                  // key bind to Keyboard Look
	"Aumentar vista",                             // key bind to Screen size up
	"Disminuir vista",                           // key bind to Screen size down
	"Mostrar HUD",                            // key bind to Show All Huds
	"Abrir inventario",                                // key bind to Inventory Open
	"Usar objeto",                            // key bind to Use Item
	"Objeto siguiente",                                // key bind to Next Item
	"Objeto anterior",                                // key bind to Prev Item
	"Cambiar compa�ero",                            // key bind to Swap Sidekick
	"Siguiente comando",                             // key bind to Command Next
	"Comando anterior",                             // key bind to Command Prev
	"Aplicar comando",                            // key bind to Command Apply
	
	ARROW_LEFT_STRING  " Izquierda",                 // left arrow key
	ARROW_UP_STRING    " Arriba",                   // up arrow key
	ARROW_DOWN_STRING  " Abajo",                 // down arrow key
	ARROW_RIGHT_STRING " Derecha",                // right arrow key
	"--",                    // no bind setting for this key
	
	"INTRO para asignar, SUPR para borrar",     // set/delete key TX NOTE:sentence.
	"INTRO para seleccionar",                 // select key TX NOTE:sentence.
	"asigna tecla/ESC para cancelar",             // set/abort TX NOTE:sentence.
		
	"Por defecto",                                 // default button
		
	"Ninguna",                                     // no mouse bindings
	"Moverse a la izquierda/derecha",                          // mouse "move left and right" setting
	"Girar a la izquierda/derecha",                          // mouse "turn left and right" setting
	"Mirar arriba/abajo",                             // mouse "look up and down" setting
	"Moverse adelante/atr�s",                           // mouse "move forward and back" setting
	"Invertir eje Y",                           // reverse mouse axis
	"Mirar con rat�n",                               // Mouse-Look
	"Mirar con desplazamiento",                              // Mouse-Look
	"Eje X",                                   // x axis
	"Eje Y",                                   // y axis
	"Bot�n 1",                                 // button 1 label
	"Bot�n 2",                                 // button 2 label
	"Bot�n 3",                                 // button 3 label
	"Selecciona un comando/ESC para cancelar",          // select a command, ESCape to cancel
	"Girar I/D",                                 // turn left and right, abbreviated
	"Despl. lat. I/D",                               // strafe left and right, abbreviated
	"Mirar arr./abajo",                                 // look up and down, abbreviated
	"Mov. adel./atr�s",                                 // move forward and back, abbreviated
	"Sensibilidad eje X",                            // mouse sensitivity for x-axis
	"Sensibilidad eje Y",                            // mouse sensitivity for y-axis 
	"Configurar opciones del rat�n:",                 // configure mouse options  TX NOTE:sentence.
	
	"Combate a muerte",                               // 'deathmatch' game
	"Contacto mortal",                                 // 'deathtag' game
	"Cooperativo",                              // 'cooperative' game
		
	"F�cil",                                     // easy difficulty
	"Media",                                   // medium difficulty
	"Dif�cil",                                     // hard difficulty
		
	"Buscar juego en la red",					// SCG[12/1/99]: 
	"Buscar juego en LAN",						// SCG[12/1/99]: 
	"Partida multijugador",						// SCG[12/1/99]: 
	"LAN",                                      // local area network game
	"Internet",                                 // internet game
		
	"Unirse",                                     // join server
	"Host",                                      // host new server
	"A�adir " ARROW_DOWN_STRING,                   // add address
	"Actualizar",                                  // refresh network games
	"Configurar",                                    // player setup 
		
	"Velocidad de conexi�n",                             // connection speed label
	"28.8k",                                    // connection type 1
	"56.6k",                                    // connection type 2
	"RDSI",										  // connection type 3
	"Cable/DSL",                                // connection type 4
	"T1/Red local",                                   // connection type 5
	"Definida por el usuario",                             // connection type 6 TX NOTE:user enters his own connection type.
		
	"L�mite de tiempo",								// SCG[12/2/99]: 
	"Color del personaje",							// SCG[12/2/99]: 
	"Episodio de comienzo",							// SCG[12/2/99]: 
	"Elegir equipo",								// SCG[12/1/99]: 
	"L�mite CLB",								// SCG[12/1/99]: 
	"Color equipo 1",								// SCG[12/1/99]: 
	"Color equipo 2",								// SCG[12/1/99]: 
	"Puntuaci�n l�mite",								// SCG[12/1/99]: 
	"Muertes", 								// SCG[12/1/99]: 
	"L�mite de nivel",								// level limit
	"Iniciar episodio",							// SCG[12/2/99]: 
	"Mapa de juego",									// SCG[12/1/99]: 
	"Modo de juego",                                // game mode (deathmatch,deathtag,co-op)
	"Nivel de destreza",                              // skill level
	"Tiempo",                               // time limit
	"N� jugadores",                              // maximum players
	"Personaje",                                // character
	"Color base",                               // base color
	"�Empezar!",                                   // start multiplayer game
		
	"Armas",                             // weapons remain with you into the next area of play
	"Regeneraci�n",                            // items rematerialize on the map
	"Regen. lejana",                             // place user's character at the farthest point from other players
	"Permitir salida",                            // allow players to exit the level wihtout being killed first
	"Mismo mapa",                                 // use the same map as last time
	"Forzar regen.",                            // make the respawn command happen now.
	"Da�os al caer",                           // players take damage from falling down
	"Potenciadores inst.",                            // make instant power-ups available in the game
	"Potenciadores",                             // allow power-ups to be used in the game
	"Botiquines",                             // allow health kits to be used in the game
	"Permitir blindaje",                              // allow armor to be used in the game
	"Munici�n infinita",                            // unlimited ammunition
	"Campo visual fijo",                                // limits the user's field-of-vision
	"Juego en equipo",                                 // team-play
	"Herir/compa�eros",                           // hurt teammates allows players to cause damage to team-mates.
	"Cambio r�pido",                              // allows a player to change weapons faster than normal
	"Pasos",                                // footsteps become audible or silent
	"Permitir gancho",                               // allow hook
	"Ver cartuchos",                           // show shotgun shells?
	
	"Direcci�n IP del servidor",                        // server internet provider address
	"No se han encontrado partidas locales",                     // no local games found TX NOTE:sentence.
	"Iniciando mapa",                             // starting map
	"Nombre/servidor",                              // server name
	"Nombre/jugador",                              // player name
	"Nombre/equipo",                                // team name
	
	"�Hacerse el harakiri?",                        // confirm quit TX NOTE:Do not translate Harakiri--it's Jpn.
	
	"S�",                             // 'yes' response
	"No",                             // 'no' response

	"Guardar Partida",								// cek[1-3-00] changed from 'save' to 'save game'
	"Cargar",								//cek[12-6-99]
	"Guardar",								//cek[12-6-99]
	"Eliminar",						 	//cek[12-6-99]
	"Selecciona archivo de configuraci�n",			//cek[12-6-99]
	"�Eliminar la selecci�n?",						//cek[12-6-99]
												
	"Cargar Partida",							//cek[12-6-99]
	"Armad.",									//cek[12-6-99]
	"Salud",									//cek[12-6-99]
	"Nivel",									//cek[12-6-99]
	"Monstruos",									//cek[12-6-99]
	"Secretos",									//cek[12-6-99]
	"Tiempo",										//cek[12-6-99]
	"Total",									//cek[12-6-99]
	"Episodio",									//cek[12-6-99]

	"Usar sonido tridimensional",				//cek[12-6-99]

	"Guardado",									//cek[12-7-99]
	"Cargado",									//cek[12-7-99]
	"Eliminado",									//cek[12-7-99]

	"Suavizar el rat�n",								//cek[12-7-99]
	"Rueda arriba",									//cek[12-7-99]
	"Rueda abajo",								//cek[12-7-99]

	"No permitir ALT+TAB",						//cek[12-7-99]
	"Balanceo del arma",							//cek[12-7-99]
	"Cambio auto de arma",						//cek[12-7-99]

	"Intensidad",								//cek[12-7-99] cek[12-13-99]
	"Armas brillantes",							//cek[12-7-99]
	"Agujeros de bala",								// SCG[1/4/00]: 

	"Adelante",									//cek[12-9-99]
	"Lateral",										//cek[12-9-99]
	"Arriba",										//cek[12-9-99]
	"Inclinaci�n",									//cek[12-9-99]
	"Desviaci�n",										//cek[12-9-99]
	"Usar mando",								//cek[12-9-99]
	"Configurar eje",							//cek[12-9-99]
	"Configurar las opciones del mando",				//cek[12-9-99]
	"Seleccionar acci�n para este bot�n",			//cek[12-9-99]
	"Pulsar bot�n del joystick para configurar",		//cek[12-9-99]
	"L�mite",								//cek[12-9-99]
	"Sensibilidad",								//cek[12-9-99]

	"Capturar la bandera",							//cek[12-10-99]
	"Vuelta",										//cek[12-10-99]
	"56.6k",									//cek[12-10-99]
	"Auto",										//cek[12-10-99]
	"Equipo 1",									//cek[12-10-99]
	"Equipo 2",									//cek[12-10-99]

	"Ver introducci�n",								//cek[12-13-99]
	"Sist. habilidad",							//cek[12-13-99]
	"Velocidad del rat�n",								//cek[12-13-99]

	"\"�COGE!\"",								// cek[1-3-00]
	"\"�VEN!\"",							// cek[1-3-00]
	"\"�ESPERA!\"",							// cek[1-3-00]
	"\"�ATACA!\"",							// cek[1-3-00]
	"\"�RET�RATE!\"",							// cek[1-3-00]

	"Selec. arma %d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)

	"Cambiar de HUD",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"Siguiente HUD",									// cek[1-5-00]  -- similar in meaning.
	"HUD anterior",									// cek[1-5-00]
	"Usar HUD",									// cek[1-5-00]

	"Hablar",										// cek[1-11-00]
	"Puntuaci�n",								// SCG[1/13/00]: 
	"Hablar al equipo",								// cek[1-22-00]
	"%s ha sido asignada a %s",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"�Reemplazar?",									// cek[1-22-00]

	"Toastednet",								/* FS: changed to tnet */
	"DKNews",								// cek[2-1-00]
	"�Continuar?",								// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"�Quieres mapas custom, mods y m�s?\nVaya a dk.toastednet.org.\nSi contin�as iniciar�s tu explorador de red.",	/* FS: changed to tnet */
	"Para todas las noticias Daikatana\nvaya a www.daikatananews.net.\nSi contin�as iniciar�s tu navegador de red.",	/* FS: changed to dknews */

	"Arma %d",									// cek[3-6-00]: treat as "weapon 1"
	"Cancelar",									// cek[3-9-00]					
	"www.daikatananews.net", /* FS: changed to dknews */
	"Vaya a www.daikatananews.net.\nSi contin�as iniciar�s tu explorador de red.",			// cek[3-9-00]
	
	"Configurar Armas", /* FS */
	"Instagib", /* FS */
	"Combate a muerte insultos", /* FS */
	"Ilimitado guarda", /* FS */
	"CTF/DT indicios", /* FS */
	"Comprobar actualizaciones de software", /* FS */
	"Actualizaciones Beta", /* FS */

	"Noticia Para Mini-Drivers",	// Knightmare added 2/20/13
	"This version of Daikatana no longer\nsupports the 3DFX and PowerVR mini-drivers.\n3DFX users are strongly recommended to\nuse the Metabyte WickedGL drivers.",	// Knightmare added 2/20/13
	"Download WickedGL drivers",		// Knightmare added 2/20/13
	"Vaya a www.3dfxzone.it.\nSi contin�as iniciar�s tu explorador de red.",	// Knightmare added 2/20/13
	"Switch to default OpenGL",	// Knightmare added 2/20/13

	"Captura de pantalla",	// Knightmare added 1/21/14
	"Captura de pantalla de silencio",	// Knightmare added 1/21/14
	"EXP compartida",	// Knightmare added 2/1/14
	"Eliminar Partida",	// Knightmare added 2/7/14
	"�Eliminar partida?",	// Knightmare added 2/7/14
	"Tecla de mayusculas", /* FS: For Mouse and Joystick */
	"Hemos pasado mucho tiempo reparar los\nmapas originales y a�adiendo caracter�sticas\nsutiles a la AI Sidekick como regeneraci�n de salud.\nEl juego es mucho m�s agradable con compa�eros.", /* FS: For no sidekicks */
	"�Seguro que quieres jugar sin ellos?", /* FS: For no sidekicks */

	"Aumentar Potencia",	/* FS: Added by request. */
	"Aumentar Ataque",		/* FS: Added by request. */
	"Aumentar Velocidad",	/* FS: Added by request. */
	"Aumentar Acrobacia",	/* FS: Added by request. */
	"Aumentar Vitalidad",	/* FS: Added by request. */
	"Guardado R�pido",		/* FS: Added by request. */
	"Carga R�pida",			/* FS: Added by request. */

	"Bot�n 4",			// Knightmare 1/30/15- button 4 label
	"Bot�n 5",			// Knightmare 1/30/15- button 5 label
	"Aceleraci�n",	/* FS */
};

const char *tongue_menu_options[] =
{
	"Correr siempre",                               // makes user's characters run everywhere
	"Mirar y saltar",                               // look + jump
	"Mirar y disparar",                               // look + strafe (shoot wildly)
	"Fijaci�n autom�tica",                           // computer aims at nearest target for the user
	"Punto de mira",                                // a crosshair is displayed 
	"Arma visible",                           // weapon is shown
	"Subt�tulos",                                // text subtitles
	
	"Volumen de los efectos de sonido",                      // volume for sound fx
	"Volumen de la m�sica",                             // volume for music
	"Volumen de las voces",                         // volume for voices

	"Software",                                 // video mode, software
	"OpenGL",                                   // video mode, opengl
	"Aplicar cambios",                            // apply video mode changes TX NOTE:sentence.
	
	"Pantalla completa",                               // make view use the full screen
	"Sombras",                                  // allow shadows
	"Controlador",                                   // video driver
	"Resoluci�n",                               // choose/set screen display resolution
	"Tama�o de pantalla",                              // choose/set screen size
	"Brillo",                               // choose/set brightness
	"Calidad de textura",                          // choose/set quality of 3D image textures 
	"Barra de estado visible",                    // choose/set whether the status bar is visible.
	"Detalles de niebla y agua",							// SCG[12/4/99]: 
	"Ronin",									// difficulty level easy
	"Samurai",									// difficulty level medium
	"Shogun",									// difficulty level hard

	"Lluvia y nieve",							// cek[1-11-00]
	"Niebla",										// cek[1-11-00]	
	
	"Reproducir sonidos de potencias", /* FS */
	"Reproducir sonidos eliminados", /* FS */
	"Reproducir sonidos de Compa�eros", /* FS */

	"Filtro Anisotr�pico",	// Knightmare added 5/29/12
	"Anchura Custom",	// Knightmare added 5/29/12
	"Altura Custom",	// Knightmare added 5/29/12
	"Tama�o de barra de estado",	// Knightmare added 6/14/12
	"Sincronizaci�n Vertical",		// Knightmare added 10/4/12
	"Actualizaci�n Asincr�nica",	// Knightmare added 10/4/12
	"Tasa de refresco",			// Knightmare added 10/4/12
	"Formato de captura de pantalla",	// Knightmare added 3/11/13
	"Spot",				// Knightmare added 5/10/13
	"Volumen",			// Knightmare added 5/10/13

	"Opciones de descarga",		// Knightmare added 11/19/13
	"Permite descargar",	// Knightmare added 11/19/13
	"Permite HTTP descargar",	/* FS added 03/29/15 */
	"mapas / texturas",		// Knightmare added 11/19/13
	"sonidos",				// Knightmare added 11/19/13
	"modelos",				// Knightmare added 11/19/13
	"Tasa de sonido",		// Knightmare added 2/2/14
	"Motor de audio",			// Knightmare added 7/8/16
	"Idioma", /* FS: Multi-Lang DLL */
	"Sin compa�eros", /* FS: No sidekicks new game option */
	"Gemas de bonificacion", /* FS: Bonus save gems */

	/* FS: More Options! */
	"P�gina 1",
	"P�gina 2",
	"Mostrar tasa de fotogramas",
	"Comandos de consola de Q3A",
	"Escenas cinem�ticas en el juego",
	"Nuevo auto-completo",
	"Chat mensaje priorizando",
	"Sidekick salida advertencia",
	"Registro de autos Demos",
	"Destellos de da�o",
	"Mostrar el tiempo",
	"Cola de mensajes",
	"Formato de m�sica",
	// Knightmare added 3/5/17
	"Pantallas de carga ruidosa",
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
	"Todo",
	"1/2",
	"1/4",
	"1/8"
};

// weapon names TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_weapons[] =
{
	"Sin munici�n",		//only shows up if you have no ammo for the weapon you're trying to use. TX NOTE:treat like sentence "you have "no ammo".
	"la ballista", // Ballista
	"proyectiles de ballista",
	"la ballesta", // Bolter
	"las saetas",
	"el C4 Vitzatergo", // C4 Vitzatergo
	"Un paquete de C4",
	"la daikatana de la daikatana", // Daikatana
	"el disco de D�dalo", // Discus of Daedalus
	"el disco",
	"el guante disruptor", // Disruptor Glove
	"la automark 2020", //TX NOTE:a ficticious automatic pistol--US game currently reads "Glock", but that's a trademark.
	"balas",
	"el martillo de Hades", // Hades Hammer
	"la pistola de iones", // Ion Blaster
	"el proyectil ion",
	"la pistola cin�tica", // Kineticore
	"Cinetiesferas",
	"el metamaser", // Metamaser
	"munici�n del metamaser",
	"la Pesadilla de Nharre", // Nharre's Nightmare
	"la esfera de sacudidas",
	"el rayo Nova", // Novabeam
	"las celulas nova",
	"La minigun", // Ripgun
	"Cartuchos del minigun",			// Knightmare changed 8/29/14
	"el ca�on de ondas de choque", // Shockwave
	"la esfera de choque",
	"El Ciclofusil", // Shotcycler
	"Cartuchos del CicloFusil",
	"el sidewinder", // Sidewinder
	"los misiles",
	"la garra de plata", // Silverclaw
	"La escopeta", // Slugger
	"proyectiles de la escopeta",
	"el cetro de Stavros", // Stavros' Stave
	"Rocas de lava",
	"el Llameante", // Sunflare
	"llameantes",
	"el tridente de Poseid�n", // Poseidon's Trident
	"Puntas de tridente",
	"el Envenenador", // Venomous
	"el veneno de cobra",
	"el cetro de Wyndrax", // Wyndrax's Wisp
	"energia para el cetro",
	"El ojo de Zeus", // Eye of Zeus
	"el ojo mistico",
	"la motosierra", // Ultimate Gas Hands

	/* FS: Needed for Configure Weapons Menu */
	"Pistola de iones",
	"C4 Vitzatergo",
	"Ciclofusil",
	"Sidewinder",
	"Ca�on de ondas de choque",
	"Disco de D�dalo",
	"Envenenador",
	"Llameante",
	"Martillo de Hades",
	"Tridente de Poseid�n",
	"Ojo de Zeus",
	"Ballesta",
	"Cetro de Stavros",
	"Ballista",
	"Cetro de Wyndrax",
	"Pesadilla de Nharre",
	"Automark 2020",
	"Escopeta",
	"Pistola cin�tica",
	"Minigun",
	"Rayo Nova",
	"Metamaser",

	// Knightmare 8/29/13- Cordite grenades was stealing ripgun ammo identifier
	"granadas de cordita"
};

// armor TX NOTE:"you picked up" +.TX NOTE:translate what you can. "localize" spellings of anything else.
const char *tongue_armors[] =
{
	"el blindaje cer�mico",
	"el blindaje crom�tico",
	"la armadura de plata",
	"a armadura de oro",
	"la cota de malla",
	"la armadura de adamantio negra",
	"el blindaje de kevlar",
	"el blindaje de ebonita"
};

// monster names TX NOTE:NOMINITIVE CASE. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters[] =
{
	"El robojabal� de batalla",
	"El prisionero negro",
	"El buboide",         // TX NOTE:must match script.
	"La roboc�mara",
	"El centuri�n",
	"The Cerberus",         // TX NOTE:deleted. don't translate.
	"El ametrallador volante",
	"La columna cari�tide",
	"El robocaim�n",
	"La esfera asesina",
	"El murci�lago asesino",
	"El drag�n",         // TX NOTE:must match script.
	"El enano",
	"La pandillera",
	"El barquero",
	"El arquero",
	"La roborrana",
	"El rey Garroth",
	"Los peces de colores",
	"El grifo",
	"La arp�a",
	"El carcelero",
	"Kage",
	"El primer caballero",
	"El segundo caballero",
	"El mono de laboratorio",
	"El trabajador de laboratorio",
	"La robotorreta",
	"Lic�ntropo",
	"Medusa",         // TX NOTE:must match script.
	"El Minotauro",
	"El guardia de Mishima",         // TX NOTE:must match script.
	"Nharre",              // TX NOTE:must match script  don't translate
	"La rata de la peste",
	"La rata de alcantarilla",
	"El cura",
	"El prisionero",
	"El roboprot�podo",
	"El ment�lico",
	"El RageMaster 5000",
	"El pandillero lanzacohetes",
	"El PM lanzacohetes",
	"Los gusanos venenosos",
	"El s�tiro",
	"El comando SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"El capit�n SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"La chica SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"El tibur�n",
	"El robomosquito",
	"El esqueleto",
	"El trabajador delgado",
	"El trabajador gordo",
	"El robodesatascador",
	"La peque�a ara�a",
	"La ara�a",
	"Stavros",         // TX NOTE:must match script.
	"El Cirujano",
	"El ladr�n",
	"El robomoscard�n",
	"El pandillero de Uzis",
	"El prisionero blanco",
	"El Hechicero",         // TX NOTE:must match script.
	"Wyndrax",         // TX NOTE:must match script.
	"La gaviota",
	"La luci�rnaga",
	"El esp�ritu",
	"Mikiko",									// SCG[12/5/99]: 
	"Fantasma", /* FS */
	"Pez dopado" /* FS */
};

// monster names ACCUSATIVE CASE. NOT USED IN ENGLISH. translate what you can. "localize" spellings of anything else.
const char *tongue_monsters_acc[] =
{
	"al robojabal� de batalla",
	"al prisionero negro",
	"al buboide",         // TX NOTE:must match script.
	"a la roboc�mara",
	"al centuri�n",
	"al ametrallador volante",
	"a la columna cari�tide",
	"al robocaim�n",
	"a la esfera asesina",
	"al murci�lago asesino",
	"al drag�n",         // TX NOTE:must match script.
	"al enano",
	"a la pandillera",
	"al barquero",
	"al arquero",
	"a la roborrana",
	"al rey Garroth",
	"a los peces de colores",
	"al grifo",
	"a la arp�a",
	"al carcelero",
	"a Kage",
	"al primer caballero",
	"al segundo caballero",
	"al mono de laboratorio",
	"al trabajador de laboratorio",
	"a la robotorreta",
	"al lic�ntropo",
	"a Medusa",         // TX NOTE:must match script.
	"al Minotauro",
	"al guardia de Mishima",         // TX NOTE:must match script.
	"Nharre",              // TX NOTE:must match script  don't translate
	"a la rata de la peste",
	"a la rata de alcantarilla",
	"al cura",
	"al prisionero",
	"al roboprot�podo",
	"al ment�lico",
	"al RageMaster 5000",
	"al pandillero lanzacohetes",
	"al PM lanzacohetes",
	"al gusano venenoso",
	"al s�tiro",
	"al comando SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"al capit�n SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"a la chica SEAL",         // TX NOTE:U.S. Navy SEAL, not the animal (no pun intended).
	"al tibur�n",
	"al robomosquito",
	"al esqueleto",
	"al trabajador delgado",
	"al trabajador gordo",
	"al robodesatascador",
	"a la peque�a ara�a",
	"a la ara�a",
	"a Stavros",         // TX NOTE:must match script.
	"al Cirujano",
	"al ladr�n",
	"al robomoscard�n",
	"al pandillero de Uzis",
	"al prisionero blanco",
	"al Hechicero",         // TX NOTE:must match script.
	"a Wyndrax"         // TX NOTE:must match script.
	"la gaviota",
	"la luci�rnaga",
	"el esp�ritu",
	"Mikiko",
	"Fantasma",
	"Pez dopado" /* FS */
};

const char *tongue_world[] =
{
	"todav�a hay m�s",                                 // triggers to go until sequence complete TX NOTE:## +.
	"�Secuencia completada!",                         // trigger sequence completed TX NOTE:sentence.

	"Debes poseer",                              // need a specific key TX NOTE:followed by the key needed.
	"�Debes poseer la llave correcta!\n",               // wrong key in possession TX NOTE:sentence.
		
	"Imposible abrir as�\n",					       // Can't be opened this way

	"Sientes c�mo el veneno abandona tu organismo\n",    // poison expiring TX NOTE:sentence.
	"Tus oxipulmones est�n casi vac�os\n",           // oxylung expiring TX NOTE:sentence.
	"Tu traje ambiental se est� agotando\n",                // envirosuit expiring TX NOTE:sentence.
	"Tu megaescudo se est� agotando\n",                 // megashield expiring TX NOTE:sentence.
	"La esfera espectral se ha desvanecido\n",                   // wraith orb expiring TX NOTE:sentence.
	"La mejora de potencia se est� agotando\n",				  // power boost expiring TX NOTE:sentence.
	"La mejora de ataque se est� agotando\n",                // attack boost expiring TX NOTE:sentence.
	"La mejora de velocidad se est� agotando\n",                 // speed boost expiring TX NOTE:sentence.
	"La mejora de acrobacia se est� agotando\n",             // jump boost expiring TX NOTE:sentence.
	"La mejora de vitalidad se est� agotando\n",              // health boost expiring TX NOTE:sentence.

	"se ha unido a la partida",                            // player joined the game TX NOTE:NAME +.
	"ha abandonado el nivel",                           // player exited the level TX NOTE:NAME +.
	
	"Hiro Miyamoto",               // Hiro Miyamoto's full name TX NOTE:same as in script.
	"Superfly Johnson",              // Superfly's full name TX NOTE:same as in script.
	"Mikiko Ebihara",               // Mikiko's full name TX NOTE:same as in script.
	
	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"Usted fue expulsado por hacer spam",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK /* FS: Updated this */
	"fue expulsado por hacer spam",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK /* FS: Updated this */
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"�Desconocido Player!",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER /* FS: Updated this */

	"No puedes salir del nivel sin\n",					// SCG[10/18/99]: no exiting level without sidekicks 
	"No puedes salir del nivel sin\n",						// SCG[11/9/99]: No exiting without a key
	"�Envenenado!\n",								// NSS[11/29/99]: Needed a generic and yet global poisoned message

	"�Has encontrado un secreto!\n",					// cek[1-3-00]
	"La calavera m�gica se est� desvaneciendo.\n",                   // cek[2-9-00]
	"�Fijado!\n", /* FS */
	"�Masacre!\n", /* FS */
	"�Felices Fiestas del equipo Daikatana 1.3!\n", /* FS */
	"y" /* FS */
};

const char *tongue_deathmsg_daikatana[] =
{
	"A %s Fue cortado a la mitad por %s\n"
};

const char *tongue_deathmsg_self[] =
{
	" se ha roto el craneo.\n",                          // death, fell TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"se ha ahogado.\n",                             // death, drowned TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"est� crujiente.\n",                                // death, lava TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"ha sido derretido.\n",                                 // death, slimed TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"se ha envenenado.\n",                                // death, poison TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"no pudo sobrevivir.\n",                  // death, killed self TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"se ha teletransportado en pedacitos.\n",                            // death, teleport TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"ha sido aplastado.\n",                            // death, crushed TX NOTE:character +. TX NOTE:use your own appropriate slang.

	"exploto en pedazos.\n",                        // death, C4 explosives TX NOTE:character +. TX NOTE:use your own appropriate slang.
	"se ha congelado.\n",							/* FS: death, frozen */
	"fue electrocutado.\n"					/* FS: death, shocked by lightning bolts in e3 */
};

	// TX NOTE:use your own appropriate slang for all entries in this section.
	
	//TX NOTE:Grammar note: use constructions that put the victim in the accusative case (direct object)
const char *tongue_deathmsg_weapon1[] =
{
	"�%s humill� a %s!\n",
	"�%s le ha dado una buena a %s!\n",
	"�%s fue ionizado por %s!\n",
	"�%s dej� a %s hecho un asco!\n",
	"�%s lleno de plomo a %s!\n",
	"�%s monto el cohete de %s!\n",
	"�%s dejo tiritando a %s!\n"
};

const char *tongue_deathmsg_weapon2[] =
{
	"�%s Jugo el frisbee supremo con %s!\n",
	"�%s Enveneno a %s!\n",
	"�%s ha convertido a %s en un infierno ardiente!\n",
	"�%s ha sido martillado por %s!\n",
	"�%s perforo a %s!\n",
	"�%s se arrodillo ante Zeus!\n"
};

const char *tongue_deathmsg_weapon3[] =
{
	"�%s fue tajado como si fuera jamon por %s!\n",
	"�%s recibio el flechazo de %s!\n",
	"�%s recibio el troncazo de %s!\n",
	"�%s fue quemado por el meteorito de %s!\n",
	"�%s fue electrocutado por %s!\n",
	"�%s fue aniquilado por el demonio de %s!\n"
};

const char *tongue_deathmsg_weapon4[] =
{
	"�%s balaceo a %s!\n",
	"�%s ha pulverizado a %s!\n",
	"�%s fue aniquilado por %s con su minigun!\n",
	"�%s hizo un desastre a %s!\n",
	"�%s fue congelado por %s!\n",
	"�%s le ha hecho un agujero a %s!\n",
	"�%s fue desintegrado por la granada de %s!\n"
};

const char *tongue_scoreboard[] =
{
	"Nombre",
	"Muertes",
	"Tiempo",
	"de se�al",
	"Disparos",
	"Blancos",
	"Muerto",
	"Puntuacion"										// cek[1-22-00]
};

const char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"Selecciona la dificultad:",           // difficulty header TX NOTE:using karate skill levels.
	"Cintur�n blanco",                   // newbie
	"Cintur�n azul",                    // average
	"Cintur�n negro"                    // expert (or so they think!)
};

const char *tongue_skincolors[] =
{
	"Azul",                         // blue
	"Verde",                        // green
	"Rojo",                          // red
	"Dorado"                          // gold
};

const char *tongue_statbar[] =
{
	"POTENCIA",                        // skill 'power' label
	"ATAQUE",                       // skill 'attack' label
	"VELOCIDAD",												// skill 'speed' label
	"ACROBACIA",													// skill 'acrobatic' label
	"VITALIDAD",											// skill 'vitality' label

	// not used in non-english versions
	"BLINDAJE",																	 // armor label
	"SALUD",																	 // health label
	"MUNICION",																	 // ammo label
	"MUERTES",																	 // kills label
	"PUNTOS",																	 // experience points label

	"�Subistes de nivel!",                    // experience level up
	"Seleccionar",               // select skill
	"A�adir punto",            // add point to skill

	"CARGANDO..."                  // loading new level
};

const char *tongue_sidekick[] =    // sidekick commands
{ 
	"Coge",		                        // 'get' item command
	"Sigue",                          // 'come here', 'come to me'
	"Qu�date",                        // 'stay' command, 'don't move'
	"Ataca",                          // 'attack' command
	"Retrocede",                     // 'back off', 'move away'
		
	"Puedo tener"                    //  asking to pick up an item: "Can I have the shotgun?"
};

const char *tongue_ctf[] =
{
	"Bandera roja",
	"Bandera azul",
	"Equipo desconocido",

	"Bandera %s",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"Rojo",
	"Azul",
	"Cromo",
	"Met�lico",
	"Verde",
	"Naranja",
	"P�rpura",
	"Amarillo",

	"Tu puntuaci�n es: %s:%d, %s:%d\n",
	"�Has capturado la %s!\n",
	"�%s de tu equipo ha capturado la %s!\n",
	"�%s del Equipo %s ha capturado tu bandera!\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"Has cogido la %s\n",
	"%s de tu equipo ha cogido la %s\n",
	"%s ha robado tu bandera\n",
	"La %s hasido devuelta\n",

	"%d es un n�mero de equipo no v�lido.  Usa 1 o 2\n",
	"Est�s en el equipo %d (%s)\n",
	"Ya est�s en el equipo %d\n",
	"%s se ha unido al Equipo %s\n",									// translate same as with the %s team above

	"�El Equipo %s ha ganado!\nPuntuaci�n final: %s:%d, %s:%d\n",		// translate same as with the %s team above
	"�La partida termina en empate!\n",
	"�Ha terminado el tiempo!\n",
	"�Se ha alcanzado el l�mite de capturas!\n",

	"�Prep�rate para horas extras!\n", /* FS */
	"tienes la bandera enemiga. �Vuelve a la base!\n", /* FS */
	"�El enemigo tiene su bandera! �Recupera la bandera de vuelta!\n" /* FS */
};

const char *tongue_deathtag[] =
{
	"Bomba",														// as in backpack
	"Bomba %s",													// as in red pack
	"�Se ha alcanzado el l�mite de puntuaci�n!\n",
	"�Se te est� acabando el tiempo!\n",
	"�Se te ha terminado el tiempo!\n",

	"�%s del Equipo %s ha cogido la %s!\n",				// translate using the '%s team' guidelines above

	"�Tu equipo consigue un punto!\n",
	"�Tu equipo consigue %d puntos!\n",								// you get 2 points
	"�El Equipo %s consigue un punto!\n",								// translate using the '%s team' guidelines above
	"�El Equipo %s consigue %d puntos!\n",							// The red team gets 2 points

	"�Has conseguido puntos!\n",
	"�%s de tu equipo ha conseguido puntos!\n",
	"�%s del equipo %s ha conseguido puntos!\n",

	"�Usted tiene la bomba! �Ir puntuaci�n!\n", /* FS */
	"�El otro equipo tiene su bomba!\n" /* FS */
};

/* FS: v1.2 additions */
const char *tongue_save_error[] =
{
	"�Tienes que estar en una partida local para salvar el juego!\n",
	"�Tienes que estar en partida para salvar el juego!\n",
	"�No puedes salvar la partida en Combate a Muerte!\n",
	"�No puedes salvar la partida durante una cinem�tica!\n",
	"�No puedes salvar la partida mientras estas muerto!\n",
	"�No puedes salvar la partida durante una intermisi�n!\n",
	"�No puedes salvar la partida aqu�!\n"
};

const char *tongue_quit_msgs[] =
{
	"Pens� que eras valiente pero|en realidad s�lo eres un cobarde",
	"�Vas a salirte del juego|como escapas de todo en tu vida?",
	"�Te hacen los sonidos de arpa y los grillos|llorar y querer salir de aqu�?",
	"�Todo esto de los viajes en el tiempo|te confunde y quieres tomar algo de aire?",
	"�Los monstruos y los robots the asustan|y quieres correr con tu mam�?",
	"Recuerda: antes de acabar este juego,|aseg�rate de encontrar la caja de s�ndalo. �Salir ahora?",
	"No puedes m�s con tanta acci�n, �Eh?|�Venga, corre como un ni�o peque�o a la cama!",
	"Si abandonas ahora, voy a invocar a un Shoggoth|para despedazarte mientras duermes. �Te parece bien?",
	"�Sabes una cosa? Si abandandonas ahora|voy a empezar a golpear a todos los monstruos|para que est�n REALMENTE enfadados para cuando vuelvas",
	"Vale, pero mientras estas fuera,|voy a seguir trabajando en la gran teor�a unificada",
	"�Estas arruinado?",
	"�Ey!, ten cuidado con los Dark Troopers|en el episodio de San Francisco, �Ok?",
	"No pareces mucho como un Kraken, �Verdad?",
	"�Este juego te toca las narices?|Si lo hace, eres una rata d�bil y pat�tica|con la que alimentaremos al grifo!"
};

const char *tongue_quit_msgs_rare[] =
{
	"Mientras estas fuera, creo que voy a mirar algunos|sitios de internet y navegar un rato|�Te parece bien?",
	"�Salirse de mi?",
	"Suck it down(tm)?",
	"�Ha aterrizado ya el mono?"
};

/* FS: Wasn't originally translated.  Reported by Robert. */
const char *tongue_menu_joystick[] =
{
	"Configurar Movimiento",
	"Ninguno",
	"Adelante (Avanzar)",
	"Mirar (Inclinar)",
	"Lado (Lateral)",
	"Girar (Gui�ada)",
	"Arriba",
	"Avanzado",
	"Configurar ejes del joystick",
	"Absoluto (Palanca)",
};

/* FS: Seperated these from tongue_menu */
const char *tongue_menu_autoupdate[] =
{
	"Actualizaci�n disponible",
	"Hay una nueva versi�n de v1.3 Daikatana disponibles.\n�Quieres descargarlo?\nPuede desactivar las actualizaciones autom�ticas en el\nmen� de opciones.",
	"Sus datos PAK estan obsoletos.\nEs un error utilizar los datos v1.0 PAK.\nDaikatana v1.3 requiere datos v1.2 PAK.\nHaga clic para obtener ayuda de actualizaci�n.",
	"Daikatana comprobara tus archivos PAK.\nesto tomara unos 30 segundos.\nesta comprobacion se realizara una vez.",
	"Hay una nueva versi�n de v1.3 Daikatana disponible.\n�Quieres descargarlo?\nPuede desactivar las actualizaciones autom�ticas en el\nmen� de opciones.",
	"Descargar",
	"Verificar los archivos PAK",
	"No Gracias",
	"Ir a dk.toastednet.org.\nSi contin�as iniciar�s tu explorador de red.",
	"Descargando Actualizaci�n",
	"Archivo: ",
	"Tama�o: ",
	"Estado: ",
	"Inactivo",
	"Conectando",
	"Descargando",
	"Extraer",
	"Finalizada",
	"Fallado",
	"Abortar",
	"OK",
	"�Descarga finalizada!",
	"Noticias"
};
