class stimpakt_red_Modf: ModifierBase
{
	int m_add_hp = 100;
	int m_add_blood = 5000;
	const int LIFETIME = 1;
	
	override void Init()
	{
		m_TrackActivatedTime =true;
		m_IsPersistent = true;
		m_ID 					= LRModifiers.MDF_stimpakt_red;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}

	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override void OnActivate(PlayerBase player)
	{
			
		int m_player_hp = player.GetHealth("GlobalHealth", "Health");
		int m_player_blood = player.GetHealth("GlobalHealth", "Blood");
		if(m_player_hp < 100-m_add_hp)
		{
			player.AddHealth("", "Health",  m_add_hp);
		} else {
			player.AddHealth("", "Health", 100-m_player_hp);
		};
		if(m_player_blood < 5000-m_add_blood)
		{
			player.AddHealth("", "Blood",  m_add_blood);
		} else {
			player.AddHealth("", "Blood", 5000-m_player_blood);
		};
		
		//if (player.GetBleedingManagerServer() )
		//{
		//	player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
		//	player.GetBleedingManagerServer().RemoveMostSignificantBleedingSource();
		//};
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		//if( player.GetNotifiersManager() ) player.GetNotifiersManager().DeactivateByType(eNotifiers.NTF_PILLS);
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	override void OnTick(PlayerBase player, float deltaT)
	{
		//player.GetStaminaHandler().SetStamina(100);
	}
	
};