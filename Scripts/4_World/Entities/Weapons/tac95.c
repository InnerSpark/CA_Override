class CA_Tac95_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
};
class CA_Tac95 extends CA_Tac95_Base {};
class CA_Tac95_Carbon extends CA_Tac95_Base {};
class CA_Tac95_CarbonRed extends CA_Tac95_Base {};