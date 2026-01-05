class CA_M82A2_Base : RifleBoltLock_Base
{
	void CA_M82A2_Base()
	{
		ShowMuzzleFresh(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		EntityAI parent = item.GetHierarchyParent();
		if( parent && parent.FindAttachmentBySlotName("weaponMuzzleM82A2") != NULL )
		{
			HideMuzzleFresh(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		EntityAI parent = item.GetHierarchyParent();		
		if( parent && parent.FindAttachmentBySlotName("weaponMuzzleM82A2") == NULL )
		{
			ShowMuzzleFresh(this);
		}	
	}	
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
	
};

class CA_M82A2_Grey : CA_M82A2_Base {};
class CA_M82A2_Tan : CA_M82A2_Base {};
class CA_M82A2_Black : CA_M82A2_Base {};
class CA_M82A2_Gold : CA_M82A2_Base {};
class CA_M82A2_Blackice_Leaf : CA_M82A2_Base {};