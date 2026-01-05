class CA_M1000X_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
};
class CA_M1000X_Black : CA_M1000X_Base {};
class CA_M1000X_Tan : CA_M1000X_Base {};
class CA_M1000X_Green : CA_M1000X_Base {};
class CA_M1000X_White : CA_M1000X_Base {};