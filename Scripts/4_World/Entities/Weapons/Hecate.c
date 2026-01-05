class Fresh_Hecate_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
};
class Fresh_Hecate extends Fresh_Hecate_Base {};