#include "l__language.h"

// TAIWANESE text

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

	{"滑鼠按鈕1", K_MOUSE1},
	{"滑鼠按鈕2", K_MOUSE2},
	{"滑鼠按鈕3", K_MOUSE3},
	{"滑鼠按鈕4", K_MOUSE4},	// Knightmare added 5/29/12
	{"滑鼠按鈕5", K_MOUSE5},	// Knightmare added 5/29/12

	{"搖桿按鈕1", K_JOY1},
	{"搖桿按鈕2", K_JOY2},
	{"搖桿按鈕3", K_JOY3},
	{"搖桿按鈕4", K_JOY4},

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

	{"滑鼠滾輪上", K_MWHEELUP },
	{"滑鼠滾輪下", K_MWHEELDOWN },

	{"PAUSE", K_PAUSE},

	{"分號", ';'},	// because a raw semicolon seperates commands

	{NULL,0}
};

// vkey conversion table
//==========================================================================
byte        scantokey[128] =
{
//  0           1       2       3       4       5       6       7 
//  8           9       A       B       C       D       E       F 
    0  ,	27,     '1',    '2',    '3',    '4',    '5',    '6', 
    '7',    '8',    '9',    '0',    '-',    '=',    K_BACKSPACE, 9, // 0 
    'q',    'w',    'e',    'r',    't',    'y',    'u',    'i', 
    'o',    'p',    '[',    ']',    13 ,    K_CTRL,'a',  's',      // 1 
    'd',    'f',    'g',    'h',    'j',    'k',    'l',    ';', 
    '\'' ,    '`',    K_SHIFT,'\\',  'z',    'x',    'c',    'v',      // 2 
    'b',    'n',    'm',    ',',    '.',    '/',    K_SHIFT,'*', 
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
	"你取得",						// T_PICKUP_WEAPON	weapon pickup
	"你需要",							// T_PICKUP_HEALTH	health pickup
	"受到保護來自",					// T_PICKUP_ARMOR_GOOD	armor good pickup
	"取得能量來自",					// T_PICKUP_BOOST		boost pickup
	"需要儲存寶石",						// T_PICKUP_SAVEGEM	pick up Save Gem
												
	"力量",								// T_USEBOOST_POWER	power boost label
	"攻擊",								// T_USEBOOST_ATTACK	attack boost label
	"速度",								// T_USEBOOST_SPEED	speed boost label
	"彈跳",								// T_USEBOOST_ACRO	jump boost label
	"體力",								// T_USEBOOST_VITA	health boost label
												
	"該放煙火了",							// T_BOMB_EXPLODE			bomb explode
	"你必須有個空瓶來混合",			// T_BOMB_NEED_BOTTLE		need bottle to mix ingredients
	"取得的物品：",						// T_BOMB_ITEM_REQUIRED1	ingredient required
	"你作了一袋炸藥",					// T_BOMB_CREATED			bomb create
	"你找到",							// T_BOMB_FOUND				bomb found, vowel
	"一袋硫磺",						// T_BOMB_INGREDIENT_1		bomb ingredient 1
	"一塊煤碳",							// T_BOMB_INGREDIENT_2		bomb ingredient 2
	"一瓶硝石",						// T_BOMB_INGREDIENT_3		bomb ingredient 3
	"一個空瓶",						// T_BOMB_BOTTLE			bomb bottle
												
	"硫磺",								// T_BOMB_INGREDIENT_SHORT_1	bomb item, short description
	"木炭",								// T_BOMB_INGREDIENT_SHORT_2	bomb item, short description
	"硝石",							// T_BOMB_INGREDIENT_SHORT_3	bomb item, short description
												
	"你閱讀到",							// T_BOOK_READ		read book
	"你無法在此使用",					// T_BOOK_NO_READ		no read book
	"萬達克的法術書",						// T_BOOK_WYNDRAX		Wyndrax spellbook
// SCG[12/5/99]: 	"撒旦的邪惡之書",			// T_BOOK_EVIL		Satanic book of evil
												
	"你拾起",							// T_KEY_PICKUP		key pickup
	"墓地鑰匙",							// T_KEY_CRYPT		crypt key name
	"萬達克之鑰",						// T_KEY_WYNDRAX		Wyndrax key name
	"監牢的鑰匙卡",					// T_KEY_PRISONCELL	Prison cell key

	"紅色控制卡",						// T_KEY_RED_CARD				
	"藍色控制卡",					// T_KEY_BLUE_CARD				
	"綠色控制卡",					// T_KEY_GREEN_CARD				
	"黃色控制卡",					// T_KEY_YELLOW_CARD			
	"六角鑰匙石",						// T_KEY_HEX_KEYSTONE			
	"四角鑰匙石",						// T_KEY_QUAD_KEYSTONE			
	"三角鑰匙石",						// T_KEY_TRIGON_KEYSTONE		
	"超強護盾",							// T_MEGASHIELD					
	"法力骷髏",							// T_SKULL_OF_INVINCIBILITY
	"解毒劑",						// T_POISON_ANTIDOTE
	"德拉克馬",								// T_DRACHMA
	"船夫號角",						// T_HORN
	"神盾之鑰的一部份（A）",				// T_KEY_AEGIS_A
	"神盾之鑰的一部份（E）",				// T_KEY_AEGIS_E
	"神盾之鑰的一部份（G）",				// T_KEY_AEGIS_G
	"神盾之鑰的一部份（I）",				// T_KEY_AEGIS_I
	"神盾之鑰的一部份（S）",				// T_KEY_AEGIS_S
	"淨化器的碎片",					// T_PURIFIER_SHARD
	"黑色箱子",							// T_BLACK_CHEST
	"抗火之戒",				// T_RING_OF_FIRE
	"抗不死生物之戒",			// T_RING_OF_UNDEAD
	"抗閃電之戒",			// T_RING_OF_LIGHTNING
	"環境服",							// T_ENVIROSUIT

	"回復工具",							// T_HEALTH_KIT
	"黃金靈魂",							// T_GOLDENSOUL
	"靈魂球",							// T_WRAITHORB,

	"儲存寶石",								// T_SAVEGEM
	"你沒有儲存寶石",					//cek[12-13-99]
	"生命之瓶",							// cek[1-3-00]

	// cek[2-2-00]: altered the following *******************txtP************************
	"生命包",
	"生命罐",
	"生命瓶",
	"生命之箱",
	"生命盒",
	"這個解毒劑是空的。",

// SCG[2/8/00]: messages for completed artifacts
	"你找到所有神盾的符號了！",
	"你找到全部三個鑰匙之石！",
	"你組合好淨化器"
};

