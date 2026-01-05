////////////////////////////////////////////////////////////////////
//DeRap: Weapons\PKM\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_PKM
	{
		units[] = {};
		weapons[] = {"Fresh_PKM","Fresh_PKM_DragonBreath","Fresh_PKM_Toxic","Fresh_PKM_Volcano","Fresh_PKM_TigerStripe"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects"};
		magazines[] = {"Fresh_Mag_PKM_250rnd","Fresh_Mag_PKM_Volcano_250rnd","Fresh_Mag_PKM_TigerStripe_250rnd"};
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
	class Fresh_PKM_Base: Rifle_Base
	{
		scope = 0;
		displayName = "PKM";
		descriptionShort = "The PK (Russian: Пулемёт Калашникова) is a general-purpose machine gun designed in the Soviet Union and currently in production in Russia. Belt-fed from detachable Box Magazines, chambered for 7.62x54mm";
		model = "CA_Override\Weapons\PKM\PKM.p3d";
		attachments[] = {"weaponWrap","weaponMuzzleAK"};
		itemSize[] = {10,3};
		weight = 9000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.929067;
		barrelArmor = 10.444;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		magazines[] = {"Fresh_Mag_PKM_250rnd","Fresh_Mag_PKM_Volcano_250rnd","Fresh_Mag_PKM_TigerStripe_250rnd","Snafu_PKP_250RND_Mag"};
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {0.6,0.8,0.8};
		swayModifier[] = {1.6,1.8,0.8};
		hiddenSelections[] = {"color"};
		simpleHiddenSelections[] = {"hide_barrel","ammobelt"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PKM_Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.109;
			dispersion = 0.0015;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_destruct.rvmat"}}};
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
				maxOverheatingValue = 60;
				shotsToStartOverheating = 15;
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
	class Fresh_PKM: Fresh_PKM_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_co.paa"};
	};
	class Fresh_PKM_DragonBreath: Fresh_PKM_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_dragonbreath_co.paa"};
	};
	class Fresh_PKM_Toxic: Fresh_PKM_Base
	{
		scope = 2;
		displayName = "Toxic PKM";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_toxic_co.paa"};
	};
	class Fresh_PKM_Volcano: Fresh_PKM_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_volcano_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_volcano_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_volcano_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_volcano_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fresh_PKM_TigerStripe: Fresh_PKM_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_tigerstripe_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Fresh_Mag_PKM_250rnd: Magazine_Base
	{
		scope = 2;
		displayName = "PKM Ammunition Belt";
		descriptionShort = "Detachable Ammounition Box for belt-fed PKM. Can hold up to 150 Rounds of 7.62x54mm";
		model = "CA_Override\Weapons\PKM\PKM_mag.p3d";
		weight = 500;
		itemSize[] = {3,3};
		count = 250;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_destruct.rvmat"}}};
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
	class Fresh_Mag_PKM_Volcano_250rnd: Fresh_Mag_PKM_250rnd
	{
		scope = 2;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_volcano_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm_volcano.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_volcano_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_volcano_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_volcano_destruct.rvmat"}}};
				};
			};
		};
	};
	class Fresh_Mag_PKM_TigerStripe_250rnd: Fresh_Mag_PKM_250rnd
	{
		scope = 2;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\PKM\data\pkm_tigerstripe_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"}},{0.7,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe.rvmat"}},{0.5,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_damage.rvmat"}},{0.3,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_damage.rvmat"}},{0.0,{"CA_Override\Weapons\PKM\data\pkm_tigerstripe_destruct.rvmat"}}};
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
	class PKM_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\pkm\pkm_close",1}};
		volume = 1.0;
	};
	class PKM_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\pkm\pkm_mid",1}};
		volume = 0.8;
	};
	class PKM_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\pkm\pkm_far",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class PKM_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"PKM_closeShot_SoundShader","PKM_midShot_SoundShader","PKM_distShot_SoundShader"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPKM_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "CA_Override\Weapons\PKM\PKM_mag.p3d";
	};
};
