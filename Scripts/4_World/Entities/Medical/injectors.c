class CA_Medical_Heartbeat_Injector : Inventory_Base
{
    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUseTargetStimpaktRed);
		AddAction(ActionUseStimpaktRed);
	}
}