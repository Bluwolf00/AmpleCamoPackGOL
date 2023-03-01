class CfgPatches
{
	class acp_gol_SE_M90
	{
		name="SE_M90";
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
	class acp_gol_SE_M90
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SE_M90\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_SE_M90
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SE_M90\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_SE_M90
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SE_M90\XEH_postInit.sqf'";
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
	class acp_gol_SE_M90_V_PlateCarrierSpec_SE_M90: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\carrier_gl_rig_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_carrier_spec_rig_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrierGL_SE_M90: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\carrier_gl_rig_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_carrier_gl_rig_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrierSpec_SE_M90_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\carrier_gl_rig_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_carrier_spec_rig_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrierGL_SE_M90_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\carrier_gl_rig_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_carrier_gl_rig_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrier1_SE_M90: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_plate_carrier_1_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrier2_SE_M90: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_plate_carrier_2_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_BandollierB_SE_M90: V_BandollierB_blk
	{
		author="Seb";
		displayName="[SE M90] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_bandollierB_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_Rangemaster_belt_SE_M90: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[SE M90] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_Rangemaster_belt_SE_M90_ca.paa";
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
	class acp_gol_SE_M90_V_PlateCarrier1_SE_M90_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_plate_carrier_1_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrier2_SE_M90_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[SE M90] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_plate_carrier_2_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_Chestrig_SE_M90: V_Chestrig_oli
	{
		author="Seb";
		displayName="[SE M90] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip_chestrig_SE_M90.paa",
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_ChestrigF_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_EOD_SE_M90_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[SE M90] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\V_EOD_vest_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\V_EOD_Protection_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_EOD_olive_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_PlateCarrierIA1_SE_M90: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[SE M90] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip_ia_vest01_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_PlateCarrierIA1_SE_M90_ca.paa";
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
	class acp_gol_SE_M90_V_PlateCarrierIA2_SE_M90: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[SE M90] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip_ia_vest01_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_PlateCarrierIA2_SE_M90_ca.paa";
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
	class acp_gol_SE_M90_V_PlateCarrierIAGL_SE_M90: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[SE M90] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip_ia_vest01_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\GA_Carrier_GL_Rig_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_PlateCarrierIAGL_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_SmershVest_01_SE_M90_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[SE M90] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Smersh_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\Smersh_miscellaneous_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_SmershVest_01_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_SmershVest_01_radio_SE_M90_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[SE M90] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Smersh_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\Smersh_miscellaneous_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_SmershVest_01_radio_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_HarnessOGL_SE_M90_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[SE M90] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_HarnessOGL_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_HarnessO_SE_M90_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[SE M90] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_HarnessO_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_TacVestIR_SE_M90: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[SE M90] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_TacVestIR_SE_M90_CA.paa";
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
	class acp_gol_SE_M90_V_LegStrapBag_SE_M90_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[SE M90] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\V_LegStrapBag_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_LegStrapBag_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_CarrierRigKBT_01_heavy_SE_M90_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[SE M90] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\CarrierRigKBT_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_CarrierRigKBT_01_heavy_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_CarrierRigKBT_01_light_SE_M90_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[SE M90] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\CarrierRigKBT_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_CarrierRigKBT_01_light_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_CarrierRigKBT_01_SE_M90_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[SE M90] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\CarrierRigKBT_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_CarrierRigKBT_01_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_Pocketed_SE_M90_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[SE M90] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\V_Pocketed_cloth_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_Pocketed_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_TacChestrig_SE_M90_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[SE M90] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_ChestrigF_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_V_TacVest_SE_M90: V_TacVest_blk
	{
		author="Seb";
		displayName="[SE M90] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\taticalvest_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_TacVest_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetHBK_F_SE_M90: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[SE M90] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetHBK_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetHBK_F_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetHBK_headset_F_SE_M90: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[SE M90] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetHBK_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetHBK_headset_F_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetHBK_ear_F_SE_M90: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[SE M90] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetHBK_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetHBK_ear_F_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetHBK_chops_F_SE_M90: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[SE M90] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetHBK_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetHBK_chops_F_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetAggressor_F_SE_M90: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[SE M90] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\h_helmetaggressor_01_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetAggressor_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetAggressor_cover_F_SE_M90: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[SE M90] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\h_helmetaggressor_01_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetAggressor_cover_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Bandanna_SE_M90: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[SE M90] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\h_bandana_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Bandanna_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_PASGT_basic_SE_M90_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[SE M90] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_PASGT_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_PASGT_basic_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Watchcap_SE_M90: H_Watchcap_blk
	{
		author="Seb";
		displayName="[SE M90] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\woolhat_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Cap_beanie_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Booniehat_SE_M90: H_Booniehat_khk
	{
		author="Seb";
		displayName="[SE M90] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\booniehat_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_booniehat_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Booniehat_SE_M90_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[SE M90] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\booniehat_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Booniehat_SE_M90_hs_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Cap_SE_M90: H_Cap_oli
	{
		author="Seb";
		displayName="[SE M90] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\capb_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Cap_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Cap_SE_M90_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[SE M90] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\capb_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Cap_SE_M90_hs_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_SE_M90: H_HelmetB
	{
		author="Seb";
		displayName="[SE M90] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecB_SE_M90: H_HelmetSpecB
	{
		author="Seb";
		displayName="[SE M90] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetSpecB_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_light_SE_M90: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[SE M90] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_light_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_light_basic_SE_M90: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[SE M90] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_camo_SE_M90: H_HelmetB_camo
	{
		author="Seb";
		displayName="[SE M90] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\ghillie_2_SE_M90_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_camo_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecB_SE_M90_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[SE M90] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetSpecB_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_light_SE_M90_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[SE M90] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\equip1_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_light_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetLeaderO_SE_M90: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[SE M90] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetLeaderO_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetO_SE_M90: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[SE M90] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetO_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecO_SE_M90: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[SE M90] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetO_spec_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_MilCap_SE_M90: H_MilCap_gry
	{
		author="Seb";
		displayName="[SE M90] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\cappatrol_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_MilCap_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_MK7_SE_M90_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[SE M90] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\mk7_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_SE_M90_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_MK7_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetIA_SE_M90: H_HelmetIA
	{
		author="Seb";
		displayName="[SE M90] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_helmet_canvas_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_I_Helmet_canvas_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_Cap_headphones_SE_M90: H_Cap_marshal
	{
		author="Seb";
		displayName="[SE M90] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\capb_headphones_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_Cap_headphones_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecter_SE_M90_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[SE M90] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetSpecter_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecter_headset_SE_M90_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[SE M90] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_cover_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetSpecter_paint_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetSpecter_cover_SE_M90_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[SE M90] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\H_HelmetSpecter_01_cover_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetSpecter_cover_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetO_ViperSP_SE_M90_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[SE M90] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_vipersp_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetO_ViperSP_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_H_HelmetB_TI_SE_M90_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[SE M90] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\H_HelmetB_TI_SE_M90_F_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_H_HelmetB_TI_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_U_C_CBRN_Suit_01_SE_M90_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[SE M90] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\CBRN_Suit_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_C_CBRN_Suit_01_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_C_CBRN_Suit_01_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_CombatUniform_SE_M90: U_I_CombatUniform
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_CombatUniform_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_CombatUniform_shortsleeve_SE_M90: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_CombatUniform_shortsleeve_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_CombatUniform_SE_M90_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_CombatUniform_SE_M90_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_CombatUniform_shortsleeve_SE_M90_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_CombatUniform_shortsleeve_SE_M90_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_SE_M90_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_SE_M90_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_shortsleeve_SE_M90_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_shortsleeve_SE_M90_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_shortsleeve_SE_M90_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_shortsleeve_SE_M90_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_sweater_SE_M90_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_sweater_SE_M90_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_BG_Guerrilla_6_SE_M90: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[SE M90] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_BG_Guerrilla_6_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_sweater_SE_M90_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_sweater_SE_M90_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_BG_Guerrilla_6_SE_M90_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[SE M90] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_BG_Guerrilla_6_SE_M90_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_tanktop_SE_M90_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_TankTop_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_tanktop_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_tanktop_SE_M90_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_I_E_Uniform_SE_M90_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_I_E_Uniform_SE_M90_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CombatUniform_SE_M90: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CombatUniform_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CombatUniform_vest_SE_M90: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CombatUniform_vest_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CombatUniform_tshirt_SE_M90: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\nato_tshirt_SE_M90.paa",
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_tshirt_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CombatUniform_tshirt_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CombatUniform_SE_M90_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CombatUniform_SE_M90_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CombatUniform_vest_SE_M90_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[SE M90] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CombatUniform_vest_SE_M90_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_CombatUniform_SE_M90: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[SE M90] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_CombatUniform_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_CombatUniform_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CTRG_Soldier_SE_M90_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[SE M90] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CTRG_Soldier_3_SE_M90_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[SE M90] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_3_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CTRG_Soldier_2_SE_M90_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[SE M90] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\nato_tshirt_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_tshirt_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_2_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CTRG_Soldier_SE_M90_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[SE M90] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_SE_M90_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_CTRG_Soldier_3_SE_M90_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[SE M90] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_3_SE_M90_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_R_Gorka_01_SE_M90_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[SE M90] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_O_R_Gorka_01_SE_M90_F.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_Gorka_01_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_R_Gorka_01_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_B_HeliPilotCoveralls_SE_M90: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[SE M90] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\coveralls_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_B_G_HeliPilotCoveralls_SE_M90_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_B_HeliPilotCoveralls_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_officer_noInsignia_SE_M90_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[SE M90] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Officer_noInsignia_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_officer_noInsignia_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_officer_noInsignia_SE_M90_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_officer_noInsignia_SE_M90_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[SE M90] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Officer_noInsignia_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_officer_noInsignia_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_officer_noInsignia_SE_M90_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_PilotCoveralls_SE_M90: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[SE M90] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\pilot_suit_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_PilotCoveralls_SE_M90";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SE_M90_U_O_officer_SE_M90_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[SE M90] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\ViperOp_Suit_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_V_Soldier_Viper_SE_M90_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SE_M90_Soldier_U_O_officer_SE_M90_hex_F";
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
	class acp_gol_SE_M90_Soldier_U_C_CBRN_Suit_01_SE_M90_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [SE M90] CBRN Suit";
		uniformClass="acp_gol_SE_M90_U_C_CBRN_Suit_01_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\CBRN_Suit_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_C_CBRN_Suit_01_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_CombatUniform_SE_M90: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [AAF]";
		uniformClass="acp_gol_SE_M90_U_I_CombatUniform_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_CombatUniform_shortsleeve_SE_M90: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_SE_M90_U_I_CombatUniform_shortsleeve_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_CombatUniform_SE_M90_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_SE_M90_U_I_CombatUniform_SE_M90_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_CombatUniform_shortsleeve_SE_M90_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_SE_M90_U_I_CombatUniform_shortsleeve_SE_M90_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_SE_M90_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF]";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_SE_M90_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_shortsleeve_SE_M90_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_shortsleeve_SE_M90_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_shortsleeve_SE_M90_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_shortsleeve_SE_M90_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_sweater_SE_M90_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_sweater_SE_M90_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_BG_Guerrilla_6_SE_M90: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [SE M90] Guerilla Apparel";
		uniformClass="acp_gol_SE_M90_U_BG_Guerrilla_6_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_sweater_SE_M90_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_sweater_SE_M90_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_BG_Guerrilla_6_SE_M90_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [SE M90] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_SE_M90_U_BG_Guerrilla_6_SE_M90_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Uniform_01_Sweater_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_sweater_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_tanktop_SE_M90_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_tanktop_SE_M90_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_TankTop_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_tanktop_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_I_E_Uniform_SE_M90_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_SE_M90_U_I_E_Uniform_SE_M90_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\I_I_Soldier_01_SE_M90_CO_flag.paa",
			"\z\acp_gol\addons\SE_M90\data\I_E_Soldier_01_gloves_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_I_E_Uniform_01_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CombatUniform_SE_M90: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [US]";
		uniformClass="acp_gol_SE_M90_U_B_CombatUniform_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CombatUniform_vest_SE_M90: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_SE_M90_U_B_CombatUniform_vest_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CombatUniform_tshirt_SE_M90: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_SE_M90_U_B_CombatUniform_tshirt_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\nato_tshirt_SE_M90.paa",
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_tshirt_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CombatUniform_SE_M90_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_SE_M90_U_B_CombatUniform_SE_M90_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CombatUniform_vest_SE_M90_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [SE M90] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_SE_M90_U_B_CombatUniform_vest_SE_M90_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing1_SE_M90_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_CombatUniform_SE_M90: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] Fatigues [CSAT]";
		uniformClass="acp_gol_SE_M90_U_O_CombatUniform_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\clothing_SE_M90_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\tech_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_CombatUniform_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_SE_M90_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] CTRG Stealth Uniform";
		uniformClass="acp_gol_SE_M90_U_B_CTRG_Soldier_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_3_SE_M90_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [SE M90] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_SE_M90_U_B_CTRG_Soldier_3_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_2_SE_M90_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [SE M90] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_SE_M90_U_B_CTRG_Soldier_2_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO.paa",
			"\z\acp_gol\addons\SE_M90\data\nato_tshirt_SE_M90.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_tshirt_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_SE_M90_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [SE M90] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_SE_M90_U_B_CTRG_Soldier_SE_M90_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_uniform_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_CTRG_Soldier_3_SE_M90_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [SE M90] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_SE_M90_U_B_CTRG_Soldier_3_SE_M90_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_B_CTRG_Soldier_SE_M90_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_U_B_CTRG_vest_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_R_Gorka_01_SE_M90_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [SE M90] Granit";
		uniformClass="acp_gol_SE_M90_U_O_R_Gorka_01_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\U_O_R_Gorka_01_SE_M90_F.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_Gorka_01_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_B_HeliPilotCoveralls_SE_M90: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [SE M90] Heli Pilot Coveralls";
		uniformClass="acp_gol_SE_M90_U_B_HeliPilotCoveralls_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\coveralls_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_B_G_HeliPilotCoveralls_SE_M90_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_officer_noInsignia_SE_M90_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [SE M90] Light Fatigues";
		uniformClass="acp_gol_SE_M90_U_O_officer_noInsignia_SE_M90_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Officer_noInsignia_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_officer_noInsignia_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_officer_noInsignia_SE_M90_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [SE M90] Light Fatigues (Flag)";
		uniformClass="acp_gol_SE_M90_U_O_officer_noInsignia_SE_M90_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Officer_noInsignia_SE_M90_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_R_officer_noInsignia_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_PilotCoveralls_SE_M90: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [SE M90] Pilot Coveralls";
		uniformClass="acp_gol_SE_M90_U_O_PilotCoveralls_SE_M90";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\pilot_suit_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_Soldier_U_O_officer_SE_M90_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [SE M90] Special Purpose Suit";
		uniformClass="acp_gol_SE_M90_U_O_officer_SE_M90_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\ViperOp_Suit_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_U_O_V_Soldier_Viper_SE_M90_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SE_M90_B_AssaultPack_SE_M90: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[SE M90] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_compact_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_AssaultPack_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_AssaultPackEnhanced_SE_M90: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[SE M90] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_compact_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_AssaultPack_SE_M90_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_SE_M90_B_AssaultPackEnhanced_SE_M90_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[SE M90] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_compact_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\vests_SE_M90_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_AssaultPack_SE_M90_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_SE_M90_B_Bergen_SE_M90_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[SE M90] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\Bergen_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\Icon_B_Bergen_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_Carryall_SE_M90: B_Carryall_cbr
	{
		author="Seb";
		displayName="[SE M90] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_tortila_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_C_Tortila_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_FieldPack_SE_M90: B_FieldPack_oli
	{
		author="Seb";
		displayName="[SE M90] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_gorod_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_C_Gorod_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_Kitbag_rgr_SE_M90: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[SE M90] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_fast_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_C_Kitbag_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_LegStrapBag_SE_M90_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[SE M90] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\V_LegStrapBag_SE_M90_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_V_LegStrapBag_SE_M90_CA.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_RadioBag_01_SE_M90_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[SE M90] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_C_UAV_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_TacticalPack_SE_M90: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[SE M90] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_small_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_C_Small_SE_M90.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_ViperHarness_SE_M90_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[SE M90] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_viperop_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_ViperHarness_SE_M90_F_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_B_ViperLightHarness_SE_M90_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[SE M90] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\backpack_viperop_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_B_ViperLightHarness_SE_M90_F_ca.paa";
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
	class acp_gol_SE_M90_G_Balaclava_SE_M90: G_Balaclava_blk
	{
		author="Seb";
		displayName="[SE M90] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_balaclava_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Balaclava_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Balaclava_combat_SE_M90: G_Balaclava_combat
	{
		author="Seb";
		displayName="[SE M90] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_balaclava_SE_M90_co.paa",
			"\z\acp_gol\addons\SE_M90\data\g_combat_SE_M90_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Balaclava_combat_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Balaclava_lowprofile_SE_M90: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[SE M90] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_balaclava_SE_M90_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Balaclava_lowprofile_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Bandanna_aviator_SE_M90: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[SE M90] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_bandMask_SE_M90_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Bandana_aviator_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Bandanna_sport_SE_M90: G_Bandanna_sport
	{
		author="Seb";
		displayName="[SE M90] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_bandMask_SE_M90_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Bandana_shades_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Bandanna_shades_SE_M90: G_Bandanna_shades
	{
		author="Seb";
		displayName="[SE M90] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_bandMask_SE_M90_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Bandana_sport_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Bandanna_SE_M90: G_Bandanna_blk
	{
		author="Seb";
		displayName="[SE M90] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\headgear_bandMask_SE_M90_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Bandana_clean_SE_M90_ca.paa";
		scope=2;
	};
	class acp_gol_SE_M90_G_Combat_SE_M90: G_Combat
	{
		author="Seb";
		displayName="[SE M90] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\g_combat_SE_M90_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_g_combat_SE_M90_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_SE_M90_G_Balaclava_TI_G_SE_M90_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[SE M90] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\G_Balaclava_TI_SE_M90_F_co.paa",
			"\z\acp_gol\addons\SE_M90\data\g_combat_SE_M90_ca.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Balaclava_TI_G_SE_M90_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_SE_M90_G_Balaclava_TI_SE_M90_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[SE M90] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SE_M90\data\G_Balaclava_TI_SE_M90_F_co.paa"
		};
		picture="\z\acp_gol\addons\SE_M90\data\UI\icon_G_Balaclava_TI_SE_M90_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
