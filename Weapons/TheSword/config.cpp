////////////////////////////////////////////////////////////////////
//DeRap: Weapons\TheSword\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:49 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_TheSword
	{
		units[] = {"CA_BeaverBasher","CA_AdminBasher"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
		ammo[] = {"MeleeTheSwordHeavy","MeleeTheSwordLight","MeleeTheSwordAdminHeavy","MeleeTheSwordAdminLight"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class TheSword_Base: Inventory_Base
	{
		scope = 0;
		displayName = "Beaver Basher";
		descriptionShort = "Bald-headed yogurt slinger";
		model = "\CA_Override\Weapons\TheSword\the_sword.p3d";
		animClass = "Knife";
		RestrainUnlockType = 1;
		repairableWithKits[] = {};
		repairCosts[] = {12};
		inventorySlot[] = {""};
		rotationFlags = 17;
		canSkinBodies = 1;
		weight = 1200;
		itemSize[] = {1,4};
		lootTag[] = {"Work","Forester","Hunting","Farm"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {10,20};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\TheSword\data\the_sword_western_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.7,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.5,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.3,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.0,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeTheSwordLight";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeTheSwordHeavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeTheSwordHeavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class pickup
				{
					soundSet = "hatchet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodaxe_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class CA_BeaverBasher: TheSword_Base
	{
		scope = 2;
	};
	class CA_AdminBasher_Base: Inventory_Base
	{
		scope = 0;
		displayName = "Admin Basher";
		descriptionShort = "Bald-headed yogurt slinger, causes trauma on every cheater ;)";
		model = "\CA_Override\Weapons\TheSword\the_sword_2h.p3d";
		debug_ItemCategory = 2;
		RestrainUnlockType = 1;
		repairableWithKits[] = {};
		repairCosts[] = {12};
		inventorySlot[] = {"Shoulder","Melee"};
		rotationFlags = 12;
		weight = 1200;
		itemSize[] = {2,8};
		lootTag[] = {"Historical"};
		lootCategory = "Tools";
		itemInfo[] = {"Axe"};
		openItemSpillRange[] = {20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.7,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.5,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.3,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}},{0.0,{"CA_Override\Weapons\TheSword\data\grip.rvmat","CA_Override\Weapons\TheSword\data\grip_gold.rvmat","CA_Override\Weapons\TheSword\data\meat.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "sword";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeTheSwordAdminLight";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeTheSwordAdminHeavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeTheSwordAdminHeavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class pickup
				{
					soundSet = "hatchet_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "woodaxe_drop_SoundSet";
					id = 898;
				};
				class FirefighterAxe_loop_SoundSet
				{
					soundSet = "FirefighterAxe_loop_SoundSet";
					id = 1121;
				};
				class FirefighterAxe_end_SoundSet
				{
					soundSet = "FirefighterAxe_end_SoundSet";
					id = 1122;
				};
			};
		};
	};
	class CA_AdminBasher: CA_AdminBasher_Base
	{
		scope = 2;
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeTheSwordHeavy: MeleeDamage
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 35;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 45;
			};
			additionAnimalMeleeMultiplier = 2;
		};
		soundGroundSoft1[] = {"CA_Override\Weapons\TheSword\sound\slap",1.6,1,100};
		soundGroundSoft2[] = {"CA_Override\Weapons\TheSword\sound\slap_hard",1.6,1,100};
		soundGroundSoft3[] = {"CA_Override\Weapons\TheSword\sound\slap_hard_2",1.6,1,100};
		soundGroundSoft4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundHard[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMan[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitArmor[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitBuilding[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitFoliage[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWood[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlass[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlassArmored[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitConcrete[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitRubber[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitPlastic[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitDefault[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetal[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetalplate[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWater[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
	};
	class MeleeTheSwordLight: MeleeDamage
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 20;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 25;
			};
			additionAnimalMeleeMultiplier = 2;
		};
		soundGroundSoft1[] = {"CA_Override\Weapons\TheSword\sound\slap",1.5,1,50};
		soundGroundSoft2[] = {"CA_Override\Weapons\TheSword\sound\slap_hard",1.5,1,50};
		soundGroundSoft3[] = {"CA_Override\Weapons\TheSword\sound\slap_hard_2",1.5,1,50};
		soundGroundSoft4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundHard[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMan[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitArmor[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitBuilding[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitFoliage[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWood[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlass[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlassArmored[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitConcrete[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitRubber[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitPlastic[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitDefault[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetal[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetalplate[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWater[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
	};
	class MeleeTheSwordAdminHeavy: MeleeDamage
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 135;
			};
			class Blood
			{
				damage = 500;
			};
			class Shock
			{
				damage = 145;
			};
			additionAnimalMeleeMultiplier = 2;
		};
		soundGroundSoft1[] = {"CA_Override\Weapons\TheSword\sound\slap",2.0,1,3000};
		soundGroundSoft2[] = {"CA_Override\Weapons\TheSword\sound\slap_hard",2.0,1,3000};
		soundGroundSoft3[] = {"CA_Override\Weapons\TheSword\sound\slap_hard_2",2.0,1,3000};
		soundGroundSoft4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundHard[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMan[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitArmor[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitBuilding[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitFoliage[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWood[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlass[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlassArmored[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitConcrete[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitRubber[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitPlastic[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitDefault[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetal[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetalplate[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWater[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
	};
	class MeleeTheSwordAdminLight: MeleeDamage
	{
		affectSkeleton = 1.4;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1;
			class Health
			{
				damage = 75;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 40;
			};
			additionAnimalMeleeMultiplier = 2;
		};
		soundGroundSoft1[] = {"CA_Override\Weapons\TheSword\sound\slap",2.0,1,1000};
		soundGroundSoft2[] = {"CA_Override\Weapons\TheSword\sound\slap_hard",2.0,1,1000};
		soundGroundSoft3[] = {"CA_Override\Weapons\TheSword\sound\slap_hard_2",2.0,1,1000};
		soundGroundSoft4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundSoft8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGroundHard8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundMetal8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitGlass6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundGlassArmored6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundVehiclePlate8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWood8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBody6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitBuilding8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundHitFoliage4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundPlastic4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete5[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete6[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete7[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundConcrete8[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundRubber4[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater1[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater2[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		soundWater3[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGroundHard[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMan[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitArmor[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitBuilding[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitFoliage[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWood[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlass[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitGlassArmored[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitConcrete[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitRubber[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitPlastic[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitDefault[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetal[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitMetalplate[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
		hitWater[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1};
	};
};
