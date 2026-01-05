////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Revolver50Cal\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:11 2025 : 'file' last modified on Fri Sep 13 07:24:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Revolver50BMG
	{
		units[] = {"Fresh_Revolver50BMG_Cylinder","Fresh_Revolver50BMG_Ejector"};
		weapons[] = {"Fresh_Revolver50BMG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols","DZ_Sounds_Effects"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Fresh_Revolver50BMG_Base: Pistol_Base
	{
		scope = 0;
		weight = 2500;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.63;
		barrelArmor = 1.758;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
		ejectType = 8;
		initSpeedMultiplier = 1.0;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {3.5,4.5,3.8};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"50CalRevShot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			reloadTime = 0.19;
			dispersion = 0.008;
			magazineSlot = "magazine";
		};
		class OpticsInfoMagnumBase: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class OpticsInfo: OpticsInfoMagnumBase{};
		muzzles[] = {"this","SecondMuzzle","ThirdMuzzle"};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			modes[] = {"Single"};
			magazines[] = {};
			chamberableFrom[] = {"Fresh_Ammo_50BMG","Fresh_Ammo_50BMG_AP","GCGN_Ammo_50Cal","TTC_Ammo_50BMG"};
			barrelArmor = 1.758;
			soundBullet[] = {};
			class Single: Mode_SemiAuto
			{
				soundSetShot[] = {"50CalRevShot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
				reloadTime = 0.19;
				dispersion = 0.009;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoMagnumBase{};
		};
		class ThirdMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_3";
			cartridgeVel = "nabojniceend_3";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 1;
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class Fresh_Revolver50BMG: Fresh_Revolver50BMG_Base
	{
		scope = 2;
		displayName = "The Statement";
		descriptionShort = "Any questions? Chambered for .50BMG";
		model = "CA_Override\Weapons\Revolver50Cal\rev.p3d";
		itemSize[] = {4,2};
		attachments[] = {"RevolverCylinder50Cal","RevolverEjector50Cal"};
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Revolver50Cal\data\revolver_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.7,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.5,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Fresh_Revolver50BMG_Cylinder: Inventory_Base
	{
		scope = 2;
		model = "CA_Override\Weapons\Revolver50Cal\proxy\cylinder.p3d";
		weight = 1;
		inventorySlot[] = {"RevolverCylinder50Cal"};
		simpleHiddenSelections[] = {"bullet","bullet_2","bullet_3","round"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.7,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.5,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class Rotate_Cylinder
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Rotate_Cylinder_Back
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class bullet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class bullet_2
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class bullet_3
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class bullet_nose
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class bullet_nose_2
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class bullet_nose_3
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};
	};
	class Fresh_Revolver50BMG_Ejector: Inventory_Base
	{
		scope = 2;
		model = "CA_Override\Weapons\Revolver50Cal\proxy\ejector.p3d";
		weight = 1;
		inventorySlot[] = {"RevolverEjector50Cal"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.7,{"CA_Override\Weapons\Revolver50Cal\data\revolver.rvmat"}},{0.5,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Revolver50Cal\data\revolver_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Revolver50Cal\data\revolver_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class Rotate_Ejector
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyrev: ProxyAttachment
	{
		scope = 0;
	};
	class Proxycylinder: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "RevolverCylinder50Cal";
		model = "CA_Override\Weapons\Revolver50Cal\proxy\cylinder.p3d";
	};
	class Proxyejector: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "RevolverEjector50Cal";
		model = "CA_Override\Weapons\Revolver50Cal\proxy\ejector.p3d";
	};
};
class CfgSlots
{
	class Slot_RevolverCylinder50Cal
	{
		name = "RevolverCylinder50Cal";
		displayName = "RevolverCylinder50Cal";
		ghostIcon = "";
		show = "false";
	};
	class Slot_RevolverEjector50Cal
	{
		name = "RevolverEjector50Cal";
		displayName = "RevolverEjector50Cal";
		ghostIcon = "";
		show = "false";
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class 50CalRevcloseShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\revolver50cal\50calrev_close",1}};
		volume = 1;
	};
	class 50CalRevmidShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\revolver50cal\50calrev_mid",1}};
		volume = 0.7;
	};
	class 50CalRevdistShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\revolver50cal\50calrev_far",1}};
		volume = 0.5;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class 50CalRevShot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"50CalRevcloseShot_SoundShader","50CalRevmidShot_SoundShader","50CalRevdistShot_SoundShader"};
	};
};
