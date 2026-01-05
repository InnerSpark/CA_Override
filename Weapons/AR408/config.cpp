////////////////////////////////////////////////////////////////////
//DeRap: Weapons\AR408\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:10 2025 : 'file' last modified on Fri Sep 13 07:24:51 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_AR408
	{
		units[] = {};
		weapons[] = {"CA_AR408","CA_AR50BMG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects","DZ_Weapons_Magazines","DZ_Weapons_Muzzles"};
		magazines[] = {"CA_Mag_AR408_10rnd","CA_Mag_AR50BMG_10rnd","CA_Mag_AR408_20rnd","CA_Mag_AR50BMG_20rnd","CA_Mag_AR408_30rnd","CA_Mag_AR50BMG_30rnd"};
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
	class CA_AR408_Base: Rifle_Base
	{
		scope = 0;
		displayName = "AR-408";
		descriptionShort = "Semi-automatic rifle based on AR-15 platform. Total devastation. Fed from detachable magazines, chambered for .408";
		weight = 10000;
		model = "CA_Override\Weapons\AR408\supersniper.p3d";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,100,4,10};
		WeaponLength = 1.1;
		barrelArmor = 6.888;
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","suppressorImpro","snafu50bmg"};
		itemSize[] = {10,3};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"GCGN_Ammo_408Chey","Rev_Ammo_408"};
		magazines[] = {"CA_Mag_AR408_10rnd","CA_Mag_AR408_20rnd","CA_Mag_AR408_30rnd"};
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {3.8,3.9,4.0};
		swayModifier[] = {2.5,2.5,1.3};
		hiddenSelections[] = {"color"};
		simpleHiddenSelections[] = {"hide_barrel","folding_lowered","folding_raised"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AR408_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			reloadTime = 0.16;
			dispersion = 0.0005;
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
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {-0.02,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.1,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.3,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.7,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.5,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AR408\data\rifle_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_AR408: CA_AR408_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR408\data\rifle_co.paa"};
	};
	class CA_AR50BMG: CA_AR408_Base
	{
		scope = 2;
		displayName = "AR .50";
		descriptionShort = "Semi-automatic rifle based on AR-15 platform. Fed from detachable magazines, chambered for .50BMG";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR408\data\rifle_co.paa"};
		chamberableFrom[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
		magazines[] = {"CA_Mag_AR50BMG_10rnd","CA_Mag_AR50BMG_20rnd","CA_Mag_AR50BMG_30rnd"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_AR408_10rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AR-408 Magazine";
		descriptionShort = "Detachable box magazine for AR-408 rifle. Holds up to 10 rounds of .408 CheyTac.";
		model = "CA_Override\Weapons\AR408\supersniper_mag.p3d";
		weight = 150;
		itemSize[] = {2,2};
		count = 10;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.7,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.5,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AR408\data\rifle_destruct.rvmat"}}};
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
	class CA_Mag_AR50BMG_10rnd: CA_Mag_AR408_10rnd
	{
		displayName = "AR .50 Magazine";
		descriptionShort = "Detachable box magazine for AR .50 rifle. Holds up to 10 rounds of .50BMG.";
		ammo = "GCGN_Bullet_50Cal";
		ammoItems[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
	};
	class CA_Mag_AR408_20rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AR-408 Magazine (extended)";
		descriptionShort = "Detachable box magazine for AR-338 rifle. Holds up to 20 rounds of .408 CheyTac.";
		model = "CA_Override\Weapons\AR408\supersniper_mag_20rnd.p3d";
		weight = 170;
		itemSize[] = {2,3};
		count = 20;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.7,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.5,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AR408\data\rifle_destruct.rvmat"}}};
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
	class CA_Mag_AR50BMG_20rnd: CA_Mag_AR408_20rnd
	{
		displayName = "AR .50 Magazine (extended)";
		descriptionShort = "Detachable box magazine for AR .50 rifle. Holds up to 20 rounds of .50BMG.";
		ammo = "CA_Bullet_50BMG";
		ammoItems[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
	};
	class CA_Mag_AR408_30rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AR-408 Magazine (madness)";
		descriptionShort = "Detachable box magazine for AR-408 rifle. Holds up to 30 rounds of .408 CheyTac.";
		model = "CA_Override\Weapons\AR408\supersniper_mag_20rnd.p3d";
		weight = 200;
		itemSize[] = {2,4};
		count = 30;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.7,{"CA_Override\Weapons\AR408\data\rifle.rvmat"}},{0.5,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AR408\data\rifle_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AR408\data\rifle_destruct.rvmat"}}};
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
	class CA_Mag_AR50BMG_30rnd: CA_Mag_AR408_30rnd
	{
		displayName = "AR ,50 Magazine (madness)";
		descriptionShort = "Detachable box magazine for AR .50 rifle. Holds up to 30 rounds of .50BMG.";
		ammo = "CA_Bullet_50BMG";
		ammoItems[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySupersniper_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "CA_Override\Weapons\AR408\supersniper_mag.p3d";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class AR408_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\AR408\AR408_close",1}};
		volume = 0.8;
	};
	class AR408_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\AR408\AR408_mid",1}};
		volume = 0.5;
	};
	class AR408_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\AR408\AR408_far",1}};
		volume = 0.35;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class AR408_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AR408_closeShot_SoundShader","AR408_midShot_SoundShader","AR408_distShot_SoundShader"};
	};
};
