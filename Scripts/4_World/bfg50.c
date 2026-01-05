modded class Weapon_Base
{
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        if  ( attachment.IsKindOf("ItemOptics") )
        {            
            if ( FindAttachmentBySlotName("weaponOptics") != NULL || FindAttachmentBySlotName("weaponOpticsAK") != NULL || FindAttachmentBySlotName("weaponOpticsHunting") != NULL || FindAttachmentBySlotName("weaponOpticsLRS") != NULL )
            {
                return false;
            }    
        }  
        return super.CanReceiveAttachment(attachment, slotId);
    }
	
	bool IsBipodDeployed()
	{
		CA_Bipod_Base bipod = Bipod();
		return (bipod && bipod.IsOpen());
	}

	CA_Bipod_Base Bipod()
	{
		return CA_Bipod_Base.Cast(FindAttachmentBySlotName("weaponBipod"));
	}

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipod);
		AddAction(ActionFoldBipod);	
	};
};

class CA_BFG50_Base extends RifleSingleShotManual_Base
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
			return !(attachment.IsKindOf("CA_Bipod"));
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
			GetInventory().CreateAttachment("CA_Bipod");
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
		
		GetInventory().CreateAttachment("ACOGOptic");
	}
};

class CA_BFG50 extends CA_BFG50_Base{};
class CA_BFG50_Camo_Sand extends CA_BFG50{};
class CA_BFG50_Camo_Green extends CA_BFG50{};