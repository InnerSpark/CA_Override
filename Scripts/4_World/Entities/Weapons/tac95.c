class Fresh_Tac95_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
};
class Fresh_Tac95 extends Fresh_Tac95_Base {};
class Fresh_Tac95_Carbon extends Fresh_Tac95_Base {};
class Fresh_Tac95_CarbonRed extends Fresh_Tac95_Base {};