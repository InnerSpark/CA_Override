////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Hecate\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Hecate
	{
		units[] = {};
		weapons[] = {"CA_Hecate"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"CA_Mag_Hecate_7rnd"};
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
	class CA_Hecate_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "PGM Hecate II";
		descriptionShort = "French large-caliber sniper rifle, manufactured by PGM Precision. fed from a detachable magazine 7-round magazines. Chambered for .50BMG";
		model = "CA_Override\Weapons\Hecate\Hecate.p3d";
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
		chamberableFrom[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
		magazines[] = {"CA_Mag_Hecate_7rnd"};
		barrelArmor = 6.8;
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {4,2.5,2};
		swayModifier[] = {3.3,2.5,1.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color1","color2"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"HecateShot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Hecate\data\hecate.rvmat"}},{0.7,{"CA_Override\Weapons\Hecate\data\hecate.rvmat"}},{0.5,{"CA_Override\Weapons\Hecate\data\hecate_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Hecate\data\hecate_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Hecate\data\hecate_destruct.rvmat"}}};
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
	class CA_Hecate: CA_Hecate_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Hecate\data\hecate_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Hecate_7rnd: Magazine_Base
	{
		scope = 2;
		displayName = "PGM Hecate II Magazine";
		descriptionShort = "Magazine for Hecate II sniper rifle. Holds up to 7 .50BMG Rounds";
		model = "CA_Override\Weapons\Hecate\Hecate_mag.p3d";
		weight = 400;
		itemSize[] = {2,2};
		count = 7;
		ammo = "GCGN_Bullet_50Cal";
		ammoItems[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Hecate\data\hecate.rvmat"}},{0.7,{"CA_Override\Weapons\Hecate\data\hecate.rvmat"}},{0.5,{"CA_Override\Weapons\Hecate\data\hecate_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Hecate\data\hecate_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Hecate\data\hecate_destruct.rvmat"}}};
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
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class HecatecloseShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Hecate\Hecate_close",1}};
		volume = 2;
	};
	class HecatemidShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Hecate\Hecate_mid",1}};
		volume = 1.5;
	};
	class HecatedistShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Hecate\Hecate_far",1}};
		volume = 1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class HecateShot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"HecatecloseShot_SoundShader","HecatemidShot_SoundShader","HecatedistShot_SoundShader"};
	};
};
