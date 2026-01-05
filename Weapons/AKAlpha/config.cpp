////////////////////////////////////////////////////////////////////
//DeRap: Weapons\AKAlpha\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:10 2025 : 'file' last modified on Fri Sep 13 07:24:51 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_AKALPHA
	{
		units[] = {};
		weapons[] = {"CA_AKALPHA"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects"};
		magazines[] = {"CA_Mag_AKALPHA_60rnd"};
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
	class CA_AKALPHA_Base: Rifle_Base
	{
		scope = 0;
		displayName = "AK-ALPHA";
		descriptionShort = "Israeli modification of the AKM with updated ergonomics and mounting for modern sights. This variant is chambered for 7.62x54mm.";
		model = "CA_Override\Weapons\AKAlpha\akalpha.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponFlashlight","weaponMuzzleAK","weaponBipod"};
		itemSize[] = {8,3};
		weight = 3500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.829067;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		magazines[] = {"CA_Mag_AKALPHA_60rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel","folding_raised","folding_lowered"};
		hiddenSelections[] = {"color"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.09;
			dispersion = 0.001;
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
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 55;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.5};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AKAlpha\data\akalpha.rvmat"}},{0.7,{"CA_Override\Weapons\AKAlpha\data\akalpha.rvmat"}},{0.5,{"CA_Override\Weapons\AKAlpha\data\akalpha_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AKAlpha\data\akalpha_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AKAlpha\data\akalpha_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_AKALPHA: CA_AKALPHA_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AKAlpha\data\akalpha_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class CA_Mag_AKALPHA_60rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AK-ALPHA Magazine";
		descriptionShort = "Drum Magazine for AK-ALPHA rifle, holds up to 60 rounds of 7.62x54mm.";
		model = "\DZ\weapons\attachments\magazine\magazine_akm_drum.p3d";
		rotationFlags = 12;
		weight = 1400;
		itemSize[] = {3,3};
		count = 60;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DZ\weapons\attachments\data\magazine_drum_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\data\magazine_drum.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\magazine_drum.rvmat"}},{0.7,{"DZ\weapons\attachments\data\magazine_drum.rvmat"}},{0.5,{"DZ\weapons\attachments\data\magazine_drum_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\magazine_drum_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\magazine_drum_destruct.rvmat"}}};
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
