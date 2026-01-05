////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Catbite\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Anzio
	{
		units[] = {};
		weapons[] = {"CA_Anzio"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"CA_Mag_Anzio_5rnd"};
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
	class CA_Anzio_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "Anzio 20mm";
		descriptionShort = "The Anzio 20mm rifle is an American anti-materiel rifle designed and marketed by Anzio IronWorks. It is the first American anti-materiel rifle designed and mass-produced for public sale with a bore diameter in excess of .50 caliber in over 80 years. Fed from detachable Magazines, chambered for M53 20x102mm";
		model = "CA_Override\Weapons\Catbite\anzio.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting"};
		itemSize[] = {10,4};
		weight = 32000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		WeaponLength = 2.1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"CA_Ammo_20mm"};
		magazines[] = {"CA_Mag_Anzio_5rnd"};
		barrelArmor = 5.2;
		ejectType = 1;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {10,7.5,8};
		swayModifier[] = {3.3,2.5,1.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Anzio_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
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
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Catbite\data\anzio.rvmat"}},{0.7,{"CA_Override\Weapons\Catbite\data\anzio.rvmat"}},{0.5,{"CA_Override\Weapons\Catbite\data\anzio_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Catbite\data\anzio_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Catbite\data\anzio_destruct.rvmat"}}};
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
	class CA_Anzio: CA_Anzio_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Catbite\data\anzio_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Anzio_5rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Anzio Magazine";
		descriptionShort = "5 Round Anzio Magazine.";
		model = "CA_Override\Weapons\Catbite\anzio_mag.p3d";
		weight = 600;
		itemSize[] = {3,2};
		count = 5;
		ammo = "CA_Bullet_20mm";
		ammoItems[] = {"CA_Ammo_20mm"};
		tracersEvery = 0;
		class InventorySlotsOffsets
		{
			class Hands
			{
				position[] = {0.0,0.0,0.0};
				orientation[] = {0,0,0};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Catbite\data\anzio.rvmat"}},{0.7,{"CA_Override\Weapons\Catbite\data\anzio.rvmat"}},{0.5,{"CA_Override\Weapons\Catbite\data\anzio_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Catbite\data\anzio_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Catbite\data\anzio_destruct.rvmat"}}};
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
	class Anzio_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\anzio\anzio.ogg",1}};
		volume = 1;
		range = 3000;
		rangeCurve = "closeShotCurve";
	};
};
class CfgSoundSets
{
	class Pistol_Shot_Base_SoundSet;
	class Anzio_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[] = {"Anzio_closeShot_SoundShader"};
	};
};
