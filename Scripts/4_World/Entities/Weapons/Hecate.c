class CA_Hecate_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
};
class CA_Hecate extends CA_Hecate_Base {};