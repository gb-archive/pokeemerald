SeafloorCavern_Entrance_MapObjects: @ 85356BC
	object_event 1, MAP_OBJ_GFX_AQUA_MEMBER_M, 0, 0, 10, 2, 3, 7, 17, 0, 0, 0, SeafloorCavern_Entrance_EventScript_234485, 941, 0, 0

SeafloorCavern_Entrance_MapWarps: @ 85356D4
	warp_def 10, 18, 3, 0, UNDERWATER_4
	warp_def 10, 1, 3, 0, SEAFLOOR_CAVERN_ROOM_1

SeafloorCavern_Entrance_MapEvents:: @ 85356E4
	map_events SeafloorCavern_Entrance_MapObjects, SeafloorCavern_Entrance_MapWarps, 0x0, 0x0

