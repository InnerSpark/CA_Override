class CA_Tac50_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    }
	
};
class CA_Tac50_Tan extends CA_Tac50_Base{};
class CA_Tac50_Green extends CA_Tac50_Base{};
class CA_Tac50_Black extends CA_Tac50_Base{};
class CA_Tac50_Camo extends CA_Tac50_Base{};
class CA_Tac50_Obsidian extends CA_Tac50_Base{};