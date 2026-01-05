////////////////////////////////////////////////////////////////////
//DeRap: Weapons\HKG28\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_HKG28
	{
		units[] = {};
		weapons[] = {"CA_HKG28_Tan","CA_HKG28_Black","CA_HKG28_Kryptec_Mandrake","CA_HKG28_Galactic","CA_HKG28_Flecktarn","CA_HKG28_DigitalSky","CA_HKG28_DragonBreath"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects","DZ_Weapons_Magazines","DZ_Weapons_Muzzles"};
		magazines[] = {"CA_Mag_HKG28_Tan_30rnd","CA_Mag_HKG28_Black_30rnd","CA_Mag_HKG28_Kryptek_Mandrake_30rnd","CA_Mag_HKG28_Galactic_30rnd","CA_Mag_HKG28_Flecktarn_30rnd","CA_Mag_HKG28_DigitalSky_30rnd","CA_Mag_HKG28_DragonBreath_30rnd"};
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
	class CA_HKG28_Base: Rifle_Base
	{
		scope = 0;
		displayName = "HK-G28";
		descriptionShort = "The HK G28 sniper rifle was developed on the basis of the HK MR308 hunting rifle, which, in turn, is a civilian variant of the HK417 automatic rifle. Fed from detachable Magazines, chambered for .338LM";
		weight = 5300;
		model = "CA_Override\Weapons\HKG28\hk28.p3d";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.1;
		barrelArmor = 4.888;
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","suppressorImpro"};
		itemSize[] = {9,3};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Rev_Ammo_338"};
		magazines[] = {"CA_Mag_HKG28_Tan_30rnd","CA_Mag_HKG28_Black_30rnd","CA_Mag_HKG28_Kryptek_Mandrake_30rnd","CA_Mag_HKG28_Galactic_30rnd","CA_Mag_HKG28_Flecktarn_30rnd","CA_Mag_HKG28_DigitalSky_30rnd","CA_Mag_HKG28_DragonBreath_30rnd"};
		ejectType = 1;
		initSpeedMultiplier = 0.25;
		recoilModifier[] = {0.64,0.64,0.64};
		swayModifier[] = {2.3,2.3,1.3};
		hiddenSelections[] = {"color"};
		simpleHiddenSelections[] = {"hide_barrel","folding_lowered","folding_raised"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"HKG28_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"HKG28_SilencedShot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"HKG28_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"HKG28_SilencedShot_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 2;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\HKG28\data\hk28.rvmat"}},{0.7,{"CA_Override\Weapons\HKG28\data\hk28.rvmat"}},{0.5,{"CA_Override\Weapons\HKG28\data\hk28_damage.rvmat"}},{0.3,{"CA_Override\Weapons\HKG28\data\hk28_damage.rvmat"}},{0.0,{"CA_Override\Weapons\HKG28\data\hk28_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_HKG28_Tan: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_tan_co.paa"};
	};
	class CA_HKG28_Black: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_black_co.paa"};
	};
	class CA_HKG28_Kryptec_Mandrake: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_kryptec_mandrake_co.paa"};
	};
	class CA_HKG28_Galactic: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_galactic_co.paa"};
	};
	class CA_HKG28_Flecktarn: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_flecktarn_co.paa"};
	};
	class CA_HKG28_DigitalSky: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_digitalsky_co.paa"};
	};
	class CA_HKG28_DragonBreath: CA_HKG28_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_dragonbreath_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_HKG28_Tan_30rnd: Magazine_Base
	{
		scope = 2;
		displayName = "HK-G28 Magazine";
		descriptionShort = "Detachable box magazine for HK G28 rifle. Holds up to 30 rounds of .338LM.";
		model = "CA_Override\Weapons\HKG28\hk28_mag.p3d";
		weight = 150;
		itemSize[] = {2,3};
		count = 30;
		ammo = "Bullet_338Rev";
		ammoItems[] = {"Rev_Ammo_338"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\HKG28\data\hk28.rvmat"}},{0.7,{"CA_Override\Weapons\HKG28\data\hk28.rvmat"}},{0.5,{"CA_Override\Weapons\HKG28\data\hk28_damage.rvmat"}},{0.3,{"CA_Override\Weapons\HKG28\data\hk28_damage.rvmat"}},{0.0,{"CA_Override\Weapons\HKG28\data\hk28_destruct.rvmat"}}};
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
	class CA_Mag_HKG28_Black_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_black_co.paa"};
	};
	class CA_Mag_HKG28_Kryptek_Mandrake_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_kryptec_mandrake_co.paa"};
	};
	class CA_Mag_HKG28_Galactic_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_galactic_co.paa"};
	};
	class CA_Mag_HKG28_Flecktarn_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_flecktarn_co.paa"};
	};
	class CA_Mag_HKG28_DigitalSky_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_digitalsky_co.paa"};
	};
	class CA_Mag_HKG28_DragonBreath_30rnd: CA_Mag_HKG28_Tan_30rnd
	{
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\HKG28\data\hk28_dragonbreath_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyhk28_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "CA_Override\Weapons\HKG28\hk28_mag.p3d";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class HKG28_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg28_close",1}};
		volume = 1.0;
	};
	class HKG28_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg28_mid",1}};
		volume = 0.5;
	};
	class HKG28_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg28_far",1}};
		volume = 0.35;
	};
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class HKG28_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg_silenced_close",1}};
		volume = 1.0;
	};
	class HKG28_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg_silenced_mid",1}};
		volume = 0.8;
	};
	class HKG28_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\hkg28\hkg_silenced_far",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class HKG28_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"HKG28_closeShot_SoundShader","HKG28_midShot_SoundShader","HKG28_distShot_SoundShader"};
	};
	class Rifle_silencerHomemade_Base_SoundSet;
	class HKG28_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"HKG28_silencedcloseShot_SoundShader","HKG28_silencedmidShot_SoundShader","HKG28_silenceddistShot_SoundShader"};
	};
};
