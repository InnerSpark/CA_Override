////////////////////////////////////////////////////////////////////
//DeRap: Weapons\SVCH\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_M1000X
	{
		units[] = {};
		weapons[] = {"Fresh_M1000X_Black","Fresh_M1000X_Tan","Fresh_M1000X_Green","Fresh_M1000X_White"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects"};
		magazines[] = {"Fresh_M1000X_Magazine"};
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
	class Fresh_M1000X_Base: Rifle_Base
	{
		scope = 0;
		displayName = "Remington M1000X";
		descriptionShort = "Supressed Sniper Rifle, chambered for .408 CheyTac";
		model = "CA_Override\Weapons\SVCH\svch.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting"};
		itemSize[] = {9,3};
		weight = 6600;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,110,4,10};
		WeaponLength = 0.829067;
		barrelArmor = 5.888;
		chamberSize = 1;
		initSpeedMultiplier = 1.0;
		chamberedRound = "";
		chamberableFrom[] = {"GCGN_Ammo_408Chey","Rev_Ammo_408"};
		magazines[] = {"Fresh_M1000X_Magazine"};
		ejectType = 1;
		recoilModifier[] = {2.2,2.2,1.7};
		swayModifier[] = {1.5,1.5,0.9};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVCH_SilencedShot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 0.12;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {300};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 300;
			distanceZoomMax = 300;
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
					overrideParticle = "weapon_shot_vss_01";
					positionOffset[] = {-0.02,0,0};
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
				maxOverheatingValue = 5;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5,0.8};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\SVCH\data\svch.rvmat"}},{0.7,{"CA_Override\Weapons\SVCH\data\svch.rvmat"}},{0.5,{"CA_Override\Weapons\SVCH\data\svch_damage.rvmat"}},{0.3,{"CA_Override\Weapons\SVCH\data\svch_damage.rvmat"}},{0.0,{"CA_Override\Weapons\SVCH\data\svch_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 10;
			type = "shot";
		};
	};
	class Fresh_M1000X_Black: Fresh_M1000X_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\SVCH\data\svch_black_co.paa"};
	};
	class Fresh_M1000X_Tan: Fresh_M1000X_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\SVCH\data\svch_tan_co.paa"};
	};
	class Fresh_M1000X_Green: Fresh_M1000X_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\SVCH\data\svch_green_co.paa"};
	};
	class Fresh_M1000X_White: Fresh_M1000X_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\SVCH\data\svch_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Fresh_M1000X_Magazine: Magazine_Base
	{
		scope = 2;
		displayName = "M1000X Magazine";
		descriptionShort = "Detachable box magazine for the M1000X rifle. Holds up to 6 rounds of .408 CheyTac.";
		model = "CA_Override\Weapons\SVCH\svch_mag.p3d";
		weight = 100;
		itemSize[] = {2,2};
		count = 6;
		ammo = "GCGN_Bullet_408Chey";
		ammoItems[] = {"Ammo_408Chey","Ammo_408","GCGN_Ammo_408Chey","Rev_Ammo_408"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\SVCH\data\svch.rvmat"}},{0.7,{"CA_Override\Weapons\SVCH\data\svch.rvmat"}},{0.5,{"CA_Override\Weapons\SVCH\data\svch_damage.rvmat"}},{0.3,{"CA_Override\Weapons\SVCH\data\svch_damage.rvmat"}},{0.0,{"CA_Override\Weapons\SVCH\data\svch_destruct.rvmat"}}};
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
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class SVCH_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\svch\m1000x_close",1}};
		volume = 1;
	};
	class SVCH_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\svch\m1000x_mid",1}};
		volume = 0.8;
	};
	class SVCH_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\svch\m1000x_far",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_silencerHomemade_Base_SoundSet;
	class SVCH_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"SVCH_silencedcloseShot_SoundShader","SVCH_silencedmidShot_SoundShader","SVCH_silenceddistShot_SoundShader"};
	};
};
