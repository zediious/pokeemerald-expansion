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


MountainTunnel_EventScript_Trainer01::
# 34 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_ELI, MountainTunnel_EventScript_Trainer01_Text_0, MountainTunnel_EventScript_Trainer01_Text_1
# 40 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 41 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer02::
# 46 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_RHETT, MountainTunnel_EventScript_Trainer02_Text_0, MountainTunnel_EventScript_Trainer02_Text_1
# 51 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer03::
# 59 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_DARCY, MountainTunnel_EventScript_Trainer03_Text_0, MountainTunnel_EventScript_Trainer03_Text_1
# 65 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer04::
# 72 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, MountainTunnel_EventScript_Trainer04_Text_0, MountainTunnel_EventScript_Trainer04_Text_1
# 78 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_LedgeKid::
# 88 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 89 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	faceplayer
# 90 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_LedgeKid_Text_0
# 95 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 96 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	applymovement MTNTUNNEL_LEDGEKID, MountainTunnel_LedgeKid_Movement_0
# 97 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end


# 96 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
MountainTunnel_LedgeKid_Movement_0:
# 96 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	face_left
	step_end

MountainTunnel_JournalPickup_Text_0:
# 8 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You found the Old Man's Journal!$"

MountainTunnel_JournalPickup_Text_1:
# 12 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You placed it in your backpack. Better\n"
	.string "not read it!$"

MountainTunnel_EventScript_Trainer01_Text_0:
# 36 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "There are so many collapsed tunnels\n"
	.string "here!$"

MountainTunnel_EventScript_Trainer01_Text_1:
# 38 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Careful, you'll make this one collapse!$"

MountainTunnel_EventScript_Trainer01_Text_2:
# 40 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Eh, it seems sturdy enough I suppose.$"

MountainTunnel_EventScript_Trainer02_Text_0:
# 48 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I move swiftly through this cave!$"

MountainTunnel_EventScript_Trainer02_Text_1:
# 49 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Owe, my toe!$"

MountainTunnel_EventScript_Trainer02_Text_2:
# 51 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "There are a lot of rocks on the ground,\n"
	.string "maybe I should train somewhere else.$"

MountainTunnel_EventScript_Trainer03_Text_0:
# 61 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "We've been training all day, let's see\n"
	.string "the fruits it bore!$"

MountainTunnel_EventScript_Trainer03_Text_1:
# 63 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Not enough!$"

MountainTunnel_EventScript_Trainer03_Text_2:
# 65 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Like they say, there's always a bigger\n"
	.string "fish.$"

MountainTunnel_EventScript_Trainer04_Text_0:
# 74 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I'm not even tired yet, I could go for\n"
	.string "hours!$"

MountainTunnel_EventScript_Trainer04_Text_1:
# 76 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Huh, now I feel spent...$"

MountainTunnel_EventScript_Trainer04_Text_2:
# 78 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I guess the adrenaline was keeping me\n"
	.string "going, I need a nap.$"

MountainTunnel_LedgeKid_Text_0:
# 90 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "{COLOR GREEN}Ledge Kid: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ah man! if only I could just\n"
	.string "hop up that ledge!\p"
	.string "I have to go all the way around! I think\n"
	.string "I'll just go home.$"
