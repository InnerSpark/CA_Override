class CA_CX20_Base : BoltActionRifle_InnerMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
	
	int weaponOpticsHunting = InventorySlots.GetSlotIdFromString("weaponOpticsHunting");
	int weaponOpticsPic = InventorySlots.GetSlotIdFromString("weaponOptics");

	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		switch(slotId)
		{
			case weaponOpticsHunting:
			{
				if ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL || this.FindAttachmentBySlotName("weaponOptics") == NULL)
					{
						return true;
					};
				if ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL || this.FindAttachmentBySlotName("weaponOptics") != NULL)
					{
						return false;
					};
				break;
			};
			case weaponOpticsPic:
            {
                if ( this.FindAttachmentBySlotName("weaponOptics") != NULL || this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL)
                    {
                        return true;
                    };
                if ( this.FindAttachmentBySlotName("weaponOptics") == NULL || this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL)
                    {
                        return false;
                    };
                break;
            };

		}
		return true;
	}
	override bool CanDisplayAttachmentSlot( string slot_name)
	{
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
};