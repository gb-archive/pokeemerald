BattleFrontier_BattleDomePreBattleRoom_MapObjects: @ 853C188
	object_event 1, MAP_OBJ_GFX_TEALA, 0, 0, 5, 2, 3, 8, 17, 0, 0, 0, 0x0, 0, 0, 0

BattleFrontier_BattleDomePreBattleRoom_MapWarps: @ 853C1A0
	warp_def 6, 8, 3, 1, BATTLE_FRONTIER_OUTSIDE_WEST
	warp_def 7, 8, 3, 1, BATTLE_FRONTIER_OUTSIDE_WEST

BattleFrontier_BattleDomePreBattleRoom_MapEvents:: @ 853C1B0
	map_events BattleFrontier_BattleDomePreBattleRoom_MapObjects, BattleFrontier_BattleDomePreBattleRoom_MapWarps, 0x0, 0x0

