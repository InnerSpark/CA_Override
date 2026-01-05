class ActionUseStimpaktRed: ActionInjectSelf
{	
	override void ApplyModifiers( ActionData action_data )
	{
		//action_data.m_MainItem.OnApply(action_data.m_Player);
		//action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_HEART_ATTACK);
		action_data.m_MainItem.TransferModifiers(action_data.m_Player);
		action_data.m_Player.GetModifiersManager().ActivateModifier(LRModifiers.MDF_stimpakt_red);
	}
};

class ActionUseTargetStimpaktRed: ActionInjectTarget
{
	void ActionInjectEpinephrineTarget()
	{
	}
		
	override void ApplyModifiers( ActionData action_data )
	{
		//action_data.m_MainItem.OnApply( PlayerBase.Cast(action_data.m_Target.GetObject()));
		//PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		//ntarget.GiveShock(100);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		ntarget.GetModifiersManager().ActivateModifier(LRModifiers.MDF_stimpakt_red);
	}
};