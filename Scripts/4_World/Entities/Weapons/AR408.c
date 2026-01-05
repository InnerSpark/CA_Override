class Fresh_AR408_Base : RifleBoltLock_Base
{
	void Fresh_AR408_Base()
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
class Fresh_AR408 : Fresh_AR408_Base{};
class Fresh_AR50BMG : Fresh_AR408_Base{};