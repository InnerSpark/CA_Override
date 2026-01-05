////////////////////////////////////////////////////////////////////
//DeRap: Weapons\VenomGrenade\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:49 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_VenomGrenade
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
		units[] = {"CA_Venom_Grenade"};
	};
};
class CfgVehicles
{
	class Grenade_Base;
	class CA_Venom_Grenade: Grenade_Base
	{
		scope = 2;
		displayName = "F1 Grenade";
		descriptionShort = "$STR_CfgVehicles_RGD5Grenade1";
		model = "CA_Override\Weapons\VenomGrenade\grenade.p3d";
		weight = 350;
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\VenomGrenade\data\grenade_CO.paa"};
		hiddenSelectionsMaterials[] = {"CA_Override\Weapons\VenomGrenade\data\grenade.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\VenomGrenade\data\grenade.rvmat"}},{0.7,{"CA_Override\Weapons\VenomGrenade\data\grenade.rvmat"}},{0.5,{"CA_Override\Weapons\VenomGrenade\data\grenade_damage.rvmat"}},{0.3,{"CA_Override\Weapons\VenomGrenade\data\grenade_damage.rvmat"}},{0.0,{"CA_Override\Weapons\VenomGrenade\data\grenade_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
};
