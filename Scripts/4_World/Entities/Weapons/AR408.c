class CA_AR408_Base : RifleBoltLock_Base
{
	void CA_AR408_Base()
	{
		UnfoldOpticsFresh(this);
	}	
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			FoldOpticsFresh(this);
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		if (ItemOptics.Cast(item))
		{ 
			UnfoldOpticsFresh(this);
		}	
	}	
	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};
class CA_AR408 : CA_AR408_Base{};
class CA_AR50BMG : CA_AR408_Base{};