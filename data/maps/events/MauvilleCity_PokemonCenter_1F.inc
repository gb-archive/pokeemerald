MauvilleCity_PokemonCenter_1F_MapObjects: @ 85301C8
	object_event 1, MAP_OBJ_GFX_NURSE, 0, 0, 7, 2, 3, 8, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E78, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_HIPSTER, 0, 0, 2, 3, 3, 9, 1, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_28E066, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_WOMAN_1, 0, 0, 8, 6, 3, 1, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E86, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_WOMAN_7, 0, 0, 11, 4, 3, 3, 16, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E8F, 0, 0, 0
	object_event 5, MAP_OBJ_GFX_YOUNGSTER, 0, 0, 2, 8, 3, 1, 17, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_210E98, 0, 0, 0

MauvilleCity_PokemonCenter_1F_MapWarps: @ 8530240
	warp_def 7, 8, 3, 1, MAUVILLE_CITY
	warp_def 6, 8, 3, 1, MAUVILLE_CITY
	warp_def 1, 6, 4, 0, MAUVILLE_CITY_POKEMON_CENTER_2F

MauvilleCity_PokemonCenter_1F_MapEvents:: @ 8530258
	map_events MauvilleCity_PokemonCenter_1F_MapObjects, MauvilleCity_PokemonCenter_1F_MapWarps, 0x0, 0x0

