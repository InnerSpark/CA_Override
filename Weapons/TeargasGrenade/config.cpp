////////////////////////////////////////////////////////////////////
//DeRap: Weapons\TeargasGrenade\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:12 2025 : 'file' last modified on Fri Sep 13 07:24:49 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_GasGrenade
	{
		requiredAddons[] = {"DZ_Data"};
		units[] = {"CA_Grenade_Stungas"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class M18SmokeGrenade_ColorBase;
	class CA_Grenade_Stungas: M18SmokeGrenade_ColorBase
	{
		scope = 2;
		displayName = "Stun Grenade";
		descriptionShort = "Deploys Stungas within a 5 meter radius. Very effective to take down unprotected enemys behind cover without killing them. 5 seconds fuse delay";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\TeargasGrenade\data\teargasgrenade_co.paa"};
		class EnergyManager
		{
			energyAtSpawn = 90;
			energyUsagePerSecond = 2;
			updateInterval = 1;
			wetnessExposure = 0.1;
		};
	};
};