// menu-related
char *tongue_menu[] =
{
	"前進",                                  // key bind to Move Forward
	"後退",                                 // key bind to Move Backward
	"左踏",                                // key bind to Step Left
	"右踏",                               // key bind to Step Right
	"攻擊",                                   // key bind to Attack
	"跳躍",                                     // key bind to Jump/Up
	"使用／操作",                              // key bind to Use/Operate object
	"蹲下",                                   // key bind to Crouch/Down
	"下一項武器",                              // key bind to Next Weapon
	"上一項武器",                              // key bind to Prev Weapon
	"左轉",                                // key bind to Turn Left
	"右轉",                               // key bind to Turn Right
	"跑",                                      // key bind to Run
	"橫移",                                 // key bind to  Sidestep
	"向上看",                                  // key bind to Look Up
	"向下看",                                // key bind to Look Down
	"看中間",                              // key bind to Center View
	"滑鼠觀看",                                // key bind to Mouse Look
	"按鍵觀看",                                  // key bind to Keyboard Look
	"可見範圍增加",                             // key bind to Screen size up
	"可見範圍下降",                           // key bind to Screen size down
	"顯示所有介面",                            // key bind to Show All Huds
	"開啟物品欄",                                // key bind to Inventory Open
	"使用物品",                            // key bind to Use Item
	"下一項物品",                                // key bind to Next Item
	"上一項物品",                                // key bind to Prev Item
	"切換側踢",                            // key bind to Swap Sidekick
	"下一項指令",                             // key bind to Command Next
	"上一項指令",                             // key bind to Command Prev
	"使用的指令",	                            // key bind to Command Apply				// cek[1-5-00] changed from Apply to Use

	ARROW_LEFT_STRING  "左",                 // left arrow key
	ARROW_UP_STRING    "上",                   // up arrow key
	ARROW_DOWN_STRING  "下",                 // down arrow key
	ARROW_RIGHT_STRING "右",                // right arrow key
	"--",                                       // no bind setting for this key

	"點選或按Enter設定，DEL刪除",     // set/delete key
	"點選或按Enter選擇",                 // select key
	"按鍵設定，ESC中斷",             // set/abort

	"預設",                                 // default button

	"無",                                     // no mouse bindings
	"左移/右移",                          // mouse "move left and right" setting
	"左轉/右轉",                          // mouse "turn left and right" setting
	"向上/下看",                             // mouse "look up and down" setting
	"前進/後退",                           // mouse "move forward and back" setting
	"將Y軸反向",                           // reverse mouse axis
	"滑鼠觀看",                               // Mouse-Look
	"觀看橫移",                              // Mouse-Look
	"X軸",                                   // x axis
	"Y軸",                                   // y axis
	"按鈕1",                                 // button 1 label
	"按鈕2",                                 // button 2 label
	"按鈕3",                                 // button 3 label
	"選擇一個指令，ESC取消",          // select a command, ESCape to cancel
	"左轉/右轉",                                 // turn left and right, abbreviated
	"左/右橫移",                               // strafe left and right, abbreviated
	"向上/下看",                                 // look up and down, abbreviated
	"前進/後退",                                 // move forward and back, abbreviated
	"水平靈敏度",                   // mouse sensitivity for x-axis				//cek[12-13-99]
	"垂直靈敏度",                     // mouse sensitivity for y-axis				//cek[12-13-99]
	"設定滑鼠選項：",                 // configure mouse options

	"死亡競賽",                               // 'deathmatch' game
	"死亡刺殺",                                 // 'deathtag' game
	"合作",                              // 'cooperative' game

	"簡單",                                     // easy difficulty
	"中等",                                   // medium difficulty
	"困難",                                     // hard difficulty

	"搜尋網際網路遊戲",					// SCG[12/1/99]: 
	"搜尋區域性遊戲",						// SCG[12/1/99]: 
	"開始多人遊戲",					// SCG[12/1/99]: 

	"區域網路",                                      // local area network game
	"網際網路",                                 // internet game

	"加入",                                     // join server
	"主控",                                     // host new server
	"增加 " ARROW_DOWN_STRING,                   // add address
	"更新",                                  // refresh network games
	"設定",                                    // player setup

	"連線速率",                             // connection speed label
	"28.8k",                                    // connection type 1
	"56.6k",                                    // connection type 2
	"ISDN",										// connection type 3
	"纜線數據機/DSL",							    // connection type 4
	"T1/區域網路",                                   // connection type 5
	"使用者自訂",                             // connection type 6

	"時間限制",								// SCG[12/2/99]: 
	"人物顏色",							// SCG[12/2/99]: 
	"開始章節",							// SCG[12/2/99]: 
	"選擇隊伍",								// SCG[12/1/99]: 
	"CTF限制",								// SCG[12/1/99]: 
	"第1隊顏色",								// SCG[12/1/99]: 
	"第2隊顏色",								// SCG[12/1/99]: 
	"分數限制",								// SCG[12/1/99]: 
	"殺敵限制",								// SCG[12/1/99]: 
	"關卡限制",								// level limit
	"開始章節",							// SCG[12/2/99]: 
	"遊戲地圖",									// SCG[12/1/99]: 
	"遊戲模式",								// game mode (deathmatch,deathtag,co-op)
	"技能等級",								// skill level
	"時間限制",								// time limit
	"最多人數",								// maximum players
	"人物",								// character
	"基本顏色",								// base color
	"開始！",									// start multiplayer game
												
	"武器停留",								// weapons remain
	"物品再生",							// items rematerialize
	"遠距再生",								// spawn farthest point from players
	"容許離開",							// allow exiting of the level
	"相同地圖",									// same map
	"力量再生",							// force respawn
	"掉落受傷",							// players take falling damage
	"立即強化",							// instant power-ups
	"容許強化",								// allow power-ups
	"容許生命",								// allow health kits
	"容許裝甲",								// allow armor
	"彈葯無限",							// unlimited ammunition
	"視角修正",								// fixed field-of-vision
	"組隊遊戲",									// team-play
	"傷害隊友",							// hurt teammates
	"快速切換",								// fast weapon switch
	"腳步聲音",								// footsteps audible
	"容許抓鉤",								// allow hook
	"散彈槍子彈",							// show shotgun shells?
												
	"伺服器IP位址",						// server internet provider address
	"找不到區域性遊戲",						// no local games found
	"開始地圖",								// starting map
	"伺服器名稱",								// server name
	"玩者名稱",								// player name
	"隊伍名稱",								// team name
												
	"進行切腹？",						// confirm quit
												
	"是",										// yes, acknowledgement
	"否",										 // no, acknowledgement
	"儲存遊戲",								// cek[1-3-00] changed from 'save' to 'save game'

	"載入設定",								//cek[12-6-99]
	"儲存設定",								//cek[12-6-99]
	"刪除設定",							//cek[12-6-99]
	"選擇設定檔案",				//cek[12-6-99]
	"刪除選擇檔案？",						//cek[12-6-99]
												
	"載入遊戲",								//cek[12-6-99]
	"裝甲",									//cek[12-6-99]
	"生命",									//cek[12-6-99]
	"關卡",									//cek[12-6-99]
	"怪物",									//cek[12-6-99]
	"秘密",									//cek[12-6-99]
	"時間",										//cek[12-6-99]
	"總計",									//cek[12-6-99]
	"章節",									//cek[12-6-99]

	"使用3D音場",								//cek[12-6-99]

	"已儲存",									//cek[12-7-99]
	"己載入",									//cek[12-7-99]
	"己刪除",									//cek[12-7-99]

	"流暢滑鼠",								//cek[12-7-99]
	"滾輪向上",									//cek[12-7-99]

	"滾輪向下",								//cek[12-7-99]

	"關閉ALT-TAB功能",						//cek[12-7-99]
	"血腥和屠殺",						//cek[12-7-99]
	"武器跳動",							//cek[12-7-99]
	"自動切換武器",						//cek[12-7-99]

	"強度",								//cek[12-7-99] cek[12-13-99]
	"武器閃光",							//cek[12-7-99]
	"彈痕",								// SCG[1/4/00]: 


	"前進",									//cek[12-9-99]
	"橫向",										//cek[12-9-99]
	"上",										//cek[12-9-99]
	"角度",									//cek[12-9-99]
	"偏搖",										//cek[12-9-99]
	"使用搖桿",								//cek[12-9-99]
	"設定方向軸",							//cek[12-9-99]
	"設定搖桿選項",				//cek[12-9-99]
	"設定此按鈕功能",			//cek[12-9-99]
	"按下搖桿按鈕完成設定",		//cek[12-9-99]
	"界限",								//cek[12-9-99]
	"靈敏度",								//cek[12-9-99]

	"搶旗賽",							//cek[12-10-99]
	"回返",										//cek[12-10-99]
	"56.6k",									//cek[12-10-99]
	"自動",										//cek[12-10-99]
	"第1隊",									//cek[12-10-99]
	"第2隊",									//cek[12-10-99]

	"播放簡介動畫",							//cek[12-13-99]
	"使用技能系統",							//cek[12-13-99]
	"滑鼠速度",								//cek[12-13-99]

	"夥伴取得",								// cek[1-3-00]
	"夥伴過來",							// cek[1-3-00]
	"夥伴攻擊",							// cek[1-3-00]
	"夥伴後退",							// cek[1-3-00]
	"夥伴停留",							// cek[1-3-00]

	"選擇武器%d",							// cek[1-4-00]  as in "Select Weapon 1" (leave the %d)

	"介面切換",								// cek[1-5-00]  -- for these, translate HUD to something short and reasonably
	"下一介面",									// cek[1-5-00]  -- similar in meaning.
	"上一介面",									// cek[1-5-00]
	"使用介面",									// cek[1-5-00]

	"交談",										// cek[1-11-00]
	"計分板",								// SCG[1/13/00]: 
	"小隊交談",								// cek[1-22-00]
	"%s已經分派為%s",				// cek[1-22-00]  as in "F is already assigned to attack" (leave in %s)
	"置換？",									// cek[1-22-00]

	"前往大廳",								// cek[2-1-00]
	"大刀社群",								// cek[2-1-00]
	"繼續？",								// cek[2-1-00]

	// for the next two, all \n in the strings denotes a string break.  These must remain in place and the translated
	// string should have them in roughly the same place.
	"繼續會離開大刀\n並啟動Mplayer伺服器的瀏覽器。",	// cek[2-1-00]
	"想看新聞、交談、討論和計分\n前往www.daikatananews.com。\n繼續下一步會執行你的網頁瀏覽器。",			// cek[2-1-00]

	"武器 %d",
	"取消",									// cek[3-9-00]
	"www.planetdaikatana.com",													// cek[3-9-00]
	"前往www.planetdaikatana.com。\n繼續下一步會執行你的網頁瀏覽器。",			// cek[3-9-00]
};

