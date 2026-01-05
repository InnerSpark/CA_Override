////////////////////////////////////////////////////////////////////
//DeRap: Ammo\50BMG_Rev\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:07 2025 : 'file' last modified on Fri Sep 13 07:24:52 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Fresh_AmmoBox_REV_50BMG
	{
		units[] = {"Fresh_AmmoBox_REV_50BMG_10Rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition","Rev_CDX50"};
	};
};
class CfgVehicles
{
	class Box_Base;
	class Fresh_AmmoBox_REV_50BMG_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "REV 50BMG AmmoBox";
		descriptionShort = "A box of 10 REV 50BMG rounds.";
		model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[] = {1,1};
		rotationFlags = 17;
		weight = 600;
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"CA_Override\Ammo\50BMG_Rev\data\AmmoBox_50BMG_REV_co.paa","CA_Override\Ammo\50BMG_Rev\data\AmmoBox_50BMG_REV_co.paa"};
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
			class Rev_Ammo_50BMG
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
};
