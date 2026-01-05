modded class UniversalLight extends Switchable_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if( parent.IsKindOf("CA_HTI_Base") ) 		
		{
			return true;
		}	
		
		return super.CanPutAsAttachment(parent);
	}
};