////////////////////////////////////////////////////////////////////
//DeRap: Weapons\M82A2\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CBMGuns_M82A2
	{
		units[] = {"Fresh_Suppressor_M82A2_Grey","Fresh_Suppressor_M82A2_Black","Fresh_Suppressor_M82A2_Tan"};
		weapons[] = {"Fresh_M82A2_Grey","Fresh_M82A2_Tan","Fresh_M82A2_Black","Fresh_M82A2_Gold","Fresh_M82A2_Blackice_Leaf"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Muzzles","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Sounds_Effects"};
		magazines[] = {"Fresh_Mag_M82A2_10Rnd"};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Fresh_M82A2_Base: Rifle_Base
	{
		scope = 0;
		displayName = "M82A2";
		descriptionShort = "The Barrett M82A2, standardized by the U.S. military as the M107, is a recoil-operated, semi-automatic anti-materiel precision rifle developed by the American Barrett Firearms Manufacturing company. Despite its designation as an anti-materiel rifle, it is used by some armed forces as an anti-personnel system. Fed from detachable Magazines, chambered for .50BMG";
		model = "CA_Override\Weapons\M82A2\m82a2.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","weaponMuzzleM82A2"};
		weight = 14000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		WeaponLength = 1.28986;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP","GCGN_Ammo_50Cal","Rev_Ammo_50BMG","TTC_Ammo_50BMG"};
		magazines[] = {"Fresh_Mag_M82A2_10Rnd"};
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		itemSize[] = {10,3};
		barrelArmor = 3.0;
		recoilModifier[] = {2.2,2.2,1.7};
		swayModifier[] = {2.1,2.1,1.1};
		simpleHiddenSelections[] = {"hide_barrel","hide_muzzle"};
		hiddenSelections[] = {"color","color2"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M82_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M82_SilencedShot_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.15;
			dispersion = 0.0003;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_izh18_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "StarFlash";
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
					ignoreIfSuppressed = 1;
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
					ignoreIfSuppressed = 1;
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 5;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M82A2\data\m82a2.rvmat","CA_Override\Weapons\M82A2\data\cheek.rvmat"}},{0.7,{"CA_Override\Weapons\M82A2\data\m82a2.rvmat","CA_Override\Weapons\M82A2\data\cheek.rvmat"}},{0.5,{"CA_Override\Weapons\M82A2\data\m82a2_damage.rvmat","CA_Override\Weapons\M82A2\data\cheek_damage.rvmat"}},{0.3,{"CA_Override\Weapons\M82A2\data\m82a2_damage.rvmat","CA_Override\Weapons\M82A2\data\cheek_damage.rvmat"}},{0.0,{"CA_Override\Weapons\M82A2\data\m82a2_destruct.rvmat","CA_Override\Weapons\M82A2\data\cheek_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fresh_M82A2_Grey: Fresh_M82A2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\m82a2_base_co.paa","CA_Override\Weapons\M82A2\data\cheek_co.paa"};
	};
	class Fresh_M82A2_Tan: Fresh_M82A2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\m82a2_tan_co.paa","CA_Override\Weapons\M82A2\data\cheek_co.paa"};
	};
	class Fresh_M82A2_Black: Fresh_M82A2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\m82a2_black_co.paa","CA_Override\Weapons\M82A2\data\cheek_co.paa"};
	};
	class Fresh_M82A2_Gold: Fresh_M82A2_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\m82a2_black_co.paa","CA_Override\Weapons\M82A2\data\cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\M82A2\data\m82a2_gold.rvmat","CA_Override\Weapons\M82A2\data\cheek.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M82A2\data\m82a2_gold.rvmat","CA_Override\Weapons\M82A2\data\cheek.rvmat"}},{0.7,{"CA_Override\Weapons\M82A2\data\m82a2_gold.rvmat","CA_Override\Weapons\M82A2\data\cheek.rvmat"}},{0.5,{"CA_Override\Weapons\M82A2\data\m82a2_gold_damage.rvmat","CA_Override\Weapons\M82A2\data\cheek_damage.rvmat"}},{0.3,{"CA_Override\Weapons\M82A2\data\m82a2_gold_damage.rvmat","CA_Override\Weapons\M82A2\data\cheek_damage.rvmat"}},{0.0,{"CA_Override\Weapons\M82A2\data\m82a2_gold_destruct.rvmat","CA_Override\Weapons\M82A2\data\cheek_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fresh_M82A2_Blackice_Leaf: Fresh_M82A2_Base
	{
		scope = 2;
		displayName = "M82A2 Blackice";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\M82A2_Blackice_Leaf.paa","CA_Override\Weapons\M82A2\data\cheek_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"}},{0.7,{"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"}},{0.5,{"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"}},{0.3,{"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"}},{0.0,{"CA_Override\Weapons\M82A2\data\m82a2_BlackIce.rvmat","CA_Override\Weapons\M82A2\data\m82a2_cheek_BlackIce.rvmat"}}};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Fresh_Mag_M82A2_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M82A2 Magazine";
		descriptionShort = "Detachable box Magazine for M82A2 rifle. Holds up to 10 rounds of .50BMG.";
		model = "CA_Override\Weapons\M82A2\m82a2_mag.p3d";
		weight = 400;
		itemSize[] = {3,3};
		count = 10;
		ammo = "Fresh_Bullet_50BMG";
		ammoItems[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP","GCGN_Ammo_50Cal","Rev_Ammo_50BMG"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M82A2\data\m82a2.rvmat"}},{0.7,{"CA_Override\Weapons\M82A2\data\m82a2.rvmat"}},{0.5,{"CA_Override\Weapons\M82A2\data\m82a2_damage.rvmat"}},{0.3,{"CA_Override\Weapons\M82A2\data\m82a2_damage.rvmat"}},{0.0,{"CA_Override\Weapons\M82A2\data\m82a2_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class Fresh_M82A2_Base_Suppressor: ItemSuppressor
	{
		scope = 0;
		displayName = "M82A2 Suppressor";
		descriptionShort = "A muzzle device for M82A2 sniper rifle. Reduces sound intensity and muzzle flash generated by firing.";
		model = "CA_Override\Weapons\M82A2\m82a2_suppressor.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 1000;
		itemSize[] = {4,1};
		itemModelLength = 0.15;
		inventorySlot[] = {"weaponMuzzleM82A2"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.8;
		dispersionCondition = "true";
		barrelArmor = 1000.0;
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1.2,1.2,1.3};
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[] = {"color"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "weapon_shot_akm_02";
					onlyWithinHealthLabel[] = {0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[] = {4,4};
					illuminateWorld = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 60;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M82A2\data\suppressor.rvmat"}},{0.7,{"CA_Override\Weapons\M82A2\data\suppressor.rvmat"}},{0.5,{"CA_Override\Weapons\M82A2\data\suppressor_damage.rvmat"}},{0.3,{"CA_Override\Weapons\M82A2\data\suppressor_damage.rvmat"}},{0.0,{"CA_Override\Weapons\M82A2\data\suppressor_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fresh_Suppressor_M82A2_Grey: Fresh_M82A2_Base_Suppressor
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\suppressor_base_co.paa"};
	};
	class Fresh_Suppressor_M82A2_Black: Fresh_M82A2_Base_Suppressor
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\suppressor_black_co.paa"};
	};
	class Fresh_Suppressor_M82A2_Tan: Fresh_M82A2_Base_Suppressor
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M82A2\data\suppressor_tan_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyM82A2_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponMuzzleM82A2";
		model = "CA_Override\Weapons\M82A2\m82a2_suppressor.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponMuzzleM82A2
	{
		name = "weaponMuzzleM82A2";
		displayName = "Suppressor";
		ghostIcon = "supressor";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class M82_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_close",1}};
		volume = 1.1;
	};
	class M82_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_mid",1}};
		volume = 1.0;
	};
	class M82_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_dist",1}};
		volume = 1.0;
	};
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class M82_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_close_silienced",1}};
	};
	class M82_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_mid_silienced",1}};
		volume = 1.2;
	};
	class M82_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m82\m82_dist_silienced",1}};
		volume = 1.5;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class M82_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M82_closeShot_SoundShader","M82_midShot_SoundShader","M82_distShot_SoundShader"};
	};
	class Rifle_silencerHomemade_Base_SoundSet;
	class M82_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"M82_silencedcloseShot_SoundShader","M82_silencedmidShot_SoundShader","M82_silenceddistShot_SoundShader"};
	};
};
