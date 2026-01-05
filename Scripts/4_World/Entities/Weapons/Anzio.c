class CA_Anzio_Base : BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }	
};