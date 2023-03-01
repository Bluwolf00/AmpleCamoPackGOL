class CfgPatches
{
	class acp_gol_IL_IDF
	{
		name="IL_IDF";
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
	class acp_gol_IL_IDF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IL_IDF\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_IL_IDF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IL_IDF\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_IL_IDF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IL_IDF\XEH_postInit.sqf'";
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
	class acp_gol_IL_IDF_V_PlateCarrierSpec_IL_IDF: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\carrier_gl_rig_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_carrier_spec_rig_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrierGL_IL_IDF: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\carrier_gl_rig_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_carrier_gl_rig_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrierSpec_IL_IDF_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\carrier_gl_rig_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_carrier_spec_rig_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrierGL_IL_IDF_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\carrier_gl_rig_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_carrier_gl_rig_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrier1_IL_IDF: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_plate_carrier_1_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrier2_IL_IDF: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_plate_carrier_2_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_BandollierB_IL_IDF: V_BandollierB_blk
	{
		author="Seb";
		displayName="[IL IDF] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_bandollierB_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_Rangemaster_belt_IL_IDF: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[IL IDF] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_Rangemaster_belt_IL_IDF_ca.paa";
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
	class acp_gol_IL_IDF_V_PlateCarrier1_IL_IDF_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_plate_carrier_1_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrier2_IL_IDF_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[IL IDF] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_plate_carrier_2_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_Chestrig_IL_IDF: V_Chestrig_oli
	{
		author="Seb";
		displayName="[IL IDF] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip_chestrig_IL_IDF.paa",
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_ChestrigF_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_EOD_IL_IDF_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[IL IDF] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\V_EOD_vest_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\V_EOD_Protection_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_EOD_olive_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_PlateCarrierIA1_IL_IDF: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[IL IDF] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip_ia_vest01_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_PlateCarrierIA1_IL_IDF_ca.paa";
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
	class acp_gol_IL_IDF_V_PlateCarrierIA2_IL_IDF: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[IL IDF] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip_ia_vest01_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_PlateCarrierIA2_IL_IDF_ca.paa";
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
	class acp_gol_IL_IDF_V_PlateCarrierIAGL_IL_IDF: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[IL IDF] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip_ia_vest01_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\GA_Carrier_GL_Rig_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_PlateCarrierIAGL_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_SmershVest_01_IL_IDF_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[IL IDF] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Smersh_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\Smersh_miscellaneous_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_SmershVest_01_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_SmershVest_01_radio_IL_IDF_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[IL IDF] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Smersh_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\Smersh_miscellaneous_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_SmershVest_01_radio_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_HarnessOGL_IL_IDF_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[IL IDF] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_HarnessOGL_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_HarnessO_IL_IDF_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[IL IDF] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_HarnessO_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_TacVestIR_IL_IDF: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[IL IDF] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_TacVestIR_IL_IDF_CA.paa";
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
	class acp_gol_IL_IDF_V_LegStrapBag_IL_IDF_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[IL IDF] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\V_LegStrapBag_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_LegStrapBag_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_CarrierRigKBT_01_heavy_IL_IDF_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[IL IDF] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\CarrierRigKBT_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_CarrierRigKBT_01_heavy_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_CarrierRigKBT_01_light_IL_IDF_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[IL IDF] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\CarrierRigKBT_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_CarrierRigKBT_01_light_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_CarrierRigKBT_01_IL_IDF_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[IL IDF] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\CarrierRigKBT_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_CarrierRigKBT_01_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_Pocketed_IL_IDF_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[IL IDF] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\V_Pocketed_cloth_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_Pocketed_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_TacChestrig_IL_IDF_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[IL IDF] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_ChestrigF_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_V_TacVest_IL_IDF: V_TacVest_blk
	{
		author="Seb";
		displayName="[IL IDF] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\taticalvest_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_TacVest_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetHBK_F_IL_IDF: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[IL IDF] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetHBK_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetHBK_F_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetHBK_headset_F_IL_IDF: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[IL IDF] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetHBK_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetHBK_headset_F_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetHBK_ear_F_IL_IDF: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[IL IDF] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetHBK_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetHBK_ear_F_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetHBK_chops_F_IL_IDF: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[IL IDF] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetHBK_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetHBK_chops_F_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetAggressor_F_IL_IDF: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[IL IDF] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\h_helmetaggressor_01_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetAggressor_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetAggressor_cover_F_IL_IDF: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[IL IDF] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\h_helmetaggressor_01_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetAggressor_cover_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Bandanna_IL_IDF: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[IL IDF] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\h_bandana_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Bandanna_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_PASGT_basic_IL_IDF_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[IL IDF] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_PASGT_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_PASGT_basic_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Watchcap_IL_IDF: H_Watchcap_blk
	{
		author="Seb";
		displayName="[IL IDF] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\woolhat_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Cap_beanie_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Booniehat_IL_IDF: H_Booniehat_khk
	{
		author="Seb";
		displayName="[IL IDF] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\booniehat_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_booniehat_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Booniehat_IL_IDF_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[IL IDF] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\booniehat_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Booniehat_IL_IDF_hs_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Cap_IL_IDF: H_Cap_oli
	{
		author="Seb";
		displayName="[IL IDF] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\capb_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Cap_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Cap_IL_IDF_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[IL IDF] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\capb_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Cap_IL_IDF_hs_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_IL_IDF: H_HelmetB
	{
		author="Seb";
		displayName="[IL IDF] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecB_IL_IDF: H_HelmetSpecB
	{
		author="Seb";
		displayName="[IL IDF] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetSpecB_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_light_IL_IDF: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[IL IDF] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_light_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_light_basic_IL_IDF: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[IL IDF] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_camo_IL_IDF: H_HelmetB_camo
	{
		author="Seb";
		displayName="[IL IDF] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\ghillie_2_IL_IDF_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_camo_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecB_IL_IDF_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[IL IDF] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetSpecB_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_light_IL_IDF_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[IL IDF] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\equip1_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_light_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetLeaderO_IL_IDF: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[IL IDF] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetLeaderO_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetO_IL_IDF: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[IL IDF] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetO_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecO_IL_IDF: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[IL IDF] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetO_spec_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_MilCap_IL_IDF: H_MilCap_gry
	{
		author="Seb";
		displayName="[IL IDF] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\cappatrol_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_MilCap_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_MK7_IL_IDF_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[IL IDF] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\mk7_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_IL_IDF_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_MK7_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetIA_IL_IDF: H_HelmetIA
	{
		author="Seb";
		displayName="[IL IDF] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_helmet_canvas_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_I_Helmet_canvas_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_Cap_headphones_IL_IDF: H_Cap_marshal
	{
		author="Seb";
		displayName="[IL IDF] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\capb_headphones_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_Cap_headphones_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecter_IL_IDF_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[IL IDF] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetSpecter_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecter_headset_IL_IDF_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[IL IDF] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_cover_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetSpecter_paint_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetSpecter_cover_IL_IDF_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[IL IDF] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetSpecter_01_cover_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetSpecter_cover_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetO_ViperSP_IL_IDF_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[IL IDF] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_vipersp_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetO_ViperSP_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_H_HelmetB_TI_IL_IDF_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[IL IDF] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\H_HelmetB_TI_IL_IDF_F_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_H_HelmetB_TI_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_U_C_CBRN_Suit_01_IL_IDF_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[IL IDF] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\CBRN_Suit_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_C_CBRN_Suit_01_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_C_CBRN_Suit_01_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_CombatUniform_IL_IDF: U_I_CombatUniform
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_CombatUniform_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_CombatUniform_shortsleeve_IL_IDF: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_CombatUniform_shortsleeve_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_CombatUniform_IL_IDF_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_CombatUniform_IL_IDF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_CombatUniform_shortsleeve_IL_IDF_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_CombatUniform_shortsleeve_IL_IDF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_IL_IDF_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_IL_IDF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_shortsleeve_IL_IDF_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_shortsleeve_IL_IDF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_shortsleeve_IL_IDF_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_shortsleeve_IL_IDF_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_sweater_IL_IDF_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_sweater_IL_IDF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_BG_Guerrilla_6_IL_IDF: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[IL IDF] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_BG_Guerrilla_6_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_sweater_IL_IDF_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_sweater_IL_IDF_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_BG_Guerrilla_6_IL_IDF_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[IL IDF] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_BG_Guerrilla_6_IL_IDF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_tanktop_IL_IDF_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_TankTop_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_tanktop_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_tanktop_IL_IDF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_I_E_Uniform_IL_IDF_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_I_E_Uniform_IL_IDF_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CombatUniform_IL_IDF: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CombatUniform_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CombatUniform_vest_IL_IDF: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CombatUniform_vest_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CombatUniform_tshirt_IL_IDF: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\nato_tshirt_IL_IDF.paa",
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_tshirt_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CombatUniform_tshirt_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CombatUniform_IL_IDF_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CombatUniform_IL_IDF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CombatUniform_vest_IL_IDF_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[IL IDF] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CombatUniform_vest_IL_IDF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_CombatUniform_IL_IDF: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[IL IDF] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_CombatUniform_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_CombatUniform_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CTRG_Soldier_IL_IDF_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[IL IDF] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CTRG_Soldier_3_IL_IDF_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[IL IDF] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_3_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CTRG_Soldier_2_IL_IDF_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[IL IDF] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\nato_tshirt_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_tshirt_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_2_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CTRG_Soldier_IL_IDF_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[IL IDF] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_IL_IDF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_CTRG_Soldier_3_IL_IDF_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[IL IDF] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_3_IL_IDF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_R_Gorka_01_IL_IDF_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[IL IDF] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_O_R_Gorka_01_IL_IDF_F.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_Gorka_01_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_R_Gorka_01_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_B_HeliPilotCoveralls_IL_IDF: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[IL IDF] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\coveralls_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_B_G_HeliPilotCoveralls_IL_IDF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_B_HeliPilotCoveralls_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_officer_noInsignia_IL_IDF_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[IL IDF] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Officer_noInsignia_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_officer_noInsignia_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_officer_noInsignia_IL_IDF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_officer_noInsignia_IL_IDF_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[IL IDF] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Officer_noInsignia_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_officer_noInsignia_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_officer_noInsignia_IL_IDF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_PilotCoveralls_IL_IDF: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[IL IDF] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\pilot_suit_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_PilotCoveralls_IL_IDF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IL_IDF_U_O_officer_IL_IDF_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[IL IDF] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\ViperOp_Suit_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_V_Soldier_Viper_IL_IDF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IL_IDF_Soldier_U_O_officer_IL_IDF_hex_F";
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
	class acp_gol_IL_IDF_Soldier_U_C_CBRN_Suit_01_IL_IDF_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CBRN Suit";
		uniformClass="acp_gol_IL_IDF_U_C_CBRN_Suit_01_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\CBRN_Suit_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_C_CBRN_Suit_01_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_CombatUniform_IL_IDF: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [AAF]";
		uniformClass="acp_gol_IL_IDF_U_I_CombatUniform_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_CombatUniform_shortsleeve_IL_IDF: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_IL_IDF_U_I_CombatUniform_shortsleeve_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_CombatUniform_IL_IDF_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_IL_IDF_U_I_CombatUniform_IL_IDF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_CombatUniform_shortsleeve_IL_IDF_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_IL_IDF_U_I_CombatUniform_shortsleeve_IL_IDF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_IL_IDF_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF]";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_IL_IDF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_shortsleeve_IL_IDF_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_shortsleeve_IL_IDF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_shortsleeve_IL_IDF_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_shortsleeve_IL_IDF_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_sweater_IL_IDF_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_sweater_IL_IDF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_BG_Guerrilla_6_IL_IDF: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Guerilla Apparel";
		uniformClass="acp_gol_IL_IDF_U_BG_Guerrilla_6_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_sweater_IL_IDF_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_sweater_IL_IDF_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_BG_Guerrilla_6_IL_IDF_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_IL_IDF_U_BG_Guerrilla_6_IL_IDF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Uniform_01_Sweater_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_sweater_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_tanktop_IL_IDF_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_tanktop_IL_IDF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_TankTop_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_tanktop_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_I_E_Uniform_IL_IDF_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_IL_IDF_U_I_E_Uniform_IL_IDF_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_I_Soldier_01_IL_IDF_CO_flag.paa",
			"\z\acp_gol\addons\IL_IDF\data\I_E_Soldier_01_gloves_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_I_E_Uniform_01_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CombatUniform_IL_IDF: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [US]";
		uniformClass="acp_gol_IL_IDF_U_B_CombatUniform_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CombatUniform_vest_IL_IDF: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_IL_IDF_U_B_CombatUniform_vest_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CombatUniform_tshirt_IL_IDF: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_IL_IDF_U_B_CombatUniform_tshirt_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\nato_tshirt_IL_IDF.paa",
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_tshirt_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CombatUniform_IL_IDF_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_IL_IDF_U_B_CombatUniform_IL_IDF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CombatUniform_vest_IL_IDF_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_IL_IDF_U_B_CombatUniform_vest_IL_IDF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing1_IL_IDF_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_CombatUniform_IL_IDF: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Fatigues [CSAT]";
		uniformClass="acp_gol_IL_IDF_U_O_CombatUniform_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\clothing_IL_IDF_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\tech_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_CombatUniform_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_IL_IDF_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CTRG Stealth Uniform";
		uniformClass="acp_gol_IL_IDF_U_B_CTRG_Soldier_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_3_IL_IDF_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_IL_IDF_U_B_CTRG_Soldier_3_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_2_IL_IDF_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_IL_IDF_U_B_CTRG_Soldier_2_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO.paa",
			"\z\acp_gol\addons\IL_IDF\data\nato_tshirt_IL_IDF.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_tshirt_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_IL_IDF_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_IL_IDF_U_B_CTRG_Soldier_IL_IDF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_uniform_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_CTRG_Soldier_3_IL_IDF_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [IL IDF] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_IL_IDF_U_B_CTRG_Soldier_3_IL_IDF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_B_CTRG_Soldier_IL_IDF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_U_B_CTRG_vest_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_R_Gorka_01_IL_IDF_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Granit";
		uniformClass="acp_gol_IL_IDF_U_O_R_Gorka_01_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\U_O_R_Gorka_01_IL_IDF_F.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_Gorka_01_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_B_HeliPilotCoveralls_IL_IDF: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Heli Pilot Coveralls";
		uniformClass="acp_gol_IL_IDF_U_B_HeliPilotCoveralls_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\coveralls_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_B_G_HeliPilotCoveralls_IL_IDF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_officer_noInsignia_IL_IDF_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Light Fatigues";
		uniformClass="acp_gol_IL_IDF_U_O_officer_noInsignia_IL_IDF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Officer_noInsignia_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_officer_noInsignia_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_officer_noInsignia_IL_IDF_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Light Fatigues (Flag)";
		uniformClass="acp_gol_IL_IDF_U_O_officer_noInsignia_IL_IDF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Officer_noInsignia_IL_IDF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_R_officer_noInsignia_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_PilotCoveralls_IL_IDF: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Pilot Coveralls";
		uniformClass="acp_gol_IL_IDF_U_O_PilotCoveralls_IL_IDF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\pilot_suit_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_Soldier_U_O_officer_IL_IDF_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [IL IDF] Special Purpose Suit";
		uniformClass="acp_gol_IL_IDF_U_O_officer_IL_IDF_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\ViperOp_Suit_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_U_O_V_Soldier_Viper_IL_IDF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IL_IDF_B_AssaultPack_IL_IDF: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[IL IDF] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_compact_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_AssaultPack_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_AssaultPackEnhanced_IL_IDF: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[IL IDF] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_compact_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_AssaultPack_IL_IDF_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_IL_IDF_B_AssaultPackEnhanced_IL_IDF_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[IL IDF] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_compact_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\vests_IL_IDF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_AssaultPack_IL_IDF_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_IL_IDF_B_Bergen_IL_IDF_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[IL IDF] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\Bergen_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\Icon_B_Bergen_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_Carryall_IL_IDF: B_Carryall_cbr
	{
		author="Seb";
		displayName="[IL IDF] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_tortila_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_C_Tortila_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_FieldPack_IL_IDF: B_FieldPack_oli
	{
		author="Seb";
		displayName="[IL IDF] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_gorod_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_C_Gorod_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_Kitbag_rgr_IL_IDF: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[IL IDF] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_fast_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_C_Kitbag_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_LegStrapBag_IL_IDF_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[IL IDF] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\V_LegStrapBag_IL_IDF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_V_LegStrapBag_IL_IDF_CA.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_RadioBag_01_IL_IDF_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[IL IDF] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_C_UAV_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_TacticalPack_IL_IDF: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[IL IDF] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_small_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_C_Small_IL_IDF.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_ViperHarness_IL_IDF_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[IL IDF] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_viperop_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_ViperHarness_IL_IDF_F_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_B_ViperLightHarness_IL_IDF_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[IL IDF] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\backpack_viperop_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_B_ViperLightHarness_IL_IDF_F_ca.paa";
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
	class acp_gol_IL_IDF_G_Balaclava_IL_IDF: G_Balaclava_blk
	{
		author="Seb";
		displayName="[IL IDF] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_balaclava_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Balaclava_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Balaclava_combat_IL_IDF: G_Balaclava_combat
	{
		author="Seb";
		displayName="[IL IDF] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_balaclava_IL_IDF_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\g_combat_IL_IDF_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Balaclava_combat_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Balaclava_lowprofile_IL_IDF: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[IL IDF] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_balaclava_IL_IDF_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Balaclava_lowprofile_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Bandanna_aviator_IL_IDF: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[IL IDF] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_bandMask_IL_IDF_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Bandana_aviator_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Bandanna_sport_IL_IDF: G_Bandanna_sport
	{
		author="Seb";
		displayName="[IL IDF] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_bandMask_IL_IDF_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Bandana_shades_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Bandanna_shades_IL_IDF: G_Bandanna_shades
	{
		author="Seb";
		displayName="[IL IDF] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_bandMask_IL_IDF_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Bandana_sport_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Bandanna_IL_IDF: G_Bandanna_blk
	{
		author="Seb";
		displayName="[IL IDF] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\headgear_bandMask_IL_IDF_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Bandana_clean_IL_IDF_ca.paa";
		scope=2;
	};
	class acp_gol_IL_IDF_G_Combat_IL_IDF: G_Combat
	{
		author="Seb";
		displayName="[IL IDF] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\g_combat_IL_IDF_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_g_combat_IL_IDF_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_IL_IDF_G_Balaclava_TI_G_IL_IDF_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[IL IDF] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\G_Balaclava_TI_IL_IDF_F_co.paa",
			"\z\acp_gol\addons\IL_IDF\data\g_combat_IL_IDF_ca.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Balaclava_TI_G_IL_IDF_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_IL_IDF_G_Balaclava_TI_IL_IDF_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[IL IDF] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IL_IDF\data\G_Balaclava_TI_IL_IDF_F_co.paa"
		};
		picture="\z\acp_gol\addons\IL_IDF\data\UI\icon_G_Balaclava_TI_IL_IDF_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
