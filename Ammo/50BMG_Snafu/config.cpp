////////////////////////////////////////////////////////////////////
//DeRap: Ammo\50BMG_Snafu\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:07 2025 : 'file' last modified on Fri Sep 13 07:24:52 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_AmmoBox_SNAFU_50BMG
	{
		units[] = {"CA_AmmoBox_SNAFU_50BMG_10Rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition","SNAFU_Ammo_Master"};
	};
};
class CfgVehicles
{
	class Box_Base;
	class CA_AmmoBox_SNAFU_50BMG_10Rnd: Box_Base
	{
		scope = 2;
		displayName = "SNAFU 50BMG AmmoBox";
		descriptionShort = "A box of 10 SNAFU 50BMG rounds.";
		model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
		itemSize[] = {1,1};
		rotationFlags = 17;
		weight = 600;
		hiddenSelections[] = {"zbytek","camoground"};
		hiddenSelectionsTextures[] = {"CA_Override\Ammo\50BMG_Snafu\data\SNAFU_50bmg_box_co.paa","CA_Override\Ammo\50BMG_Snafu\data\SNAFU_50bmg_box_co.paa"};
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
			class GCGN_Ammo_50Cal
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
