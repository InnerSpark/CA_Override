class MedKitBase: ItemBase
{
	float GetApplyTime()
	{
		return 1.0;
	}
	
	override void OnApply(PlayerBase player)
	{
	}
	
	bool CanApply(PlayerBase player)
	{
		return player.IsAlive();
	}
	
	string GetApplyText()
	{
		return "Use";
	}
	
	override bool CanBeDisinfected()
	{
		return true;
	}
	
	override bool HasFlammableMaterial()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionMedKitTarget);
		AddAction(ActionMedKitSelf);
	}
}