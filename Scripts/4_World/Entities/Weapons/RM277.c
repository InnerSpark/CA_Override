class Fresh_RM277_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
};
class Fresh_RM277: Fresh_RM277_Base {};