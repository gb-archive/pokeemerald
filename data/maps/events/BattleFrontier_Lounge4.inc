BattleFrontier_Lounge4_MapObjects: @ 853D24C
	object_event 1, MAP_OBJ_GFX_WOMAN_4, 0, 0, 4, 4, 0, 7, 17, 0, 0, 0, BattleFrontier_Lounge4_EventScript_26358D, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_COOK, 0, 0, 6, 6, 0, 2, 17, 0, 0, 0, BattleFrontier_Lounge4_EventScript_263596, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_4, 0, 0, 0, 5, 0, 10, 18, 0, 0, 0, BattleFrontier_Lounge4_EventScript_26359F, 0, 0, 0

BattleFrontier_Lounge4_MapWarps: @ 853D294
	warp_def 4, 9, 0, 6, BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_Lounge4_MapEvents:: @ 853D29C
	map_events BattleFrontier_Lounge4_MapObjects, BattleFrontier_Lounge4_MapWarps, 0x0, 0x0

