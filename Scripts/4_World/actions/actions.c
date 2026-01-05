class ActionDeployBipod: ActionSingleUseBase
{
	CA_Bipod_Base m_Bipod;
	
	void ActionDeployBipod() m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHBARREL;
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override typename GetInputType() return ToggleBipodActionInput;

	override bool HasTarget() return false;

	override string GetText() return "Deploy Bipod";

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (!item.IsInherited(Weapon_Base))	
			return false;

		m_Bipod = CA_Bipod_Base.Cast(item.FindAttachmentBySlotName("weaponBipod"));	

		if ( m_Bipod && !m_Bipod.IsOpen())
			return true;

		return false;
	}

	override void  OnExecute( ActionData action_data )
    {
        ItemBase item = ItemBase.Cast( action_data.m_MainItem.GetInventory().FindAttachmentByName("weaponBipod") );
        Weapon_Base rifle = Weapon_Base.Cast(action_data.m_MainItem);
	
        if ( item )
            item.Open();
    }
}

class ActionFoldBipod: ActionSingleUseBase
{
	CA_Bipod_Base m_Bipod;
	
	void ActionFoldBipod() m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHBARREL;
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override typename GetInputType() return ToggleBipodActionInput;

	override bool HasTarget() return false;

	override string GetText() return "Fold Bipod";

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (!item.IsInherited(Weapon_Base))
			return false;

		m_Bipod = CA_Bipod_Base.Cast(item.FindAttachmentBySlotName("weaponBipod"));
			
		if ( m_Bipod && m_Bipod.IsOpen())
			return true;
		return false;
	}

	override void OnExecute( ActionData action_data )
    {
        ItemBase item = ItemBase.Cast( action_data.m_MainItem.GetInventory().FindAttachmentByName("weaponBipod") ); 

        Weapon_Base rifle = Weapon_Base.Cast(action_data.m_MainItem);

        if ( item )
            item.Close();

	}
}


class ToggleBipodActionInput : DefaultActionInput
{
	void ToggleBipodActionInput(PlayerBase player)
	{
		SetInput("UAToggleBipod");
		m_InputType = ActionInputType.AIT_SINGLE;	
	}
	
	override void OnActionStart()
	{
		super.OnActionStart();
		m_Active = false;
	}
	
	override bool WasEnded() return false;
};

