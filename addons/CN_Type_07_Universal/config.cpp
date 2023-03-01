class CfgPatches
{
	class acp_gol_CN_Type_07_Universal
	{
		name="CN_Type_07_Universal";
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
	class acp_gol_CN_Type_07_Universal
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CN_Type_07_Universal\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_CN_Type_07_Universal
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CN_Type_07_Universal\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_CN_Type_07_Universal
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CN_Type_07_Universal\XEH_postInit.sqf'";
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
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierSpec_CN_Type_07_Universal: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\carrier_gl_rig_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_carrier_spec_rig_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierGL_CN_Type_07_Universal: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\carrier_gl_rig_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_carrier_gl_rig_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierSpec_CN_Type_07_Universal_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\carrier_gl_rig_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_carrier_spec_rig_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierGL_CN_Type_07_Universal_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\carrier_gl_rig_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_carrier_gl_rig_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrier1_CN_Type_07_Universal: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_plate_carrier_1_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrier2_CN_Type_07_Universal: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_plate_carrier_2_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_BandollierB_CN_Type_07_Universal: V_BandollierB_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_bandollierB_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_Rangemaster_belt_CN_Type_07_Universal: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_Rangemaster_belt_CN_Type_07_Universal_ca.paa";
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
	class acp_gol_CN_Type_07_Universal_V_PlateCarrier1_CN_Type_07_Universal_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_plate_carrier_1_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrier2_CN_Type_07_Universal_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_plate_carrier_2_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_Chestrig_CN_Type_07_Universal: V_Chestrig_oli
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip_chestrig_CN_Type_07_Universal.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_ChestrigF_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_EOD_CN_Type_07_Universal_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\V_EOD_vest_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\V_EOD_Protection_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_EOD_olive_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierIA1_CN_Type_07_Universal: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[CN Type 07 Universal] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip_ia_vest01_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_PlateCarrierIA1_CN_Type_07_Universal_ca.paa";
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
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierIA2_CN_Type_07_Universal: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[CN Type 07 Universal] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip_ia_vest01_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_PlateCarrierIA2_CN_Type_07_Universal_ca.paa";
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
	class acp_gol_CN_Type_07_Universal_V_PlateCarrierIAGL_CN_Type_07_Universal: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[CN Type 07 Universal] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip_ia_vest01_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\GA_Carrier_GL_Rig_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_PlateCarrierIAGL_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_SmershVest_01_CN_Type_07_Universal_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Smersh_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Smersh_miscellaneous_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_SmershVest_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_SmershVest_01_radio_CN_Type_07_Universal_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Smersh_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Smersh_miscellaneous_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_SmershVest_01_radio_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_HarnessOGL_CN_Type_07_Universal_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_HarnessOGL_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_HarnessO_CN_Type_07_Universal_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_HarnessO_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_TacVestIR_CN_Type_07_Universal: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_TacVestIR_CN_Type_07_Universal_CA.paa";
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
	class acp_gol_CN_Type_07_Universal_V_LegStrapBag_CN_Type_07_Universal_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\V_LegStrapBag_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_LegStrapBag_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_CarrierRigKBT_01_heavy_CN_Type_07_Universal_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\CarrierRigKBT_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_CarrierRigKBT_01_heavy_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_CarrierRigKBT_01_light_CN_Type_07_Universal_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\CarrierRigKBT_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_CarrierRigKBT_01_light_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_CarrierRigKBT_01_CN_Type_07_Universal_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\CarrierRigKBT_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_CarrierRigKBT_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_Pocketed_CN_Type_07_Universal_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\V_Pocketed_cloth_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_Pocketed_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_TacChestrig_CN_Type_07_Universal_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_ChestrigF_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_V_TacVest_CN_Type_07_Universal: V_TacVest_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\taticalvest_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_TacVest_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetHBK_F_CN_Type_07_Universal: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetHBK_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetHBK_F_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetHBK_headset_F_CN_Type_07_Universal: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetHBK_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetHBK_headset_F_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetHBK_ear_F_CN_Type_07_Universal: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetHBK_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetHBK_ear_F_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetHBK_chops_F_CN_Type_07_Universal: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetHBK_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetHBK_chops_F_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetAggressor_F_CN_Type_07_Universal: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\h_helmetaggressor_01_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetAggressor_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetAggressor_cover_F_CN_Type_07_Universal: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\h_helmetaggressor_01_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetAggressor_cover_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Bandanna_CN_Type_07_Universal: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\h_bandana_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Bandanna_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_PASGT_basic_CN_Type_07_Universal_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_PASGT_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_PASGT_basic_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Watchcap_CN_Type_07_Universal: H_Watchcap_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\woolhat_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Cap_beanie_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Booniehat_CN_Type_07_Universal: H_Booniehat_khk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\booniehat_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_booniehat_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Booniehat_CN_Type_07_Universal_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\booniehat_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Booniehat_CN_Type_07_Universal_hs_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Cap_CN_Type_07_Universal: H_Cap_oli
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\capb_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Cap_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Cap_CN_Type_07_Universal_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\capb_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Cap_CN_Type_07_Universal_hs_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_CN_Type_07_Universal: H_HelmetB
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecB_CN_Type_07_Universal: H_HelmetSpecB
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetSpecB_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_light_CN_Type_07_Universal: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_light_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_light_basic_CN_Type_07_Universal: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_camo_CN_Type_07_Universal: H_HelmetB_camo
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\ghillie_2_CN_Type_07_Universal_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_camo_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecB_CN_Type_07_Universal_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetSpecB_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_light_CN_Type_07_Universal_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\equip1_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_light_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetLeaderO_CN_Type_07_Universal: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetLeaderO_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetO_CN_Type_07_Universal: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetO_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecO_CN_Type_07_Universal: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetO_spec_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_MilCap_CN_Type_07_Universal: H_MilCap_gry
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\cappatrol_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_MilCap_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_MK7_CN_Type_07_Universal_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\mk7_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_CN_Type_07_Universal_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_MK7_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetIA_CN_Type_07_Universal: H_HelmetIA
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_helmet_canvas_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_I_Helmet_canvas_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_Cap_headphones_CN_Type_07_Universal: H_Cap_marshal
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\capb_headphones_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_Cap_headphones_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecter_CN_Type_07_Universal_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetSpecter_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecter_headset_CN_Type_07_Universal_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_cover_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetSpecter_paint_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetSpecter_cover_CN_Type_07_Universal_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetSpecter_01_cover_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetSpecter_cover_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetO_ViperSP_CN_Type_07_Universal_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_vipersp_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetO_ViperSP_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_H_HelmetB_TI_CN_Type_07_Universal_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\H_HelmetB_TI_CN_Type_07_Universal_F_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_H_HelmetB_TI_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_U_C_CBRN_Suit_01_CN_Type_07_Universal_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\CBRN_Suit_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_C_CBRN_Suit_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_C_CBRN_Suit_01_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_CombatUniform_CN_Type_07_Universal: U_I_CombatUniform
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_CombatUniform_CN_Type_07_Universal_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_CN_Type_07_Universal_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_CN_Type_07_Universal_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_CN_Type_07_Universal_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_BG_Guerrilla_6_CN_Type_07_Universal: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_BG_Guerrilla_6_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_BG_Guerrilla_6_CN_Type_07_Universal_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_BG_Guerrilla_6_CN_Type_07_Universal_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_tanktop_CN_Type_07_Universal_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_TankTop_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_tanktop_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_tanktop_CN_Type_07_Universal_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_I_E_Uniform_CN_Type_07_Universal_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_CN_Type_07_Universal_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CombatUniform_CN_Type_07_Universal: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CombatUniform_vest_CN_Type_07_Universal: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_vest_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CombatUniform_tshirt_CN_Type_07_Universal: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\nato_tshirt_CN_Type_07_Universal.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_tshirt_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_tshirt_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CombatUniform_CN_Type_07_Universal_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_CN_Type_07_Universal_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CombatUniform_vest_CN_Type_07_Universal_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_vest_CN_Type_07_Universal_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_CombatUniform_CN_Type_07_Universal: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_CombatUniform_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_CombatUniform_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_CN_Type_07_Universal_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_2_CN_Type_07_Universal_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\nato_tshirt_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_tshirt_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_2_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_CN_Type_07_Universal_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_CN_Type_07_Universal_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_R_Gorka_01_CN_Type_07_Universal_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_O_R_Gorka_01_CN_Type_07_Universal_F.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_Gorka_01_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_R_Gorka_01_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_B_HeliPilotCoveralls_CN_Type_07_Universal: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\coveralls_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_B_G_HeliPilotCoveralls_CN_Type_07_Universal_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_B_HeliPilotCoveralls_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_officer_noInsignia_CN_Type_07_Universal_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Officer_noInsignia_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_officer_noInsignia_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_noInsignia_CN_Type_07_Universal_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_officer_noInsignia_CN_Type_07_Universal_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Officer_noInsignia_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_officer_noInsignia_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_noInsignia_CN_Type_07_Universal_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_PilotCoveralls_CN_Type_07_Universal: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\pilot_suit_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_PilotCoveralls_CN_Type_07_Universal";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CN_Type_07_Universal_U_O_officer_CN_Type_07_Universal_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\ViperOp_Suit_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_V_Soldier_Viper_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_CN_Type_07_Universal_hex_F";
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
	class acp_gol_CN_Type_07_Universal_Soldier_U_C_CBRN_Suit_01_CN_Type_07_Universal_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CBRN Suit";
		uniformClass="acp_gol_CN_Type_07_Universal_U_C_CBRN_Suit_01_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\CBRN_Suit_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_C_CBRN_Suit_01_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_CN_Type_07_Universal: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [AAF]";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_CombatUniform_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_CN_Type_07_Universal_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_CombatUniform_CN_Type_07_Universal_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_CombatUniform_shortsleeve_CN_Type_07_Universal_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_CN_Type_07_Universal_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF]";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_CN_Type_07_Universal_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_shortsleeve_CN_Type_07_Universal_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_BG_Guerrilla_6_CN_Type_07_Universal: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Guerilla Apparel";
		uniformClass="acp_gol_CN_Type_07_Universal_U_BG_Guerrilla_6_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_sweater_CN_Type_07_Universal_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_BG_Guerrilla_6_CN_Type_07_Universal_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_BG_Guerrilla_6_CN_Type_07_Universal_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Uniform_01_Sweater_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_sweater_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_tanktop_CN_Type_07_Universal_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_tanktop_CN_Type_07_Universal_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_TankTop_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_tanktop_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_I_E_Uniform_CN_Type_07_Universal_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_I_E_Uniform_CN_Type_07_Universal_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_I_Soldier_01_CN_Type_07_Universal_CO_flag.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\I_E_Soldier_01_gloves_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_I_E_Uniform_01_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_CN_Type_07_Universal: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [US]";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CombatUniform_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_vest_CN_Type_07_Universal: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CombatUniform_vest_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_tshirt_CN_Type_07_Universal: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CombatUniform_tshirt_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\nato_tshirt_CN_Type_07_Universal.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_tshirt_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_CN_Type_07_Universal_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CombatUniform_CN_Type_07_Universal_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CombatUniform_vest_CN_Type_07_Universal_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CombatUniform_vest_CN_Type_07_Universal_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing1_CN_Type_07_Universal_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_CombatUniform_CN_Type_07_Universal: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Fatigues [CSAT]";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_CombatUniform_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\clothing_CN_Type_07_Universal_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\tech_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_CombatUniform_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_CN_Type_07_Universal_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CTRG Stealth Uniform";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_2_CN_Type_07_Universal_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_2_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\nato_tshirt_CN_Type_07_Universal.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_tshirt_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_CN_Type_07_Universal_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_CN_Type_07_Universal_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_uniform_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_CTRG_Soldier_3_CN_Type_07_Universal_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_B_CTRG_Soldier_CN_Type_07_Universal_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_U_B_CTRG_vest_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_R_Gorka_01_CN_Type_07_Universal_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Granit";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_R_Gorka_01_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\U_O_R_Gorka_01_CN_Type_07_Universal_F.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_Gorka_01_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_B_HeliPilotCoveralls_CN_Type_07_Universal: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Heli Pilot Coveralls";
		uniformClass="acp_gol_CN_Type_07_Universal_U_B_HeliPilotCoveralls_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\coveralls_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_B_G_HeliPilotCoveralls_CN_Type_07_Universal_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_noInsignia_CN_Type_07_Universal_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Light Fatigues";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_officer_noInsignia_CN_Type_07_Universal_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Officer_noInsignia_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_officer_noInsignia_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_noInsignia_CN_Type_07_Universal_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Light Fatigues (Flag)";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_officer_noInsignia_CN_Type_07_Universal_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Officer_noInsignia_CN_Type_07_Universal_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_R_officer_noInsignia_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_PilotCoveralls_CN_Type_07_Universal: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Pilot Coveralls";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_PilotCoveralls_CN_Type_07_Universal";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\pilot_suit_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_Soldier_U_O_officer_CN_Type_07_Universal_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [CN Type 07 Universal] Special Purpose Suit";
		uniformClass="acp_gol_CN_Type_07_Universal_U_O_officer_CN_Type_07_Universal_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\ViperOp_Suit_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_U_O_V_Soldier_Viper_CN_Type_07_Universal_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CN_Type_07_Universal_B_AssaultPack_CN_Type_07_Universal: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_compact_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_AssaultPack_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_AssaultPackEnhanced_CN_Type_07_Universal: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_compact_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_AssaultPack_CN_Type_07_Universal_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_CN_Type_07_Universal_B_AssaultPackEnhanced_CN_Type_07_Universal_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_compact_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\vests_CN_Type_07_Universal_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_AssaultPack_CN_Type_07_Universal_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_CN_Type_07_Universal_B_Bergen_CN_Type_07_Universal_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\Bergen_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\Icon_B_Bergen_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_Carryall_CN_Type_07_Universal: B_Carryall_cbr
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_tortila_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_C_Tortila_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_FieldPack_CN_Type_07_Universal: B_FieldPack_oli
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_gorod_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_C_Gorod_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_Kitbag_rgr_CN_Type_07_Universal: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_fast_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_C_Kitbag_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_LegStrapBag_CN_Type_07_Universal_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\V_LegStrapBag_CN_Type_07_Universal_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_V_LegStrapBag_CN_Type_07_Universal_CA.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_RadioBag_01_CN_Type_07_Universal_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_C_UAV_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_TacticalPack_CN_Type_07_Universal: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_small_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_C_Small_CN_Type_07_Universal.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_ViperHarness_CN_Type_07_Universal_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_viperop_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_ViperHarness_CN_Type_07_Universal_F_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_B_ViperLightHarness_CN_Type_07_Universal_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\backpack_viperop_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_B_ViperLightHarness_CN_Type_07_Universal_F_ca.paa";
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
	class acp_gol_CN_Type_07_Universal_G_Balaclava_CN_Type_07_Universal: G_Balaclava_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_balaclava_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Balaclava_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Balaclava_combat_CN_Type_07_Universal: G_Balaclava_combat
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_balaclava_CN_Type_07_Universal_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\g_combat_CN_Type_07_Universal_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Balaclava_combat_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Balaclava_lowprofile_CN_Type_07_Universal: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_balaclava_CN_Type_07_Universal_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Balaclava_lowprofile_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Bandanna_aviator_CN_Type_07_Universal: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_bandMask_CN_Type_07_Universal_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Bandana_aviator_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Bandanna_sport_CN_Type_07_Universal: G_Bandanna_sport
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_bandMask_CN_Type_07_Universal_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Bandana_shades_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Bandanna_shades_CN_Type_07_Universal: G_Bandanna_shades
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_bandMask_CN_Type_07_Universal_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Bandana_sport_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Bandanna_CN_Type_07_Universal: G_Bandanna_blk
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\headgear_bandMask_CN_Type_07_Universal_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Bandana_clean_CN_Type_07_Universal_ca.paa";
		scope=2;
	};
	class acp_gol_CN_Type_07_Universal_G_Combat_CN_Type_07_Universal: G_Combat
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\g_combat_CN_Type_07_Universal_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_g_combat_CN_Type_07_Universal_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_CN_Type_07_Universal_G_Balaclava_TI_G_CN_Type_07_Universal_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\G_Balaclava_TI_CN_Type_07_Universal_F_co.paa",
			"\z\acp_gol\addons\CN_Type_07_Universal\data\g_combat_CN_Type_07_Universal_ca.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Balaclava_TI_G_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_CN_Type_07_Universal_G_Balaclava_TI_CN_Type_07_Universal_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[CN Type 07 Universal] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CN_Type_07_Universal\data\G_Balaclava_TI_CN_Type_07_Universal_F_co.paa"
		};
		picture="\z\acp_gol\addons\CN_Type_07_Universal\data\UI\icon_G_Balaclava_TI_CN_Type_07_Universal_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
