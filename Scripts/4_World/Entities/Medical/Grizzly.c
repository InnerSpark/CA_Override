class CA_Medical_Grizzly: MedKitBase
{
		
	override void OnApply(PlayerBase player)
	{
		if (player.GetBleedingManagerServer()) {
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx(this);	
		}
		
		PluginTransmissionAgents transmissin_agents = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
		transmissin_agents.TransmitAgents(this, player, AGT_ITEM_TO_FLESH);
		
		player.AddHealth("GlobalHealth", "Health", 30);
		player.AddHealth("GlobalHealth", "Blood", 1250);
	}
		
	override string GetApplyText()
	{
		return "#use";
	}
	
	override float GetApplyTime()
	{
		return 5.0;
	}
}