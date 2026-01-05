////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Fresh_SnipexM100\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Fresh_SnipexM100
	{
		units[] = {};
		weapons[] = {"Fresh_SnipexM100_Black","Fresh_SnipexM100_FDE"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class Fresh_SnipexM100_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "Snipex M100";
		descriptionShort = "The Snipex M100 is a long-range single shot rifle chambered in 14.7x114mm, manufactured in Ukraine.";
		model = "CA_Override\Weapons\Fresh_SnipexM100\Fresh_SnipexM100.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","weaponOptics"};
		itemSize[] = {9,3};
		animName = "cz527";
		weight = 16500;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 1.505;
		barrelArmor = 0.8;
		initSpeedMultiplier = 1.3;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"SNAFU_Ammo_145Cal"};
		magazines[] = {};
		DisplayMagazine = 0;
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,2,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo_barrel","camo_bolt","camo_handguard","camo_muzzle","camo_pistolgrip","camo_stock"};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Fresh_SnipexM100_Shot_SoundSet","Fresh_SnipexM100_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SSG82_silencerHomeMade_SoundSet","SSG82_silencerHomeMadeTail_SoundSet","SSG82_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock.rvmat"}},{0.7,{"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock.rvmat"}},{0.5,{"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip_damage.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel_destruct.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt_destruct.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard_destruct.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle_destruct.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip_destruct.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {0.02,-0.02,-0.02};
				orientation[] = {0,-30,0};
			};
			class Melee
			{
				position[] = {0.02,0,0.01};
				orientation[] = {0,30,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 1;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 0.5;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.1,1};
					positionOffset[] = {0.0,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class Fresh_SnipexM100_Black: Fresh_SnipexM100_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel_Black_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard_Black_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle_Black_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock.rvmat"};
	};
	class Fresh_SnipexM100_FDE: Fresh_SnipexM100_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel_FDE_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard_FDE_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle_FDE_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip_co.paa","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock_FDE_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Barrel.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Bolt.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Handguard.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Muzzle.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_PistolGrip.rvmat","CA_Override\Weapons\Fresh_SnipexM100\Textures\Fresh_SnipexM100_Stock.rvmat"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class Fresh_SnipexM100_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\Fresh_SnipexM100\Sounds\Fresh_SnipexM100_close",1}};
		volume = 1.1220185;
	};
	class Fresh_SnipexM100_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\Fresh_SnipexM100\Sounds\Fresh_SnipexM100_Mid",1}};
		volume = 0.70794576;
	};
	class Fresh_SnipexM100_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\Fresh_SnipexM100\Sounds\Fresh_SnipexM100_Far",1}};
		volume = 0.70794576;
	};
	class Fresh_SnipexM100_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\Fresh_SnipexM100\Sounds\Fresh_SnipexM100_Tail",1}};
		volume = 1.3782794;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Fresh_SnipexM100_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Fresh_SnipexM100_closeShot_SoundShader","Fresh_SnipexM100_midShot_SoundShader","Fresh_SnipexM100_distShot_SoundShader"};
	};
	class Fresh_SnipexM100_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Fresh_SnipexM100_tailDistant_SoundShader","Mosin_tailTrees_SoundShader","Mosin_tailForest_SoundShader","Mosin_tailMeadows_SoundShader","Mosin_tailHouses_SoundShader"};
	};
};
