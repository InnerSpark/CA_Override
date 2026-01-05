class Fresh_MG338_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
};

class Fresh_MG338_Tan : Fresh_MG338_Base {};