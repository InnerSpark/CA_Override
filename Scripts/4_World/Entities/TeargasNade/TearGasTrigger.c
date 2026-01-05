class TearGasTrigger : ManTrigger
{
	const int RADIUS = 5;

	private vector _mins, _maxs;

	void TearGasTrigger()
	{
		#ifdef M18TEARGAS_DEBUG
		Print("TearGasTrigger - Created");
		#endif
	}

	void ~TearGasTrigger()
	{
		#ifdef M18TEARGAS_DEBUG
		Print("TearGasTrigger - Destroyed");
		#endif
	}

	override void EOnInit(IEntity other, int extra)
	{
		_mins = Vector(-RADIUS, -RADIUS, -RADIUS);
		_maxs = Vector(RADIUS, RADIUS, RADIUS);

		SetExtents(_mins, _maxs);
	}

	override void EOnFrame(IEntity other, float timeSlice)
	{
		UpdateInsiders(TIMEOUT);

		#ifdef M18TEARGAS_DEBUG
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			if (shape)
			{
				shape.Destroy();
				shape = null;
			}

			shape = Shape.CreateSphere(COLOR_BLUE, ShapeFlags.TRANSP | ShapeFlags.NOZWRITE, GetPosition(), RADIUS);
		}
		#endif
	}

	override void EOnTouch(IEntity other, int extra)
	{
		PlayerBase player;
		if (PlayerBase.CastTo(player, other) && player.IsAlive())
 			AddInsider(player);
	}

	override void OnEnter(Object obj)
	{
		#ifdef M18TEARGAS_DEBUG
		Print("TearGasTrigger - Entered");
		Print(obj);
		#endif
	}

	override void OnLeave(Object obj)
	{
		#ifdef M18TEARGAS_DEBUG
		Print("TearGasTrigger - Left");
		Print(obj);
		#endif
	}
}