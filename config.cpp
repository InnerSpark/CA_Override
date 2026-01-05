class CfgPatches
{
	class CA_Override
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Data"
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
		version="0.11";
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
};