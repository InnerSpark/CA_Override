class CA_HTI_Base : Rifle_Base
{
	ref WeaponStableState CX00; 
	ref	WeaponStableState CX10;
	ref	WeaponStableState CX01;
	ref	WeaponStableState CX11;
	ref	WeaponStableState CFX0;
	ref	WeaponStableState CFX1;
	ref	WeaponStableState JFX0;
	ref	WeaponStableState JFX1;
	
	override void InitStateMachine()
	{

		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_DETACH)));

		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, GetWeaponSpecificCommand(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_CLOSED)));
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED)));
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_START)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_END)));
		
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_JAM)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL)));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY)));

		CX00 = new BAREM_CLO_BU0_MA0(this, NULL, RBLAnimState.DEFAULT);
		CX10 = new BAREM_CLO_BU1_MA0(this, NULL, RBLAnimState.DEFAULT);
		CX01 = new BAREM_CLO_BU0_MA1(this, NULL, RBLAnimState.DEFAULT);
		CX11 = new BAREM_CLO_BU1_MA1(this, NULL, RBLAnimState.DEFAULT);
		CFX0 = new BAREM_CLO_BUF_MA0(this, NULL, RBLAnimState.DEFAULT);
		CFX1 = new BAREM_CLO_BUF_MA1(this, NULL, RBLAnimState.DEFAULT);
		JFX0 = new BAREM_JAM_BU1_MA0(this, NULL, RBLAnimState.JAMMED);
		JFX1 = new BAREM_JAM_BU1_MA1(this, NULL, RBLAnimState.JAMMED);

		WeaponStateBase Mech_CX00 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponStateBase Mech_CX01 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponStateBase Mech_CX10 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponStateBase Mech_CX11 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponStateBase Mech_CFX0 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		WeaponStateBase Mech_CFX1 = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, GetWeaponSpecificCommand(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
	
		WeaponStateBase Trigger_CX00 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY)); // cock without clip
		WeaponStateBase Trigger_CX10 = new WeaponFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL)); // cock with clip
		WeaponStateBase Trigger_CX11 = new WeaponFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL));
		WeaponStateBase Trigger_CX01 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		WeaponStateBase Trigger_CFX0 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		WeaponStateBase Trigger_CFX1 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		WeaponStateBase Trigger_JFX0 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
		WeaponStateBase Trigger_JFX1 = new WeaponDryFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_DRY));
	
		WeaponStateBase Trigger_CX10J = new WeaponFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_JAM)); // cock with clip
		WeaponStateBase Trigger_CX11J = new WeaponFire(this, NULL, WeaponActions.FIRE, GetWeaponSpecificCommand(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_JAM));

		WeaponStateBase Unjam_JFX0 = new WeaponUnjamming(this, NULL, WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_START));
		WeaponStateBase Unjam_JFX1 = new WeaponUnjamming(this, NULL, WeaponActions.UNJAMMING, GetWeaponSpecificCommand(WeaponActions.UNJAMMING, WeaponActionUnjammingTypes.UNJAMMING_START));


		WeaponChambering Chamber_CX00 = new WeaponChambering(this, NULL, WeaponActions.CHAMBERING, GetWeaponSpecificCommand(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_CLOSED));
		WeaponChambering Chamber_CX01 = new WeaponChambering(this, NULL, WeaponActions.CHAMBERING, GetWeaponSpecificCommand(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_CLOSED));
		WeaponChambering Chamber_CFX0 = new WeaponChambering(this, NULL, WeaponActions.CHAMBERING, GetWeaponSpecificCommand(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_CLOSED));
		WeaponChambering Chamber_CFX1 = new WeaponChambering(this, NULL, WeaponActions.CHAMBERING, GetWeaponSpecificCommand(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_CLOSED));

		WeaponAttachMagazine Attach_CX00 = new WeaponAttachMagazine(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET));
		WeaponAttachMagazine Attach_CFX0 = new WeaponAttachMagazine(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET));
		WeaponAttachMagazine Attach_CX10 = new WeaponAttachMagazine(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET));
		WeaponAttachMagazine Attach_JFX0 = new WeaponAttachMagazine(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET));
	
		WeaponReplacingMagAndChamberNext Reload_CX11 = new WeaponReplacingMagAndChamberNext(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET));
		WeaponReplacingMagAndChamberNext Reload_CX01 = new WeaponReplacingMagAndChamberNext(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET));
		WeaponReplacingMagAndChamberNext Reload_CFX1 = new WeaponReplacingMagAndChamberNext(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET));
		WeaponReplacingMagAndChamberNext Reload_JFX1 = new WeaponReplacingMagAndChamberNext(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET));
	
		WeaponDetachingMag Detach_CX11 = new WeaponDetachingMag(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_DETACH));
		WeaponDetachingMag Detach_CX01 = new WeaponDetachingMag(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_DETACH));
		WeaponDetachingMag Detach_CFX1 = new WeaponDetachingMag(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_DETACH));
		WeaponDetachingMag Detach_JFX1 = new WeaponDetachingMag(this, NULL, WeaponActions.RELOAD, GetWeaponSpecificCommand(WeaponActions.RELOAD, WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_DETACH));
		

		WeaponEventBase __M__ = new WeaponEventMechanism;
		WeaponEventBase __T__ = new WeaponEventTrigger;
		WeaponEventBase __TJ_ = new WeaponEventTriggerToJam;
		WeaponEventBase __U__ = new WeaponEventUnjam;
		WeaponEventBase __L__ = new WeaponEventLoad1Bullet;
		WeaponEventBase __A__ = new WeaponEventAttachMagazine;
		WeaponEventBase __D__ = new WeaponEventDetachMagazine;
		WeaponEventBase __S__ = new WeaponEventSwapMagazine;
		WeaponEventBase _fin_ = new WeaponEventHumanCommandActionFinished;
		WeaponEventBase _abt_ = new WeaponEventHumanCommandActionAborted;
		WeaponEventBase _rto_ = new WeaponEventReloadTimeout;
		WeaponEventBase _dto_ = new WeaponEventDryFireTimeout;

		m_fsm = new WeaponFSM();

		m_fsm.AddTransition(new WeaponTransition( CX00,				__M__,	Mech_CX00)); // charge from dischg nobullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX00,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX00,		_abt_,	CX00));

		m_fsm.AddTransition(new WeaponTransition( CX10,				__M__,	Mech_CX10)); // charge from bullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX10,		_fin_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX10,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX10,		_abt_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX10,		_abt_,	CX10));
		
		m_fsm.AddTransition(new WeaponTransition( CFX0,				__M__,	Mech_CFX0)); // charge from bullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX0,		_fin_,	CFX0, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX0,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX0,		_abt_,	CFX0, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX0,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( CX11,				__M__,	Mech_CX11)); // charge from dischg nobullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX11,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX11,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX11,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX11,		_abt_,	CX11));
		
		m_fsm.AddTransition(new WeaponTransition( CX01,				__M__,	Mech_CX01)); // charge from dischg nobullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX01,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX01,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX01,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CX01,		_abt_,	CX11));
		
		m_fsm.AddTransition(new WeaponTransition( CFX1,				__M__,	Mech_CFX1)); // charge from dischg nobullet nomag
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_fin_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_abt_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Mech_CFX1,		_abt_,	CX11));
		
		// fire
		m_fsm.AddTransition(new WeaponTransition( CX00,				__T__,	Trigger_CX00));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX00,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX00,		_dto_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX00,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( CX01,				__T__,	Trigger_CX01));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX01,		_fin_,	CX01));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX01,		_dto_,	CX01));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX01,		_abt_,	CX01));
		
		m_fsm.AddTransition(new WeaponTransition( CFX0,				__T__,	Trigger_CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX0,		_fin_,	CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX0,		_dto_,	CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX0,		_abt_,	CFX0));
		
		m_fsm.AddTransition(new WeaponTransition( CFX1,				__T__,	Trigger_CFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX1,		_fin_,	CFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX1,		_dto_,	CFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CFX1,		_abt_,	CFX1));
		
		m_fsm.AddTransition(new WeaponTransition( JFX0,				__T__,	Trigger_JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX0,		_fin_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX0,		_dto_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX0,		_abt_,	JFX0));
		
		m_fsm.AddTransition(new WeaponTransition( JFX1,				__T__,	Trigger_JFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX1,		_fin_,	JFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX1,		_dto_,	JFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_JFX1,		_abt_,	JFX1));
		
		m_fsm.AddTransition(new WeaponTransition( CX10,				__T__,	Trigger_CX10));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10,		_fin_,	CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10,		_rto_,	CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10,		_abt_,	CFX0));
		
		m_fsm.AddTransition(new WeaponTransition( CX11,				__T__,	Trigger_CX11));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11,		_fin_,	CFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11,		_rto_,	CFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11,		_abt_,	CFX1));
		
		m_fsm.AddTransition(new WeaponTransition( CX11,				__TJ_,	Trigger_CX11J));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11J,	_fin_,	JFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11J,	_rto_,	JFX1));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX11J,	_abt_,	JFX1));
		
		m_fsm.AddTransition(new WeaponTransition( CX10,				__TJ_,	Trigger_CX10J ));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10J,	_fin_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10J,	_rto_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_CX10J,	_abt_,	JFX0));
		

		m_fsm.AddTransition(new WeaponTransition( CX00,				__L__,	Chamber_CX00)); // chamber from closed=1
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX00,		_fin_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX00,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX00,		_abt_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX00,		_abt_,	CX10));

		m_fsm.AddTransition(new WeaponTransition( CX01,				__L__,	Chamber_CX01)); // chamber from closed charged
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX01,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX01,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX01,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CX01,		_abt_,	CX11));
		
		m_fsm.AddTransition(new WeaponTransition( CFX0,				__L__,	Chamber_CFX0)); // chamber from closed=1
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_fin_,	CFX0, NULL, new WeaponGuardCurrentChamberFiredOut(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_fin_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_abt_,	CFX0, NULL, new WeaponGuardCurrentChamberFiredOut(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_abt_,	CX00, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX0,		_abt_,	CX10));

		m_fsm.AddTransition(new WeaponTransition( CFX1,				__L__,	Chamber_CFX1)); // chamber from closed charged
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_fin_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_abt_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this) ));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_CFX1,		_abt_,	CX11));

		m_fsm.AddTransition(new WeaponTransition( CX00,				__A__,	Attach_CX00, NULL, new WeaponGuardCanAttachMag(this))); // attach from CLO/b0/m0
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_fin_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_fin_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_abt_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_abt_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX00,		_abt_,	CX00));
	
		m_fsm.AddTransition(new WeaponTransition( CX10,				__A__,	Attach_CX10, NULL, new WeaponGuardCanAttachMag(this))); // attach from CLO/b1/m0
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX10,		_fin_,	CX11, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX10,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX10,		_abt_,	CX11, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CX10,		_abt_,	CX10));

		
		m_fsm.AddTransition(new WeaponTransition( CFX0,				__A__,	Attach_CFX0, NULL, new WeaponGuardCanAttachMag(this))); // attach from CLO/b1/m0
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_fin_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_fin_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_fin_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_abt_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_abt_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_abt_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_CFX0,		_abt_,	CX00));
			
		
		m_fsm.AddTransition(new WeaponTransition( JFX0,				__A__,	Attach_JFX0, NULL, new WeaponGuardCanAttachMag(this))); // attach from JAM/b1/m0
		m_fsm.AddTransition(new WeaponTransition(  Attach_JFX0,		_fin_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_JFX0,		_fin_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Attach_JFX0,		_abt_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Attach_JFX0,		_abt_,	JFX0));

		m_fsm.AddTransition(new WeaponTransition( CX11,				__S__,	Reload_CX11, NULL, new WeaponGuardCanSwapMag(this))); // swap in Chg/b1/m1
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX11,		_fin_,	CX11, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX11,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX11,		_abt_,	CX11, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX11,		_abt_,	CX10));
		
		m_fsm.AddTransition(new WeaponTransition( CX01,				__S__,	Reload_CX01, NULL, new WeaponGuardCanSwapMag(this))); // swap in CLO/b0/m1
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_fin_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_fin_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_abt_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_abt_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CX01,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( CFX1,				__S__,	Reload_CFX1, NULL, new WeaponGuardCanSwapMag(this))); // swap in CLO/b0/m1
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_fin_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_fin_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_fin_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_abt_,	CFX1, NULL, new WeaponGuardCurrentChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_abt_,	CX11, NULL, new WeaponGuardCurrentChamberFull(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_abt_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_CFX1,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( JFX1,				__S__,	Reload_JFX1, NULL, new WeaponGuardCanSwapMag(this))); // swap in Chg/b1/m1
		m_fsm.AddTransition(new WeaponTransition(  Reload_JFX1,		_fin_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_JFX1,		_fin_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Reload_JFX1,		_abt_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Reload_JFX1,		_abt_,	JFX0));
	

		// detach magazine
		m_fsm.AddTransition(new WeaponTransition( CX11,				__D__,	Detach_CX11, NULL, new WeaponGuardCanDetachMag(this))); // detach from Chg/b1/m1
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX11,		_fin_,	CX10));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX11,		_abt_,	CX11, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX11,		_abt_,	CX10));
		
		
		m_fsm.AddTransition(new WeaponTransition( CX01,				__D__,	Detach_CX01, NULL, new WeaponGuardCanDetachMag(this))); // detach from Chg/b0/m1
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX01,		_fin_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX01,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX01,		_abt_,	CX01, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CX01,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( CFX1,				__D__,	Detach_CFX1, NULL, new WeaponGuardCanDetachMag(this))); // detach from Chg/b0/m1
		m_fsm.AddTransition(new WeaponTransition(  Detach_CFX1,		_fin_,	CFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CFX1,		_fin_,	CFX0));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CFX1,		_abt_,	CFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_CFX1,		_abt_,	CFX0));
		
		m_fsm.AddTransition(new WeaponTransition( JFX1,				__D__,	Detach_JFX1, NULL, new WeaponGuardCanDetachMag(this))); // detach from CLO/b1/m1 jammed
		m_fsm.AddTransition(new WeaponTransition(  Detach_JFX1,		_fin_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_JFX1,		_fin_,	JFX0));
		m_fsm.AddTransition(new WeaponTransition(  Detach_JFX1,		_abt_,	JFX1, NULL, new WeaponGuardHasMag(this)));
		m_fsm.AddTransition(new WeaponTransition(  Detach_JFX1,		_abt_,	JFX0));
		
		m_fsm.AddTransition(new WeaponTransition( JFX0,				__U__,	Unjam_JFX0)); // unjam nomag
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX0,		_fin_,	JFX0, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX0,		_fin_,	CX00));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX0,		_abt_,	JFX0, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX0,		_abt_,	CX00));
		
		m_fsm.AddTransition(new WeaponTransition( JFX1,				__U__,	Unjam_JFX1)); // unjam with mag with ammo
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_fin_,	JFX1, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_fin_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_fin_,	CX11));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_abt_,	JFX1, NULL, new WeaponGuardJammed(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_abt_,	CX01, NULL, new WeaponGuardCurrentChamberEmpty(this)));
		m_fsm.AddTransition(new WeaponTransition(  Unjam_JFX1,		_abt_,	CX11));

		SetInitialState(CX00);

		SelectionBulletHide();
		HideMagazine();

		m_fsm.Start();
		
	}
	
	override float GetChanceToJam() 
	{
		return 0.0;
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SV98Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" ); 
		inventory.CreateInInventory( "ACOGOptic" );
		inventory.CreateInInventory( "CA_HTI_Suppressor" ); 
		
		SpawnAttachedMagazine("CA_HTI_Mag_5Rnd");
	}
	
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name= InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL );
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL );
		}
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(FirearmActionUnjam);
		AddAction(FirearmActionAttachMagazine);
		AddAction(FirearmActionLoadBullet);
		AddAction(FirearmActionMechanicManipulate);
		AddAction(ActionTurnOnWeaponFlashlight);
		AddAction(ActionTurnOffWeaponFlashlight);
		AddAction(FirearmActionAttachMagazineQuick); 
		AddAction(FirearmActionLoadBulletQuick); 
	}
};
class CA_HTI: CA_HTI_Base {};
class CA_HTI_FDE: CA_HTI_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "ACOGOptic" );
		inventory.CreateInInventory( "CA_HTI_Suppressor_FDE" );
		
		SpawnAttachedMagazine("CA_HTI_Mag_5Rnd");
	}
};
class CA_HTI_Suppressor extends SuppressorBase
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("suppressorImpro") == NULL )
		{
			return true;
		}
		return false;
	}
}
class CA_HTI_Suppressor_FDE: CA_HTI_Suppressor{};