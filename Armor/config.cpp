////////////////////////////////////////////////////////////////////
// ArmorNerf - Modifies ALL MMG/JPC_Vest armor values for full-auto nerf
// Goal:
// - Nerf full-auto: vests tank 10-30+ AR shots to torso
// - Big snipers (.308/.50) still 1-tap torso via high base shock/dmg
// Tiers:
//   - JPC/TT (standard plate carriers): 600hp, 0.20 health dmg, 0.55 shock
//   - MK III (heavier): 900hp, 0.16 health dmg, 0.48 shock
//   - MK V (heaviest): 1500hp, 0.12 health dmg, 0.40 shock
//
// Pack as: @ArmorNerf/addons/armor_nerf/config.cpp
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
    class ArmorNerf
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"JPC_Vest","DZ_Data","DZ_Characters_Vests","DZ_Characters_Backpacks","DZ_Characters_Headgear","DZ_Scripts","DZ_Characters","DZ_Gear_Drinks","DZ_Gear_Medical","DZ_Gear_Containers","DZ_Radio","DZ_Gear_Optics","DZ_Characters_Glasses"};
        author = "InnerSpark";
        name = "Armor Nerf/Buff for MMG Vests";
        version = "2.8";
    };
};

class CfgVehicles
{
    // ─────────────────────────────────────────────────────────────
    // Tier 1: JPC & TT Vests (standard plate carrier)
    // ─────────────────────────────────────────────────────────────
    class JPC_Vest_Base;
    class tt_vest_base;
    class Clothing;

