////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Tac50\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:49 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Tac50
	{
		units[] = {};
		weapons[] = {"CA_Tac50_Tan","CA_Tac50_Green","CA_Tac50_Black","CA_Tac50_Camo","CA_Tac50_Obsidian"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
		magazines[] = {"CA_Mag_Tac50_5rnd"};
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
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_Tac50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "Tac-50";
		descriptionShort = "The McMillan TAC-50 is a long-range anti-materiel precision rifle designed produced in Phoenix, Arizona, in the United States by McMillan Firearms Manufacturing. Fed from detachable Magazines, chambered for .50BMG";
		model = "CA_Override\Weapons\Tac50\tac50.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponMuzzleM82A2"};
		itemSize[] = {10,3};
		weight = 11800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.07;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG","Rev_Ammo_50BMG"};
		magazines[] = {"CA_Mag_Tac50_5rnd"};
		barrelArmor = 3.125;
		ejectType = 0;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {3.6,3,2};
		swayModifier[] = {1.5,1.5,1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Tac50_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M82_SilencedShot_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
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
				maxOverheatingValue = 3;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Tac50\data\tac50.rvmat"}},{0.7,{"CA_Override\Weapons\Tac50\data\tac50.rvmat"}},{0.5,{"CA_Override\Weapons\Tac50\data\tac50_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Tac50\data\tac50_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Tac50\data\tac50_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_Tac50_Tan: CA_Tac50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac50\data\tac50_tan_co.paa"};
	};
	class CA_Tac50_Green: CA_Tac50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac50\data\tac50_green_co.paa"};
	};
	class CA_Tac50_Black: CA_Tac50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac50\data\tac50_black_co.paa"};
	};
	class CA_Tac50_Camo: CA_Tac50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac50\data\tac50_camo_co.paa"};
	};
	class CA_Tac50_Obsidian: CA_Tac50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac50\data\tac50_obsidian_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Tac50_5rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Tac-50 Magazine";
		descriptionShort = "Detachable box magazine for McMillan Tac-50. Holds up to 5 rounds of .50BMG.";
		model = "CA_Override\Weapons\Tac50\tac50_mag.p3d";
		weight = 200;
		itemSize[] = {3,2};
		count = 5;
		ammo = "GCGN_Bullet_50Cal";
		ammoItems[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG","Rev_Ammo_50BMG"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Tac50\data\tac50.rvmat"}},{0.7,{"CA_Override\Weapons\Tac50\data\tac50.rvmat"}},{0.5,{"CA_Override\Weapons\Tac50\data\tac50_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Tac50\data\tac50_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Tac50\data\tac50_destruct.rvmat"}}};
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
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class Tac50_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\tac50\tac50_close",1}};
		volume = 1.0;
	};
	class Tac50_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\tac50\tac50_mid",1}};
		volume = 0.6;
	};
	class Tac50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\tac50\tac50_far",1}};
		volume = 0.4;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Tac50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Tac50_closeShot_SoundShader","Tac50_midShot_SoundShader","Tac50_distShot_SoundShader"};
	};
};
