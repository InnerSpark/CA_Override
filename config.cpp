class CfgPatches
{
	class CA_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Scripts",
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Gear_Containers",
			"DZ_Weapons_Lights",
			"CfgVehicles",
			"CfgWeapons",
			"CfgMagazines",
			"CfgNonAIVehicles",
			"JPC_Vest"
		};
	};
};

class CfgMods
{
	class CA_Override
	{
		dir="CA_Override";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="CA Override";
		credits="SicarioSpark";
		author="SicarioSpark";
		authorID="";
		version="0.2";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"CA_Override/Scripts/3_Game"};
			}
		};
		class worldScriptModule
		{
			value = "";
			files[] = {"CA_Override/Scripts/4_World"};
		};
		class missionScriptModule
		{
			value = "";
			files[] = {"CA_Override/scripts/5_Mission"};
		};
	};
};

// =============================================
// EMPTY PLACEHOLDER CLASSES
// These stop binarizer errors (CfgNonAIVehicles, CfgWeapons, CfgMagazines)
// They do NOTHING in-game — safe and standard practice
// =============================================
class CfgNonAIVehicles
{
};

class CfgWeapons
{
};

class CfgMagazines
{
};

class CfgSlots
{
};

// Optional: If you get CfgVehicles complaints too
class CfgVehicles
{
};