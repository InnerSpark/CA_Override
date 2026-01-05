////////////////////////////////////////////////////////////////////
//DeRap: Weapons\KORD\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_KORD
	{
		units[] = {};
		weapons[] = {"CA_Kord"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		magazines[] = {"CA_Mag_Kord_50rnd","CA_Ammo_127x108"};
		ammo[] = {"CA_Bullet_127x108"};
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
	class CA_KORD_Base: Rifle_Base
	{
		scope = 0;
		displayName = "6P49 Kord";
		descriptionShort = "Very heavy Machine Gun. Chambered for: 12.7x108mm.";
		model = "CA_Override\Weapons\KORD\kord127.p3d";
		attachments[] = {};
		itemSize[] = {10,5};
		weight = 27500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		WeaponLength = 1.625;
		initSpeedMultiplier = 1.0;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"CA_Ammo_127x108"};
		magazines[] = {"CA_Mag_Kord_50rnd"};
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1.8,2.2,2.3};
		swayModifier[] = {2.8,2.5,2.8};
		hiddenSelections[] = {"color"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"KORD_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.35;
			dispersion = 0.01;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\KORD\data\kord.rvmat"}},{0.7,{"CA_Override\Weapons\KORD\data\kord.rvmat"}},{0.5,{"CA_Override\Weapons\KORD\data\kord_damage.rvmat"}},{0.3,{"CA_Override\Weapons\KORD\data\kord_damage.rvmat"}},{0.0,{"CA_Override\Weapons\KORD\data\kord_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash{};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "usti hlavne";
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
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
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
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
	};
	class CA_Kord: CA_KORD_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\KORD\data\kord_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Kord_50rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Kord Magazine";
		descriptionShort = "Kord box magazine. Holds up to 50 rounds of 12.7x108mm";
		model = "CA_Override\Weapons\KORD\kord_magazine.p3d";
		weight = 7200;
		itemSize[] = {3,3};
		count = 50;
		ammo = "CA_Bullet_127x108";
		ammoItems[] = {"CA_Ammo_127x108"};
		tracersEvery = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\KORD\data\kord.rvmat"}},{0.7,{"CA_Override\Weapons\KORD\data\kord.rvmat"}},{0.5,{"CA_Override\Weapons\KORD\data\kord_damage.rvmat"}},{0.3,{"CA_Override\Weapons\KORD\data\kord_damage.rvmat"}},{0.0,{"CA_Override\Weapons\KORD\data\kord_destruct.rvmat"}}};
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
	class Ammunition_Base;
	class CA_Ammo_127x108: Ammunition_Base
	{
		scope = 2;
		displayName = "12.7x108mm (.51cal)";
		descriptionShort = " The 12.7×108mm cartridge is a 12.7 mm heavy machine gun and anti-materiel rifle cartridge used by the former Soviet Union, the former Warsaw Pact, modern Russia, China and other countries. ";
		model = "\dz\weapons\ammunition\308Win_LooseRounds.p3d";
		iconCartridge = 3;
		itemSize[] = {1,2};
		weight = 10;
		count = 100;
		ammo = "CA_Bullet_127x108";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\KORD\data\kord_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\308_loose.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\308_loose.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\308_loose_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\308_loose_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\308_loose_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class CA_Bullet_127x108: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		spawnPileType = "CA_Ammo_127x108";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		typicalSpeed = 1000;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0.00085;
		caliber = 2;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		initSpeed = 1000;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 900;
			};
			class Blood
			{
				damage = 3000;
			};
			class Shock
			{
				damage = 3000;
			};
		};
		class NoiseHit
		{
			strength = 14;
			type = "shot";
		};
	};
};
class cfgAmmoTypes
{
	class AType_CA_Bullet_127x108
	{
		name = "CA_Bullet_127x108";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class KORD_SoundShaderClose
	{
		samples[] = {{"CA_Override\Weapons\sounds\KORD\kord_close",1}};
		volume = 1.0;
		range = 200;
		rangeCurve = "closeShotCurve";
	};
	class KORD_SoundShaderMid
	{
		samples[] = {{"CA_Override\Weapons\sounds\KORD\kord_mid",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0.2},{200,1},{700,0},{2000,0}};
	};
	class KORD_SoundShaderLong
	{
		samples[] = {{"CA_Override\Weapons\sounds\KORD\kord_far",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{200,0.1},{700,1},{2000,0.75},{3000,0.5}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class KORD_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"KORD_SoundShaderClose","KORD_SoundShaderMid","KORD_SoundShaderLong"};
	};
};
