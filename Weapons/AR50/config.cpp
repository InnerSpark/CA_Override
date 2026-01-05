////////////////////////////////////////////////////////////////////
//DeRap: Weapons\AR50\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:10 2025 : 'file' last modified on Fri Sep 13 07:24:51 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Fresh_AR50
	{
		units[] = {};
		weapons[] = {"Fresh_AR50_Black","Fresh_AR50_Colourful","Fresh_AR50_Warning","Fresh_AR50_Weed"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class CfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class Fresh_AR50_base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "AR50";
		descriptionShort = "AR-50 is a 20mm bolt-action anti material rifle. Utilizing its weight and a large, fluted muzzle brake to reduce recoil.";
		model = "CA_Override\Weapons\AR50\ar50.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","weaponOptics"};
		itemSize[] = {10,3};
		weight = 30000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {50};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		WeaponLength = 1.435;
		barrelArmor = 4;
		initSpeedMultiplier = 1.0;
		chamberSize = 5;
		chamberedRound = "";
		DisplayMagazine = 0;
		chamberableFrom[] = {"Fresh_Ammo_20mm"};
		hiddenSelections[] = {"camo","camo_muzzle"};
		magazines[] = {};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1.1,1.1,1.1};
		swayModifier[] = {2,2,1};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		modes[] = {"Single"};
		value = 0;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AR50_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\AR50\data\Fresh_AR50.rvmat","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle.rvmat"}},{0.7,{"CA_Override\Weapons\AR50\data\Fresh_AR50.rvmat","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle.rvmat"}},{0.5,{"CA_Override\Weapons\AR50\data\Fresh_AR50_damage.rvmat","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_damage.rvmat"}},{0.3,{"CA_Override\Weapons\AR50\data\Fresh_AR50_damage.rvmat","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_damage.rvmat"}},{0.0,{"CA_Override\Weapons\AR50\data\Fresh_AR50_destruct.rvmat","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_destruct.rvmat"}}};
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
		class NoiseShoot
		{
			strength = 150;
			type = "shot";
		};
	};
	class Fresh_AR50_Black: Fresh_AR50_base
	{
		scope = 2;
		displayName = "AR50";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR50\data\Fresh_AR50_co.paa","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_co.paa"};
	};
	class Fresh_AR50_Colourful: Fresh_AR50_base
	{
		scope = 2;
		displayName = "AR50";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR50\data\ar50_body_colourful.paa","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_co.paa"};
	};
	class Fresh_AR50_Warning: Fresh_AR50_base
	{
		scope = 2;
		displayName = "AR50";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR50\data\ar50_body_warning.paa","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_co.paa"};
	};
	class Fresh_AR50_Weed: Fresh_AR50_base
	{
		scope = 2;
		displayName = "AR50";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\AR50\data\ar50_body_weed.paa","CA_Override\Weapons\AR50\data\Fresh_AR50_Muzzle_co.paa"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class ar50_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1}};
		volume = 1;
	};
	class ar50_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1}};
		volume = 0.56234133;
	};
	class ar50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1},{"CA_Override\Weapons\AR50\sounds\ar50.ogg",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class ar50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"ar50_Shot_SoundShader","ar50_midShot_SoundShader","ar50_distShot_SoundShader"};
	};
};
