#define _ARMA_

class CfgPatches
{
	class CA_Weapons_Firearms_BFG50
	{
		units[] = {"CA_Bipod"};
		weapons[] = {"CA_BFG50","CA_BFG50_Camo_Sand","CA_BFG50_Camo_Green"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Firearms_IZH18","DZ_Weapons_Launchers_M79"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgSlots
{
	class Slot_weaponBipod
	{
		name = "weaponBipod";
		displayName = "bipod";
		ghostIcon = "";
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class CA_BFG50_Base: Rifle_Base
	{
		scope = 0;
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 1.308;
		weight = 10000;
		barrelArmor = 2.4;
		initSpeedMultiplier = 1.01;
		ejectType = 3;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {2,2,1.7};
		simpleHiddenSelections[] = {"hide_barrel","bipod_deployed","bipod_folded"};
		hiddenSelections[] = {"camo_bar","camo_bod","camo_rail","camo_wood","lod5"};
		repairableWithKits[] = {1};
		repairCosts[] = {75.0};
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_20mm"};
		magazines[] = {};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"BFG50_Shot_SoundSet","SV98_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			reloadTime = 1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0.0013;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 1500;
			discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1200,1400,1500};
			discreteDistanceInitIndex = 0;
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
					overrideParticle = "weapon_shot_sks_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 8;
				shotsToStartOverheating = 4;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.6};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.6,1};
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
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0.05,0.01};
				orientation[] = {0,0,0};
			};
			class Melee
			{
				position[] = {-0.1,0.05,-0.01};
				orientation[] = {0,0,0};
			};
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		weaponStateAnim = "dz\anims\anm\player\reloads\M79\w_m79_states.anm";
		boneRemap[] = {"release","Weapon_Bone_02","barrel","Weapon_Bone_01","trigger","Weapon_Trigger","extractor","Weapon_Bone_03","bullet","Weapon_Bullet","charging","Weapon_Bone_04"};
	};
	class CA_BFG50: CA_BFG50_Base
	{
		scope = 2;
		displayName = "BFG-50";
		descriptionShort = "BFG-50 is a large-caliber single-shot carbine that was developed in 1999 by Serbu Firearms Inc. The goal of the development was to create a relatively inexpensive, but accurate and high-quality weapon intended for target shooting at long distances - from 1000 meters and more. Modified version with wooden grip, fed by 20mm rounds.";
		model = "\CA_Override\bfg50\bfg50.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponBipod"};
		itemSize[] = {11,3};
		hiddenSelectionsTextures[] = {"CA_Override\bfg50\data\barrel_co.paa","CA_Override\bfg50\data\body_co.paa","CA_Override\bfg50\data\rail_co.paa","CA_Override\bfg50\data\body_co.paa","CA_Override\bfg50\data\bfg_lod5_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\bfg50\data\barrel.rvmat","CA_Override\bfg50\data\body.rvmat","CA_Override\bfg50\data\rail.rvmat","CA_Override\bfg50\data\handle.rvmat","DZ\data\data\default.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10300;
					healthLevels[] = {{1.0,{"CA_Override\bfg50\data\barrel.rvmat","CA_Override\bfg50\data\body.rvmat","CA_Override\bfg50\data\rail.rvmat","CA_Override\bfg50\data\handle.rvmat"}},{0.7,{"CA_Override\bfg50\data\barrel.rvmat","CA_Override\bfg50\data\body.rvmat","CA_Override\bfg50\data\rail.rvmat","CA_Override\bfg50\data\handle.rvmat"}},{0.5,{"CA_Override\bfg50\data\barrel_damage.rvmat","CA_Override\bfg50\data\body_damage.rvmat","CA_Override\bfg50\data\rail_damage.rvmat","CA_Override\bfg50\data\handle_damage.rvmat"}},{0.3,{"CA_Override\bfg50\data\barrel_damage.rvmat","CA_Override\bfg50\data\body_damage.rvmat","CA_Override\bfg50\data\rail_damage.rvmat","CA_Override\bfg50\data\handle_damage.rvmat"}},{0.0,{"CA_Override\bfg50\data\barrel_destruct.rvmat","CA_Override\bfg50\data\body_destruct.rvmat","CA_Override\bfg50\data\rail_destruct.rvmat","CA_Override\bfg50\data\handle_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_BFG50_Camo_Sand: CA_BFG50
	{
		scpope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\bfg50\data\barrel_sand.paa","CA_Override\bfg50\data\body_sand.paa","CA_Override\bfg50\data\rail_co.paa","CA_Override\bfg50\data\body_sand.paa","CA_Override\bfg50\data\bfg_lod5_sand.paa"};
	};
	class CA_BFG50_Camo_Green: CA_BFG50
	{
		scpope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\bfg50\data\barrel_leaf.paa","CA_Override\bfg50\data\body_leaf.paa","CA_Override\bfg50\data\rail_co.paa","CA_Override\bfg50\data\body_leaf.paa","CA_Override\bfg50\data\bfg_lod5_leaf.paa"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class CA_Bipod_Base: Inventory_Base
	{
		NeedRis = 1;
	};
	class CA_Bipod: CA_Bipod_Base
	{
		scope = 2;
		displayName = "Bipod";
		descriptionShort = "his bipod provides solid support for longer range engagements. When bipod is deployed and the shooter is prone, weapon accuracy is increased dramatically.";
		model = "\CA_Override\bfg50\bfg50_bipod.p3d";
		rotationFlags = 12;
		reversed = 0;
		inventorySlot[] = {"weaponBipod"};
		weight = 376;
		NeedRis = 1;
		itemSize[] = {1,3};
		dispersionModifier = -0.00025;
		dexterityModifier = -0.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
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
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class Man;
	class SurvivorBase: Man
	{
		class AnimEvents
		{
			class Sounds
			{
				class bfg50_charge_open
				{
					soundSet = "bfg50_charge_open_SoundSet";
					id = 37101;
				};
				class bfg50_charge_close
				{
					soundSet = "bfg50_charge_close_SoundSet";
					id = 37301;
				};
				class bfg50_grenade_load
				{
					soundSet = "bfg50_grenade_load_SoundSet";
					id = 37501;
				};
				class bfg50_grenade_out
				{
					soundSet = "bfg50_grenade_out_SoundSet";
					id = 37601;
				};
				class bfg50_dry
				{
					soundSet = "bfg50_dry_SoundSet";
					id = 37701;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybfg50_bipod: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponBipod";
		model = "CA_Override\bfg50\bfg50_bipod.p3d";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_BFG50_SoundShader
	{
		volume = 1;
		range = 3500;
		rangeCurve = "distShotAttenuationCurve";
	};
	class BFG50_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_shot",1}};
		volume = 0.99;
	};
	class BFG50_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_shot",1}};
		volume = 0.79;
	};
	class BFG50_distShot_SoundShader: base_distShot_BFG50_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_shot",1}};
		volume = 0.45;
	};
	class reloadWeapon_SoundShader
	{
		volume = 1;
		range = 20;
		rangeCurve[] = {{0,1},{2,1},{5,0.4},{15,0.1},{20,0}};
	};
	class bfg50_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_charge_open1",1},{"CA_Override\bfg50\sounds\bfg50_charge_open2",1}};
		volume = 1.5848932;
	};
	class bfg50_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_charge_close1",1},{"CA_Override\bfg50\sounds\bfg50_charge_close2",1}};
		volume = 1.7782794;
	};
	class bfg50_grenade_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_grenade_load",1}};
		volume = 0.8912509;
	};
	class bfg50_grenade_out_SoundShader: reloadWeapon_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_grenade_out1",1},{"CA_Override\bfg50\sounds\bfg50_grenade_out2",1}};
		volume = 1.1220185;
	};
	class bfg50_dry_SoundShader: reloadWeapon_SoundShader
	{
		samples[] = {{"CA_Override\bfg50\sounds\bfg50_dryfire",1}};
		volume = 0.7498942;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class baseCharacter_SoundSet
	{
		sound3DProcessingType = "character3DProcessingType";
		distanceFilter = "BaseCharacter_AttenuationFilter";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class BFG50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"BFG50_closeShot_SoundShader","BFG50_midShot_SoundShader","BFG50_distShot_SoundShader","SVD_Closure_SoundShader"};
	};
	class bfg50_charge_open_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"bfg50_charge_open_SoundShader"};
	};
	class bfg50_charge_close_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"bfg50_charge_close_SoundShader"};
	};
	class bfg50_grenade_load_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"bfg50_grenade_load_SoundShader"};
	};
	class bfg50_grenade_out_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"bfg50_grenade_out_SoundShader"};
	};
	class bfg50_dry_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"bfg50_dry_SoundShader"};
	};
};
