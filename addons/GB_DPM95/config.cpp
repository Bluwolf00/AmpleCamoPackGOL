class CfgPatches
{
	class acp_gol_GB_DPM95
	{
		name="GB_DPM95";
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
	class acp_gol_GB_DPM95
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\GB_DPM95\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_GB_DPM95
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\GB_DPM95\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_GB_DPM95
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\GB_DPM95\XEH_postInit.sqf'";
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
	class acp_gol_GB_DPM95_V_PlateCarrierSpec_GB_DPM95: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\carrier_gl_rig_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_carrier_spec_rig_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrierGL_GB_DPM95: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\carrier_gl_rig_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_carrier_gl_rig_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrierSpec_GB_DPM95_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\carrier_gl_rig_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_carrier_spec_rig_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrierGL_GB_DPM95_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\carrier_gl_rig_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_carrier_gl_rig_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrier1_GB_DPM95: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_plate_carrier_1_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrier2_GB_DPM95: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_plate_carrier_2_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_BandollierB_GB_DPM95: V_BandollierB_blk
	{
		author="Seb";
		displayName="[GB DPM95] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_bandollierB_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_Rangemaster_belt_GB_DPM95: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[GB DPM95] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_Rangemaster_belt_GB_DPM95_ca.paa";
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
	class acp_gol_GB_DPM95_V_PlateCarrier1_GB_DPM95_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_plate_carrier_1_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrier2_GB_DPM95_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[GB DPM95] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_plate_carrier_2_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_Chestrig_GB_DPM95: V_Chestrig_oli
	{
		author="Seb";
		displayName="[GB DPM95] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip_chestrig_GB_DPM95.paa",
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_ChestrigF_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_EOD_GB_DPM95_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[GB DPM95] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\V_EOD_vest_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\V_EOD_Protection_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_EOD_olive_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_PlateCarrierIA1_GB_DPM95: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[GB DPM95] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip_ia_vest01_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_PlateCarrierIA1_GB_DPM95_ca.paa";
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
	class acp_gol_GB_DPM95_V_PlateCarrierIA2_GB_DPM95: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[GB DPM95] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip_ia_vest01_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_PlateCarrierIA2_GB_DPM95_ca.paa";
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
	class acp_gol_GB_DPM95_V_PlateCarrierIAGL_GB_DPM95: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[GB DPM95] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip_ia_vest01_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\GA_Carrier_GL_Rig_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_PlateCarrierIAGL_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_SmershVest_01_GB_DPM95_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[GB DPM95] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Smersh_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\Smersh_miscellaneous_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_SmershVest_01_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_SmershVest_01_radio_GB_DPM95_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[GB DPM95] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Smersh_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\Smersh_miscellaneous_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_SmershVest_01_radio_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_HarnessOGL_GB_DPM95_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[GB DPM95] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_HarnessOGL_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_HarnessO_GB_DPM95_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[GB DPM95] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_HarnessO_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_TacVestIR_GB_DPM95: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[GB DPM95] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_TacVestIR_GB_DPM95_CA.paa";
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
	class acp_gol_GB_DPM95_V_LegStrapBag_GB_DPM95_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[GB DPM95] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\V_LegStrapBag_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_LegStrapBag_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_CarrierRigKBT_01_heavy_GB_DPM95_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[GB DPM95] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\CarrierRigKBT_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_CarrierRigKBT_01_heavy_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_CarrierRigKBT_01_light_GB_DPM95_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[GB DPM95] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\CarrierRigKBT_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_CarrierRigKBT_01_light_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_CarrierRigKBT_01_GB_DPM95_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[GB DPM95] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\CarrierRigKBT_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_CarrierRigKBT_01_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_Pocketed_GB_DPM95_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[GB DPM95] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\V_Pocketed_cloth_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_Pocketed_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_TacChestrig_GB_DPM95_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[GB DPM95] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_ChestrigF_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_V_TacVest_GB_DPM95: V_TacVest_blk
	{
		author="Seb";
		displayName="[GB DPM95] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\taticalvest_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_TacVest_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetHBK_F_GB_DPM95: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[GB DPM95] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetHBK_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetHBK_F_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetHBK_headset_F_GB_DPM95: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[GB DPM95] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetHBK_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetHBK_headset_F_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetHBK_ear_F_GB_DPM95: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[GB DPM95] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetHBK_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetHBK_ear_F_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetHBK_chops_F_GB_DPM95: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[GB DPM95] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetHBK_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetHBK_chops_F_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetAggressor_F_GB_DPM95: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[GB DPM95] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\h_helmetaggressor_01_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetAggressor_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetAggressor_cover_F_GB_DPM95: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[GB DPM95] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\h_helmetaggressor_01_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetAggressor_cover_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Bandanna_GB_DPM95: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[GB DPM95] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\h_bandana_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Bandanna_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_PASGT_basic_GB_DPM95_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[GB DPM95] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_PASGT_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_PASGT_basic_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Watchcap_GB_DPM95: H_Watchcap_blk
	{
		author="Seb";
		displayName="[GB DPM95] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\woolhat_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Cap_beanie_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Booniehat_GB_DPM95: H_Booniehat_khk
	{
		author="Seb";
		displayName="[GB DPM95] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\booniehat_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_booniehat_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Booniehat_GB_DPM95_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[GB DPM95] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\booniehat_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Booniehat_GB_DPM95_hs_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Cap_GB_DPM95: H_Cap_oli
	{
		author="Seb";
		displayName="[GB DPM95] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\capb_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Cap_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Cap_GB_DPM95_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[GB DPM95] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\capb_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Cap_GB_DPM95_hs_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_GB_DPM95: H_HelmetB
	{
		author="Seb";
		displayName="[GB DPM95] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecB_GB_DPM95: H_HelmetSpecB
	{
		author="Seb";
		displayName="[GB DPM95] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetSpecB_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_light_GB_DPM95: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[GB DPM95] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_light_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_light_basic_GB_DPM95: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[GB DPM95] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_camo_GB_DPM95: H_HelmetB_camo
	{
		author="Seb";
		displayName="[GB DPM95] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\ghillie_2_GB_DPM95_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_camo_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecB_GB_DPM95_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[GB DPM95] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetSpecB_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_light_GB_DPM95_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[GB DPM95] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\equip1_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_light_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetLeaderO_GB_DPM95: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[GB DPM95] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetLeaderO_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetO_GB_DPM95: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[GB DPM95] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetO_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecO_GB_DPM95: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[GB DPM95] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetO_spec_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_MilCap_GB_DPM95: H_MilCap_gry
	{
		author="Seb";
		displayName="[GB DPM95] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\cappatrol_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_MilCap_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_MK7_GB_DPM95_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[GB DPM95] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\mk7_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_GB_DPM95_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_MK7_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetIA_GB_DPM95: H_HelmetIA
	{
		author="Seb";
		displayName="[GB DPM95] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_helmet_canvas_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_I_Helmet_canvas_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_Cap_headphones_GB_DPM95: H_Cap_marshal
	{
		author="Seb";
		displayName="[GB DPM95] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\capb_headphones_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_Cap_headphones_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecter_GB_DPM95_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[GB DPM95] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetSpecter_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecter_headset_GB_DPM95_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[GB DPM95] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_cover_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetSpecter_paint_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetSpecter_cover_GB_DPM95_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[GB DPM95] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetSpecter_01_cover_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetSpecter_cover_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetO_ViperSP_GB_DPM95_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[GB DPM95] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_vipersp_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetO_ViperSP_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_H_HelmetB_TI_GB_DPM95_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[GB DPM95] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\H_HelmetB_TI_GB_DPM95_F_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_H_HelmetB_TI_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_U_C_CBRN_Suit_01_GB_DPM95_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[GB DPM95] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\CBRN_Suit_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_C_CBRN_Suit_01_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_C_CBRN_Suit_01_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_CombatUniform_GB_DPM95: U_I_CombatUniform
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_CombatUniform_shortsleeve_GB_DPM95: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_shortsleeve_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_shortsleeve_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_CombatUniform_GB_DPM95_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_GB_DPM95_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_CombatUniform_shortsleeve_GB_DPM95_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_shortsleeve_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_shortsleeve_GB_DPM95_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_GB_DPM95_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_GB_DPM95_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_shortsleeve_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_shortsleeve_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_sweater_GB_DPM95_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_sweater_GB_DPM95_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_BG_Guerrilla_6_GB_DPM95: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[GB DPM95] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_BG_Guerrilla_6_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_sweater_GB_DPM95_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_sweater_GB_DPM95_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_BG_Guerrilla_6_GB_DPM95_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[GB DPM95] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_BG_Guerrilla_6_GB_DPM95_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_tanktop_GB_DPM95_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_TankTop_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_tanktop_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_tanktop_GB_DPM95_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_I_E_Uniform_GB_DPM95_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_GB_DPM95_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CombatUniform_GB_DPM95: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CombatUniform_vest_GB_DPM95: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_vest_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CombatUniform_tshirt_GB_DPM95: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\nato_tshirt_GB_DPM95.paa",
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_tshirt_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_tshirt_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CombatUniform_GB_DPM95_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_GB_DPM95_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CombatUniform_vest_GB_DPM95_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[GB DPM95] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_vest_GB_DPM95_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_CombatUniform_GB_DPM95: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[GB DPM95] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_CombatUniform_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_CombatUniform_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CTRG_Soldier_GB_DPM95_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[GB DPM95] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CTRG_Soldier_3_GB_DPM95_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[GB DPM95] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_3_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CTRG_Soldier_2_GB_DPM95_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[GB DPM95] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\nato_tshirt_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_tshirt_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_2_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CTRG_Soldier_GB_DPM95_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[GB DPM95] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_GB_DPM95_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_CTRG_Soldier_3_GB_DPM95_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[GB DPM95] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_3_GB_DPM95_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_R_Gorka_01_GB_DPM95_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[GB DPM95] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_O_R_Gorka_01_GB_DPM95_F.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_Gorka_01_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_R_Gorka_01_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_B_HeliPilotCoveralls_GB_DPM95: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[GB DPM95] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\coveralls_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_B_G_HeliPilotCoveralls_GB_DPM95_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_B_HeliPilotCoveralls_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_officer_noInsignia_GB_DPM95_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[GB DPM95] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Officer_noInsignia_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_officer_noInsignia_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_officer_noInsignia_GB_DPM95_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_officer_noInsignia_GB_DPM95_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[GB DPM95] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Officer_noInsignia_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_officer_noInsignia_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_officer_noInsignia_GB_DPM95_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_PilotCoveralls_GB_DPM95: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[GB DPM95] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\pilot_suit_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_PilotCoveralls_GB_DPM95";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_GB_DPM95_U_O_officer_GB_DPM95_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[GB DPM95] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\ViperOp_Suit_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_V_Soldier_Viper_GB_DPM95_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_GB_DPM95_Soldier_U_O_officer_GB_DPM95_hex_F";
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
	class acp_gol_GB_DPM95_Soldier_U_C_CBRN_Suit_01_GB_DPM95_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CBRN Suit";
		uniformClass="acp_gol_GB_DPM95_U_C_CBRN_Suit_01_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\CBRN_Suit_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_C_CBRN_Suit_01_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_GB_DPM95: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [AAF]";
		uniformClass="acp_gol_GB_DPM95_U_I_CombatUniform_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_shortsleeve_GB_DPM95: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_GB_DPM95_U_I_CombatUniform_shortsleeve_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_shortsleeve_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_GB_DPM95_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_I_CombatUniform_GB_DPM95_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_CombatUniform_shortsleeve_GB_DPM95_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_GB_DPM95_U_I_CombatUniform_shortsleeve_GB_DPM95_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_I_CombatUniform_shortsleeve_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_GB_DPM95_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF]";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_GB_DPM95_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_shortsleeve_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_shortsleeve_GB_DPM95_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_shortsleeve_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_sweater_GB_DPM95_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_sweater_GB_DPM95_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_BG_Guerrilla_6_GB_DPM95: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Guerilla Apparel";
		uniformClass="acp_gol_GB_DPM95_U_BG_Guerrilla_6_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_sweater_GB_DPM95_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_sweater_GB_DPM95_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_BG_Guerrilla_6_GB_DPM95_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_BG_Guerrilla_6_GB_DPM95_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Uniform_01_Sweater_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_sweater_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_tanktop_GB_DPM95_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_tanktop_GB_DPM95_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_TankTop_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_tanktop_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_I_E_Uniform_GB_DPM95_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_I_E_Uniform_GB_DPM95_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_I_Soldier_01_GB_DPM95_CO_flag.paa",
			"\z\acp_gol\addons\GB_DPM95\data\I_E_Soldier_01_gloves_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_I_E_Uniform_01_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_GB_DPM95: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [US]";
		uniformClass="acp_gol_GB_DPM95_U_B_CombatUniform_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_vest_GB_DPM95: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_GB_DPM95_U_B_CombatUniform_vest_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_tshirt_GB_DPM95: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_GB_DPM95_U_B_CombatUniform_tshirt_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\nato_tshirt_GB_DPM95.paa",
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_tshirt_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_GB_DPM95_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_B_CombatUniform_GB_DPM95_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CombatUniform_vest_GB_DPM95_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_GB_DPM95_U_B_CombatUniform_vest_GB_DPM95_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing1_GB_DPM95_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_CombatUniform_GB_DPM95: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Fatigues [CSAT]";
		uniformClass="acp_gol_GB_DPM95_U_O_CombatUniform_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\clothing_GB_DPM95_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\tech_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_CombatUniform_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_GB_DPM95_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CTRG Stealth Uniform";
		uniformClass="acp_gol_GB_DPM95_U_B_CTRG_Soldier_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_3_GB_DPM95_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_GB_DPM95_U_B_CTRG_Soldier_3_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_2_GB_DPM95_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_GB_DPM95_U_B_CTRG_Soldier_2_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO.paa",
			"\z\acp_gol\addons\GB_DPM95\data\nato_tshirt_GB_DPM95.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_tshirt_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_GB_DPM95_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_B_CTRG_Soldier_GB_DPM95_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_uniform_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_CTRG_Soldier_3_GB_DPM95_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_GB_DPM95_U_B_CTRG_Soldier_3_GB_DPM95_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_B_CTRG_Soldier_GB_DPM95_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_U_B_CTRG_vest_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_R_Gorka_01_GB_DPM95_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Granit";
		uniformClass="acp_gol_GB_DPM95_U_O_R_Gorka_01_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\U_O_R_Gorka_01_GB_DPM95_F.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_Gorka_01_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_B_HeliPilotCoveralls_GB_DPM95: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Heli Pilot Coveralls";
		uniformClass="acp_gol_GB_DPM95_U_B_HeliPilotCoveralls_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\coveralls_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_B_G_HeliPilotCoveralls_GB_DPM95_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_officer_noInsignia_GB_DPM95_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Light Fatigues";
		uniformClass="acp_gol_GB_DPM95_U_O_officer_noInsignia_GB_DPM95_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Officer_noInsignia_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_officer_noInsignia_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_officer_noInsignia_GB_DPM95_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Light Fatigues (Flag)";
		uniformClass="acp_gol_GB_DPM95_U_O_officer_noInsignia_GB_DPM95_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Officer_noInsignia_GB_DPM95_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_R_officer_noInsignia_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_PilotCoveralls_GB_DPM95: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Pilot Coveralls";
		uniformClass="acp_gol_GB_DPM95_U_O_PilotCoveralls_GB_DPM95";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\pilot_suit_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_Soldier_U_O_officer_GB_DPM95_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [GB DPM95] Special Purpose Suit";
		uniformClass="acp_gol_GB_DPM95_U_O_officer_GB_DPM95_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\ViperOp_Suit_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_U_O_V_Soldier_Viper_GB_DPM95_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_GB_DPM95_B_AssaultPack_GB_DPM95: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[GB DPM95] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_compact_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_AssaultPack_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_AssaultPackEnhanced_GB_DPM95: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[GB DPM95] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_compact_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_AssaultPack_GB_DPM95_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_GB_DPM95_B_AssaultPackEnhanced_GB_DPM95_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[GB DPM95] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_compact_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\vests_GB_DPM95_co_flag.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_AssaultPack_GB_DPM95_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_GB_DPM95_B_Bergen_GB_DPM95_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[GB DPM95] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\Bergen_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\Icon_B_Bergen_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_Carryall_GB_DPM95: B_Carryall_cbr
	{
		author="Seb";
		displayName="[GB DPM95] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_tortila_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_C_Tortila_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_FieldPack_GB_DPM95: B_FieldPack_oli
	{
		author="Seb";
		displayName="[GB DPM95] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_gorod_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_C_Gorod_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_Kitbag_rgr_GB_DPM95: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[GB DPM95] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_fast_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_C_Kitbag_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_LegStrapBag_GB_DPM95_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[GB DPM95] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\V_LegStrapBag_GB_DPM95_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_V_LegStrapBag_GB_DPM95_CA.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_RadioBag_01_GB_DPM95_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[GB DPM95] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_C_UAV_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_TacticalPack_GB_DPM95: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[GB DPM95] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_small_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_C_Small_GB_DPM95.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_ViperHarness_GB_DPM95_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[GB DPM95] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_viperop_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_ViperHarness_GB_DPM95_F_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_B_ViperLightHarness_GB_DPM95_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[GB DPM95] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\backpack_viperop_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_B_ViperLightHarness_GB_DPM95_F_ca.paa";
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
	class acp_gol_GB_DPM95_G_Balaclava_GB_DPM95: G_Balaclava_blk
	{
		author="Seb";
		displayName="[GB DPM95] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_balaclava_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Balaclava_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Balaclava_combat_GB_DPM95: G_Balaclava_combat
	{
		author="Seb";
		displayName="[GB DPM95] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_balaclava_GB_DPM95_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\g_combat_GB_DPM95_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Balaclava_combat_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Balaclava_lowprofile_GB_DPM95: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[GB DPM95] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_balaclava_GB_DPM95_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Balaclava_lowprofile_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Bandanna_aviator_GB_DPM95: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[GB DPM95] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_bandMask_GB_DPM95_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Bandana_aviator_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Bandanna_sport_GB_DPM95: G_Bandanna_sport
	{
		author="Seb";
		displayName="[GB DPM95] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_bandMask_GB_DPM95_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Bandana_shades_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Bandanna_shades_GB_DPM95: G_Bandanna_shades
	{
		author="Seb";
		displayName="[GB DPM95] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_bandMask_GB_DPM95_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Bandana_sport_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Bandanna_GB_DPM95: G_Bandanna_blk
	{
		author="Seb";
		displayName="[GB DPM95] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\headgear_bandMask_GB_DPM95_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Bandana_clean_GB_DPM95_ca.paa";
		scope=2;
	};
	class acp_gol_GB_DPM95_G_Combat_GB_DPM95: G_Combat
	{
		author="Seb";
		displayName="[GB DPM95] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\g_combat_GB_DPM95_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_g_combat_GB_DPM95_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_GB_DPM95_G_Balaclava_TI_G_GB_DPM95_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[GB DPM95] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\G_Balaclava_TI_GB_DPM95_F_co.paa",
			"\z\acp_gol\addons\GB_DPM95\data\g_combat_GB_DPM95_ca.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Balaclava_TI_G_GB_DPM95_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_GB_DPM95_G_Balaclava_TI_GB_DPM95_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[GB DPM95] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\GB_DPM95\data\G_Balaclava_TI_GB_DPM95_F_co.paa"
		};
		picture="\z\acp_gol\addons\GB_DPM95\data\UI\icon_G_Balaclava_TI_GB_DPM95_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
