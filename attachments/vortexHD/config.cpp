////////////////////////////////////////////////////////////////////
//DeRap: attachments\vortexHD\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 08:33:44 2025 : 'file' last modified on Sat Feb 08 12:58:37 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Optics_VortexHD
	{
		units[] = {"CA_Optics_VortexHD","CA_Optics_Vortex_X6"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics_Base;
	class CA_Optics_VortexHD: ItemOptics_Base
	{
		scope = 2;
		displayName = "EDZ VortexHD";
		descriptionShort = "Long range scope with 5-20x magnification.";
		model = "\CA_Override\attachments\vortexHD\vortexhd.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {4,1};
		inventorySlot[] = {"weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope_temp";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","CA_Override\attachments\vortexHD\data\x20.rvmat","CA_Override\attachments\vortexHD\data\x20_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","CA_Override\attachments\vortexHD\data\x20_damage.rvmat","CA_Override\attachments\vortexHD\data\x6_glass_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","CA_Override\attachments\vortexHD\data\x20_destruct.rvmat","CA_Override\attachments\vortexHD\data\x6_glass_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\CA_Override\attachments\vortexHD\opticview_vortex.p3d";
			preloadOpticType = "Preload2DOptic_VortexHD";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/5";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/1";
			discretefov[] = {"0.3926/5","0.3926/10","0.3926/16","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1600;
			discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_ris
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_ris_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_winchester
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_winchester_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class CA_Optics_Vortex_X6: ItemOptics_Base
	{
		scope = 2;
		displayName = "EDZ Vortex X1-6";
		descriptionShort = "Vortex mid range scope with 1-6x magnification.";
		model = "\CA_Override\attachments\vortexHD\vortex6.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,1};
		inventorySlot[] = {"WeaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope_temp";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","CA_Override\attachments\vortexHD\data\x6.rvmat","CA_Override\attachments\vortexHD\data\x6_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","CA_Override\attachments\vortexHD\data\x6_damage.rvmat","CA_Override\attachments\vortexHD\data\x6_glass_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","CA_Override\attachments\vortexHD\data\x6_destruct.rvmat","CA_Override\attachments\vortexHD\data\x6_glass_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\CA_Override\attachments\vortexHD\opticview_vortex6.p3d";
			preloadOpticType = "Preload2DOptic_Vortex6";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/1";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/1";
			discretefov[] = {"0.3926/1","0.3926/6"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_ris
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_ris_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_winchester
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_winchester_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class Preload2DOptic_VortexHD: Inventory_Base
	{
		scope = 0;
		model = "\CA_Override\attachments\vortexHD\opticview_vortex.p3d";
	};
	class Preload2DOptic_Vortex6: Inventory_Base
	{
		scope = 0;
		model = "\CA_Override\attachments\vortexHD\opticview_vortex6.p3d";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyvortexhd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsHunting";
		model = "\CA_Override\attachments\vortexHD\vortexhd.p3d";
	};
	class Proxyvortex6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "WeaponOptics";
		model = "\CA_Override\attachments\vortexHD\vortex6.p3d";
	};
};
