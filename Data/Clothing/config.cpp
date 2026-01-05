class CfgPatches
{
	class CAOverr1ide_Clothing
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class MR_RifleBag_Base: Clothing_Base
	{
		weight = 230;
		itemSize[] = {4,6};
		itemsCargoSize[] = {10,20};
	};
	class MR_RifleBag1_Base: Clothing_Base
	{
		weight = 230;
		itemSize[] = {4,6};
		itemsCargoSize[] = {10,20};
	};
	
	class Clothing: Clothing_Base
	{
	};class GhillieBushrag_ColorBase : Clothing {
		scope=0;
		inventorySlot[]=
		{
			"Back",
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back",
			"Armband"
		};
	};
  		
	class GhillieTop_ColorBase : Clothing {
		scope=0;
		inventorySlot[]=
		{
			"Back",
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back",
			"Armband"
		};
	};
	
	class GhillieSuit_ColorBase : Clothing {
		scope=0;
		inventorySlot[]=
		{
			"Back",
			"Armband"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back",
			"Armband"
		};
	};
	
	class GhillieHood_ColorBase : Clothing {
		scope=0;
		inventorySlot[]=
		{
			"Head",
			"Eyes"
		};
		itemInfo[]=
		{
			"Clothing",
			"Head",
			"Eyes"
		};
	};
};