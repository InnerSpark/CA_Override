class CA_HKG28_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};
class CA_HKG28_Tan : CA_HKG28_Base{};
class CA_HKG28_Black : CA_HKG28_Base{};
class CA_HKG28_Kryptec_Mandrake : CA_HKG28_Base{};
class CA_HKG28_Galactic : CA_HKG28_Base{};
class CA_HKG28_Flecktarn : CA_HKG28_Base{};
class CA_HKG28_DigitalSky : CA_HKG28_Base{};
class CA_HKG28_DragonBreath : CA_HKG28_Base{};