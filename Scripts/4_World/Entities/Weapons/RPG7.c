class CA_RPG7_Base extends Rifle_Base
{
	void CA_RPG7_Base()
	{	
		UnfoldOpticsFresh(this);	
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Call(ShowRocket);
	}
		
	ref WeaponStateBase C0;
	ref	WeaponStateBase C1;
	ref	WeaponStateBase L0;
	ref	WeaponStateBase JF;
	
	override RecoilBase SpawnRecoilObject()
	{
		return new Mp133Recoil(this);
	}
	
	override void InitStateMachine()
	{
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_OPENED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE));
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD_CLIP, 0));
	
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_OPENED)));//????
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_START)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_END)));
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_LAST)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_JAM)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY)));
		
		//m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_UNCOCKED));

		// setup state machine
		// basic weapon states
		// close-locked-jammed | nobullet-bullet | nomag-mag
		// regexp: [CLJ][01][01]
		C0 = new SKS_CLO_BU0(this, NULL, SKSAnimState.DEFAULT);
		C1 = new SKS_CLO_BU1(this, NULL, SKSAnimState.DEFAULT);
		L0 = new SKS_OPN_BU0(this, NULL, SKSAnimState.OPENED);
		JF = new SKS_JAM_BU1(this, NULL, SKSAnimState.JAMMED);

		// unstable (intermediate) states
		WeaponChargingInnerMag Mech_C0 = new WeaponChargingInnerMag(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponChargingInnerMag Mech_L0 = new WeaponChargingInnerMag(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_OPENED));
		WeaponChargingInnerMag Mech_C1 = new WeaponChargingInnerMag(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		
		//Fire
		WeaponStateBase Trigger_C0 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY)); // cock without clip
		WeaponFireAndChamberFromInnerMagazine Trigger_C1 = new WeaponFireAndChamberFromInnerMagazine(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL) );
		WeaponStateBase Trigger_C1L = new WeaponFireLast(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_LAST));
		WeaponStateBase Trigger_L0 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		WeaponStateBase Trigger_JF = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		
		WeaponStateBase Trigger_C1J = new WeaponFireToJam(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_JAM); 
	
		//Unjam
		WeaponStateBase Unjam_JF = new WeaponUnjamming(this, NULL, WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_START));

		//Chambering
		LoopedChambering 	Chamber_C0 = new LoopedChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
		LoopedChambering 	Chamber_C1 = new LoopedChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
		LoopedChambering 	Chamber_L0 = new LoopedChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_OPENED, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
		
		//WeaponStateBase chmMag = new WeaponChamberFromAttMag(this, NULL, WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED);

		// events
		WeaponEventBase __M__ = new WeaponEventMechanism;
		WeaponEventBase __T__ = new WeaponEventTrigger;
		WeaponEventBase __TJ_ = new WeaponEventTriggerToJam;
		WeaponEventBase __U__ = new WeaponEventUnjam;
		WeaponEventBase __L__ = new WeaponEventLoad1Bullet;
		WeaponEventBase _fin_ = new WeaponEventHumanCommandActionFinished;
		WeaponEventBase _abt_ = new WeaponEventHumanCommandActionAborted;
		WeaponEventBase _rto_ = new WeaponEventReloadTimeout;
		WeaponEventBase _dto_ = new WeaponEventDryFireTimeout;

		m_fsm = new WeaponFSM();

		// order: Discharged-Charged | nobullet-bullet | nomag-mag
		// charging
		m_fsm.AddTransition(new WeaponTransition( C0,			__M__,	Mech_C1)); // charge from dischg nobullet nomag

		m_fsm.AddTransition(new WeaponTransition( C1,			__M__,	Mech_C1)); // charge from bullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_C1,		_fin_,	C0, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Mech_C1,		_fin_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Mech_C1,		_abt_,	C0, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Mech_C1,		_abt_,	C1));
		
		m_fsm.AddTransition(new WeaponTransition( L0, 			__M__,	Mech_L0)); // charge from dischg nobullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_L0,		_fin_,	C0, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Mech_L0,		_fin_,	C0));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_start,		_abt_,	L0));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_onBE,			_abt_,	C0));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_onBEFireOut,	_abt_,	C0));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_hideB,		_abt_,	C0));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_chamber,		_abt_,	C1));
			Mech_L0.AddTransition(new WeaponTransition( Mech_L0.m_onCK,			_abt_,	C0));
		
		
		

		// fire
		m_fsm.AddTransition(new WeaponTransition( C0, 			__T__,	Trigger_C0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C0,	_fin_,	C0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C0,	_dto_,	C0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C0,	_abt_,	C0));
		
		
		m_fsm.AddTransition(new WeaponTransition( C1,			__T__,	Trigger_C1, NULL, new WeaponGuardHasAmmoInnerMagazine(this)));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1,	_fin_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1,	_rto_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1,	_abt_,	C1));
		
		m_fsm.AddTransition(new WeaponTransition( C1,			__T__,	Trigger_C1L));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1L,	_fin_,	L0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1L,	_rto_,	L0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1L,	_abt_,	L0));
		
		m_fsm.AddTransition(new WeaponTransition( C1,			__TJ_,	Trigger_C1J));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1J,	_fin_,	JF ));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1J,	_rto_,	JF ));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_C1J,	_abt_,	JF ));
	
		m_fsm.AddTransition(new WeaponTransition( L0,			__T__,	Trigger_L0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_L0,	_fin_,	L0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_L0,	_dto_,	L0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_L0,	_abt_,	L0));
		
		m_fsm.AddTransition(new WeaponTransition( JF,			__T__,	Trigger_JF)); // opened fire.uncocked w mag
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JF,	_fin_,	JF));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JF,	_dto_,	JF));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JF,	_abt_,	JF));


		// load cartridge
		m_fsm.AddTransition(new WeaponTransition( C0,			__L__,	Chamber_C0));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_C0,	_fin_,	C1));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_start,		_abt_,	C0));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_eject,		_abt_,	L0));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_chamber,	_abt_,	C1));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_w4sb2,		_abt_,	C1));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_hideB,		_abt_,	C1));
			Chamber_C0.AddTransition(new WeaponTransition( Chamber_C0.m_endLoop,	_abt_,	C1));
		
		m_fsm.AddTransition(new WeaponTransition( C1,			__L__,	Chamber_C1, NULL, new GuardNot(new WeaponGuardInnerMagazineFullShareChamber(this))));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_C1,	_fin_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_C1,	_abt_,	C1));
		
		m_fsm.AddTransition(new WeaponTransition( L0,			__L__,	Chamber_L0, NULL, new GuardNot(new WeaponGuardInnerMagazineFullShareChamber(this))));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_L0,	_fin_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_L0,	_abt_,	L0, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_L0,	_abt_,	C1));

		
		// unjam
		m_fsm.AddTransition(new WeaponTransition( JF,			__U__,	Unjam_JF)); // unjam nomag
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_fin_,	JF, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_fin_,	C0, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_fin_,	C1));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_abt_,	JF, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_abt_,	C0, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JF,	_abt_,	C1));

		m_fsm.SetInitialState(C0);

		SelectionBulletHide();
		HideMagazine();

		m_fsm.Start();
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(FirearmActionLoadMultiBullet);

		RemoveAction(FirearmActionLoadBulletQuick); // Easy reload
		AddAction(FirearmActionLoadMultiBulletQuick); // Easy reload
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			FoldOpticsFresh(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			UnfoldOpticsFresh(this);
		}
	}	

	override float GetChanceToJam()
	{
		float chanceToJam = super.GetChanceToJam();
		
		chanceToJam = 0;
		
		return chanceToJam;		
	}	
	
	void ShowRocket()
	{
		if (!FindAttachmentBySlotName("RPG7Rocket"))
		{
			GetInventory().CreateAttachment("CA_DummyRocket");
		}

		CA_DummyRocket rocket = CA_DummyRocket.Cast(GetAttachmentByType(CA_DummyRocket));
		if (!rocket)
			return;

		for (int i = 0; i < GetMuzzleCount(); i++ )
		{
			if (IsChamberFull(i))
			{
				SetSimpleHiddenSelectionState(2, true);
				return;
			}
		}
		SetSimpleHiddenSelectionState(2, false);
	}

	override void OnFire(int muzzle_index)
	{
		ShowRocket();
	}
};

