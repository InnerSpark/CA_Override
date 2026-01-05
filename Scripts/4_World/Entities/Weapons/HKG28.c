class Fresh_HKG28_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};
class Fresh_HKG28_Tan : Fresh_HKG28_Base{};
class Fresh_HKG28_Black : Fresh_HKG28_Base{};
class Fresh_HKG28_Kryptec_Mandrake : Fresh_HKG28_Base{};
class Fresh_HKG28_Galactic : Fresh_HKG28_Base{};
class Fresh_HKG28_Flecktarn : Fresh_HKG28_Base{};
class Fresh_HKG28_DigitalSky : Fresh_HKG28_Base{};
class Fresh_HKG28_DragonBreath : Fresh_HKG28_Base{};