char *tongue_menu_options[] =
{
	"跑步行動",                               // always run
	"彈跳–觀看",                               // look-spring
	"橫移–觀看",                               // look-strafe
	"自動瞄準",                           // auto-targeting
	"準星",                                // crosshair
	"武器可見",                           // weapon visible
	"字幕",                                // subtitles

	"音效音量",                      // volume for sound fx
	"音樂音量",                             // volume for music
	"動畫音量",                         // volume for cinematics

	"軟體",                                 // video mode, software
	"OpenGL",                                   // video mode, opengl
	"套用變動值",                            // apply video mode changes

	"全螢幕",                               // fullscreen
	"影子",                                  // shadows
	"驅動程式",                                   // video driver
	"解析度",                               // resolution
	"螢幕大小",                              // screen size
	"亮度",                               // brightness
	"材質品質",                          // texture quality
	"可見狀態棒",                    // status bar visibility
	"霧/水細緻度",							// SCG[12/4/99]: 
	"步兵",									// difficulty level easy
	"武士",									// difficulty level medium
	"將軍",									// difficulty level hard

	"雪和雨",							// cek[1-11-00]
	"霧"										// cek[1-11-00]		
};

//descriptions for the texture quality settings.
char *texture_quality_desc[] =
{
	"完全",
	"減半",
	"四分之一",
	"八分之一"
};

