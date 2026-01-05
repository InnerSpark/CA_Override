class CA_DSR_Base : BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		PlayerBase player =  PlayerBase.Cast(GetGame().GetPlayer());

		if (IsBipodDeployed() && Bipod().IsBipodInUse())
		{
			return new BoltActionBipodRecoil(this);
		}
		else return new SV98Recoil(this);	
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDeployBipod);
		AddAction(ActionFoldBipod);
	}
	
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( attachment && attachment.GetInventory() && GetInventory() )
		{
			return !(attachment.IsKindOf("CA_DSR_Bipod"));
		}
		return super.CanReleaseAttachment( attachment );
	}
	
	override void EEInit()
	{
		super.EEInit();
		
		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Call( AssembleGun );
	}
	
	const string ATT_SLOT_BTTSTCK = "weaponBipod";
	override void AssembleGun()
	{
		if ( !FindAttachmentBySlotName(ATT_SLOT_BTTSTCK))
		{
			GetInventory().CreateAttachment("CA_DSR_Bipod");
		}
	}
	
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name= InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponBipod" )
		{
            return ( this.FindAttachmentBySlotName("weaponBipod") == NULL );
		}
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL );
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL );
		}
		return true;
	}
	
	override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
		
		GetInventory().CreateAttachment("HuntingOptic");
		GetInventory().CreateAttachment("CA_DSR_Suppressor");
	}
};
class CA_DSR: CA_DSR_Base {};
class CA_DSR_camo1: CA_DSR_Base {};
class CA_DSR_camo2: CA_DSR_Base {};
class CA_DSR_camo3: CA_DSR_Base {};

class CA_DSR_Suppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL && parent.FindAttachmentBySlotName("weaponBayonet") == NULL )
		{
			return true;
		}
		return false;
	}
};
class CA_DSR_Suppressor_FDE: CA_DSR_Suppressor {};
