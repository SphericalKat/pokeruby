SeafloorCavern_Room1_EventObjects:: @ 838D0B8
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 5, 11, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_11
	object_event 2, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 12, 11, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_12
	object_event 3, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 5, 10, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_13
	object_event 4, EVENT_OBJ_GFX_VAR_1, 0, 8, 6, 3, 1, 1, 1, 1, 2, SeafloorCavern_Room1_EventScript_15DA6D, FLAG_HIDE_EVIL_TEAM_GRUNTS_SEAFLOOR_CAVERN
	object_event 5, EVENT_OBJ_GFX_VAR_1, 0, 15, 10, 3, 16, 1, 1, 1, 3, SeafloorCavern_Room1_EventScript_15DA84, FLAG_HIDE_EVIL_TEAM_GRUNTS_SEAFLOOR_CAVERN

SeafloorCavern_Room1_MapWarps:: @ 838D130
	warp_def 5, 18, 3, 1, MAP_SEAFLOOR_CAVERN_ENTRANCE
	warp_def 17, 13, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM5
	warp_def 6, 2, 3, 0, MAP_SEAFLOOR_CAVERN_ROOM2

SeafloorCavern_Room1_MapEvents:: @ 838D148
	map_events SeafloorCavern_Room1_EventObjects, SeafloorCavern_Room1_MapWarps, 0x0, 0x0