SlateportCity_Mart_MapObjects: @ 852FCF0
	object_event 1, MAP_OBJ_GFX_MART_EMPLOYEE, 0, 0, 1, 3, 3, 10, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC49, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_BLACK_BELT, 0, 0, 4, 2, 3, 7, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC76, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_MAN_4, 0, 0, 5, 5, 3, 1, 0, 0, 0, 0, SlateportCity_Mart_EventScript_20DC7F, 0, 0, 0

SlateportCity_Mart_MapWarps: @ 852FD38
	warp_def 3, 7, 0, 1, SLATEPORT_CITY
	warp_def 4, 7, 0, 1, SLATEPORT_CITY

SlateportCity_Mart_MapEvents:: @ 852FD48
	map_events SlateportCity_Mart_MapObjects, SlateportCity_Mart_MapWarps, 0x0, 0x0

