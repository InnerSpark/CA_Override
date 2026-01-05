class Fresh_M1000X_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
};
class Fresh_M1000X_Black : Fresh_M1000X_Base {};
class Fresh_M1000X_Tan : Fresh_M1000X_Base {};
class Fresh_M1000X_Green : Fresh_M1000X_Base {};
class Fresh_M1000X_White : Fresh_M1000X_Base {};