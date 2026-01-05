class CA_PTRD_Base : BoltActionRifle_ExternalMagazine_Base
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
			return !(attachment.IsKindOf("CA_PTRD_Bipod"));
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
			GetInventory().CreateAttachment("CA_PTRD_Bipod");
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
		if ( slot_name == "magazine" )
		{
            return false;
		}
		return true;
	}
	
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && HuntingOptic.Cast(optic) || StarlightOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
	
	override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
		
		GetInventory().CreateAttachment("ACOGOptic");
	}
};
class CA_PTRD: CA_PTRD_Base {};