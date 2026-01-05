////////////////////////////////////////////////////////////////////
//DeRap: Weapons\M32\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_M32
	{
		units[] = {};
		weapons[] = {"Fresh_M32"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Fresh_Ammo_M406"};
		ammo[] = {"Fresh_Bullet_M406"};
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
	class Fresh_M32_Base: Rifle_Base
	{
		scope = 0;
		displayName = "Milkor MGL";
		descriptionShort = "A manual, semi-automatic, multi-loading grenade launcher developed in 1981.";
		model = "CA_Override\Weapons\M32\m32.p3d";
		isSuicideWeapon = 0;
		attachments[] = {};
		itemSize[] = {6,4};
		weight = 4300;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_M406","Fresh_Ammo_M651","Ammo_Flare","Ammo_FlareRed","Ammo_FlareGreen","Ammo_FlareBlue","Ammo_40mm_Explosive","Ammo_40mm_Smoke_Red","Ammo_40mm_Smoke_Green","Ammo_40mm_Smoke_White","Ammo_40mm_Smoke_Black","Ammo_40mm_ChemGas"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.65;
		barrelArmor = 2.25;
		ejectType = 0;
		initSpeedMultiplier = 0.9;
		recoilModifier[] = {0.3,0.3,0.3};
		swayModifier[] = {2.6,2.6,1.4};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadSkips[] = {0.26,0.4,0.53,0.64,0.735};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M32_Shot_SoundSet","Flare_Gun_Tail_SoundSet","Flare_Gun_InteriorTail_SoundSet"};
			reloadTime = 0.3;
			dispersion = 0.035;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,150,200,250,300,350,400,450};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 450;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\M32\data\m32.rvmat","CA_Override\Weapons\M32\data\m32_ammo.rvmat"}},{0.7,{"CA_Override\Weapons\M32\data\m32.rvmat","CA_Override\Weapons\M32\data\m32_ammo.rvmat"}},{0.5,{"CA_Override\Weapons\M32\data\m32_damage.rvmat","CA_Override\Weapons\M32\data\m32_ammo_damage.rvmat"}},{0.3,{"CA_Override\Weapons\M32\data\m32_damage.rvmat","CA_Override\Weapons\M32\data\m32_ammo_damage.rvmat"}},{0.0,{"CA_Override\Weapons\M32\data\m32_destruct.rvmat","CA_Override\Weapons\M32\data\m32_ammo_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
	};
	class Fresh_M32: Fresh_M32_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\M32\data\m32_co.paa","CA_Override\Weapons\M32\data\m32_ammo_co.paa"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Fresh_Ammo_M406: Ammunition_Base
	{
		scope = 2;
		displayName = "M406 HE";
		descriptionShort = "40x46mm HE grenade, used with Milkor MGL or M79 Launcher";
		model = "CA_Override\Weapons\M32\ammo.p3d";
		iconCartridge = 3;
		rotationFlags = 34;
		itemSize[] = {1,2};
		weight = 30;
		count = 6;
		ammo = "Fresh_Bullet_M406";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class Fresh_Bullet_M406: Bullet_Base
	{
		scope = 2;
		model = "CA_Override\Weapons\M32\ammo_projectile.p3d";
		spawnPileType = "Fresh_Ammo_M406";
		hit = 12;
		deflecting = 0;
		caliber = 0.1;
		airFriction = -0.00215;
		typicalSpeed = 120;
		initSpeed = 120;
		weight = 0.1;
		tracerScale = 1;
		tracerEndTime = -1;
		explosive = 1;
		indirectHit = 1;
		indirectHitRange = 2;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		class NoiseExplosion
		{
			strength = 75;
			type = "shot";
		};
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 300;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Fresh_Bullet_M406
	{
		name = "Fresh_Bullet_M406";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class M32_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\m32\m32_close",1}};
		volume = 1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class M32_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M32_closeShot_SoundShader"};
	};
};
