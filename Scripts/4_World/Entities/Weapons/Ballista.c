class CBM_Ballista_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
	
};

class CBM_Ballista408_Base extends CBM_Ballista_Base {};
class CBM_Ballista408_Black extends CBM_Ballista408_Base {};
class CBM_Ballista408_Tan extends CBM_Ballista408_Base {};
class CBM_Ballista408_Green extends CBM_Ballista408_Base {};
class CBM_Ballista408_White extends CBM_Ballista408_Base {};
