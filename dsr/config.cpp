////////////////////////////////////////////////////////////////////
//DeRap: dsr\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 08:33:44 2025 : 'file' last modified on Sat Feb 08 12:58:37 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Weapons_Firearms_DSR
	{
		units[] = {"CA_DSR_Bipod","CA_DSR_Suppressor","CA_DSR_Suppressor_FDE"};
		weapons[] = {"CA_DSR","CA_DSR_camo1","CA_DSR_camo2","CA_DSR_camo3"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Weapons_Firearms","DZ_Weapons_Firearms_SV98","DZ_Weapons_Magazines","DZ_Sounds_Effects","DZ_Weapons_Muzzles"};
		magazines[] = {"CA_DSR_Mag_3Rnd"};
	};
};
class CfgSlots
{
	class Slot_weaponMuzzleDSR
	{
		name = "weaponMuzzleDSR";
		displayName = "#STR_CfgSuppressor0";
		ghostIcon = "set:dayz_inventory image:supressor";
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
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_DSR_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "DSR";
		descriptionShort = "The DSR-Precision DSR-50 is a bullpup bolt-action anti-materiel rifle developed and manufactured by DSR-Precision GmbH and chambered in .50 BMG.";
		model = "\CA_Override\dsr\dsr.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponBipod","weaponMuzzleDSR"};
		spawnDamageRange[] = {0.0,0.6};
		itemSize[] = {9,3};
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 1.23;
		barrelArmor = 2.0;
		initSpeedMultiplier = 1.02;
		ejectType = 0;
		recoilModifier[] = {1.5,1.8,1.3};
		swayModifier[] = {1.1,1.2,1.1};
		weight = 10300;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP"};
		magazines[] = {"CA_DSR_Mag_3Rnd"};
		magazineSwitchTime = 0.45;
		simpleHiddenSelections[] = {"hide_barrel","bipod_deployed","bipod_folded"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"DSR_Shot_SoundSet","SV98_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"DSRSD_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet","SV98_silencerHome_Sweetener_SoundSet"}};
			reloadTime = 1;
			recoil = "SV98Recoil";
			dispersion = 0.00085;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10250;
					healthLevels[] = {{1.0,{"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"}},{0.7,{"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"}},{0.5,{"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"}},{0.3,{"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"}},{0.0,{"CA_Override\dsr\data\dsr.rvmat","dz\data\data\default.rvmat"}}};
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
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		modes[] = {"Single"};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1500;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
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
	class CA_DSR: CA_DSR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\dsr_co.paa","CA_Override\dsr\data\5\dsr5_co.paa"};
	};
	class CA_DSR_camo1: CA_DSR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\dsr_camo1.paa","CA_Override\dsr\data\5\dsr5_camo1.paa"};
	};
	class CA_DSR_camo2: CA_DSR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\dsr_camo2.paa","CA_Override\dsr\data\5\dsr5_camo2.paa"};
	};
	class CA_DSR_camo3: CA_DSR_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\dsr_camo3.paa","CA_Override\dsr\data\5\dsr5_camo3.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class CA_DSR_Mag_3Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Mag DSR";
		descriptionShort = "3Rnd mag for DSR, 50BMG";
		model = "CA_Override\dsr\magazine_dsr_3rnd.p3d";
		weight = 390;
		weightPerQuantityUnit = 15.0;
		itemSize[] = {2,2};
		count = 3;
		ammo = "Fresh_Bullet_50BMG";
		ammoItems[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5100;
					healthLevels[] = {{1.0,{"CA_Override\dsr\data\mag.rvmat"}},{0.7,{"CA_Override\dsr\data\mag.rvmat"}},{0.5,{"CA_Override\dsr\data\mag.rvmat"}},{0.3,{"CA_Override\dsr\data\mag.rvmat"}},{0.0,{"CA_Override\dsr\data\mag.rvmat"}}};
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
class cfgVehicles
{
	class CA_Bipod_Base;
	class CA_DSR_Bipod: CA_Bipod_Base
	{
		scope = 2;
		displayName = "Bipod";
		descriptionShort = "his bipod provides solid support for longer range engagements. When bipod is deployed and the shooter is prone, weapon accuracy is increased dramatically.";
		model = "\CA_Override\dsr\dsr_bipod.p3d";
		rotationFlags = 12;
		reversed = 0;
		inventorySlot[] = {"weaponBipod"};
		weight = 390;
		NeedRis = 1;
		itemSize[] = {1,3};
		dispersionModifier = -0.0002;
		dexterityModifier = -0.2;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
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
	class ItemSuppressor;
	class CA_DSR_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "DSR Suppressor";
		descriptionShort = "Suppressor compatible with DSR rifle";
		model = "\CA_Override\dsr\suppressor\supp_dsr.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {3,1};
		itemModelLength = 0.155;
		barrelArmor = 4250;
		lootCategory = "Attachments";
		lootTag[] = {"Military_west"};
		inventorySlot[] = {"weaponMuzzleDSR"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0006;
		dispersionCondition = "true";
		noiseShootModifier = -0.7;
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {1.3,1.3,1.3};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\sup_co.paa","CA_Override\dsr\data\5\supp5_co.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1004;
					healthLevels[] = {{1.0,{"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"}},{0.7,{"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"}},{0.5,{"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"}},{0.3,{"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"}},{0.0,{"CA_Override\dsr\data\supp.rvmat","dz\data\data\default.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0.0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
	class CA_DSR_Suppressor_FDE: CA_DSR_Suppressor
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\dsr\data\sup_co2.paa","CA_Override\dsr\data\5\supp5_co2.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymagazine_dsr_3rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "CA_Override\dsr\magazine_dsr_3rnd.p3d";
	};
	class Proxydsr_bipod: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponBipod";
		model = "\CA_Override\dsr\dsr_bipod.p3d";
	};
	class Proxysupp_dsr: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleDSR";
		model = "\CA_Override\dsr\suppressor\supp_dsr.p3d";
	};
};
class CfgSoundShaders
{
	class new_base_closeShot_SoundShader;
	class new_base_midShot_SoundShader;
	class new_base_distShot_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class DSR_closeShot_SoundShader: new_base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_single",1}};
		volume = 1.4;
	};
	class DSR_midShot_SoundShader: new_base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_single",1}};
		volume = 0.7;
	};
	class DSR_distShot_SoundShader: new_base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_single",1}};
		volume = 0.25;
	};
	class DSRSD_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_sd_1",1},{"CA_Override\dsr\sounds\dsr_sd_2",1}};
		volume = 1.4125376;
	};
	class DSRSD_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_sd_1",1},{"CA_Override\dsr\sounds\dsr_sd_2",1}};
	};
	class DSRSD_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\dsr\sounds\dsr_sd_1",1},{"CA_Override\dsr\sounds\dsr_sd_2",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class DSR_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DSR_closeShot_SoundShader","DSR_midShot_SoundShader","DSR_distShot_SoundShader","SV98_distShot_SoundShader"};
	};
	class DSRSD_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"DSRSD_silencerHomeMadeCloseShot_SoundShader","DSRSD_silencerHomeMadeMidShot_SoundShader","DSRSD_silencerHomeMadeDistShot_SoundShader","SV98_silencerHomeMadeCloseShot_Sweetener_SoundShader","SV98_Mech_SoundShader"};
	};
};
