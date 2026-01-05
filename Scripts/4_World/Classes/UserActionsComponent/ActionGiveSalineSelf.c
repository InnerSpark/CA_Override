modded class ActionGiveSalineSelf
{   
     override void OnFinishProgressServer( ActionData action_data )
     {
        action_data.m_Player.AddHealth("GlobalHealth", "Health", 15);
        action_data.m_Player.AddHealth("GlobalHealth", "Blood", 750);
        action_data.m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_SALINE);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
        
        action_data.m_MainItem.Delete();
     }
}