// weapon names
char *tongue_weapons[] =
{
	"無彈葯",
	"弩砲",
	"弩砲圓木",
	"篩子",
	"彈",
	"C4引爆器",
	" C4炸葯包",
	"大刀",
	"大刀致命",
	"圓盤",
	"混亂者手套",

	"格拉克2020",
	"一些子彈",
	"黑帝斯鐵鎚",
	"離子槍",
	"離子彈葯",					// SCG[11/28/99]: 
	"動力槍",
	"動力",
	"強化微波槍",
	"強化微波槍",
	"拿爾的惡夢",
	"一些字楔",					// SCG[11/28/99]: 
	"新星光束",
	"新星電池",					// SCG[11/28/99]: 
	"撕裂槍",
	"無煙榴彈",				
	"震動波",
	"震波球",
	"連射槍",
	"連射槍子彈",
	"響尾蛇飛彈",
	"響尾蛇飛彈",			// SCG[11/28/99]: 
	"銀爪",
	"霰彈槍",
	"霰彈",
	"史塔諾的詩節",
	"熔岩石",
	"搖曳的太陽",
	"搖曳的太陽",
	"海神三叉戟",
	"三叉戟尖端",
	"毒滿",
	"眼鏡蛇毒",					// SCG[11/28/99]: 
	"萬達克的螢火魔",
	"螢火之魔",
	"宙斯之眼",
	"神秘之眼",
	"終極瓦斯手"
};

