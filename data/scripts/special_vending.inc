Common_EventScript_MintVendingInit::
# 4 "data/scripts/special_vending.pory"
	lock
# 6 "data/scripts/special_vending.pory"
	goto_if_unset FLAG_MINT_VENDING_USED, Common_EventScript_MintVendingInit_2
Common_EventScript_MintVendingInit_1:
# 10 "data/scripts/special_vending.pory"
	msgbox Common_EventScript_MintVendingInit_Text_0
# 13 "data/scripts/special_vending.pory"
	waitmessage
# 14 "data/scripts/special_vending.pory"
	goto_if_set FLAG_BADGE02_GET, Common_EventScript_MintVendingInit_5
# 18 "data/scripts/special_vending.pory"
	goto_if_set FLAG_BADGE01_GET, Common_EventScript_MintVendingInit_6
# 24 "data/scripts/special_vending.pory"
	vendingpokemart MintVending_00_MartItems
Common_EventScript_MintVendingInit_4:
# 26 "data/scripts/special_vending.pory"
	release
	end

Common_EventScript_MintVendingInit_2:
# 7 "data/scripts/special_vending.pory"
	setflag FLAG_MINT_VENDING_USED
	goto Common_EventScript_MintVendingInit_1

Common_EventScript_MintVendingInit_5:
# 16 "data/scripts/special_vending.pory"
	vendingpokemart MintVending_02_MartItems
	goto Common_EventScript_MintVendingInit_4

Common_EventScript_MintVendingInit_6:
# 20 "data/scripts/special_vending.pory"
	vendingpokemart MintVending_01_MartItems
	goto Common_EventScript_MintVendingInit_4


	.align 2
# 30 "data/scripts/special_vending.pory"
MintVending_00_MartItems:
# 32 "data/scripts/special_vending.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 35 "data/scripts/special_vending.pory"
MintVending_01_MartItems:
# 37 "data/scripts/special_vending.pory"
	.2byte ITEM_RELAXED_MINT
# 38 "data/scripts/special_vending.pory"
	.2byte ITEM_SASSY_MINT
# 39 "data/scripts/special_vending.pory"
	.2byte ITEM_BOLD_MINT
# 40 "data/scripts/special_vending.pory"
	.2byte ITEM_IMPISH_MINT
# 41 "data/scripts/special_vending.pory"
	.2byte ITEM_CALM_MINT
# 42 "data/scripts/special_vending.pory"
	.2byte ITEM_CAREFUL_MINT
# 43 "data/scripts/special_vending.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 46 "data/scripts/special_vending.pory"
MintVending_02_MartItems:
# 48 "data/scripts/special_vending.pory"
	.2byte ITEM_JOLLY_MINT
# 49 "data/scripts/special_vending.pory"
	.2byte ITEM_TIMID_MINT
# 50 "data/scripts/special_vending.pory"
	.2byte ITEM_NAIVE_MINT
# 51 "data/scripts/special_vending.pory"
	.2byte ITEM_HASTY_MINT
# 52 "data/scripts/special_vending.pory"
	.2byte ITEM_GENTLE_MINT
# 53 "data/scripts/special_vending.pory"
	.2byte ITEM_LAX_MINT
# 54 "data/scripts/special_vending.pory"
	.2byte ITEM_RELAXED_MINT
# 55 "data/scripts/special_vending.pory"
	.2byte ITEM_SASSY_MINT
# 56 "data/scripts/special_vending.pory"
	.2byte ITEM_BOLD_MINT
# 57 "data/scripts/special_vending.pory"
	.2byte ITEM_IMPISH_MINT
# 58 "data/scripts/special_vending.pory"
	.2byte ITEM_CALM_MINT
# 59 "data/scripts/special_vending.pory"
	.2byte ITEM_CAREFUL_MINT
# 60 "data/scripts/special_vending.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 64 "data/scripts/special_vending.pory"
MintVending_08_MartItems:
# 66 "data/scripts/special_vending.pory"
	.2byte ITEM_LONELY_MINT
# 67 "data/scripts/special_vending.pory"
	.2byte ITEM_ADAMANT_MINT
# 68 "data/scripts/special_vending.pory"
	.2byte ITEM_NAUGHTY_MINT
# 69 "data/scripts/special_vending.pory"
	.2byte ITEM_BRAVE_MINT
# 70 "data/scripts/special_vending.pory"
	.2byte ITEM_BOLD_MINT
# 71 "data/scripts/special_vending.pory"
	.2byte ITEM_IMPISH_MINT
# 72 "data/scripts/special_vending.pory"
	.2byte ITEM_LAX_MINT
# 73 "data/scripts/special_vending.pory"
	.2byte ITEM_RELAXED_MINT
# 74 "data/scripts/special_vending.pory"
	.2byte ITEM_MODEST_MINT
# 75 "data/scripts/special_vending.pory"
	.2byte ITEM_MILD_MINT
# 76 "data/scripts/special_vending.pory"
	.2byte ITEM_RASH_MINT
# 77 "data/scripts/special_vending.pory"
	.2byte ITEM_QUIET_MINT
# 78 "data/scripts/special_vending.pory"
	.2byte ITEM_CALM_MINT
# 79 "data/scripts/special_vending.pory"
	.2byte ITEM_GENTLE_MINT
# 80 "data/scripts/special_vending.pory"
	.2byte ITEM_CAREFUL_MINT
# 81 "data/scripts/special_vending.pory"
	.2byte ITEM_SASSY_MINT
# 82 "data/scripts/special_vending.pory"
	.2byte ITEM_TIMID_MINT
# 83 "data/scripts/special_vending.pory"
	.2byte ITEM_HASTY_MINT
# 84 "data/scripts/special_vending.pory"
	.2byte ITEM_JOLLY_MINT
# 85 "data/scripts/special_vending.pory"
	.2byte ITEM_NAIVE_MINT
# 86 "data/scripts/special_vending.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Common_EventScript_MintVendingInit_Text_0:
# 10 "data/scripts/special_vending.pory"
	.string "It's a vending machine that serves\n"
	.string "Mints! These can change your Pokemon's\l"
	.string "stats!$"
