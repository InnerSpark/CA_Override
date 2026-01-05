class Fresh_Tac50_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
	
};
class Fresh_Tac50_Tan extends Fresh_Tac50_Base{};
class Fresh_Tac50_Green extends Fresh_Tac50_Base{};
class Fresh_Tac50_Black extends Fresh_Tac50_Base{};
class Fresh_Tac50_Camo extends Fresh_Tac50_Base{};
class Fresh_Tac50_Obsidian extends Fresh_Tac50_Base{};