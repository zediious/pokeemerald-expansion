Vulias_Igris_MountainTunnel_MapScripts::
	.byte 0


MountainTunnel_JournalPickup::
# 5 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 6 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	removeobject MTNTUNNEL_OLDMAN_JOURNAL
# 7 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 8 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_JournalPickup_Text_0, MSGBOX_SIGN
# 9 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitfanfare
# 10 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 11 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	fadedefaultbgm
# 12 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_JournalPickup_Text_1, MSGBOX_SIGN
# 14 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 15 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	setvar VAR_IGRIS_OLDMAN_STATE, 2
# 16 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, 3
# 17 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	questupdated 3
# 18 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end


MountainTunnel_DigTMItem::
# 24 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 25 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	giveitem ITEM_TM28, 1
# 26 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 27 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	removeobject MountainTunnel_DigTM
# 28 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end


MountainTunnel_JournalPickup_Text_0:
# 8 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You found the Old Man's Journal!$"

MountainTunnel_JournalPickup_Text_1:
# 12 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You placed it in your backpack. Better\n"
	.string "not read it!$"
