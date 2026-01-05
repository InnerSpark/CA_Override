modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterFireArms(pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("CA_BFG50_Base", "CA_Override/Scripts/4_World/anims/bfg50.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m79.anm", "dz/anims/anm/player/reloads/m79/w_m79_states.anm");
		pType.AddItemInHandsProfileIK("CA_PKP_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("CA_HTI_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
		pType.AddItemInHandsProfileIK("CA_DSR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
		pType.AddItemInHandsProfileIK("CA_PTRD_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_SV98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SV98.anm","dz/anims/anm/player/reloads/SV98/w_SV98_states.anm");
		pType.AddItemInHandsProfileIK("CA_MCX_Spear_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("CA_XM250_Base",	"dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
		
		array<string> BFG50BoneRemap = { "release", "Weapon_Bone_02", "barrel", "Weapon_Bone_01", "trigger", "Weapon_Trigger","extractor","Weapon_Bone_03","bullet", "Weapon_Bullet", "charging", "Weapon_Bone_04", };
		pType.AddItemBoneRemap("CA_BFG50_Base", BFG50BoneRemap);
	 
	};
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
    	super.RegisterOneHanded(pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("CA_Mag_PKP_100Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
		pType.AddItemInHandsProfileIK("CA_Optics_VortexHD", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		pType.AddItemInHandsProfileIK("CA_Optics_Vortex_X6", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
		pType.AddItemInHandsProfileIK("CA_HTI_Mag_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("CA_HTI_Suppressor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("CA_DSR_Mag_3Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("CA_DSR_Suppressor", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
		pType.AddItemInHandsProfileIK("CA_MCX_Spear_Mag_Base", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("CA_Mag_XM250_200Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("AmmoBox_277_20Rnd", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/556x20_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("Ammo_277", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/556x45_LooseRounds.anm");
		pType.AddItemInHandsProfileIK("CA_Suppressor_277_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");
	}	
};		