char *tongue_armors[] =
{
	"塑鋼裝甲",
	"光學裝甲",
	"白銀裝甲",
	"黃金裝甲",
	"鎖鏈裝甲",
	"黑金鋼裝甲",
	"凱夫勒裝甲",
	"硬像膠裝甲"
};

// monster names
char *tongue_monsters[] =
{
	"機械戰鬥熊",
	"黑犯人",
	"布波得",
	"機械坎伯特",
	"百夫長",
	"三頭犬",
	"飛行鏈砲者",
	"雕像柱",
	"機械克羅克斯",
	"機械死亡球",
	"末日蝙蝠",
	"龍",
	"矮人",
	"范干格",
	"多毛人",
	"製箭者",
	"機械青蛙殺手",
	"格羅斯王",
	"金魚",
	"格利風",
	"鳥身女妖",
	"入獄者",
	"三島影",
	"地獄火聖騎士",

	"電力女武神",
	"實驗室猴子",
	"低溫科技",
	"機械雷射槍",
	"狼人",
	"梅杜莎",
	"三島守衛",
	"拿爾死靈法師",
	"瘟疫老鼠",
	"水管老鼠",
	"牧師",
	"犯人",
	"機械原形足",
	"精神爪",
	"機械暴怒專家5000",
	"火箭幫",
	"海豹部隊散火箭兵",
	"腐蟲",
	"色狼",
	"海豹部隊指揮官",
	"海豹部隊隊長",
	"海豹部隊散彈槍兵",
	"鯊魚",
	"掠殺者",

	"骷髏",
	"瘦工人",
	"胖工人",
	"機械污物嘍囉",
	"小蜘蛛",
	"蜘蛛",
	"史塔佛法師",
	"軍醫",
	"小偷",
	"機械閃電飛靶射擊",
	"烏茲幫",
	"白色俘虜",
	"巫師",
	"萬達克巫師",
	"海鷗",
	"螢火蟲",

	"螢火魔",
	"美紀",
	"鬼魂",
	"麻葯魚"
};

