class TheSword_Base extends ToolBase
{
	void TheSword_Base()
	{
	}

	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionBurnSewTarget);
		AddAction(ActionSkinning);
		AddAction(ActionMineBush);
		AddAction(ActionBurnSewSelf);
		AddAction(ActionDigWorms);
	}
}

class Fresh_AdminBasher_Base extends ToolBase
{
	void Fresh_AdminBasher_Base()
	{
	}

	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override array<int> GetValidFinishers()
	{
		return {EMeleeHitType.FINISHER_LIVERSTAB};
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionMineBush);
	}
}