////////////////////////////////////////////////////////////////////
//DeRap: hti\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 08:33:45 2025 : 'file' last modified on Sat Feb 08 12:58:37 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Weapons_HTI
	{
		units[] = {"CA_HTI_Suppressor","CA_HTI_Suppressor_FDE"};
		weapons[] = {"CA_HTI","CA_HTI_FDE"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Weapons_Firearms","DZ_Weapons_Firearms_SV98","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Sounds_Effects"};
		magazines[] = {"CA_HTI_Mag_5Rnd"};
	};
};
class CfgSlots
{
	class Slot_weaponMuzzleHTI
	{
		name = "weaponMuzzleHTI";
		displayName = "#STR_CfgSuppressor0";
		ghostIcon = "set:dayz_inventory image:supressor";
	};
};
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_HTI_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		descriptionShort = "The Desert Tech Hard Target Interdiction (HTI) is a bullpup bolt-action sniper and anti-materiel rifle designed and manufactured in West Valley City, Utah, United States by Desert Tech (formerly Desert Tactical Arms).";
		model = "\CA_Override\hti\hti.p3d";
		spawnDamageRange[] = {0.0,0.6};
		itemSize[] = {10,3};
		weight = 9180;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Fresh_Ammo_20mm"};
		magazines[] = {"CA_HTI_Mag_5Rnd"};
		magazineSwitchTime = 0.45;
		PPDOFProperties[] = {1,0.1,20.0,200.0,10.0,10.0};
		WeaponLength = 1.152;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1.2;
		ejectType = 0;
		recoilModifier[] = {1.5,1.5,1.5};
		swayModifier[] = {1.5,1.4,1.1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo_a","camo_b","camo_c"};
		class NoiseShoot
		{
			strength = 200;
			type = "shot";
		};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"HTIm_Shot_SoundSet","HTIt_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"HTItsd_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet","SV98_silencerHome_Sweetener_SoundSet"}};
			reloadTime = 1;
			recoil = "SV98Recoil";
			dispersion = 0.0011;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 600;
			discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
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
		weaponStateAnim = "dz\anims\anm\player\reloads\SSG82\w_SSG82_states.anm";
	};
	class CA_HTI: CA_HTI_Base
	{
		scope = 2;
		displayName = "Desert Tech HTI";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponFlashlight","weaponMuzzleHTI"};
		hiddenSelectionsTextures[] = {"CA_Override\hti\data\hti_co.paa","CA_Override\hti\data\caliber_co.paa","CA_Override\hti\data\lowres\hti_low.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\hti\data\camo_a.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10300;
					healthLevels[] = {{1.0,{"CA_Override\hti\data\camo_a.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"}},{0.7,{"CA_Override\hti\data\camo_a.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"}},{0.5,{"CA_Override\hti\data\camo_a_damage.rvmat","CA_Override\hti\data\camo_b_damage.rvmat","dz\data\data\default.rvmat"}},{0.3,{"CA_Override\hti\data\camo_a_damage.rvmat","CA_Override\hti\data\camo_b_damage.rvmat","dz\data\data\default.rvmat"}},{0.0,{"CA_Override\hti\data\camo_a_destruct.rvmat","CA_Override\hti\data\camo_b_destruct.rvmat","dz\data\data\default.rvmat"}}};
				};
			};
		};
	};
	class CA_HTI_FDE: CA_HTI_Base
	{
		scope = 2;
		displayName = "Desert Tech HTI FDE";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponFlashlight","weaponMuzzleHTI"};
		hiddenSelectionsTextures[] = {"CA_Override\hti\data\hti_fde.paa","CA_Override\hti\data\caliber_co.paa","CA_Override\hti\data\lowres\hti_low_fde.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\hti\data\camo_a_fde.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"HTIt_Shot_SoundSet","HTIt_Shot_Interior_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet","SV98_Slapback_SoundSet","SV98_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"HTItsd_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet","SV98_silencerHome_Sweetener_SoundSet"}};
			reloadTime = 1;
			recoil = "SV98Recoil";
			dispersion = 0.0011;
			magazineSlot = "magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10300;
					healthLevels[] = {{1.0,{"CA_Override\hti\data\camo_a_fde.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"}},{0.7,{"CA_Override\hti\data\camo_a_fde.rvmat","CA_Override\hti\data\camo_b.rvmat","dz\data\data\default.rvmat"}},{0.5,{"CA_Override\hti\data\camo_a_damage.rvmat","CA_Override\hti\data\camo_b_damage.rvmat","dz\data\data\default.rvmat"}},{0.3,{"CA_Override\hti\data\camo_a_damage.rvmat","CA_Override\hti\data\camo_b_damage.rvmat","dz\data\data\default.rvmat"}},{0.0,{"CA_Override\hti\data\camo_a_destruct.rvmat","CA_Override\hti\data\camo_b_destruct.rvmat","dz\data\data\default.rvmat"}}};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class CA_HTI_Mag_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "HTI Mag";
		descriptionShort = "5-round detachable box magazine for Desert Tech HTI.";
		model = "\CA_Override\hti\magazine_hti.p3d";
		weight = 390;
		weightPerQuantityUnit = 15.0;
		itemSize[] = {2,2};
		count = 5;
		ammo = "Fresh_Bullet_20mm";
		ammoItems[] = {"Fresh_Ammo_20mm"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10300;
					healthLevels[] = {{1.0,{"CA_Override\hti\data\camo_b.rvmat"}},{0.7,{"CA_Override\hti\data\camo_b.rvmat"}},{0.5,{"CA_Override\hti\data\camo_b_damage.rvmat"}},{0.3,{"CA_Override\hti\data\camo_b_damage.rvmat"}},{0.0,{"CA_Override\hti\data\camo_b_destruct.rvmat"}}};
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
	class ItemSuppressor;
	class CA_HTI_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "HTI Suppressor";
		descriptionShort = "Suppressor for Desert Tech HTI rifle.";
		model = "\CA_Override\hti\suppressor_hti.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {3,1};
		itemModelLength = 0.148;
		barrelArmor = 2250;
		lootCategory = "Attachments";
		lootTag[] = {"Military_west"};
		inventorySlot[] = {"weaponMuzzleHTI"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -0.93;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.3,1.3,1.3};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"CA_Override\hti\data\supp_co.paa","CA_Override\hti\data\lowres\supp_low.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\hti\data\suppressor.rvmat","dz\data\data\default.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10300;
					healthLevels[] = {{1.0,{"CA_Override\hti\data\suppressor.rvmat","dz\data\data\default.rvmat"}},{0.7,{"CA_Override\hti\data\suppressor.rvmat","dz\data\data\default.rvmat"}},{0.5,{"CA_Override\hti\data\suppressor_damage.rvmat","dz\data\data\default.rvmat"}},{0.3,{"CA_Override\hti\data\suppressor_damage.rvmat","dz\data\data\default.rvmat"}},{0.0,{"CA_Override\hti\data\suppressor_destruct.rvmat","dz\data\data\default.rvmat"}}};
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
	class CA_HTI_Suppressor_FDE: CA_HTI_Suppressor
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\hti\data\supp_fde.paa","CA_Override\hti\data\lowres\supp_low_fde.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymagazine_hti: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "CA_Override\hti\magazine_hti.p3d";
	};
	class Proxysuppressor_hti: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleHTI";
		model = "\CA_Override\hti\suppressor_hti.p3d";
	};
};
class CfgSoundShaders
{
	class new_base_closeShot_SoundShader;
	class new_base_midShot_SoundShader;
	class new_base_distShot_SoundShader;
	class hti_closeShot_SoundShader: new_base_closeShot_SoundShader
	{
		range = 4000;
		rangeCurve = "closeShotAttenuationCurve";
	};
	class hti_midShotRifle_SoundShader: new_base_midShot_SoundShader
	{
		range = 4000;
		rangeCurve = "midShotAttenuationCurve";
	};
	class hti_distShot_SoundShader: new_base_distShot_SoundShader
	{
		range = 4000;
		rangeCurve = "distShotAttenuationCurve";
	};
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class new_Interior_CloseShotRifle_SoundShader;
	class new_Interior_MidShotRifle_SoundShader;
	class HTIm_closeShot_SoundShader: hti_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIm_1",1},{"CA_Override\hti\sounds\HTIm_2",1},{"CA_Override\hti\sounds\HTIm_3",1},{"CA_Override\hti\sounds\HTIm_4",1}};
		volume = 3.1;
	};
	class HTIm_midShot_SoundShader: hti_midShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIm_1",1},{"CA_Override\hti\sounds\HTIm_2",1},{"CA_Override\hti\sounds\HTIm_3",1},{"CA_Override\hti\sounds\HTIm_4",1}};
		volume = 2.5;
	};
	class HTIm_distShot_SoundShader: hti_distShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIm_1",1},{"CA_Override\hti\sounds\HTIm_2",1},{"CA_Override\hti\sounds\HTIm_3",1},{"CA_Override\hti\sounds\HTIm_4",1}};
		volume = 0.7;
	};
	class HTIt_closeShot_Interior_SoundShader: new_Interior_CloseShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIti_1",1}};
		volume = 1.9;
	};
	class HTIt_midShot_Interior_SoundShader: new_Interior_MidShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIti_1",1}};
		volume = 1.1;
	};
	class HTIt_closeShot_SoundShader: hti_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIto_1",1}};
		volume = 3.1;
	};
	class HTIt_midShot_SoundShader: hti_midShotRifle_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIto_1",1}};
		volume = 2.5;
	};
	class HTIt_distShot_SoundShader: hti_distShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\HTIto_1",1}};
		volume = 0.7;
	};
	class HTItsd_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\sd_outdoor",1}};
		volume = 2.2;
	};
	class HTItsd_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\sd_outdoor",1}};
		volume = 1.4;
	};
	class HTItsd_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\hti\sounds\sd_outdoor",1}};
		volume = 0.8;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_Shot_Interior_Base_SoundSet;
	class HTIm_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"HTIm_closeShot_SoundShader","HTIm_midShot_SoundShader","HTIm_distShot_SoundShader","SV98_distShot_SoundShader"};
	};
	class HTIt_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"HTIt_closeShot_SoundShader","HTIt_midShot_SoundShader","HTIt_distShot_SoundShader","SV98_distShot_SoundShader"};
	};
	class HTItsd_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"HTItsd_silencerHomeMadeCloseShot_SoundShader","HTItsd_silencerHomeMadeMidShot_SoundShader","HTItsd_silencerHomeMadeDistShot_SoundShader","SV98_silencerHomeMadeCloseShot_Sweetener_SoundShader","SV98_Mech_SoundShader"};
	};
	class HTIt_Shot_Interior_SoundSet: Rifle_Shot_Interior_Base_SoundSet
	{
		soundShaders[] = {"HTIt_closeShot_Interior_SoundShader","HTIt_midShot_Interior_SoundShader"};
	};
};
