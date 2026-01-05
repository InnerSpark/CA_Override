////////////////////////////////////////////////////////////////////
//DeRap: Weapons\RPG7\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_RPG7
	{
		units[] = {"Fresh_DummyRocket"};
		weapons[] = {"Fresh_RPG7"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Fresh_Ammo_RPG7Grenade"};
		ammo[] = {"Fresh_RPG7Rocket","FreshRocketSimulation"};
	};
};
class Entity;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Fresh_RPG7_Base: Rifle_Base
	{
		scope = 0;
		displayName = "RPG-7";
		descriptionShort = "The Soviet multi-purpose hand-held antitank grenade launcher.";
		model = "CA_Override\Weapons\RPG7\rpg.p3d";
		isSuicideWeapon = 0;
		attachments[] = {"weaponOptics","RPG7Rocket"};
		itemSize[] = {10,4};
		weight = 6300;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,160,4,10};
		DisplayMagazine = 0;
		WeaponLength = 1.11042;
		barrelArmor = 1.667;
		initSpeedMultiplier = 1.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_RPG7Grenade"};
		magazines[] = {};
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {2.4,2.4,1.3};
		simpleHiddenSelections[] = {"folding_raised","folding_lowered","rocket"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"RPG7_Shot_SoundSet"};
			reloadTime = 0.125;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\RPG7\data\rpg.rvmat","CA_Override\Weapons\RPG7\data\sight.rvmat"}},{0.7,{"CA_Override\Weapons\RPG7\data\rpg.rvmat","CA_Override\Weapons\RPG7\data\sight.rvmat"}},{0.5,{"CA_Override\Weapons\RPG7\data\rpg_damage.rvmat","CA_Override\Weapons\RPG7\data\sight_damage.rvmat"}},{0.3,{"CA_Override\Weapons\RPG7\data\rpg_damage.rvmat","CA_Override\Weapons\RPG7\data\sight_damage.rvmat"}},{0.0,{"CA_Override\Weapons\RPG7\data\rpg_destruct.rvmat","CA_Override\Weapons\RPG7\data\sight_destruct.rvmat"}}};
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
			};
			class OnOverheating
			{
				maxOverheatingValue = 1;
				shotsToStartOverheating = 1;
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
	class Fresh_RPG7: Fresh_RPG7_Base
	{
		scope = 2;
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Fresh_Ammo_RPG7Grenade: Ammunition_Base
	{
		scope = 2;
		displayName = "PG-7VL";
		descriptionShort = "Rocket propelled 93mm Single-stage HEAT Warhead, capable of penetrating more then 500mm hardened armor. 7 to 10 meters lethal radius";
		model = "CA_Override\Weapons\RPG7\rocket.p3d";
		iconCartridge = 3;
		rotationFlags = 34;
		itemSize[] = {4,1};
		weight = 3000;
		count = 1;
		ammo = "Fresh_RPG7Rocket";
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
	class Fresh_RPG7Rocket: Bullet_Base
	{
		scope = 2;
		model = "CA_Override\Weapons\RPG7\rocket_flying.p3d";
		proxyShape = "CA_Override\Weapons\RPG7\rocket_flying.p3d";
		spawnPileType = "Fresh_Ammo_RPG7Grenade";
		SimulationScriptClass = "FreshRocketSimulation";
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		hit = 12;
		deflecting = 0;
		caliber = 0.1;
		airFriction = -1e-05;
		typicalSpeed = 200;
		initSpeed = 200;
		weight = 0.025;
		tracerScale = 1;
		timeToLive = 12;
		tracerStartTime = 1e-05;
		tracerEndTime = -1;
		explosive = 1;
		indirectHit = 1;
		indirectHitRange = 5;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		class NoiseExplosion
		{
			strength = 150;
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
				damage = 90;
			};
			class Blood
			{
				damage = 500;
			};
			class Shock
			{
				damage = 1000;
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {0.1,0.4,0.3,0.3};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "";
				hitpoint = "";
				selection = "";
				size = 1;
				radius = 2;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0;
				heatHazePower = 0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
	};
	class FreshRocketSimulation: Entity{};
};
class CfgVehicles
{
	class Inventory_Base;
	class Fresh_DummyRocket: Inventory_Base
	{
		scope = 2;
		weight = 1;
		inventorySlot[] = {"RPG7Rocket"};
	};
};
class cfgAmmoTypes
{
	class AType_Fresh_RPG7Rocket
	{
		name = "Fresh_RPG7Rocket";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class RPG7_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\rpg7\rpg7_close",1}};
		volume = 0.8;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class RPG7_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"RPG7_closeShot_SoundShader"};
	};
};
class CfgSlots
{
	class Slot_RPG7Rocket
	{
		name = "RPG7Rocket";
		displayName = "RPG7Rocket";
		ghostIcon = "missing";
		show = "false";
	};
};