char *tongue_world[] =
{
	"尚有其他",                                 // triggers to go until sequence complete
	"步驟完成",                         // trigger sequence completed

	"你必須持有",                              // need a specific key
	"你必須持有正確的鑰匙！ \n",               // wrong key in possession
	"不能從這個方向打開\n",					  // SCG[11/1/99]: Can't be opened this way

	"你覺得毒素離開了你的系統。\n",    // poison expiring
	"你肺中的氧氣幾乎用盡了。\n",           // oxylung expiring
	"你的環境衣幾乎耗費了。\n",                // envirosuit expiring
	"綠色精靈急需食物。\n",                 // megashield expiring
	"暴怒之球減弱了。\n",                   // wraith orb expiring
	"力量強化的效果慢慢的消失了。\n",				  // power boost expiring
	"攻擊強化的效果慢慢的消失了。\n",                // attack boost expiring
	"速度強化的效果慢慢的消失了。\n",                 // speed boost expiring
	"彈跳強化的效果慢慢的消失了。\n",             // jump boost expiring
	"體力強化的效果慢慢的消失了。\n",              // health boost expiring

	"已加入遊戲",                            // player joined the game
	"離開這一關",                           // player exited the level

	"宮本弘",                              // Hiro Miyamoto's full name
	"高速強森",                           // Superfly's full name
	"海老原美紀",                             // Mikiko's full name

	// SCG[10/18/99]: these next 5 had enums, but no strings. 
	"",								// SCG[10/18/99]: T_PLAYER_SELF_SPAM_KICK
	"",								// SCG[10/18/99]: T_PLAYER_SPAM_KICK
	"",								// SCG[10/18/99]: T_PLAYER_TIME_LIMIT_HIT
	"",								// SCG[10/18/99]: T_PLAYER_FRAG_LIMIT_HIT
	"",								// SCG[10/18/99]: T_TELL_CMD_UNKNOWN_PLAYER

	"離開這個區域必須擁有\n",				// SCG[10/18/99]: no exiting level without sidekicks
	"要離開你必須取得\n",				// SCG[11/9/99]: No exiting without a key
	"中毒！\n",						// NSS[11/29/99]: Needed a generic and yet global poisoned message

	"你找到一個秘密！ \n",					// cek[1-3-00]
	"法力骷髏的效果慢慢的消失了。\n"                   // cek[2-9-00]
};

