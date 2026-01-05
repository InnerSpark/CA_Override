class Fresh_M82A2_Base : RifleBoltLock_Base
{
	void Fresh_M82A2_Base()
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

class Fresh_M82A2_Grey : Fresh_M82A2_Base {};
class Fresh_M82A2_Tan : Fresh_M82A2_Base {};
class Fresh_M82A2_Black : Fresh_M82A2_Base {};
class Fresh_M82A2_Gold : Fresh_M82A2_Base {};
class Fresh_M82A2_Blackice_Leaf : Fresh_M82A2_Base {};