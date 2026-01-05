////////////////////////////////////////////////////////////////////
//DeRap: Ammo\20mm\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:07 2025 : 'file' last modified on Fri Sep 13 07:24:52 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Fresh_Ammunition_20mm
	{
		units[] = {"Fresh_AmmoBox_20mm_10Rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"Fresh_Ammo_20mm"};
		ammo[] = {"Fresh_Bullet_20mm"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Fresh_Ammo_20mm: Ammunition_Base
	{
		scope = 2;
		displayName = "Anzio 20x102mm Rounds";
		descriptionShort = "20x102mm cartrige.";
		model = "\CA_Override\Ammo\20mm\ammo.p3d";
		weight = 100;
		count = 40;
		itemSize[] = {1,2};
		ammo = "Fresh_Bullet_20mm";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"CA_Override\Ammo\50BMG\data\bullet.rvmat"}},{0.7,{"CA_Override\Ammo\50BMG\data\bullet.rvmat"}},{0.5,{"CA_Override\Ammo\50BMG\data\bullet_damage.rvmat"}},{0.3,{"CA_Override\Ammo\50BMG\data\bullet_damage.rvmat"}},{0.0,{"CA_Override\Ammo\50BMG\data\bullet_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Fresh_Bullet_20mm: Bullet_Base
	{
		scope = 2;
		cartridge = "FxCartridge_20mmFresh";
		casing = "FxCartridge_20mmFresh";
		round = "FxRound_20mmFresh";
		spawnPileType = "Fresh_Ammo_20mm";
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		typicalSpeed = 1730;
		initSpeed = 1700;
		airFriction = -0.00013206765;
		caliber = 1.6;
		deflecting = 5;
		damageBarrel = 800;
		damageBarrelDestroyed = 800;
		weight = 0.01;
		hitAnimation = 1;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 3000;
				armorDamage = 0.99;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 80;
			type = "shot";
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class Fresh_AmmoBox_20mm_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed 20mm Rounds";
		descriptionShort = "A box of 10 20mm rounds.";
		model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[] = {1,1};
		rotationFlags = 17;
		weight = 600;
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"CA_Override\Ammo\20mm\data\20mm_box_co.paa","CA_Override\Ammo\20mm\data\20mm_box_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762_box.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762_box.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762_box_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762_box_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class Fresh_Ammo_20mm
			{
				value = 10;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
	class FxRound;
	class FxRound_20mmFresh: FxRound
	{
		model = "CA_Override\Ammo\20mm\ammo_single.p3d";
	};
	class FxCartridge;
	class FxCartridge_20mmFresh: FxCartridge
	{
		model = "CA_Override\Ammo\20mm\ammo_shell.p3d";
	};
};
class cfgAmmoTypes
{
	class AType_Fresh_Bullet_20mm
	{
		name = "Fresh_Bullet_20mm";
	};
};
