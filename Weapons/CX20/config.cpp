////////////////////////////////////////////////////////////////////
//DeRap: Weapons\CX20\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_CX20
	{
		units[] = {};
		weapons[] = {"Fresh_CX20"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects"};
	};
};
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class Fresh_CX20_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "CX20";
		descriptionShort = "Rifle go brr";
		model = "CA_Override\Weapons\CX20\CX20.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","weaponOptics"};
		itemSize[] = {10,3};
		weight = 32000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 2.1;
		initSpeedMultiplier = 1.0;
		barrelArmor = 3.125;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_20mm"};
		magazines[] = {};
		DisplayMagazine = 0;
		ejectType = 0;
		recoilModifier[] = {1.45,1.4,1.42};
		swayModifier[] = {1.1,1.2,1.1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CX20_Shot_SoundSet","CX20_Shot_SoundSet","Win_InteriorTail_SoundSet"};
			reloadTime = 1;
			dispersion = 0.0004;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\CX20\data\CX20.rvmat"}},{0.7,{"CA_Override\Weapons\CX20\data\CX20.rvmat"}},{0.5,{"CA_Override\Weapons\CX20\data\CX20_damage.rvmat"}},{0.3,{"CA_Override\Weapons\CX20\data\CX20_damage.rvmat"}},{0.0,{"CA_Override\Weapons\CX20\data\CX20_destruct.rvmat"}}};
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
					illuminateWorld = 0;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 2;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class Fresh_CX20: Fresh_CX20_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\CX20\data\CX20_co.paa"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class CX20_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\cx20\cx20",1}};
		volume = 1.7782794;
	};
	class CX20_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\cx20\cx20_mid",1}};
		volume = 0.56234133;
	};
	class CX20_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\cx20\cx20_far",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class CX20_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"CX20_closeShot_SoundShader","CX20_midShot_SoundShader","CX20_distShot_SoundShader"};
	};
};