    class JPC_Vest_Base_ArmorNerf: JPC_Vest_Base
    {
        scope = 0;

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1500;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0.08; };
                    class Blood  { damage = 0.00; }; // No bleed through plates
                    class Shock  { damage = 0.20; };
                };
                class Melee
                {
                    class Health { damage = 0.25; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.25; };
                };
                class Infected
                {
                    class Health { damage = 0.25; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.25; };
                };
                class FragGrenade
                {
                    class Health { damage = 0.50; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.26; };
                };
            };
        };
    };

    class tt_vest_base_ArmorNerf: tt_vest_base
    {
        scope = 0;

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 2000;
                    transferToAttachmentsCoef = 0.5; // Preserve original behavior
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0.08; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.10; };
                };
                class Melee
                {
                    class Health { damage = 0.25; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.25; };
                };
                class Infected
                {
                    class Health { damage = 0.25; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.25; };
                };
                class FragGrenade
                {
                    class Health { damage = 0.50; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.26; };
                };
            };
        };
    };

    // ─────────────────────────────────────────────────────────────
    // Tier 2: MK III Armor (heavy protection)
    // ─────────────────────────────────────────────────────────────
   class MMG_MK_III_Armor_black;  // Declare one original variant

    class MMG_MK_III_Armor_ArmorNerf: MMG_MK_III_Armor_black
    {
        scope = 0;  // Hidden base

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 3000;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0.05; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.05; };
                };
                // Optionally preserve Melee/Infected/Frag if you want consistency
                class Melee    { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class Infected { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class FragGrenade { class Health { damage = 0.50; }; class Blood { damage = 0.00; }; class Shock { damage = 0.26; }; };
            };
        };
    };

    // ─────────────────────────────────────────────────────────────
    // Tier 3: MK V Armor (extreme protection)
    // ─────────────────────────────────────────────────────────────
    class MMG_MK_V_Armor_black;  // Declare original

    class MMG_MK_V_Armor_ArmorNerf: MMG_MK_V_Armor_black
    {
        scope = 0;

        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 4000;
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0.03; };
                    class Blood  { damage = 0.00; };
                    class Shock  { damage = 0.00; };
                };
                class Melee    { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class Infected { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class FragGrenade { class Health { damage = 0.50; }; class Blood { damage = 0.00; }; class Shock { damage = 0.26; }; };
            };
        };
    };

    // =============================================
    // HELMETS - New: Full-Auto Nerf (Same Concept)
    // =============================================
    class MMG_tactical_helmet_black;
    class MMG_striker_helmet_black;
    class mmg_armored_helmet_black;
    class mmg_armored_helmet_visor_black;
    class mmg_armored_helmet_visor_UP_black;

    // Tier 1: Tactical Helmets (survive 1 AR headshot, KO on 2nd)
    class TacticalHelmet_Nerf: MMG_tactical_helmet_black
    {
        scope = 0;
        class DamageSystem
        {
            class GlobalHealth { class Health { hitpoints = 4000; }; };
            class GlobalArmor
            {
                class Projectile { class Health { damage = 0.14; }; class Blood { damage = 0.00; }; class Shock { damage = 0.22; }; };  // ~43 shock from 5.56 → 2-shot KO
                class Melee      { class Health { damage = 0.30; }; class Blood { damage = 0.00; }; class Shock { damage = 0.30; }; };
                class Infected   { class Health { damage = 0.30; }; class Blood { damage = 0.00; }; class Shock { damage = 0.30; }; };
                class FragGrenade{ class Health { damage = 0.50; }; class Blood { damage = 0.00; }; class Shock { damage = 0.30; }; };
            };
        };
    };

    // Tier 2: Striker Helmets (slightly tougher)
    class StrikerHelmet_Nerf: MMG_striker_helmet_black
    {
        scope = 0;
        class DamageSystem
        {
            class GlobalHealth { class Health { hitpoints = 6000; }; };
            class GlobalArmor
            {
                class Projectile { class Health { damage = 0.12; }; class Blood { damage = 0.00; }; class Shock { damage = 0.20; }; };  // ~39 shock → 2-shot KO
                class Melee      { class Health { damage = 0.28; }; class Blood { damage = 0.00; }; class Shock { damage = 0.28; }; };
                class Infected   { class Health { damage = 0.28; }; class Blood { damage = 0.00; }; class Shock { damage = 0.28; }; };
                class FragGrenade{ class Health { damage = 0.50; }; class Blood { damage = 0.00; }; class Shock { damage = 0.28; }; };
            };
        };
    };

    // Tier 3: Armored Helmets + Visors (survive 2 AR headshots, KO on 3rd)
    class ArmoredHelmet_Nerf: mmg_armored_helmet_black
    {
        scope = 0;
        class DamageSystem
        {
            class GlobalHealth { class Health { hitpoints = 8000; }; };
            class GlobalArmor
            {
                class Projectile { class Health { damage = 0.08; }; class Blood { damage = 0.00; }; class Shock { damage = 0.0; }; };  // ~35 shock → 3-shot KO
                class Melee      { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class Infected   { class Health { damage = 0.25; }; class Blood { damage = 0.00; }; class Shock { damage = 0.25; }; };
                class FragGrenade{ class Health { damage = 0.45; }; class Blood { damage = 0.00; }; class Shock { damage = 0.26; }; };
            };
        };
    };

    class ArmoredHelmet_VisorDown_Nerf: mmg_armored_helmet_visor_black  // visor down variant as base
    {
        scope = 0;
        class DamageSystem
        {
            class GlobalHealth { class Health { hitpoints = 8000; }; };
            class GlobalArmor
            {
                class Projectile { class Health { damage = 0.08; }; class Blood { damage = 0.00; }; class Shock { damage = 0.0; }; };  // ~29-37 shock → 18-20+ shots KO
                class Melee      { class Health { damage = 0.22; }; class Blood { damage = 0.00; }; class Shock { damage = 0.22; }; };
                class Infected   { class Health { damage = 0.22; }; class Blood { damage = 0.00; }; class Shock { damage = 0.22; }; };
            };
        };
    };

        class ArmoredHelmet_VisorUp_Nerf: mmg_armored_helmet_visor_UP_black  // visor down variant as base
    {
        scope = 0;
        class DamageSystem
        {
            class GlobalHealth { class Health { hitpoints = 6000; }; };
            class GlobalArmor
            {
                class Projectile { class Health { damage = 0.08; }; class Blood { damage = 0.00; }; class Shock { damage = 0.0; }; };  // ~29-37 shock → 18-20+ shots KO
                class Melee      { class Health { damage = 0.22; }; class Blood { damage = 0.00; }; class Shock { damage = 0.22; }; };
                class Infected   { class Health { damage = 0.22; }; class Blood { damage = 0.00; }; class Shock { damage = 0.22; }; };
            };
        };
    };

    // ─────────────────────────────────────────────────────────────
    // Apply overrides to all concrete vest classes
    // ─────────────────────────────────────────────────────────────

    // JPC variants (Tier 1)
    class MMG_JPC_Vest_Black: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_olive: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_tan: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_multicam: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_alpine: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_erdl: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_multicamblack: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_dark_woodland: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_ucp: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_multicam_tropic: JPC_Vest_Base_ArmorNerf { scope = 2; };
    class MMG_JPC_Vest_atacs: JPC_Vest_Base_ArmorNerf { scope = 2; };

    // TT variants (Tier 1)
    class MMG_tt_vest_black: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_green: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_tan: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_multicam: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_alpine: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_erdl: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_multicamblack: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_dark_woodland: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_admin: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_ucp: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_police: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_multicam_tropic: tt_vest_base_ArmorNerf { scope = 2; };
    class MMG_tt_vest_atacs: tt_vest_base_ArmorNerf { scope = 2; };

    // MK III variants (Tier 2)
    class MMG_MK_III_Armor_black: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_green: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_tan: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_multicamblack: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_multicam: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_erdl: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_alpine: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_dark_woodland: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_ucp: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_multicam_tropic: MMG_MK_III_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_III_Armor_atacs: MMG_MK_III_Armor_ArmorNerf { scope = 2; };

    // MK V variants (Tier 3)
    class MMG_MK_V_Armor_black: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_green: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_tan: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_multicamblack: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_multicam: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_alpine: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_dark_woodland: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_erdl: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_ucp: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_multicam_tropic: MMG_MK_V_Armor_ArmorNerf { scope = 2; };
    class MMG_MK_V_Armor_atacs: MMG_MK_V_Armor_ArmorNerf { scope = 2; };

    // =============================================
    // APPLY OVERRIDES - HELMETS
    // =============================================

    // Tier 1: Tactical Helmets
    class MMG_tactical_helmet_black: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_green: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_tan: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_multicam: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_alpine: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_erdl: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_multicamblack: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_dark_woodland: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_ucp: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_multicam_tropic: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_police: TacticalHelmet_Nerf { scope = 2; };
    class MMG_tactical_helmet_atacs: TacticalHelmet_Nerf { scope = 2; };

    // Tier 2: Striker Helmets
    class MMG_striker_helmet_rusty: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_black: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_green: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_tan: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_alpine: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_erdl: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_multicamblack: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_multicam: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_dark_woodland: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_admin: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_ucp: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_multicam_tropic: StrikerHelmet_Nerf { scope = 2; };
    class MMG_striker_helmet_atacs: StrikerHelmet_Nerf { scope = 2; };

    // Tier 3: Armored Helmets + Visors
    class mmg_armored_helmet_black: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_green: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_tan: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_black: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_green: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_tan: ArmoredHelmet_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_UP_black: ArmoredHelmet_VisorUp_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_UP_green: ArmoredHelmet_VisorUp_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_UP_tan: ArmoredHelmet_VisorUp_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_black: ArmoredHelmet_VisorDown_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_green: ArmoredHelmet_VisorDown_Nerf { scope = 2; };
    class mmg_armored_helmet_visor_tan: ArmoredHelmet_VisorDown_Nerf { scope = 2; };
};