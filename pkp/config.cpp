////////////////////////////////////////////////////////////////////
//DeRap: pkp\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 08:33:45 2025 : 'file' last modified on Sat Feb 08 12:58:36 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_PKP
	{
		units[] = {};
		weapons[] = {"CA_PKP"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects"};
		magazines[] = {"CA_Mag_PKP_100Rnd"};
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
	class CA_PKP_Base: Rifle_Base
	{
		scope = 0;
		weight = 9500;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,50.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		ironsightsExcludingOptics[] = {"BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 1.173;
		barrelArmor = 6.5;
		initSpeedMultiplier = 0.95;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		magazines[] = {"CA_Mag_PKP_100Rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1.5,1.3,1.25};
		swayModifier[] = {1.5,1.2,1.1};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo","butt"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Crumpet_PKP_Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Crumpet_PKPSD_Shot_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.105;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class NoiseShoot
		{
			strength = 105;
			type = "shot";
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
	};
	class CA_PKP: CA_PKP_Base
	{
		scope = 2;
		displayName = "EDZ PKP";
		descriptionShort = "The PKP is a 7.62×54mmR general-purpose machine gun. It is a further development and modification of the PK machine gun (PKM).";
		model = "\CA_Override\pkp\pkp.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {10,3};
		hiddenSelectionsTextures[] = {"CA_Override\pkp\data\ca1_co.paa","CA_Override\pkp\data\ca2_co.paa","CA_Override\pkp\data\ca3_co.paa","CA_Override\pkp\data\ca4_co.paa","CA_Override\pkp\data\ca5_co.paa","CA_Override\pkp\data\ca6_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\pkp\data\ca1.rvmat","CA_Override\pkp\data\ca2.rvmat","CA_Override\pkp\data\ca3.rvmat","CA_Override\pkp\data\ca4.rvmat","CA_Override\pkp\data\ca5.rvmat","CA_Override\pkp\data\ca6.rvmat"};
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
				shotsToStartOverheating = 25;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10450;
					healthLevels[] = {{1,{"CA_Override\pkp\data\ca1.rvmat","CA_Override\pkp\data\ca2.rvmat","CA_Override\pkp\data\ca3.rvmat","CA_Override\pkp\data\ca4.rvmat","CA_Override\pkp\data\ca5.rvmat","CA_Override\pkp\data\ca6.rvmat"}},{0.7,{"CA_Override\pkp\data\ca1.rvmat","CA_Override\pkp\data\ca2.rvmat","CA_Override\pkp\data\ca3.rvmat","CA_Override\pkp\data\ca4.rvmat","CA_Override\pkp\data\ca5.rvmat","CA_Override\pkp\data\ca6.rvmat"}},{0.5,{"CA_Override\pkp\data\ca1_damage.rvmat","CA_Override\pkp\data\ca2_damage.rvmat","CA_Override\pkp\data\ca3_damage.rvmat","CA_Override\pkp\data\ca4_damage.rvmat","CA_Override\pkp\data\ca5_damage.rvmat","CA_Override\pkp\data\ca6_damage.rvmat"}},{0.3,{"CA_Override\pkp\data\ca1_damage.rvmat","CA_Override\pkp\data\ca2_damage.rvmat","CA_Override\pkp\data\ca3_damage.rvmat","CA_Override\pkp\data\ca4_damage.rvmat","CA_Override\pkp\data\ca5_damage.rvmat","CA_Override\pkp\data\ca6_damage.rvmat"}},{0.0,{"CA_Override\pkp\data\ca1_destruct.rvmat","CA_Override\pkp\data\ca2_destruct.rvmat","CA_Override\pkp\data\ca3_destruct.rvmat","CA_Override\pkp\data\ca4_destruct.rvmat","CA_Override\pkp\data\ca5_destruct.rvmat","CA_Override\pkp\data\ca6_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_PKP_100Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "EDZ PKP Mag 100rnd";
		descriptionShort = "Contains factory connected ammunition belt. 100 rounds of 7.62x54mm.";
		model = "CA_Override\pkp\Mag_PKP_100Rnd.p3d";
		hiddenSelectionsTextures[] = {"CA_Override\pkp\data\ca6_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\pkp\data\ca6.rvmat"};
		weight = 2000;
		itemSize[] = {3,3};
		recoilModifier[] = {0.97,0.97,0.97};
		count = 100;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10450;
					healthLevels[] = {{1,{"CA_Override\pkp\data\ca6.rvmat"}},{0.7,{"CA_Override\pkp\data\ca6.rvmat"}},{0.5,{"CA_Override\pkp\data\ca6_damage.rvmat"}},{0.3,{"CA_Override\pkp\data\ca6_damage.rvmat"}},{0.0,{"CA_Override\pkp\data\ca6_destruct.rvmat"}}};
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
	class ProxyMag_PKP_100Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "\CA_Override\pkp\Mag_PKP_100Rnd.p3d";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class Crumpet_PKP_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\shot_1_close",1}};
		volume = 1.0;
	};
	class Crumpet_PKP_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\shot_1_medium",1}};
		volume = 0.8;
	};
	class Crumpet_PKP_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\shot_1_distant",1}};
		volume = 0.5;
	};
	class Crumpet_PKPSD_closeShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\sd_close",1}};
		volume = 0.8;
	};
	class Crumpet_PKPSD_midShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\sd_medium",1}};
		volume = 0.65;
	};
	class Crumpet_PKPSD_distShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\pkp\sound\sd_distant",1}};
		volume = 0.5;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Crumpet_PKP_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Crumpet_PKP_closeShot_SoundShader","Crumpet_PKP_midShot_SoundShader","Crumpet_PKP_distShot_SoundShader"};
	};
	class Crumpet_PKPSD_Shot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Crumpet_PKPSD_closeShot_SoundShader","Crumpet_PKPSD_midShot_SoundShader","Crumpet_PKPSD_distShot_SoundShader"};
	};
};
