class ActionMedKitCB: ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		MedKitBase MedKit_base = MedKitBase.Cast(m_ActionData.m_MainItem);
		if (!MedKit_base) {
			return;
		}
		
		m_ActionData.m_ActionComponent = new CAContinuousTime(MedKit_base.GetApplyTime());
	}
}

class ActionMedKitSelf: ActionContinuousBase
{
	protected ActionTarget m_Target;
	protected ItemBase m_Item;
	
	void ActionMedKitSelf()
	{
		m_CallbackClass = ActionMedKitCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_BANDAGE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
	
	override bool HasTarget()
	{
		return false;
	}

	/*override bool CanBeUsedInVehicle()
    {
        return true;
    }*/
	
	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		
		MedKitBase MedKit_base = MedKitBase.Cast(action_data.m_MainItem);
		if (!MedKit_base) {
			return;
		}
		
		if (action_data.m_MainItem && action_data.m_Player) {
			MedKit_base.OnApply(action_data.m_Player);
			MedKit_base.AddQuantity(-1, true);
			action_data.m_Player.GetSoftSkillsManager().AddSpecialty(m_SpecialtyWeight);
		}
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		m_Target = target;
		m_Item = item;
		
		if (!super.ActionCondition(player, target, item)) {
			return false;
		}
			
		MedKitBase MedKit_base = MedKitBase.Cast(m_Item);
		return (MedKit_base && MedKit_base.CanApply(player));		
	}
	
	override string GetText()
	{
		if (!m_Target) {
			return "Apply MedKit";
		}
		
		MedKitBase MedKit_base = MedKitBase.Cast(m_Item);
		if (!MedKit_base) {
			return "Apply MedKit";
		}
		
		return MedKit_base.GetApplyText();
	}
}

class ActionMedKitTarget: ActionContinuousBase
{
	protected ActionTarget m_Target;
	protected ItemBase m_Item;
	
	void ActionMedKitTarget()
	{
		m_CallbackClass = ActionMedKitCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		m_Target = target;
		m_Item = item;
		
		if (!super.ActionCondition(player, target, item)) {
			return false;
		}
			
		MedKitBase MedKit_base = MedKitBase.Cast(m_Item);
		return (MedKit_base && MedKit_base.CanApply(player));		
	}
	
	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		
		MedKitBase MedKit_base = MedKitBase.Cast(action_data.m_MainItem);
		if (!MedKit_base) {
			return;
		}
		
		PlayerBase target = PlayerBase.Cast(action_data.m_Target.GetObject());		
		if (action_data.m_MainItem && target) {
			MedKit_base.OnApply(target);
			MedKit_base.AddQuantity(-1, true);
			action_data.m_Player.GetSoftSkillsManager().AddSpecialty(m_SpecialtyWeight);
		}
	}
	
	override string GetText()
	{
		if (!m_Target) {
			return "Apply MedKit";
		}
		
		MedKitBase MedKit_base = MedKitBase.Cast(m_Item);
		if (!MedKit_base) {
			return "Apply MedKit";
		}
		
		return MedKit_base.GetApplyText();
	}
}