char *tongue_deathmsg_daikatana[] =
{
	"%s被%s給切開了。\n"
};

char *tongue_deathmsg_self[] =
{
	"的頭骨被切開了。\n",                       // death, fell
	"被吸下去。\n",                             // death, drowned
	"變得易碎。\n",                                // death, lava
	"變苗條了。\n",                                 // death, slimed
	"屈服於毒素下。\n",                    // death, poison
	"不堪生命的折磨。\n",                             // death, killed self
	"傳送時爆掉了。\n",                            // death, teleport
	"被壓成一塊餅。\n",             // death, crushed

	"吞下滿肚的C4炸葯。\n"                       // death, C4
};

char *tongue_deathmsg_weapon1[] =
{
	"%s被%s傷了自尊！\n",
	"%s被%s重重打了一掌，已經成為塵土！\n",
	"%s被%s離子化了！\n",
	"%s被%s弄得亂七八糟！\n",
	"%s被%s用雙管槍轟到！\n",
	"%s坐到了%s打出來的火箭！\n",
	"%s被%s搖到半空中！\n"
};

char *tongue_deathmsg_weapon2[] =
{
	"%s把%s當做終極飛盤來丟！\n",
	"%s狠狠的咬了%s一口！\n",
	"%s把%s變成火焰地獄！ \n",
	"%s對%s用鐵鎚重重的打下去！\n",
	"%s把%s打爆了！\n",
	"%s跪在宇斯面前！\n"
};

char *tongue_deathmsg_weapon3[] =
{
	"%s被%s像火腿一樣切開！\n",
	"%s把%s打掛了！\n",
	"%s 把%s當地板踩！ \n",
	"%s被%s用流星砸到！\n",
	"%s抓到了%s的高壓電！\n",
	"%s被%s的手段抓個正著！ \n"
};

char *tongue_deathmsg_weapon4[] =
{
	"%s在%s面前露出一個腦袋！\n",
	"%s被%s打成彈震症！\n",
	"%s被%s撕裂！\n",
	"%s被%s打成一團泥！\n",
	"%s被%s凍成冰塊！\n",
	"%s被%s打穿一個洞！\n",
	"%s被%s烤透透！\n"
};

char *tongue_scoreboard[] =
{
	"姓名",
	"殺敵數",
	"回傳值",
	"時間",
	"發射彈數",
	"擊中彈數",
	"死亡次數",
	"分數"										// cek[1-22-00]
};

