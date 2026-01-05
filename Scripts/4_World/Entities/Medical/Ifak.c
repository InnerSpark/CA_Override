class Fresh_Medical_IFAK: MedKitBase
{
		
	override void OnApply(PlayerBase player)
	{
		if (player.GetBleedingManagerServer()) {
			player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx(this);	
		}
		
		PluginTransmissionAgents transmissin_agents = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
		transmissin_agents.TransmitAgents(this, player, AGT_ITEM_TO_FLESH);
		
		player.AddHealth("GlobalHealth", "Health", 15);
		player.AddHealth("GlobalHealth", "Blood", 1000);
	}
		
	override string GetApplyText()
	{
		return "#use";
	}
	
	override float GetApplyTime()
	{
		return 3.0;
	}
}