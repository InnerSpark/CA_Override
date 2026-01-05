////////////////////////////////////////////////////////////////////
//DeRap: ptrd\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 08:33:45 2025 : 'file' last modified on Sat Feb 08 12:58:36 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class TC_Weapons_Firearms_PTRD
	{
		units[] = {"CA_PTRD_Bipod"};
		weapons[] = {"CA_PTRD"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Firearms_SV98","DZ_Sounds_Effects"};
	};
};
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_PTRD_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 2.02;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1.5;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"hide_barrel","bipod_deployed","bipod_folded"};
		hiddenSelections[] = {"camo_a","camo_b","camo_c"};
		class NoiseShoot
		{
			strength = 200;
			type = "shot";
		};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"PTRD_Shot_SoundSet","SV98_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"SV98_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet","SV98_silencerHome_Sweetener_SoundSet"}};
			reloadTime = 1;
			recoil = "SV98Recoil";
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
	};
	class CA_PTRD: CA_PTRD_Base
	{
		scope = 2;
		displayName = "PTRD 1941";
		descriptionShort = "The PTRD-41 (Anti-tank self-loading gun) is an anti-tank rifle that was produced and used from 1941 by the Soviet Red Army during World War II. It is a single-shot weapon which fires the 20mm round, which was able to penetrate German tanks.";
		model = "\CA_Override\ptrd\ptrd.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponBipod"};
		spawnDamageRange[] = {0.0,0.6};
		itemSize[] = {13,3};
		weight = 17000;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_20mm"};
		magazineSwitchTime = 0.45;
		hiddenSelectionsTextures[] = {"CA_Override\ptrd\data\a_co.paa","CA_Override\ptrd\data\b_co.paa","CA_Override\ptrd\data\rail\rail2_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10250;
					healthLevels[] = {{1.0,{"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"}},{0.7,{"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"}},{0.5,{"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"}},{0.3,{"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"}},{0.0,{"CA_Override\ptrd\data\ptrd_a.rvmat","CA_Override\ptrd\data\ptrd_b.rvmat","CA_Override\ptrd\data\rail\rail2.rvmat"}}};
				};
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
};
class cfgVehicles
{
	class Inventory_Base;
	class CA_Bipod_Base: Inventory_Base
	{
		NeedRis = 1;
	};
	class CA_PTRD_Bipod: CA_Bipod_Base
	{
		scope = 2;
		displayName = "Bipod";
		descriptionShort = "his bipod provides solid support for longer range engagements. When bipod is deployed and the shooter is prone, weapon accuracy is increased dramatically.";
		model = "\CA_Override\ptrd\ptrd_bipod.p3d";
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
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyptrd_bipod: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponBipod";
		model = "CA_Override\ptrd\ptrd_bipod.p3d";
	};
};
class CfgSoundShaders
{
	class new_closeShotRifle_SoundShader;
	class new_midShotRifle_SoundShader;
	class new_distShotRifle_SoundShader;
	class PTRD_closeShot_SoundShader: new_closeShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\ptrd\sounds\ptrd_shot",1}};
	};
	class PTRD_midShot_SoundShader: new_midShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\ptrd\sounds\ptrd_shot",1}};
	};
	class PTRD_distShot_SoundShader: new_distShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\ptrd\sounds\ptrd_shot",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class PTRD_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SV98_Mech_SoundShader","PTRD_closeShot_SoundShader","PTRD_midShot_SoundShader","PTRD_distShot_SoundShader"};
	};
};
