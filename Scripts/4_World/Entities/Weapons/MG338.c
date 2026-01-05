class CA_MG338_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};

class CA_MG338_Tan : CA_MG338_Base {};