modded class WeaponFireLast 
{
	override void OnExit(WeaponEventBase e)
	{
		super.OnExit(e);
		if (m_weapon && m_weapon.IsInherited(CA_RPG7_Base))
			m_weapon.OnFire(m_weapon.GetCurrentMuzzle());
	}
};

modded class WeaponFireAndChamberNext 
{
	override void OnExit(WeaponEventBase e)
	{
		super.OnExit(e);
		if (m_weapon && m_weapon.IsInherited(CA_RPG7_Base))
			m_weapon.OnFire(m_weapon.GetCurrentMuzzle());
	}
};

class CA_RPG7 extends CA_RPG7_Base {};
class CA_DummyRocket extends DummyItem {};

class FreshRocketSimulation: Managed
{
	protected Particle 			m_ParMainSmoke;
	
	protected EffectSound 		m_BurningSound;
	int particle_id;
	vector rot;
	float size;
	
	void FreshRocketSimulation()
	{
		particle_id = ParticleList.ROCKET_SMOKE_TRAIL;
		rot = "0 0 0";
		size = 1;
	}
	
	void OnActivation(Entity rocket)
	{
		rocket.PlaySoundSetLoop( m_BurningSound, "roadflareLoop_SoundSet", 0, 0 );
	}

	void OnFire( Entity flare)
	{
		m_ParMainSmoke = ParticleManager.GetInstance().PlayOnObject( particle_id, flare);
		m_ParMainSmoke.ScaleParticleParam(EmitorParam.SIZE,size);
		m_ParMainSmoke.SetOrientation(rot);
		m_ParMainSmoke.SetWiggle( 7, 0.3);
	}
	
	bool OnNetworkTransformUpdate(out vector pos, out vector ypr)
	{
		Print(pos.ToString());
		
		return true;
	}

	void ~FreshRocketSimulation()
	{
		if (m_ParMainSmoke)
			m_ParMainSmoke.Stop();
		
		if(m_BurningSound)
			m_BurningSound.SoundStop();
	}
};

modded class FirearmActionLoadBullet
{
	override void OnEndClient(ActionData action_data)
	{
		super.OnEndClient(action_data);
		Print(action_data.m_MainItem);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
	
	override void OnEndServer(ActionData action_data)
	{
		super.OnEndServer(action_data);
		Print(action_data.m_MainItem);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
};

modded class FirearmActionLoadBulletQuick
{
	override void OnEndClient(ActionData action_data)
	{
		super.OnEndClient(action_data);

		Print(action_data.m_MainItem);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
	
	override void OnEndServer(ActionData action_data)
	{
		super.OnEndServer(action_data);
		Print(action_data.m_MainItem);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
};

modded class FirearmActionLoadMultiBulletQuick
{
	override void OnEndClient(ActionData action_data)
	{
		super.OnEndClient(action_data);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
	
	override void OnEndServer(ActionData action_data)
	{
		super.OnEndServer(action_data);
		if (action_data.m_MainItem && action_data.m_MainItem.IsInherited(CA_RPG7_Base))
			CA_RPG7_Base.Cast(action_data.m_MainItem).ShowRocket();
	}
};