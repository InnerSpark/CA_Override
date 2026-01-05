modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		// SingleUse Actions
		actions.Insert(ActionMedKitTarget);
		actions.Insert(ActionMedKitSelf);
		actions.Insert(ActionUseTargetStimpaktRed);
		actions.Insert(ActionUseStimpaktRed);
	}
}