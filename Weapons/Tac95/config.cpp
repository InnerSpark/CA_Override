////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Tac95\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:49 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Tac95
	{
		units[] = {};
		weapons[] = {"CA_Tac95","CA_Tac95_Carbon","CA_Tac95_CarbonRed"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"CA_Mag_Tac95_5rnd","CA_Mag_Tac95_Carbon_5rnd"};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_Tac95_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "Tac-95";
		descriptionShort = "Large-caliber prototype sniper rifle, manufactured by McMillan USA. Fed from a detachable 5 round magazines. Chambered for .408 CheyTac.";
		model = "\CA_Override\Weapons\Tac95\tac95.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting"};
		itemSize[] = {10,3};
		weight = 13800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 1.3;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"GCGN_Ammo_408Chey","Rev_Ammo_408"};
		magazines[] = {"CA_Mag_Tac95_5rnd","CA_Mag_Tac95_Carbon_5rnd"};
		barrelArmor = 6.8;
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {1.3,1.4,1.3};
		swayModifier[] = {1.3,1.5,1.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Tac95Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			reloadTime = 1;
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Tac95\data\tac95.rvmat"}},{0.7,{"CA_Override\Weapons\Tac95\data\tac95.rvmat"}},{0.5,{"CA_Override\Weapons\Tac95\data\tac95_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Tac95\data\tac95_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Tac95\data\tac95_destruct.rvmat"}}};
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
	class CA_Tac95: CA_Tac95_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac95\data\tac95_tan_co.paa"};
	};
	class CA_Tac95_Carbon: CA_Tac95_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac95\data\tac95_carbon_co.paa"};
	};
	class CA_Tac95_CarbonRed: CA_Tac95_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac95\data\tac95_carbonred_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Tac95_5rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Tac-95 Magazine";
		descriptionShort = "Magazine for Tac-95 sniper rifle. Holds up to 5 .408 CheyTac rounds.";
		model = "CA_Override\Weapons\Tac95\tac95_mag.p3d";
		weight = 400;
		itemSize[] = {3,2};
		count = 5;
		ammo = "GCGN_Bullet_408Chey";
		ammoItems[] = {"Ammo_408Chey","Ammo_408","GCGN_Ammo_408Chey","Rev_Ammo_408"};
		tracersEvery = 0;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac95\data\tac95_tan_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Tac95\data\tac95.rvmat"}},{0.7,{"CA_Override\Weapons\Tac95\data\tac95.rvmat"}},{0.5,{"CA_Override\Weapons\Tac95\data\tac95_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Tac95\data\tac95_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Tac95\data\tac95_destruct.rvmat"}}};
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
	class CA_Mag_Tac95_Carbon_5rnd: CA_Mag_Tac95_5rnd
	{
		scope = 2;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Tac95\data\tac95_carbon_co.paa"};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class Tac95closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\weapons\sounds\tac95\tac95_close",1}};
		volume = 2;
	};
	class Tac95midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\weapons\sounds\tac95\tac95_mid",1}};
		volume = 1.5;
	};
	class Tac95distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\weapons\sounds\tac95\tac95_far",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Tac95Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Tac95closeShot_SoundShader","Tac95midShot_SoundShader","Tac95distShot_SoundShader"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxytac95_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "\CA_Override\Weapons\Tac95\tac95_mag.p3d";
	};
};
