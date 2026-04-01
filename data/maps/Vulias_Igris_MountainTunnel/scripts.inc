Vulias_Igris_MountainTunnel_MapScripts::
	.byte 0


MountainTunnel_JournalPickup::
# 5 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 6 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	removeobject MTNTUNNEL_OLDMAN_JOURNAL
# 7 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	giveitem ITEM_OLDMAN_JOURNAL, 1
# 12 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	compare VAR_IGRIS_OLDMAN_STATE, 0
	goto_if_eq MountainTunnel_JournalPickup_2
# 21 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_JournalPickup_Text_1, MSGBOX_SIGN
# 23 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitfanfare
# 24 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 25 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	fadedefaultbgm
# 26 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	setvar VAR_IGRIS_OLDMAN_STATE, 2
# 27 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, 3
# 28 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	questupdated 3
MountainTunnel_JournalPickup_1:
# 31 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end

MountainTunnel_JournalPickup_2:
# 13 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_JournalPickup_Text_0, MSGBOX_SIGN
# 16 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitfanfare
# 17 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 18 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	fadedefaultbgm
# 19 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	setflag FLAG_OLDMANJOURNAL_EARLY
	goto MountainTunnel_JournalPickup_1


MountainTunnel_DigTMItem::
# 37 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 38 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	giveitem ITEM_TM28, 1
# 39 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 40 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	removeobject MountainTunnel_DigTM
# 41 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end


MountainTunnel_EventScript_Trainer01::
# 47 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_ELI, MountainTunnel_EventScript_Trainer01_Text_0, MountainTunnel_EventScript_Trainer01_Text_1
# 53 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 54 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer02::
# 59 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_RHETT, MountainTunnel_EventScript_Trainer02_Text_0, MountainTunnel_EventScript_Trainer02_Text_1
# 64 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 66 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer03::
# 72 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_DARCY, MountainTunnel_EventScript_Trainer03_Text_0, MountainTunnel_EventScript_Trainer03_Text_1
# 78 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer04::
# 85 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, MountainTunnel_EventScript_Trainer04_Text_0, MountainTunnel_EventScript_Trainer04_Text_1
# 91 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 93 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_EventScript_Trainer05::
# 99 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, MountainTunnel_EventScript_Trainer05_Text_0, MountainTunnel_EventScript_Trainer05_Text_1
# 105 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 107 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
	end


MountainTunnel_LedgeKid::
# 114 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	lock
# 115 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	faceplayer
# 116 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	setspeaker MountainTunnel_LedgeKid_Text_0
# 117 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	msgbox MountainTunnel_LedgeKid_Text_1
# 122 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	waitmessage
# 123 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	applymovement MTNTUNNEL_LEDGEKID, MountainTunnel_LedgeKid_Movement_0
# 124 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	release
	end


# 123 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
MountainTunnel_LedgeKid_Movement_0:
# 123 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	face_left
	step_end

MountainTunnel_JournalPickup_Text_0:
# 13 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You found an old journal! It doesn't\n"
	.string "seem to be in great condition, it's\l"
	.string "best not to open it!$"

MountainTunnel_JournalPickup_Text_1:
# 21 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "You found the Old Man's Journal!\n"
	.string "Better not read it!$"

MountainTunnel_EventScript_Trainer01_Text_0:
# 49 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "There are so many collapsed tunnels\n"
	.string "here!$"

MountainTunnel_EventScript_Trainer01_Text_1:
# 51 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Careful, you'll make this one collapse!$"

MountainTunnel_EventScript_Trainer01_Text_2:
# 53 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Eh, it seems sturdy enough I suppose.$"

MountainTunnel_EventScript_Trainer02_Text_0:
# 61 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I move swiftly through this cave!$"

MountainTunnel_EventScript_Trainer02_Text_1:
# 62 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Owe, my toe!$"

MountainTunnel_EventScript_Trainer02_Text_2:
# 64 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "There are a lot of rocks on the ground,\n"
	.string "maybe I should train somewhere else.$"

MountainTunnel_EventScript_Trainer03_Text_0:
# 74 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "We've been training all day, let's see\n"
	.string "the fruits it bore!$"

MountainTunnel_EventScript_Trainer03_Text_1:
# 76 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Not enough!$"

MountainTunnel_EventScript_Trainer03_Text_2:
# 78 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Like they say, there's always a bigger\n"
	.string "fish.$"

MountainTunnel_EventScript_Trainer04_Text_0:
# 87 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I'm not even tired yet, I could go for\n"
	.string "hours!$"

MountainTunnel_EventScript_Trainer04_Text_1:
# 89 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Huh, now I feel spent...$"

MountainTunnel_EventScript_Trainer04_Text_2:
# 91 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I guess the adrenaline was keeping me\n"
	.string "going, I need a nap.$"

MountainTunnel_EventScript_Trainer05_Text_0:
# 101 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I'm a little worried this room will cave\n"
	.string "in too!$"

MountainTunnel_EventScript_Trainer05_Text_1:
# 103 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I guess we're safe if that didn't do it!$"

MountainTunnel_EventScript_Trainer05_Text_2:
# 105 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "I probably shouldn't just stand around\n"
	.string "in here though, right?$"

MountainTunnel_LedgeKid_Text_0:
# 116 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Ledge Kid$"

MountainTunnel_LedgeKid_Text_1:
# 117 "data/maps/Vulias_Igris_MountainTunnel/scripts.pory"
	.string "Ah man! if only I could just hop up that\n"
	.string "ledge!\p"
	.string "I have to go all the way around! I think\n"
	.string "I'll just go home.$"
