ZED_DEBUG_ROOM_MapScripts::
	.byte 0


GiveNewMegaStones::
# 4 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 5 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SIMIPOURITE, 1
# 6 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SIMISAGITE, 1
# 7 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SIMISEARITE, 1
# 8 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_PASSIMINITE, 1
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ORANGURINITE, 1
# 10 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitmessage
# 11 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	return


GiveMegaRing::
# 15 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 16 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MEGA_RING, 1
# 17 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitmessage
# 18 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	return


GiveInnape::
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 1
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox GiveInnape_Text_0
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitmessage
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	return


GiveInnape_Text_0:
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Innape has been added to your party$"
