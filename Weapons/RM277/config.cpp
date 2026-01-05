////////////////////////////////////////////////////////////////////
//DeRap: Weapons\RM277\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_RM277
	{
		units[] = {};
		weapons[] = {"CA_RM277","CA_RM277_Tan"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects","DZ_Weapons_Ammunition"};
		magazines[] = {"CA_Mag_RM277_45rnd","CA_Ammo_68"};
		ammo[] = {"CA_Bullet_68"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class CA_RM277_Base: Rifle_Base
	{
		scope = 0;
		displayName = "RM-277";
		descriptionShort = "The RM-277 is a bullpup rifle initially developed by General Dynamics and then by LoneStar Future Weapons. It was an unsuccessful contender for the US Army's Next Generation Squad Weapon program. Chambered in 6.8mm Polymer Rounds.";
		model = "CA_Override\Weapons\RM277\RM277.p3d";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\RM277\data\Camo1.paa","CA_Override\Weapons\RM277\data\Camo2.paa","CA_Override\Weapons\RM277\data\Camo3.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\RM277\data\RM277_1.rvmat","CA_Override\Weapons\RM277\data\RM277_2.rvmat","CA_Override\Weapons\RM277\data\RM277_3.rvmat"};
		attachments[] = {"weaponOptics","weaponOpticsHunting","weaponFlashlight","weaponWrap"};
		itemSize[] = {9,3};
		weight = 3600;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.1,20,200,10,10};
		WeaponLength = 1;
		barrelArmor = 4.888;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"CA_Ammo_68"};
		magazines[] = {"CA_Mag_RM277_45rnd"};
		magazineSwitchTime = 0.5;
		initSpeedMultiplier = 0.3;
		ejectType = 1;
		recoilModifier[] = {0.7,0.7,0.8};
		swayModifier[] = {1,1.1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] = {{1,{"CA_Override\Weapons\RM277\data\RM277_1.rvmat","CA_Override\Weapons\RM277\data\RM277_2.rvmat","CA_Override\Weapons\RM277\data\RM277_3.rvmat"}},{0.7,{"CA_Override\Weapons\RM277\data\RM277_1.rvmat","CA_Override\Weapons\RM277\data\RM277_2.rvmat","CA_Override\Weapons\RM277\data\RM277_3.rvmat"}},{0.5,{"CA_Override\Weapons\RM277\data\RM277_damage.rvmat","CA_Override\Weapons\RM277\data\RM277_damage.rvmat","CA_Override\Weapons\RM277\data\RM277_damage.rvmat"}},{0.3,{"CA_Override\Weapons\RM277\data\RM277_damage.rvmat","CA_Override\Weapons\RM277\data\RM277_damage.rvmat","CA_Override\Weapons\RM277\data\RM277_damage.rvmat"}},{0,{"CA_Override\Weapons\RM277\data\RM277_destruct.rvmat","CA_Override\Weapons\RM277\data\RM277_destruct.rvmat","CA_Override\Weapons\RM277\data\RM277_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		modes[] = {"SemiAuto","Burst","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Vikhr_silencer_SoundSet","Vikhr_silencerTail_SoundSet","Vikhr_silencerInteriorTail_SoundSet"};
			reloadTime = 0.15;
			dispersion = 0.0018;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"Vikhr_silencer_SoundSet","Vikhr_silencerTail_SoundSet","Vikhr_silencerInteriorTail_SoundSet"};
			burst = 3;
			reloadTime = 0.12;
			dispersion = 0.0018;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Vikhr_silencer_SoundSet","Vikhr_silencerTail_SoundSet","Vikhr_silencerInteriorTail_SoundSet"};
			reloadTime = 0.13;
			dispersion = 0.0018;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 200;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.25,0.035,0};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.25,0.035,-0.03};
				orientation[] = {0,0,0};
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
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
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
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
	};
	class CA_RM277: CA_RM277_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\RM277\data\Camo1.paa","CA_Override\Weapons\RM277\data\Camo2.paa","CA_Override\Weapons\RM277\data\Camo3.paa"};
	};
	class CA_RM277_Tan: CA_RM277_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\RM277\data\Camo1Tan.paa","CA_Override\Weapons\RM277\data\Camo2Tan.paa","CA_Override\Weapons\RM277\data\Camo3Tan.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class Ammo_308Win;
	class CA_Mag_RM277_45rnd: Magazine_Base
	{
		scope = 2;
		displayName = "RM-277 45 Round Magazine";
		descriptionShort = "Detatchable box magazine for the General Dynamics RM-277. Accepts 6.8mm TrueVelocity Polymer Rounds.";
		model = "CA_Override\Weapons\RM277\RM277_Mag.p3d";
		weight = 100;
		itemSize[] = {1,2};
		count = 45;
		ammo = "CA_Bullet_68";
		ammoItems[] = {"CA_Ammo_68"};
		tracersEvery = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\RM277\data\RM277_3.rvmat"}},{0.7,{"CA_Override\Weapons\RM277\data\RM277_3.rvmat"}},{0.5,{"CA_Override\Weapons\RM277\data\RM277_damage.rvmat"}},{0.3,{"CA_Override\Weapons\RM277\data\RM277_damage.rvmat"}},{0.0,{"CA_Override\Weapons\RM277\data\RM277_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_Ammo_68: Ammo_308Win
	{
		scope = 2;
		displayName = "TrueVelocity 6.8mm Polymer";
		descriptionShort = "TrueVelocity’s 6.8 TVCM case design was originally optimized for use in the NGSW-Rifle and NGSW-Automatic Rifle submissions designed by General Dynamics Ordnance and Tactical Systems.";
		model = "CA_Override\Weapons\RM277\TVRounds.p3d";
		iconCartridge = 3;
		weight = 10;
		count = 50;
		ammo = "Bullet_308Win";
	};
};
class cfgAmmoTypes
{
	class CA_68RM277
	{
		name = "CA_Bullet_68";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class CA_Bullet_68: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_556";
		round = "FxRound_556";
		spawnPileType = "CA_Ammo_68";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 849;
		typicalSpeed = 1223;
		airFriction = -0.0006770228;
		caliber = 1.2;
		deflecting = 10;
		damageBarrel = 50;
		damageBarrelDestroyed = 50;
		weight = 0.019;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.4,1.0}};
			class Health
			{
				damage = 375;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyRM277_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "CA_Override\Weapons\RM277\RM277_Mag.p3d";
	};
};
