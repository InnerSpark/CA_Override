//#define M18TEARGAS_DEBUG

/*class Croco_Grenade_Teargas : M18SmokeGrenade_ColorBase
{
	// configurable min/max values for random shock induced on update
	protected const float MAX_SHOCK_INFLICTED = -0.2;
	protected const float MIN_SHOCK_INFLICTED = -0.1;

	protected const int EFFECT_RADIUS = 5;

	//protected TearGasTrigger m_Trigger;
	protected Shape m_AOEShape;

	void M18TearGasGrenade()
	{
		SetFuseDelay(2.5);
		SetPinnable(true);

		// set particles for grenade
		SetParticleSmokeStart(ParticleList.GRENADE_M18_BLUE_FULL);
		SetParticleSmokeLoop(ParticleList.GRENADE_M18_BLUE_FULL);
		SetParticleSmokeEnd(ParticleList.GRENADE_M18_BLUE_FULL);

		#ifdef M18TEARGAS_DEBUG
		SetEventMask(EntityEvent.POSTSIMULATE);
		#endif
	}

	void ~M18TearGasGrenade()
	{
		//if (m_Trigger)
		//	GetGame().ObjectDelete(m_Trigger);

		#ifdef M18TEARGAS_DEBUG
		ShapeCleanup();
		#endif
	}

	#ifdef M18TEARGAS_DEBUG
	override void EOnPostSimulate(IEntity other, float timeSlice)
	{
		if (GetCompEM() && !GetCompEM().IsWorking())
		{
			ShapeCleanup();
			return;
		}

		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			ShapeCleanup();
			m_AOEShape = Shape.CreateSphere(COLOR_BLUE, ShapeFlags.TRANSP | ShapeFlags.NOZWRITE, GetPosition(), EFFECT_RADIUS);
		}
	}
	#endif

	override void OnWorkStart()
	{
		super.OnWorkStart();

	/* 	m_Trigger = TearGasTrigger.Cast(GetGame().CreateObject("TearGasTrigger", GetPosition(), false, false, false));

		if (m_Trigger)
		{
			m_Trigger.SetPosition(GetPosition());
			//AddChild(m_Trigger, -1);
		} 
	}

	override void OnWorkStop()
	{
		super.OnWorkStop();

		//if (m_Trigger)
		//	GetGame().ObjectDelete(m_Trigger);

		#ifdef M18TEARGAS_DEBUG
		ShapeCleanup();
		#endif
	}

	override void OnWork(float consumed_energy)
	{
		super.OnWork(consumed_energy);

		//if (!m_Trigger)
		//	return;

		if (!GetGame().IsServer() || !GetGame().IsMultiplayer())
			return;

		array<Object> insiders = {};
		GetGame().GetObjectsAtPosition3D(GetPosition(), EFFECT_RADIUS, insiders, null);

		foreach (auto insider : insiders)
		{
			PlayerBase player;
			if (!PlayerBase.CastTo(player, insider))
				continue;

			if (IsBioProtected(player)) // ignore players whering bio masks
				continue;

			if (!player.IsUnconscious() || !player.IsAlive())
				player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);

			player.GiveShock(Math.RandomFloatInclusive(MAX_SHOCK_INFLICTED, MIN_SHOCK_INFLICTED));
		}
	}

	// override with original Grenade_Base logic, to prevent immediate activation
	override void Unpin()
	{
		m_Pinned = false;

		if (GetGame().IsServer())
			SetSynchDirty();

		OnActivateStarted();
	}

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionPin); // re-assign pin action
	}

	protected bool IsBioProtected(Man player)
	{
		EntityAI mask = player.GetInventory().FindAttachment(InventorySlots.MASK);
		if (!mask) return false;

		// check if mask has protection against bio in item config
		string protection_path = "CfgVehicles " + mask.GetType() + " Protection ";
		return GetGame().ConfigGetInt(protection_path + "biological");
	}

	#ifdef M18TEARGAS_DEBUG
	protected void ShapeCleanup()
	{
		if (m_AOEShape)
		{
			m_AOEShape.Destroy();
			m_AOEShape = null;
		}
	}
	#endif
}*/