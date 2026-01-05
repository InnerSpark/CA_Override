class CA_RM277_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};
class CA_RM277: CA_RM277_Base {};