char *tongue_difficulty[] =  // difficulty settings for 'new game' menu
{
	"�����x���I��:",//"Select Difficulty:",           // difficulty header
	"步兵",	                   // newbie
	"武士",                    // average
	"將軍"                    // expert (or so they think!)
};

char *tongue_skincolors[] =
{
	"Blue",                         // blue
	"Green",                        // green
	"Red",                          // red
	"Gold"                          // gold
};

char *tongue_statbar[] =
{
	"力量",                        // skill 'power' label
	"攻擊",                       // skill 'attack' label
	"速度",												// skill 'speed' label
	"跳躍",													// skill 'acrobatic' label
	"體力",											// skill 'vitality' label

	"裝甲",                        // armor label
	"生命",												// health label
	"彈葯",													// ammo label
	"殺敵",												// kills label
	"關卡",  											// experience points label

	"昇級！ ",                    // experience level up
	"選擇",                       // select skill
	"指定技能點數",                    // add point to skill

	"載入..."                    // loading new level
};

char *tongue_weapon_misc[] =
{
	"C4模組脫離穩定狀態！ \n"    // C4 modules are de-stabilizing
};

char *tongue_sidekick[] =    // sidekick commands
{
	"取得",	                        // 'get' item command
	"過來",                          // 'come here', 'come to me'
	"停留",                           // 'stay' command, 'don't move'

	"攻擊",                         // 'attack' command
	"後退",                       // 'back off', 'move away'

	"我能拿"                      //  asking to pick up an item: "Can ve the shotgun?"
};

char *tongue_ctf[] =
{
	"紅旗",
	"藍旗",

	"不明隊伍",

	"%s殺敵數",											// when translating, treat '%s Flag' as 'red Flag' and place the %s before or after flag
														// depending on the syntax of the language.  ie if the expression should be 'Flag red' use 'Flag %s'
	"紅",
	"藍",
	"鉻",
	"鋼鐵",
	"綠",
	"橙",
	"紫",
	"黃",

	"現在分數是%s：%d，%s：%d\n",
	"你捕捉到%s次！\n",
	"你隊伍中的%s已經捉到了%s！\n",
	"%s來自%s隊伍，帶走了你的旗子！\n",		// when translating, treat '%s team' as 'red team' and place the %s before or after team
															// depending on the syntax of the language.  ie if the expression should be 'team red' use 'team %s'
	"你拿到了%s\n",
	"你隊伍中的%s捉到了%s\n",
	"%s偷走了你的旗子\n",
	"%s已經搶回來了\n",



	"%d是一個無效的隊伍數字，請按1或2\n",
	"你現在是%d隊（%s）\n",
	"你已經是%d隊\n",
	"%s加入了%s隊\n",									// translate same as with the %s team above

	"%s隊已經贏了！\n最後總分–%s：%d，%s：%d\n",		// translate same as with the %s team above
	"這場遊戲平手！\n",
	"時間用盡！\n",
	"到達搶旗次數上限！\n"
};

char *tongue_deathtag[] =
{
	"炸彈",														// as in backpack
	"%s炸彈",													// as in red pack
	"到達分數上限！\n",
	"你的時間用完了！\n",
	"你的時間剛剛用盡！\n",

	"%s來自%s隊，取得了%s！\n",				// translate using the '%s team' guidelines above

	"你的隊伍得到一分！\n",
	"你的隊伍得到%d分！\n",								// you get 2 points
	"%s隊伍得到一分！\n",								// translate using the '%s team' guidelines above

	"%s隊伍得到%d分！\n",							// The red team gets 2 points

	"你得分了！\n",
	"你隊伍中的%s得到分數！\n",
	"%s來自%s隊伍，得到分數！\n"
};

/* FS: v1.2 additions */
char *tongue_save_error[] =
{
	"You must be running a local game to save!\n",
	"You must be in a game to save!\n",
	"You can not save in deathmatch!\n",
	"You can not save during a cinematic!\n",
	"You can not save while dead!\n",
	"You can not save during intermission!\n",
	"You can not save here!\n"
};
