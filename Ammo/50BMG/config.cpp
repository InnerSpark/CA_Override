////////////////////////////////////////////////////////////////////
//DeRap: Ammo\50BMG\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:07 2025 : 'file' last modified on Fri Sep 13 07:24:52 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Ammo_50BMG
	{
		units[] = {"CA_AmmoBox_50BMG_10Rnd","CA_AmmoBox_50BMGAP_10Rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[] = {"CA_Ammo_50BMG","CA_Ammo_50BMG_AP"};
		ammo[] = {"CA_Bullet_50BMG","Bullet_50APFresh"};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class CA_Ammo_50BMG: Ammunition_Base
	{
		scope = 2;
		displayName = ".50BMG Rounds";
		descriptionShort = ".50BMG full power rifle cartridge.";
		model = "CA_Override\Ammo\50BMG\ammo.p3d";
		weight = 70;
		count = 40;
		itemSize[] = {1,2};
		ammo = "CA_Bullet_50BMG";
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
	class CA_Ammo_50BMG_AP: Ammunition_Base
	{
		scope = 2;
		displayName = ".50 BMG AP Rounds";
		descriptionShort = ".50BMG armor piercing full power rifle cartridge.";
		model = "CA_Override\Ammo\50BMG\ammo.p3d";
		weight = 60;
		count = 40;
		itemSize[] = {1,2};
		ammo = "Bullet_50APFresh";
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
	class CA_Bullet_50BMG: Bullet_Base
	{
		scope = 2;
		cartridge = "FxCartridge_50BMGFresh";
		casing = "FxCartridge_50BMGFresh";
		round = "FxRound_50BMGFresh";
		spawnPileType = "CA_Ammo_50BMG";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		initSpeed = 1600;
		typicalSpeed = 1600;
		airFriction = -0.00157;
		caliber = 1.85;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.0071;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.2,1.0}};
			class Health
			{
				damage = 750;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 50;
			type = "shot";
		};
	};
	class Bullet_50APFresh: Bullet_Base
	{
		scope = 2;
		cartridge = "FxCartridge_50BMGFresh";
		casing = "FxCartridge_50BMGFresh";
		round = "FxRound_50BMGFresh";
		spawnPileType = "CA_Ammo_50BMG_AP";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 4;
		airLock = 1;
		typicalSpeed = 1600;
		initSpeed = 1600;
		airFriction = -0.00157;
		caliber = 2.5;
		deflecting = 10;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.0071;
		hitAnimation = 0;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.2,1.0}};
			class Health
			{
				damage = 750;
				armorDamage = 5;
			};
			class Blood
			{
				damage = 300;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 50;
			type = "shot";
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class CA_AmmoBox_50BMG_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed .50 BMG Rounds";
		descriptionShort = "A box of 10 .50BMG rounds.";
		model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[] = {1,1};
		rotationFlags = 17;
		weight = 600;
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"CA_Override\Ammo\50BMG\data\50bmg_box_co.paa","CA_Override\Ammo\50BMG\data\50bmg_box_co.paa"};
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
			class CA_Ammo_50BMG
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
	class CA_AmmoBox_50BMGAP_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "Boxed .50 BMG AP Rounds";
		descriptionShort = "A box of 10 .50BMG armor piercing rounds.";
		model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[] = {1,1};
		rotationFlags = 17;
		weight = 600;
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"CA_Override\Ammo\50BMG\data\50bmgAP_box_co.paa","CA_Override\Ammo\50BMG\data\50bmgAP_box_co.paa"};
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
			class CA_Ammo_50BMG_AP
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
	class FxRound_50BMGFresh: FxRound
	{
		model = "CA_Override\Ammo\50BMG\ammo_single.p3d";
	};
	class FxCartridge;
	class FxCartridge_50BMGFresh: FxCartridge
	{
		model = "CA_Override\Ammo\50BMG\ammo_shell.p3d";
	};
};
class cfgAmmoTypes
{
	class AType_CA_Bullet_50BMG
	{
		name = "CA_Bullet_50BMG";
	};
	class AType_Bullet_50APFresh
	{
		name = "Bullet_50APFresh";
	};
};
