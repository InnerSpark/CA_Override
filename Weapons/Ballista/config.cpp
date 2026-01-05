////////////////////////////////////////////////////////////////////
//DeRap: Weapons\Ballista\config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Thu Feb 13 09:14:10 2025 : 'file' last modified on Fri Sep 13 07:24:51 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class CA_Override_Ballista
	{
		units[] = {};
		weapons[] = {"CA_Ballista408_Black","CA_Ballista408_Tan","CA_Ballista408_Green","CA_Ballista408_White"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Sounds_Effects"};
		magazines[] = {"CA_Mag_Ballista408_10rnd"};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class CA_Ballista_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		model = "CA_Override\Weapons\Ballista\ballista_new.p3d";
		itemSize[] = {10,3};
		weight = 7540;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		opticsFlare = 0;
		WeaponLength = 1.1;
		chamberSize = 1;
		chamberedRound = "";
		barrelArmor = 3;
		ejectType = 0;
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"color"};
		modes[] = {"Single"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 0;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Ballista\data\ballista.rvmat"}},{0.7,{"CA_Override\Weapons\Ballista\data\ballista.rvmat"}},{0.5,{"CA_Override\Weapons\Ballista\data\ballista_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Ballista\data\ballista_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Ballista\data\ballista_destruct.rvmat"}}};
				};
			};
		};
	};
	class CA_Ballista408_Base: CA_Ballista_Base
	{
		scope = 0;
		displayName = "FN Ballista";
		descriptionShort = "The FN Ballista represents the future of precision rifle systems. Designed to deliver surgically precise fire, chambered for .408 CheyTac. Modelled by Vanguard";
		attachments[] = {"weaponWrap","weaponOpticsHunting","suppressorImpro"};
		chamberableFrom[] = {"GCGN_Ammo_408Chey","Rev_Ammo_408"};
		magazines[] = {"CA_Mag_Ballista408_10rnd"};
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {2.25,2.25,1.25};
		initSpeedMultiplier = 1.0;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Ballista408Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"BallistaSilencedShot_SoundSet","LongHorn_silencerHomeMadeTail_SoundSet","LongHorn_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.00025;
			magazineSlot = "magazine";
		};
	};
	class CA_Ballista408_Black: CA_Ballista408_Base
	{
		scope = 2;
		color = "Black";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Ballista\data\ballista_black_co.paa"};
	};
	class CA_Ballista408_Tan: CA_Ballista408_Base
	{
		scope = 2;
		color = "Tan";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Ballista\data\ballista_tan_co.paa"};
	};
	class CA_Ballista408_Green: CA_Ballista408_Base
	{
		scope = 2;
		color = "Green";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Ballista\data\ballista_olive_co.paa"};
	};
	class CA_Ballista408_White: CA_Ballista408_Base
	{
		scope = 2;
		color = "White";
		hiddenSelectionsTextures[] = {"CA_Override\Weapons\Ballista\data\ballista_white_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class CA_Mag_Ballista408_10rnd: Magazine_Base
	{
		scope = 2;
		displayName = "FN Ballista Magazine";
		descriptionShort = "Detachable box magazine for the FN Ballista rifle. Holds up to 10 rounds of .408 CheyTac.";
		model = "CA_Override\Weapons\Ballista\ballista_mag.p3d";
		weight = 150;
		itemSize[] = {1,2};
		count = 10;
		ammo = "GCGN_Bullet_408Chey";
		ammoItems[] = {"Ammo_408Chey","Ammo_408","GCGN_Ammo_408Chey","Rev_Ammo_408"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"CA_Override\Weapons\Ballista\data\mag.rvmat"}},{0.7,{"CA_Override\Weapons\Ballista\data\mag.rvmat"}},{0.5,{"CA_Override\Weapons\Ballista\data\mag_damage.rvmat"}},{0.3,{"CA_Override\Weapons\Ballista\data\mag_damage.rvmat"}},{0.0,{"CA_Override\Weapons\Ballista\data\mag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class Ballista408_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\ballista\ballista_408_close",1}};
		volume = 1.0;
	};
	class Ballista408_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\ballista\ballista_408_mid",1}};
		volume = 0.8;
	};
	class Ballista408_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\ballista\ballista_408_far",1}};
		volume = 0.6;
	};
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class BallistasilencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Ballista\ballista_suppressed_close",1}};
		volume = 1.0;
	};
	class BallistasilencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Ballista\ballista_suppressed_mid",1}};
		volume = 0.8;
	};
	class BallistasilenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"CA_Override\Weapons\sounds\Ballista\ballista_suppressed_far",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Ballista408Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Ballista408_closeShot_SoundShader","Ballista408_midShot_SoundShader","Ballista408_distShot_SoundShader"};
	};
	class Rifle_silencerHomemade_Base_SoundSet;
	class BallistaSilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"BallistasilencedcloseShot_SoundShader","BallistasilencedmidShot_SoundShader","BallistasilenceddistShot_SoundShader"};
	};
};
