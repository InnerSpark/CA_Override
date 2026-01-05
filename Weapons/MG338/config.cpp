////////////////////////////////////////////////////////////////////
//DeRap: Weapons\MG338\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_MG338
	{
		units[] = {};
		weapons[] = {"Fresh_MG338_Tan"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		magazines[] = {"Fresh_Mag_MG338_100rnd"};
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
	class Fresh_MG338_Base: Rifle_Base
	{
		scope = 0;
		displayName = "Sig Sauer MG .338";
		descriptionShort = "Heavy machine gun, chambered for: .338LM. Belt fed from own mags.";
		model = "CA_Override\Weapons\MG338\mg338.p3d";
		attachments[] = {"weaponWrap","weaponOptics"};
		itemSize[] = {10,4};
		weight = 9000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		barrelArmor = 12.444;
		WeaponLength = 0.929067;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Rev_Ammo_338"};
		magazines[] = {"Fresh_Mag_MG338_100rnd"};
		initSpeedMultiplier = 0.2;
		ejectType = 1;
		modes[] = {"FullAuto"};
		hiddenSelections[] = {"color"};
		recoilModifier[] = {0.6,0.8,0.8};
		swayModifier[] = {1.6,1.8,0.8};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SigMG338_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.003;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\MG338\data\mg338.rvmat"}},{0.7,{"CA_Override\Weapons\MG338\data\mg338.rvmat"}},{0.5,{"CA_Override\Weapons\MG338\data\mg338_damage.rvmat"}},{0.3,{"CA_Override\Weapons\MG338\data\mg338_damage.rvmat"}},{0.0,{"CA_Override\Weapons\MG338\data\mg338_destruct.rvmat"}}};
				};
			};
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
				maxOverheatingValue = 70;
				shotsToStartOverheating = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
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
	};
	class Fresh_MG338_Tan: Fresh_MG338_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\MG338\data\mg338_tan_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Fresh_Mag_MG338_100rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Sig Sauer MG .338 Belt";
		descriptionShort = "Detachable ammunition belt for Sig Sauer MG .338. Holds up to 100 rounds of .338LM.";
		model = "CA_Override\Weapons\MG338\mg338_belt.p3d";
		weight = 300;
		itemSize[] = {3,2};
		count = 100;
		ammo = "Bullet_338Rev";
		ammoItems[] = {"Rev_Ammo_338"};
		hiddenSelections[] = {"magazine"};
		simpleHiddenSelections[] = {"ammobelt"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\MG338\data\mg338_tan_co.paa"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\MG338\data\mg338.rvmat"}},{0.7,{"CA_Override\Weapons\MG338\data\mg338.rvmat"}},{0.5,{"CA_Override\Weapons\MG338\data\mg338_damage.rvmat"}},{0.3,{"CA_Override\Weapons\MG338\data\mg338_damage.rvmat"}},{0.0,{"CA_Override\Weapons\MG338\data\mg338_destruct.rvmat"}}};
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymg338_belt: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "CA_Override\Weapons\MG338\mg338_belt.p3d";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class SigMG338_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\mg338\sig338mg_close",1}};
		volume = 1.0;
	};
	class SigMG338_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\mg338\sig338mg_mid",1}};
		volume = 0.75;
	};
	class SigMG338_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\mg338\sig338mg_far",1}};
		volume = 0.45;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class SigMG338_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SigMG338_closeShot_SoundShader","SigMG338_midShot_SoundShader","SigMG338_distShot_SoundShader"};
	};
};
