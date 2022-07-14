/*
 * TheXTech - A platform game engine ported from old source code for VB6
 *
 * Copyright (c) 2009-2011 Andrew Spinks, original VB6 code
 * Copyright (c) 2020-2022 Vitaly Novichkov <admin@wohlnet.ru>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef ENUMNPCID_HHH
#define ENUMNPCID_HHH

enum NPCID
{
    NPCID_GOOMBA_SMB3 = 1, NPCID_KURIBO_SMB3 = NPCID_GOOMBA_SMB3,
    NPCID_REDGOOMBA = 2, NPCID_REDKURIBO = NPCID_REDGOOMBA,
    NPCID_REDPARAGOOMBA = 3, NPCID_REDPATAKURIBO = NPCID_REDPARAGOOMBA,
    NPCID_GRNTROOPA_SMB3 = 4, NPCID_GRNNOKONOKO_SMB3 = NPCID_GRNTROOPA_SMB3,
    NPCID_GRNSHELL_SMB3 = 5, NPCID_GRNKOURA_SMB3 = NPCID_GRNSHELL_SMB3,
    NPCID_REDTROOPA_SMB3 = 6, NPCID_REDNOKONOKO_SMB3 = NPCID_REDTROOPA_SMB3,
    NPCID_REDSHELL_SMB3 = 7, NPCID_REDKOURA_SMB3 = NPCID_REDSHELL_SMB3,
    NPCID_PIRANHA_SMB3 = 8, NPCID_PAKKUNFLOWER_SMB3 = NPCID_PIRANHA_SMB3,
    NPCID_SHROOM_SMB3 = 9, NPCID_KINOKO_SMB3 = NPCID_SHROOM_SMB3,
    NPCID_COIN_SMB3 = 10,

    NPCID_ITEMGOAL = 11,
    NPCID_PODOBOO = 12, NPCID_LAVABUBBLE = NPCID_PODOBOO,
    NPCID_PLAYERFIREBALL = 13,
    NPCID_FIREFLOWER_SMB3 = 14,
    NPCID_BOOMBOOM = 15, NPCID_BUNBUN = NPCID_BOOMBOOM,
    NPCID_GOALORB_SMB3 = 16,
    NPCID_BULLET_SMB3 = 17, NPCID_KILLER_SMB3 = NPCID_BULLET_SMB3,
    NPCID_BULLET_SMW = 18, NPCID_MAGNUMKILLER_SMW = NPCID_BULLET_SMW,
    NPCID_BLUSHYGUY = 19, NPCID_BLUHEIHO = NPCID_BLUSHYGUY,
    NPCID_REDSHYGUY = 20, NPCID_REDHEIHO = NPCID_REDHEIHO,

    NPCID_CANNONENEMY = 21, NPCID_KILLERHOUDAI = NPCID_CANNONENEMY,
    NPCID_CANNONITEM = 22, NPCID_BILLYGUN = NPCID_CANNONITEM,
    NPCID_BUZZYBEETLE = 23, NPCID_MET = NPCID_BUZZYBEETLE,
    NPCID_BUZZYSHELL = 24, NPCID_METKOURA = NPCID_BUZZYSHELL,
    NPCID_NINJI_SMB2 = 25, NPCID_HAKKUN_SMB2 = NPCID_NINJI_SMB2,
    NPCID_SPRING = 26, NPCID_TRAMPOLINE = NPCID_SPRING,
    NPCID_UNDERGOOMBA = 27, NPCID_CHIKAKURIBO = NPCID_UNDERGOOMBA,
    NPCID_REDCHEEP = 28, NPCID_REDPUKU = NPCID_REDCHEEP,
    NPCID_HAMBRO = 29, NPCID_HAMMERBRO = NPCID_HAMBRO,
    NPCID_ENEMYHAMMER = 30,

    NPCID_KEY = 31,
    NPCID_PSWITCH_SMW = 32,
    NPCID_COIN_SMW = 33,
    NPCID_LEAF = 34,
    NPCID_GRNBOOT = 35, NPCID_GRNKUTSU = NPCID_GRNBOOT,
    NPCID_SPINY_SMB3 = 36, NPCID_TOGEZO_SMB3 = NPCID_SPINY_SMB3,
    NPCID_THWOMP_SMB3 = 37, NPCID_DOSSUN_SMB3 = NPCID_THWOMP_SMB3,
    NPCID_BOO_SMB3 = 38, NPCID_TERESA_SMB3 = NPCID_BOO_SMB3,
    NPCID_BIRDO = 39, NPCID_CATHERINE = NPCID_BIRDO,
    NPCID_BIRDOEGG = 40, NPCID_CATHERINEEGG = NPCID_BIRDOEGG,

    NPCID_GOALORB_SMB2 = 41,
    NPCID_EERIE = 42, NPCID_TELESAULS = NPCID_EERIE,
    NPCID_BOO_SMW = 43, NPCID_TERESA_SMW = NPCID_BOO_SMW,
    NPCID_BIGBOO = 44, NPCID_DEKATERESA = NPCID_BIGBOO,
    NPCID_ICE_BLOCK = 45,       NPCID_THROWBLOCK = NPCID_ICE_BLOCK, NPC_BURUBURUBLOCK = NPCID_ICE_BLOCK,
    NPCID_DONUTBLOCK_RED = 46,  NPCID_REDDONUT = NPCID_DONUTBLOCK_RED,
    NPCID_LAKITU_SMB3 = 47, NPCID_JUGEMU_SMB3 = NPCID_LAKITU_SMB3,
    NPCID_SPINYBALL_SMB3 = 48, NPCID_PAIPO_SMB3 = NPCID_SPINYBALL_SMB3,
    NPCID_TOOTHYPIPE = 49,
    NPCID_TOOTHY = 50,

    NPCID_BOTTOMPIRANHA = 51, NPCID_BOTTOMPAKKUN = NPCID_BOTTOMPIRANHA,
    NPCID_SIDEPIRANHA = 52, NPCID_SIDEPAKKUN = NPCID_SIDEPIRANHA,
    NPCID_CRAB = 53, NPCID_SIDESTEPPER = NPCID_CRAB, NPCID_KANI = NPCID_CRAB,
    NPCID_FLY = 54, NPCID_FIGHTERFLY = NPCID_FLY,
    NPCID_EXTKOOPA = 55, NPCID_10KOOPA = NPCID_EXTKOOPA,
    NPCID_CLOWNCAR = 56,
    NPCID_CONVEYOR = 57, NPCID_CONVEYORBELT = NPCID_CONVEYOR,
    NPCID_METALBARREL = 58,
    NPCID_YELSWITCHGOOMBA = 59, NPCID_YELSWITCHKURIBO = NPCID_YELSWITCHGOOMBA,
    NPCID_YELBLOCKS = 60, NPCID_YELPLATFORM = NPCID_YELBLOCKS, NPCID_YELLIFT = NPCID_YELBLOCKS,

    NPCID_BLUSWITCHGOOMBA = 61, NPCID_BLUSWITCHKURIBO = NPCID_BLUSWITCHGOOMBA,
    NPCID_BLUBLOCKS = 62, NPCID_BLUPLATFORM = NPCID_BLUBLOCKS, NPCID_BLULIFT = NPCID_BLUBLOCKS,
    NPCID_GRNSWITCHGOOMBA = 63, NPCID_GRNSWITCHKURIBO = NPCID_GRNSWITCHGOOMBA,
    NPCID_GRNBLOCKS = 64, NPCID_GRNPLATFORM = NPCID_GRNBLOCKS, NPCID_GRNLIFT = NPCID_GRNBLOCKS,
    NPCID_REDSWITCHGOOMBA = 65, NPCID_REDSWITCHKURIBO = NPCID_REDSWITCHGOOMBA,
    NPCID_REDBLOCKS = 66, NPCID_REDPLATFORM = NPCID_REDBLOCKS, NPCID_REDLIFT = NPCID_REDBLOCKS,
    NPCID_HPIPE_SHORT = 67, HDOKAN_SHORT = HPIPE_SHORT,
    NPCID_HPIPE_LONG = 68, HDOKAN_LONG = HPIPE_LONG,
    NPCID_VPIPE_SHORT = 69, VDOKAN_SHORT = VPIPE_SHORT,
    NPCID_VPIPE_LONG = 70, VDOKAN_LONG = VPIPE_LONG,

    NPCID_BIGGOOMBA = 71, NPCID_DEKAKURIBO = NPCID_BIGGOOMBA,
    NPCID_BIGTROOPA = 72, NPCID_DEKANOKONOKO = NPCID_BIGTROOPA，
    NPCID_BIGSHELL = 73, NPCID_DEKAKOURA = NPCID_BIGSHELL,
    NPCID_BIGPIRANHA = 74, NPCID_DEKAPAKKUN = NPCID_BIGPIRANHA,
    NPCID_TOAD_A = 75, NPCID_KINOPIO_A = NPCID_TOAD_A,
    NPCID_GRNPARA_SMB3 = 76, NPCID_GRNPATAPATA_SMB3 = NPCID_GRNPARA_SMB3,
    NPCID_NINJI_SMW = 77, NPCID_HAKKUN_SMW = NPCID_NINJI_SMW,
    NPCID_TANKTREADS = 78,
    NPCID_SHORTWOOD = 79,
    NPCID_LONGWOOD = 80,

    NPCID_SLANTWOOD_L = 81,
    NPCID_SLANTWOOD_R = 82,
    NPCID_SLANTWOOD_M = 83,
    NPCID_STATUE_SMB3 = 84, NPCID_KOOPASEKIZOU_SMB3 = NPCID_STATUE_SMB3,
    NPCID_EXT_FIRE_B = 85,
    NPCID_BOWSER_SMB3 = 86, NPCID_KOOPA3 = NPCID_BOWSER_SMB3,
    NPCID_EXT_FIRE_A = 87,
    NPCID_COIN_SMB = 88,
    NPCID_GOOMBA_SMB = 89, NPCID_KURIBO_SMB = NPCID_GOOMBA_SMB,
    NPCID_LIFE_SMB3 = 90,

    NPCID_BURIEDPLANT = 91,
    NPCID_VEGGIE_TURNIP = 92, NPCID_YASAI_TURNIP = NPCID_VEGGIE_TURNIP,
    NPCID_PIRANHA_SMB = 93, NPCID_PAKKUNFLOWER_SMB = NPCID_PIRANHA_SMB,
    NPCID_TOAD_B = 94, NPCID_KINOPIO_B = NPCID_TOAD_B,
    NPCID_YOSHI_GREEN = 95,
    NPCID_YOSHIEGG = 96,
    NPCID_STAR_SMB3 = 97,
    NPCID_YOSHI_BLUE = 98,
    NPCID_YOSHI_YELLOW = 99,
    NPCID_YOSHI_RED = 100,

    NPCID_LUIGI = 101,
    NPCID_LINK = 102,
    NPCID_RED_COIN = 103,       NPCID_REDCOIN = NPCID_RED_COIN,
    NPCID_PLATFORM_SMB3 = 104, NPCID_LIFT_SMB3 = NPCID_PLATFORM_SMB3,
    NPCID_CHECKERPLATFORM = 105, NPCID_CHECKERLIFT = NPCID_CHECKERPLATFORM,
    NPCID_PLATFORM_SMB = 106, NPCID_LIFT_SMB = NPCID_PLATFORM_SMB,
    NPCID_PINKBOBOMB = 107,
    NPCID_YOSHIFIRE = 108,
    NPCID_GRNTROOPA_SMW = 109, NPCID_GRNNOKONOKO_SMW = NPCID_GRNTROOPA_SMW,
    NPCID_REDTROOPA_SMW = 110, NPCID_REDNOKONOKO_SMW = NPCID_REDTROOPA_SMW,

    NPCID_BLUTROOPA = 111, NPCID_BLUNOKONOKO = NPCID_BLUTROOPA,
    NPCID_YELTROOPA = 112, NPCID_YELNOKONOKO = NPCID_YELTROOPA,
    NPCID_GRNSHELL_SMW = 113, NPCID_GRNKOURA_SMW = NPCID_GRNSHELL_SMW,
    NPCID_REDSHELL_SMW = 114, NPCID_REDKOURA_SMW = NPCID_REDSHELL_SMW,
    NPCID_BLUSHELL = 115, NPCID_BLUKOURA = NPCID_BLUSHELL,
    NPCID_YELSHELL = 116, NPCID_YELKOURA = NPCID_YELSHELL,
    NPCID_GRNKOOPA = 117, NPCID_GRNHADAKA = NPCID_GRNKOOPA,
    NPCID_REDKOOPA = 118, NPCID_REDHADAKA = NPCID_REDKOOPA,
    NPCID_BLUKOOPA = 119, NPCID_BLUHADAKA = NPCID_BLUKOOPA,
    NPCID_YELKOOPA = 120, NPCID_YELHADAKA = NPCID_YELKOOPA,

    NPCID_GRNPARA_SMW = 121, NPCID_GRNPATAPATA_SMW = NPCID_GRNPARA_SMW,
    NPCID_REDPARA_SMW = 122, NPCID_REDPATAPATA_SMW = NPCID_REDPARA_SMW,
    NPCID_BLUPARA = 123, NPCID_BLUPATAPATA = NPCID_BLUPARA,
    NPCID_YELPARA = 124, NPCID_YELPATAPATA = NPCID_YELPARA,
    NPCID_WOSU = 125,       NPCID_KNIGHT = NPCID_WOSU,
    NPCID_BIT_BLUE = 126,   NPCID_SLIME_B = NPCID_BIT_BLUE,
    NPCID_BOT_CYAN = 127,   NPCID_SLIME_A = NPCID_BOT_CYAN,
    NPCID_BIT = 128,        NPCID_SLIME_C = NPCID_BIT, NPCID_BIT_RED = NPCID_BIT,
    NPCID_TWEETER = 129, NPCID_RITON = NPCID_TWEETER,
    NPCID_REDSNIFIT = 130, NPCID_REDMUCHO = NPCID_REDSNIFIT,

    NPCID_BLUSNIFIT = 131, NPCID_BLUMUCHO = NPCID_BLUSNIFIT,
    NPCID_GRYSNIFIT = 132, NPCID_GRYMUCHO = NPCID_GRYSNIFIT,
    NPCID_CANNONBALL = 133,
    NPCID_BOMB = 134,
    NPCID_BOBOMB_SMB2 = 135, NPCID_BOMBHEI_SMB2 = NPCID_BOBOMB_SMB2,
    NPCID_BOBOMB_SMB3 = 136, NPCID_BOMBHEI_SMB3 = NPCID_BOBOMB_SMB3,
    NPCID_ACTIVEBOBOMB_SMB3 = 137, NPCID_ACTIVEBOBOMB_SMB3 = NPCID_ACTIVEBOMBHEI_SMB3,
    NPCID_COIN_SMB2 = 138,
    NPCID_VEGGIE_ONION = 139, NPCID_YASAI_ONION = NPCID_VEGGIE_ONION,
    NPCID_VEGGIE_TURNIP_2 = 140, NPCID_YASAI_TURNIP_2 = NPCID_VEGGIE_TURNIP_2,

    NPCID_VEGGIE_SPROUT = 141, NPCID_YASAI_SPROUT = NPCID_VEGGIE_SPROUT,
    NPCID_VEGGIE_PUMPKIN = 142, NPCID_YASAI_PUMPKIN = NPCID_VEGGIE_PUMPKIN,
    NPCID_VEGGIE_RADISH_SPROUT = 143, NPCID_YASAI_RADISH_SPROUT = NPCID_VEGGIE_RADISH_SPROUT,
    NPCID_VEGGIE_TURNIP_SPROUT = 144, NPCID_YASAI_TURNIP_SPROUT = NPCID_VEGGIE_TURNIP_SPROUT,
    NPCID_VEGGIE_TURNIP_SPROUT_2 = 145, NPCID_YASAI_TURNIP_SPROUT_2 = NPCID_VEGGIE_TURNIP_SPROUT_2,
    NPCID_VEGGIE_RADISH = 146, NPCID_YASAI_RADISH = NPCID_VEGGIE_RADISH,
    NPCID_VEGGIE_RANDOM = 147, NPCID_YASAI_RANDOM = NPCID_VEGGIE_RANDOM,
    NPCID_YOSHI_BLACK = 148,
    NPCID_YOSHI_PURPLE = 149,
    NPCID_YOSHI_PINK = 150,

    NPCID_SIGN = 151,
    NPCID_RING_MISC = 152, NPCID_RING = NPCID_RING_MISC,
    NPCID_PSHROOM = 153,
    NPCID_SHROOMBLOCK_A = 154,
    NPCID_SHROOMBLOCK_B = 155,
    NPCID_SHROOMBLOCK_C = 156,
    NPCID_SHROOMBLOCK_D = 157,
    NPCID_SATURN = 158, NPCID_MRSATURN = NPCID_SATURN,
    NPCID_QUICKSAND = 159,
    NPCID_ROCKETWOOD = 160,

    NPCID_REDPARA_SMB3 = 161, NPCID_REDPATAPATA_SMB3 = NPCID_REDPARA_SMB3,
    NPCID_REX = 162, NPCID_DORABON = NPCID_REX,
    NPCID_REX_SQUISHED = 163, NPCID_DORABON_SQUISHED = NPCID_REX_SQUISHED,
    NPCID_MEGAMOLE = 164, NPCID_INDY = NPCID_MEGAMOLE,
    NPCID_GALOOMBA = 165, NPCID_KURIBON = NPCID_GALOOMBA,
    NPCID_GALOOMBA_STOMPED = 166, NPCID_KURIBON_STOMPED = NPCID_GALOOMBA_STOMPED,
    NPCID_PARAGALOOMBA = 167, NPCID_PATAKURI = NPCID_PARAGALOOMBA,
    NPCID_BULLY = 168, NPCID_DONKETSU = NPCID_BULLY,
    NPCID_TANOOKISUIT = 169,
    NPCID_HAMMERSUIT = 170,

    NPCID_PLAYERHAMMER = 171,
    NPCID_GRNSHELL_SMB = 172, NPCID_GRNKOURA_SMB = NPCID_GRNSHELL_SMB,
    NPCID_GRNTROOPA_SMB = 173, NPCID_GRNNOKONOKO_SMB = NPCID_GRNTROOPA_SMB,
    NPCID_REDSHELL_SMB = 174, NPCID_REDKOURA_SMB = NPCID_REDSHELL_SMB,
    NPCID_REDTROOPA_SMB = 175, NPCID_REDNOKONOKO_SMB = NPCID_REDTROOPA_SMB,
    NPCID_GRNPARA_SMB = 176, NPCID_GRNPATAPATA_SMB = NPCID_GRNPARA_SMB,
    NPCID_REDPARA_SMB = 177, NPCID_REDPATAPATA_SMB = NPCID_REDPARA_SMB,
    NPCID_AXE = 178,
    NPCID_SAW = 179, NPCID_GRINDER = NPCID_SAW,
    NPCID_THWOMP_SMW = 180, NPCID_DOSSUN_SMW = NPCID_THWOMP_SMW,

    NPCID_STATUE_SMW = 181, NPCID_KOOPASEKIZOU_SMW = NPCID_STATUE_SMW,
    NPCID_FIREFLOWER_SMB = 182,
    NPCID_FIREFLOWER_SMW = 183,
    NPCID_SHROOM_SMB = 184, NPCID_KINOKO_SMB = NPCID_SHROOM_SMB,
    NPCID_SHROOM_SMW = 185, NPCID_KINOKO_SMW = NPCID_SHROOM_SMW,
    NPCID_LIFE_SMB = 186,
    NPCID_LIFE_SMW = 187,
    NPCID_MOON = 188,
    NPCID_DRYBONES = 189, NPCID_KARON = NPCID_DRYBONES,
    NPCID_SKULL = 190, NPCID_SKULLRAFT = NPCID_SKULL, NPCID_LAVALIFT = NPCID_SKULL, NPCID_YOGANLIFT = NPCID_SKULL,

    NPCID_REDBOOT = 191, NPCID_REDKUTSU = NPCID_REDBOOT,
    NPCID_CHECKPOINT = 192,
    NPCID_BLUBOOT = 193, NPCID_BLUKUTSU = NPCID_BLUBOOT,
    NPCID_DISCOSHELL = 194, NPCID_RAINBOWSHELL = NPCID_DISCOSHELL, NPCID_MUTEKIKOURA = NPCID_DISCOSHELL,
    NPCID_FLIPPEDDISCO = 195, NPCID_FLIPPEDRAINBOWSHELL = NPCID_FLIPPEDDISCO, NPCID_UPSIDEDOWNRAINBOWSHELL = NPCID_FLIPPEDDISCO, NPCID_FLIPPEDMUTEKIKOURA = NPCID_FLIPPEDDISCO, NPCID_UPSIDEDOWNMUTEKIKOURA = NPCID_FLIPPEDDISCO,
    NPCID_STAR_SMW = 196,
    NPCID_GOALTAPE = 197,
    NPCID_PRINCESS = 198,
    NPCID_BLARGG = 199, NPCID_UNBABA = NPCID_BLARGG,
    NPCID_BOWSER_SMB = 200, NPCID_KOOPA1 = NPCID_BOWSER_SMB,

    NPCID_WART = 201, NPCID_MAMU = NPCID_WART,
    NPCID_WARTBUBBLE = 202, NPCID_MAMUBUBBLE = NPCID_WARTBUBBLE,
    NPCID_METROID_RIPPER = 203,        NPCID_METROID_A = NPCID_METROID_RIPPER,
    NPCID_METROID_ROCKET_RIPPER = 204, NPCID_METROID_B = NPCID_METROID_ROCKET_RIPPER,
    NPCID_METROID_ZOOMER = 205,        NPCID_METROID_C = NPCID_METROID_ZOOMER,
    NPCID_SPARK = 206,
    NPCID_SPIKE_TOP = 207, NPCID_SPIKEBEETLE = NPCID_SPIKE_TOP, NPCID_TOGEMET = NPCID_SPIKE_TOP,
    NPCID_BOSSGLASS = 208,
    NPCID_MOTHERBRAIN = 209,
    NPCID_RINKA = 210,

    NPCID_RINKAGEN = 211,
    NPCID_DONUTBLOCK_BROWN = 212,       NPCID_BLUDONUT = NPCID_DONUTBLOCK_BROWN,
    NPCID_GRNVINE_SMB3 = 213, NPCID_GRNTSURU_SMB3 = NPCID_GRNVINE_SMB3,
    NPCID_REDVINE_SMB3 = 214, NPCID_REDTSURU_SMB3 = NPCID_REDVINE_SMB3,
    NPCID_GRNVINE_SMB2 = 215, NPCID_GRNTSURU_SMB2 = NPCID_GRNVINE_SMB2.
    NPCID_YELVINE = 216, NPCID_YELTSURU = NPCID_YELVINE,
    NPCID_BLUVINE = 217, NPCID_BLUTSURU = NPCID_BLUVINE,
    NPCID_GRNVINEBOTTOM = 218, NPCID_GRNTSURUBOTTOM = NPCID_GRNVINEBOTTOM,
    NPCID_YELVINEBOTTOM = 219, NPCID_YELTSURUBOTTOM = NPCID_YELVINEBOTTOM,
    NPCID_BLUVINEBOTTOM = 220, NPCID_BLUTSURUBOTTOM = NPCID_BLUVINEBOTTOM ,

    NPCID_LADDER = 221,
    NPCID_GRNVINE_SMB = 222, NPCID_GRNTSURU_SMB = NPCID_GRNVINE_SMB,
    NPCID_GRNVINETOP_SMB = 223, NPCID_GRNTSURUTOP_SMB = NPCID_GRNVINETOP_SMB,
    NPCID_GRNVINE_SMW = 224, NPCID_GRNTSURU_SMW = NPCID_GRNVINE_SMW,
    NPCID_VINEHEAD_RED_SMB3 = 225, NPCID_REDVINETOP_SMB3 = NPCID_VINEHEAD_RED_SMB3,
    NPCID_VINEHEAD_GREEN_SMB3 = 226, NPCID_GRNVINETOP_SMB3 = NPCID_VINEHEAD_GREEN_SMB3,
    NPCID_VINEHEAD_SMW = 227, NPCID_GRNVINETOP_SMW = NPCID_VINEHEAD_SMW,
    NPCID_YOSHI_CYAN = 228, NPCID_YOSHI_ICE = NPCID_YOSHI_CYAN,
    NPCID_GREENCHEEPCHEEP = 229, NPCID_GREENPUKUPUKU = NPCID_GREENCHEEPCHEEP,
    NPCID_REDCHEEPCHEEP = 230, NPCID_REDPUKUPUKU = NPCID_REDCHEEPCHEEP,

    NPCID_BLOOPER_SMB3 = 231, NPCID_GESO_SMB3 = NPCID_BLOOPER_SMB3,
    NPCID_GOGGLEFISH = 232, NPCID_BLURP = NPCID_GOGGLEFISH, NPCID_BUKUBUKU = NPCID_GOGGLEFISH,
    NPCID_GRNCHEEP = 233, NPCID_GRNPUKU = NPCID_GRNCHEEP,
    NPCID_BONEFISH = 234, NPCID_FISHBONE = NPCID_BONEFISH,
    NPCID_BLOOPER = 235, NPCID_BLOOPER_SMB = NPCID_BLOOPER, NPCID_GESO = NPCID_BLOOPER, NPCID_GESO_SMB = NPCID_BLOOPER,
    NPCID_SMWCHEEP = 236, NPCID_SMWPUKU = NPCID_SMWCHEEP,
    NPCID_ICEBLOCK = 237,
    NPCID_PSWITCH_SMB3 = 238, NPCID_TIMESWITCH = NPCID_PSWITCH_SMB3,
    NPCID_DYNAMITE_PLUNGER = 239, NPCID_TNT = NPCID_DYNAMITE_PLUNGER,
    NPCID_TIMER_SMB2 = 240,

    NPCID_POW = 241,
    NPCID_GOOMBA_MISC = 242, NPCID_GOOMBA_SML2 = NPCID_GOOMBA_MISC, NPCID_KURIBO_MISC = NPCID_GOOMBA_MISC, NPCID_KURIBO_SML2 = NPCID_GOOMBA_MISC,
    NPCID_PARAGOOMBA_MISC = 243, NPCID_PARAGOOMBA_SML2 = NPCID_PARAGOOMBA_MISC, NPCID_PATAKURIBO_MISC = NPCID_PARAGOOMBA_MISC, NPCID_PATAKURIBO_SML2 = NPCID_PARAGOOMBA_MISC,
    NPCID_PARAGOOMBA_SMB3 = 244, NPCID_PATAKURIBO_SMB3 = NPCID_PARAGOOMBA_SMB3,
    NPCID_FIREPIRANHA = 245, NPCID_FIREPAKKUN = NPCID_FIREPIRANHA,
    NPCID_EXT_FIRE_D = 246,
    NPCID_POKEY = 247, NPCID_SAMBO = NPCID_POKEY,
    NPCID_TIMER_SMB3 = 248,
    NPCID_SHROOM_SMB2 = 249, NPCID_KINOKO_SMB2 = NPCID_SHROOM_SMB2,
    NPCID_HEART = 250,

    NPCID_GRNRUPEE = 251,
    NPCID_BLURUPEE = 252,
    NPCID_REDRUPEE = 253,
    NPCID_FAIRY_PENDANT = 254, NPCID_AMULET = NPCID_FAIRY_PENDANT,
    NPCID_LOCKDOOR = 255,
    NPCID_LONGPIRANHA_UP = 256, NPCID_LONGPAKKUN_UP = NPCID_LONGPIRANHA_UP,
    NPCID_LONGPIRANHA_DOWN = 257, NPCID_LONGPAKKUN_DOWN = NPCID_LONGPIRANHA_DOWN,
    NPCID_BLUECOIN = 258,
    NPCID_ROTODISK = 259, NPCID_COOKIE = NPCID_ROTODISK,
    NPCID_FIREBAR = 260,

    NPCID_NIPPER_PLANT = 261, NPCID_MUNCHER = NPCID_NIPPER_PLANT, NPCID_PUCHIPAKKUN = NPCID_NIPPER_PLANT,
    NPCID_MOUSER = 262, NPCID_DON_CHURUGE = NPCID_MOUSER,
    NPCID_ICE_CUBE = 263, NPCID_STATIC = NPCID_ICE_CUBE,
    NPCID_ICEFLOWER_SMB3 = 264,
    NPCID_PLAYERICEBALL = 265,
    NPCID_SWORDBEAM = 266,
    NPCID_LARRY = 267,
    NPCID_LARRYSHELL = 268,
    NPCID_LARRY_MAGIC_RING = 269,
    NPCID_PIRANHAHEAD = 270, NPCID_JUMPINGPIRANHA = NPCID_PIRANHAHEAD, NPCID_PAKKUNHEAD = NPCID_PIRANHAHEAD, NPCID_P_PAKKUN = NPCID_PIRANHAHEAD, 

    NPCID_SWOOPER = 271, NPCID_BAT = NPCID_SWOOPER, NPCID_SWOOP = NPCID_SWOOPER, NPCID_BASABASA = NPCID_SWOOPER,
    NPCID_HOOPSTER = 272, NPCID_TAPEN = NPCID_HOOPSTER,
    NPCID_Q_SHROOM = 273, NPCID_SWAP_SHROOM = NPCID_Q_SHROOM, NPCID_KOUKAN_KINOKO = NPCID_Q_SHROOM,
    NPCID_DRAGONCOIN = 274, NPCID_DRAGONCOIN = NPCID_YOSHICOIN,
    NPCID_VOLCANO_LOTUS = 275,          NPCID_LAVALOTUS = NPCID_VOLCANO_LOTUS,
    NPCID_VOLCANO_LOTUS_FIREBALL = 276, NPCID_EXT_FIRE_E = NPCID_VOLCANO_LOTUS_FIREBALL,
    NPCID_ICEFLOWER_SMW = 277,
    NPCID_PROPELLERBLOCK = 278,
    NPCID_PROPELLERCANNON = 279,
    NPCID_LUDWIG = 280,

    NPCID_LUDWIG_SHELL = 281, NPCID_LUDWIGSHELL = NPCID_LUDWIG_SHELL,
    NPCID_LUDWIG_FIRE = 282, NPCID_EXT_FIRE_C = NPCID_LUDWIG_FIRE,
    NPCID_BUBBLE = 283,
    NPCID_LAKITU_SMW = 284, NPCID_JUGEMU_SMW = NPCID_LAKITU_SMW,
    NPCID_SPINY_SMW = 285, NPCID_TOGEZO_SMW = NPCID_SPINY_SMW,
    NPCID_SPINYEGG_SMW = 286, NPCID_SPINYBALL_SMW = NPCID_SPINYEGG_SMW, NPCID_PAIPO_SMW = NPCID_SPINYEGG_SMW,
    NPCID_RANDOM_POWERUP = 287,
    NPCID_POTION = 288, NPCID_MAHOU_NO_KUSURI = NPCID_POTION,
    NPCID_POTIONDOOR = 289, NPCID_MAHOUDOOR = NPCID_POTIONDOOR,
    NPCID_COCKPIT = 290,

    NPCID_PEACHBOMB = 291,
    NPCID_BOOMERANG = 292,
};


#endif // ENUMNPCID_HHH
