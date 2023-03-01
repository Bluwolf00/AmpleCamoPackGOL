class CfgPatches
{
	class acp_gol_FI_M05_Relish
	{
		name="FI_M05_Relish";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"acp_gol_main"
		};
		author="Seb";
		version="1.22.0.0";
		versionStr="1.22.0.0";
		versionAr[]={1,22,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class acp_gol_FI_M05_Relish
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FI_M05_Relish\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_FI_M05_Relish
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FI_M05_Relish\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_FI_M05_Relish
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FI_M05_Relish\XEH_postInit.sqf'";
	};
};
class CfgWeapons
{
	class H_HelmetHBK_F;
	class H_HelmetHBK_headset_F;
	class H_HelmetHBK_ear_F;
	class H_HelmetHBK_chops_F;
	class H_HelmetAggressor_F;
	class H_HelmetAggressor_cover_F;
	class H_Bandanna_surfer;
	class H_PASGT_basic_olive_F;
	class H_Watchcap_blk;
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	class H_Cap_oli;
	class H_Cap_oli_hs;
	class H_HelmetB;
	class H_HelmetSpecB;
	class acp_gol_main_H_HelmetB_light_base;
	class acp_gol_main_H_HelmetB_light_basic_base;
	class H_HelmetB_camo;
	class H_HelmetLeaderO_ocamo;
	class H_HelmetO_ocamo;
	class H_HelmetSpecO_ocamo;
	class H_MilCap_gry;
	class acp_gol_main_H_MK7_Base_F;
	class H_HelmetIA;
	class H_Cap_marshal;
	class acp_gol_main_H_HelmetSpecter_base_F;
	class acp_gol_main_H_HelmetSpecter_headset_base_F;
	class acp_gol_main_H_HelmetSpecter_cover_base_F;
	class H_HelmetO_ViperSP_hex_F;
	class H_HelmetB_TI_tna_F;
	class V_PlateCarrierSpec_blk;
	class V_PlateCarrierGL_blk;
	class V_PlateCarrier1_blk;
	class V_PlateCarrier2_blk;
	class V_BandollierB_blk;
	class Vest_NoCamo_Base;
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_Chestrig_oli;
	class V_EOD_Olive_F;
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		class ItemInfo;
	};
	class V_PlateCarrierIAGL_oli;
	class V_SmershVest_01_F;
	class V_SmershVest_01_radio_F;
	class V_HarnessOGL_ghex_F;
	class V_HarnessO_ghex_F;
	class V_TacVestIR_blk: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_LegStrapBag_black_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_Olive_F;
	class V_Pocketed_black_F;
	class V_TacChestrig_grn_F;
	class V_TacVest_blk;
	class Uniform_Base;
	class U_C_CBRN_Suit_01_White_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_CombatUniform: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_CombatUniform_shortsleeve: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_shortsleeve_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_sweater_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_BG_Guerrilla_6_1: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_tanktop_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_T_Soldier_AR_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_CombatUniform_ocamo: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CTRG_Soldier_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CTRG_Soldier_3_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CTRG_Soldier_2_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_R_Gorka_01_black_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_HeliPilotCoveralls: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_PilotCoveralls: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_V_Soldier_Viper_hex_F: Uniform_Base
	{
		class ItemInfo;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierSpec_FI_M05_Relish: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\carrier_gl_rig_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_carrier_spec_rig_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierGL_FI_M05_Relish: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\carrier_gl_rig_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_carrier_gl_rig_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierSpec_FI_M05_Relish_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\carrier_gl_rig_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_carrier_spec_rig_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierGL_FI_M05_Relish_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\carrier_gl_rig_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_carrier_gl_rig_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrier1_FI_M05_Relish: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_plate_carrier_1_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrier2_FI_M05_Relish: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_plate_carrier_2_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_BandollierB_FI_M05_Relish: V_BandollierB_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_bandollierB_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_Rangemaster_belt_FI_M05_Relish: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[FI M05 Relish] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_Rangemaster_belt_FI_M05_Relish_ca.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrier1_FI_M05_Relish_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_plate_carrier_1_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrier2_FI_M05_Relish_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_plate_carrier_2_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_Chestrig_FI_M05_Relish: V_Chestrig_oli
	{
		author="Seb";
		displayName="[FI M05 Relish] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip_chestrig_FI_M05_Relish.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_ChestrigF_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_EOD_FI_M05_Relish_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[FI M05 Relish] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\V_EOD_vest_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\V_EOD_Protection_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_EOD_olive_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierIA1_FI_M05_Relish: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[FI M05 Relish] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip_ia_vest01_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_PlateCarrierIA1_FI_M05_Relish_ca.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierIA2_FI_M05_Relish: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[FI M05 Relish] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip_ia_vest01_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_PlateCarrierIA2_FI_M05_Relish_ca.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class acp_gol_FI_M05_Relish_V_PlateCarrierIAGL_FI_M05_Relish: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[FI M05 Relish] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip_ia_vest01_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\GA_Carrier_GL_Rig_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_PlateCarrierIAGL_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_SmershVest_01_FI_M05_Relish_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Smersh_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\Smersh_miscellaneous_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_SmershVest_01_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_SmershVest_01_radio_FI_M05_Relish_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Smersh_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\Smersh_miscellaneous_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_SmershVest_01_radio_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_HarnessOGL_FI_M05_Relish_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_HarnessOGL_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_HarnessO_FI_M05_Relish_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_HarnessO_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_TacVestIR_FI_M05_Relish: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_TacVestIR_FI_M05_Relish_CA.paa";
		scope=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class acp_gol_FI_M05_Relish_V_LegStrapBag_FI_M05_Relish_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\V_LegStrapBag_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_LegStrapBag_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_CarrierRigKBT_01_heavy_FI_M05_Relish_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\CarrierRigKBT_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_CarrierRigKBT_01_heavy_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_CarrierRigKBT_01_light_FI_M05_Relish_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\CarrierRigKBT_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_CarrierRigKBT_01_light_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_CarrierRigKBT_01_FI_M05_Relish_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\CarrierRigKBT_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_CarrierRigKBT_01_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_Pocketed_FI_M05_Relish_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\V_Pocketed_cloth_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_Pocketed_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_TacChestrig_FI_M05_Relish_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_ChestrigF_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_V_TacVest_FI_M05_Relish: V_TacVest_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\taticalvest_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_TacVest_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetHBK_F_FI_M05_Relish: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetHBK_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetHBK_F_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetHBK_headset_F_FI_M05_Relish: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetHBK_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetHBK_headset_F_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetHBK_ear_F_FI_M05_Relish: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetHBK_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetHBK_ear_F_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetHBK_chops_F_FI_M05_Relish: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetHBK_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetHBK_chops_F_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetAggressor_F_FI_M05_Relish: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\h_helmetaggressor_01_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetAggressor_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetAggressor_cover_F_FI_M05_Relish: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\h_helmetaggressor_01_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetAggressor_cover_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Bandanna_FI_M05_Relish: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[FI M05 Relish] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\h_bandana_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Bandanna_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_PASGT_basic_FI_M05_Relish_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_PASGT_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_PASGT_basic_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Watchcap_FI_M05_Relish: H_Watchcap_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\woolhat_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Cap_beanie_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Booniehat_FI_M05_Relish: H_Booniehat_khk
	{
		author="Seb";
		displayName="[FI M05 Relish] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\booniehat_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_booniehat_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Booniehat_FI_M05_Relish_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[FI M05 Relish] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\booniehat_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Booniehat_FI_M05_Relish_hs_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Cap_FI_M05_Relish: H_Cap_oli
	{
		author="Seb";
		displayName="[FI M05 Relish] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\capb_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Cap_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Cap_FI_M05_Relish_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[FI M05 Relish] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\capb_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Cap_FI_M05_Relish_hs_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_FI_M05_Relish: H_HelmetB
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecB_FI_M05_Relish: H_HelmetSpecB
	{
		author="Seb";
		displayName="[FI M05 Relish] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetSpecB_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_light_FI_M05_Relish: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[FI M05 Relish] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_light_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_light_basic_FI_M05_Relish: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[FI M05 Relish] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_camo_FI_M05_Relish: H_HelmetB_camo
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\ghillie_2_FI_M05_Relish_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_camo_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecB_FI_M05_Relish_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[FI M05 Relish] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetSpecB_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_light_FI_M05_Relish_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[FI M05 Relish] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\equip1_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_light_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetLeaderO_FI_M05_Relish: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[FI M05 Relish] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetLeaderO_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetO_FI_M05_Relish: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[FI M05 Relish] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetO_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecO_FI_M05_Relish: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[FI M05 Relish] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetO_spec_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_MilCap_FI_M05_Relish: H_MilCap_gry
	{
		author="Seb";
		displayName="[FI M05 Relish] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\cappatrol_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_MilCap_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_MK7_FI_M05_Relish_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\mk7_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_FI_M05_Relish_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_MK7_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetIA_FI_M05_Relish: H_HelmetIA
	{
		author="Seb";
		displayName="[FI M05 Relish] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_helmet_canvas_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_I_Helmet_canvas_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_Cap_headphones_FI_M05_Relish: H_Cap_marshal
	{
		author="Seb";
		displayName="[FI M05 Relish] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\capb_headphones_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_Cap_headphones_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecter_FI_M05_Relish_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetSpecter_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecter_headset_FI_M05_Relish_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_cover_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetSpecter_paint_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetSpecter_cover_FI_M05_Relish_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetSpecter_01_cover_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetSpecter_cover_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetO_ViperSP_FI_M05_Relish_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_vipersp_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetO_ViperSP_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_H_HelmetB_TI_FI_M05_Relish_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\H_HelmetB_TI_FI_M05_Relish_F_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_H_HelmetB_TI_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_U_C_CBRN_Suit_01_FI_M05_Relish_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\CBRN_Suit_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_C_CBRN_Suit_01_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_C_CBRN_Suit_01_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_CombatUniform_FI_M05_Relish: U_I_CombatUniform
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_CombatUniform_shortsleeve_FI_M05_Relish: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_shortsleeve_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_CombatUniform_FI_M05_Relish_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_FI_M05_Relish_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_CombatUniform_shortsleeve_FI_M05_Relish_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_shortsleeve_FI_M05_Relish_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_FI_M05_Relish_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_FI_M05_Relish_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_sweater_FI_M05_Relish_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_sweater_FI_M05_Relish_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_BG_Guerrilla_6_FI_M05_Relish: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[FI M05 Relish] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_BG_Guerrilla_6_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_sweater_FI_M05_Relish_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_sweater_FI_M05_Relish_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_BG_Guerrilla_6_FI_M05_Relish_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[FI M05 Relish] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_BG_Guerrilla_6_FI_M05_Relish_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_tanktop_FI_M05_Relish_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_TankTop_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_tanktop_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_tanktop_FI_M05_Relish_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_I_E_Uniform_FI_M05_Relish_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_FI_M05_Relish_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CombatUniform_FI_M05_Relish: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CombatUniform_vest_FI_M05_Relish: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_vest_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CombatUniform_tshirt_FI_M05_Relish: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\nato_tshirt_FI_M05_Relish.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_tshirt_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_tshirt_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CombatUniform_FI_M05_Relish_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_FI_M05_Relish_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CombatUniform_vest_FI_M05_Relish_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_vest_FI_M05_Relish_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_CombatUniform_FI_M05_Relish: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[FI M05 Relish] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_CombatUniform_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_CombatUniform_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_FI_M05_Relish_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_3_FI_M05_Relish_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_3_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_2_FI_M05_Relish_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\nato_tshirt_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_tshirt_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_2_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_FI_M05_Relish_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_FI_M05_Relish_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_3_FI_M05_Relish_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[FI M05 Relish] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_3_FI_M05_Relish_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_R_Gorka_01_FI_M05_Relish_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_O_R_Gorka_01_FI_M05_Relish_F.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_Gorka_01_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_R_Gorka_01_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_B_HeliPilotCoveralls_FI_M05_Relish: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[FI M05 Relish] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\coveralls_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_B_G_HeliPilotCoveralls_FI_M05_Relish_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_B_HeliPilotCoveralls_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_officer_noInsignia_FI_M05_Relish_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Officer_noInsignia_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_officer_noInsignia_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_officer_noInsignia_FI_M05_Relish_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_officer_noInsignia_FI_M05_Relish_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Officer_noInsignia_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_officer_noInsignia_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_officer_noInsignia_FI_M05_Relish_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_PilotCoveralls_FI_M05_Relish: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[FI M05 Relish] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\pilot_suit_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_PilotCoveralls_FI_M05_Relish";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FI_M05_Relish_U_O_officer_FI_M05_Relish_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\ViperOp_Suit_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_V_Soldier_Viper_FI_M05_Relish_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FI_M05_Relish_Soldier_U_O_officer_FI_M05_Relish_hex_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_rgr;
	class B_AssaultPack_Kerry;
	class B_Bergen_mcamo_F;
	class B_Carryall_cbr;
	class B_FieldPack_oli;
	class B_Kitbag_rgr;
	class B_LegStrapBag_black_F;
	class B_RadioBag_01_black_F;
	class B_TacticalPack_blk;
	class B_ViperHarness_blk_F;
	class B_ViperLightHarness_blk_F;
	class C_CBRN_Man_Oversuit_01_White_F;
	class I_Soldier_F;
	class I_Soldier_lite_F;
	class I_E_Uniform_01_F;
	class I_E_Uniform_01_shortsleeve_F;
	class I_E_Uniform_01_sweater_F;
	class B_G_Soldier_LAT_F;
	class I_E_Uniform_01_tanktop_F;
	class B_Soldier_F;
	class B_Soldier_SL_F;
	class B_T_Soldier_AR_F;
	class O_Soldier_F;
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_3_F;
	class B_CTRG_Soldier_2_F;
	class O_R_Gorka_black_F;
	class B_Helipilot_F;
	class acp_gol_main_O_A_officer_F;
	class O_Pilot_F;
	class O_V_Soldier_TL_hex_F;
	class acp_gol_FI_M05_Relish_Soldier_U_C_CBRN_Suit_01_FI_M05_Relish_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CBRN Suit";
		uniformClass="acp_gol_FI_M05_Relish_U_C_CBRN_Suit_01_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\CBRN_Suit_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_C_CBRN_Suit_01_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_FI_M05_Relish: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [AAF]";
		uniformClass="acp_gol_FI_M05_Relish_U_I_CombatUniform_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_shortsleeve_FI_M05_Relish: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_CombatUniform_shortsleeve_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_FI_M05_Relish_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_CombatUniform_FI_M05_Relish_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_CombatUniform_shortsleeve_FI_M05_Relish_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_CombatUniform_shortsleeve_FI_M05_Relish_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_FI_M05_Relish_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF]";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_FI_M05_Relish_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_shortsleeve_FI_M05_Relish_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_sweater_FI_M05_Relish_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_sweater_FI_M05_Relish_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_BG_Guerrilla_6_FI_M05_Relish: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Guerilla Apparel";
		uniformClass="acp_gol_FI_M05_Relish_U_BG_Guerrilla_6_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_sweater_FI_M05_Relish_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_sweater_FI_M05_Relish_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_BG_Guerrilla_6_FI_M05_Relish_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_BG_Guerrilla_6_FI_M05_Relish_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Uniform_01_Sweater_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_sweater_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_tanktop_FI_M05_Relish_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_tanktop_FI_M05_Relish_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_TankTop_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_tanktop_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_I_E_Uniform_FI_M05_Relish_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_I_E_Uniform_FI_M05_Relish_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_I_Soldier_01_FI_M05_Relish_CO_flag.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\I_E_Soldier_01_gloves_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_I_E_Uniform_01_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_FI_M05_Relish: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [US]";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CombatUniform_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_vest_FI_M05_Relish: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CombatUniform_vest_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_tshirt_FI_M05_Relish: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CombatUniform_tshirt_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\nato_tshirt_FI_M05_Relish.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_tshirt_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_FI_M05_Relish_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CombatUniform_FI_M05_Relish_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CombatUniform_vest_FI_M05_Relish_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CombatUniform_vest_FI_M05_Relish_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing1_FI_M05_Relish_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_CombatUniform_FI_M05_Relish: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Fatigues [CSAT]";
		uniformClass="acp_gol_FI_M05_Relish_U_O_CombatUniform_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\clothing_FI_M05_Relish_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\tech_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_CombatUniform_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_FI_M05_Relish_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CTRG Stealth Uniform";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_3_FI_M05_Relish_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_3_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_2_FI_M05_Relish_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_2_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\nato_tshirt_FI_M05_Relish.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_tshirt_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_FI_M05_Relish_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_FI_M05_Relish_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_uniform_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_CTRG_Soldier_3_FI_M05_Relish_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_B_CTRG_Soldier_3_FI_M05_Relish_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_B_CTRG_Soldier_FI_M05_Relish_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_U_B_CTRG_vest_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_R_Gorka_01_FI_M05_Relish_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Granit";
		uniformClass="acp_gol_FI_M05_Relish_U_O_R_Gorka_01_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\U_O_R_Gorka_01_FI_M05_Relish_F.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_Gorka_01_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_B_HeliPilotCoveralls_FI_M05_Relish: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Heli Pilot Coveralls";
		uniformClass="acp_gol_FI_M05_Relish_U_B_HeliPilotCoveralls_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\coveralls_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_B_G_HeliPilotCoveralls_FI_M05_Relish_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_officer_noInsignia_FI_M05_Relish_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Light Fatigues";
		uniformClass="acp_gol_FI_M05_Relish_U_O_officer_noInsignia_FI_M05_Relish_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Officer_noInsignia_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_officer_noInsignia_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_officer_noInsignia_FI_M05_Relish_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Light Fatigues (Flag)";
		uniformClass="acp_gol_FI_M05_Relish_U_O_officer_noInsignia_FI_M05_Relish_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Officer_noInsignia_FI_M05_Relish_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_R_officer_noInsignia_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_PilotCoveralls_FI_M05_Relish: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Pilot Coveralls";
		uniformClass="acp_gol_FI_M05_Relish_U_O_PilotCoveralls_FI_M05_Relish";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\pilot_suit_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_Soldier_U_O_officer_FI_M05_Relish_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [FI M05 Relish] Special Purpose Suit";
		uniformClass="acp_gol_FI_M05_Relish_U_O_officer_FI_M05_Relish_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\ViperOp_Suit_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_U_O_V_Soldier_Viper_FI_M05_Relish_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FI_M05_Relish_B_AssaultPack_FI_M05_Relish: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[FI M05 Relish] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_compact_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_AssaultPack_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_AssaultPackEnhanced_FI_M05_Relish: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[FI M05 Relish] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_compact_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_AssaultPack_FI_M05_Relish_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_FI_M05_Relish_B_AssaultPackEnhanced_FI_M05_Relish_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[FI M05 Relish] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_compact_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\vests_FI_M05_Relish_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_AssaultPack_FI_M05_Relish_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_FI_M05_Relish_B_Bergen_FI_M05_Relish_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\Bergen_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\Icon_B_Bergen_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_Carryall_FI_M05_Relish: B_Carryall_cbr
	{
		author="Seb";
		displayName="[FI M05 Relish] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_tortila_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_C_Tortila_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_FieldPack_FI_M05_Relish: B_FieldPack_oli
	{
		author="Seb";
		displayName="[FI M05 Relish] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_gorod_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_C_Gorod_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_Kitbag_rgr_FI_M05_Relish: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[FI M05 Relish] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_fast_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_C_Kitbag_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_LegStrapBag_FI_M05_Relish_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\V_LegStrapBag_FI_M05_Relish_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_V_LegStrapBag_FI_M05_Relish_CA.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_RadioBag_01_FI_M05_Relish_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_C_UAV_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_TacticalPack_FI_M05_Relish: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_small_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_C_Small_FI_M05_Relish.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_ViperHarness_FI_M05_Relish_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_viperop_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_ViperHarness_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_B_ViperLightHarness_FI_M05_Relish_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\backpack_viperop_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_B_ViperLightHarness_FI_M05_Relish_F_ca.paa";
		scope=2;
	};
};
class CfgGlasses
{
	class G_Balaclava_blk;
	class G_Balaclava_combat;
	class G_Balaclava_lowprofile;
	class G_Bandanna_aviator;
	class G_Bandanna_sport;
	class G_Bandanna_shades;
	class G_Bandanna_blk;
	class G_Combat;
	class G_Balaclava_TI_G_blk_F;
	class G_Balaclava_TI_blk_F;
	class acp_gol_FI_M05_Relish_G_Balaclava_FI_M05_Relish: G_Balaclava_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_balaclava_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Balaclava_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Balaclava_combat_FI_M05_Relish: G_Balaclava_combat
	{
		author="Seb";
		displayName="[FI M05 Relish] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_balaclava_FI_M05_Relish_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\g_combat_FI_M05_Relish_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Balaclava_combat_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Balaclava_lowprofile_FI_M05_Relish: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[FI M05 Relish] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_balaclava_FI_M05_Relish_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Balaclava_lowprofile_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Bandanna_aviator_FI_M05_Relish: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[FI M05 Relish] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_bandMask_FI_M05_Relish_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Bandana_aviator_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Bandanna_sport_FI_M05_Relish: G_Bandanna_sport
	{
		author="Seb";
		displayName="[FI M05 Relish] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_bandMask_FI_M05_Relish_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Bandana_shades_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Bandanna_shades_FI_M05_Relish: G_Bandanna_shades
	{
		author="Seb";
		displayName="[FI M05 Relish] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_bandMask_FI_M05_Relish_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Bandana_sport_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Bandanna_FI_M05_Relish: G_Bandanna_blk
	{
		author="Seb";
		displayName="[FI M05 Relish] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\headgear_bandMask_FI_M05_Relish_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Bandana_clean_FI_M05_Relish_ca.paa";
		scope=2;
	};
	class acp_gol_FI_M05_Relish_G_Combat_FI_M05_Relish: G_Combat
	{
		author="Seb";
		displayName="[FI M05 Relish] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\g_combat_FI_M05_Relish_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_g_combat_FI_M05_Relish_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_FI_M05_Relish_G_Balaclava_TI_G_FI_M05_Relish_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\G_Balaclava_TI_FI_M05_Relish_F_co.paa",
			"\z\acp_gol\addons\FI_M05_Relish\data\g_combat_FI_M05_Relish_ca.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Balaclava_TI_G_FI_M05_Relish_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_FI_M05_Relish_G_Balaclava_TI_FI_M05_Relish_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[FI M05 Relish] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FI_M05_Relish\data\G_Balaclava_TI_FI_M05_Relish_F_co.paa"
		};
		picture="\z\acp_gol\addons\FI_M05_Relish\data\UI\icon_G_Balaclava_TI_FI_M05_Relish_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
