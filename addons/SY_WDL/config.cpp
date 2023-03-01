class CfgPatches
{
	class acp_gol_SY_WDL
	{
		name="SY_WDL";
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
	class acp_gol_SY_WDL
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SY_WDL\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_SY_WDL
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SY_WDL\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_SY_WDL
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\SY_WDL\XEH_postInit.sqf'";
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
	class acp_gol_SY_WDL_V_PlateCarrierSpec_SY_WDL: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\carrier_gl_rig_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_carrier_spec_rig_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrierGL_SY_WDL: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\carrier_gl_rig_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_carrier_gl_rig_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrierSpec_SY_WDL_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\carrier_gl_rig_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_carrier_spec_rig_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrierGL_SY_WDL_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\carrier_gl_rig_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_carrier_gl_rig_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrier1_SY_WDL: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_plate_carrier_1_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrier2_SY_WDL: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_plate_carrier_2_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_BandollierB_SY_WDL: V_BandollierB_blk
	{
		author="Seb";
		displayName="[SY WDL] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_bandollierB_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_Rangemaster_belt_SY_WDL: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[SY WDL] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_Rangemaster_belt_SY_WDL_ca.paa";
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
	class acp_gol_SY_WDL_V_PlateCarrier1_SY_WDL_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_plate_carrier_1_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrier2_SY_WDL_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[SY WDL] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_plate_carrier_2_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_Chestrig_SY_WDL: V_Chestrig_oli
	{
		author="Seb";
		displayName="[SY WDL] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip_chestrig_SY_WDL.paa",
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_ChestrigF_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_EOD_SY_WDL_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[SY WDL] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\V_EOD_vest_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\V_EOD_Protection_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_EOD_olive_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_PlateCarrierIA1_SY_WDL: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[SY WDL] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip_ia_vest01_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_PlateCarrierIA1_SY_WDL_ca.paa";
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
	class acp_gol_SY_WDL_V_PlateCarrierIA2_SY_WDL: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[SY WDL] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip_ia_vest01_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_PlateCarrierIA2_SY_WDL_ca.paa";
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
	class acp_gol_SY_WDL_V_PlateCarrierIAGL_SY_WDL: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[SY WDL] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip_ia_vest01_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\GA_Carrier_GL_Rig_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_PlateCarrierIAGL_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_SmershVest_01_SY_WDL_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[SY WDL] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Smersh_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\Smersh_miscellaneous_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_SmershVest_01_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_SmershVest_01_radio_SY_WDL_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[SY WDL] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Smersh_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\Smersh_miscellaneous_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_SmershVest_01_radio_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_HarnessOGL_SY_WDL_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[SY WDL] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_HarnessOGL_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_HarnessO_SY_WDL_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[SY WDL] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_HarnessO_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_TacVestIR_SY_WDL: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[SY WDL] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_TacVestIR_SY_WDL_CA.paa";
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
	class acp_gol_SY_WDL_V_LegStrapBag_SY_WDL_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[SY WDL] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\V_LegStrapBag_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_LegStrapBag_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_CarrierRigKBT_01_heavy_SY_WDL_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[SY WDL] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\CarrierRigKBT_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_CarrierRigKBT_01_heavy_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_CarrierRigKBT_01_light_SY_WDL_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[SY WDL] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\CarrierRigKBT_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_CarrierRigKBT_01_light_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_CarrierRigKBT_01_SY_WDL_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[SY WDL] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\CarrierRigKBT_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_CarrierRigKBT_01_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_Pocketed_SY_WDL_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[SY WDL] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\V_Pocketed_cloth_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_Pocketed_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_TacChestrig_SY_WDL_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[SY WDL] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_ChestrigF_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_V_TacVest_SY_WDL: V_TacVest_blk
	{
		author="Seb";
		displayName="[SY WDL] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\taticalvest_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_TacVest_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetHBK_F_SY_WDL: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[SY WDL] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetHBK_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetHBK_F_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetHBK_headset_F_SY_WDL: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[SY WDL] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetHBK_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetHBK_headset_F_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetHBK_ear_F_SY_WDL: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[SY WDL] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetHBK_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetHBK_ear_F_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetHBK_chops_F_SY_WDL: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[SY WDL] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetHBK_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetHBK_chops_F_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetAggressor_F_SY_WDL: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[SY WDL] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\h_helmetaggressor_01_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetAggressor_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetAggressor_cover_F_SY_WDL: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[SY WDL] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\h_helmetaggressor_01_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetAggressor_cover_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Bandanna_SY_WDL: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[SY WDL] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\h_bandana_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Bandanna_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_PASGT_basic_SY_WDL_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[SY WDL] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_PASGT_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_PASGT_basic_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Watchcap_SY_WDL: H_Watchcap_blk
	{
		author="Seb";
		displayName="[SY WDL] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\woolhat_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Cap_beanie_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Booniehat_SY_WDL: H_Booniehat_khk
	{
		author="Seb";
		displayName="[SY WDL] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\booniehat_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_booniehat_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Booniehat_SY_WDL_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[SY WDL] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\booniehat_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Booniehat_SY_WDL_hs_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Cap_SY_WDL: H_Cap_oli
	{
		author="Seb";
		displayName="[SY WDL] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\capb_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Cap_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Cap_SY_WDL_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[SY WDL] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\capb_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Cap_SY_WDL_hs_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_SY_WDL: H_HelmetB
	{
		author="Seb";
		displayName="[SY WDL] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecB_SY_WDL: H_HelmetSpecB
	{
		author="Seb";
		displayName="[SY WDL] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetSpecB_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_light_SY_WDL: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[SY WDL] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_light_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_light_basic_SY_WDL: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[SY WDL] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_camo_SY_WDL: H_HelmetB_camo
	{
		author="Seb";
		displayName="[SY WDL] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\ghillie_2_SY_WDL_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_camo_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecB_SY_WDL_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[SY WDL] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetSpecB_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_light_SY_WDL_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[SY WDL] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\equip1_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_light_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetLeaderO_SY_WDL: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[SY WDL] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetLeaderO_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetO_SY_WDL: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[SY WDL] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetO_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecO_SY_WDL: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[SY WDL] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetO_spec_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_MilCap_SY_WDL: H_MilCap_gry
	{
		author="Seb";
		displayName="[SY WDL] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\cappatrol_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_MilCap_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_MK7_SY_WDL_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[SY WDL] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\mk7_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_SY_WDL_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_MK7_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetIA_SY_WDL: H_HelmetIA
	{
		author="Seb";
		displayName="[SY WDL] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_helmet_canvas_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_I_Helmet_canvas_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_Cap_headphones_SY_WDL: H_Cap_marshal
	{
		author="Seb";
		displayName="[SY WDL] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\capb_headphones_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_Cap_headphones_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecter_SY_WDL_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[SY WDL] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetSpecter_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecter_headset_SY_WDL_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[SY WDL] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_cover_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetSpecter_paint_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetSpecter_cover_SY_WDL_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[SY WDL] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetSpecter_01_cover_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetSpecter_cover_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetO_ViperSP_SY_WDL_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[SY WDL] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_vipersp_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetO_ViperSP_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_H_HelmetB_TI_SY_WDL_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[SY WDL] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\H_HelmetB_TI_SY_WDL_F_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_H_HelmetB_TI_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_U_C_CBRN_Suit_01_SY_WDL_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[SY WDL] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\CBRN_Suit_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_C_CBRN_Suit_01_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_C_CBRN_Suit_01_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_CombatUniform_SY_WDL: U_I_CombatUniform
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_CombatUniform_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_CombatUniform_shortsleeve_SY_WDL: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_CombatUniform_shortsleeve_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_CombatUniform_SY_WDL_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_CombatUniform_SY_WDL_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_CombatUniform_shortsleeve_SY_WDL_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_CombatUniform_shortsleeve_SY_WDL_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_SY_WDL_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_SY_WDL_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_shortsleeve_SY_WDL_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_shortsleeve_SY_WDL_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_shortsleeve_SY_WDL_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_shortsleeve_SY_WDL_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_sweater_SY_WDL_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_sweater_SY_WDL_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_BG_Guerrilla_6_SY_WDL: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[SY WDL] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_BG_Guerrilla_6_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_sweater_SY_WDL_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_sweater_SY_WDL_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_BG_Guerrilla_6_SY_WDL_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[SY WDL] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_BG_Guerrilla_6_SY_WDL_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_tanktop_SY_WDL_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_TankTop_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_tanktop_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_tanktop_SY_WDL_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_I_E_Uniform_SY_WDL_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_I_E_Uniform_SY_WDL_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CombatUniform_SY_WDL: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CombatUniform_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CombatUniform_vest_SY_WDL: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CombatUniform_vest_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CombatUniform_tshirt_SY_WDL: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\nato_tshirt_SY_WDL.paa",
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_tshirt_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CombatUniform_tshirt_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CombatUniform_SY_WDL_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CombatUniform_SY_WDL_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CombatUniform_vest_SY_WDL_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[SY WDL] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CombatUniform_vest_SY_WDL_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_CombatUniform_SY_WDL: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[SY WDL] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_CombatUniform_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_CombatUniform_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CTRG_Soldier_SY_WDL_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[SY WDL] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CTRG_Soldier_3_SY_WDL_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[SY WDL] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_3_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CTRG_Soldier_2_SY_WDL_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[SY WDL] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\nato_tshirt_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_tshirt_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_2_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CTRG_Soldier_SY_WDL_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[SY WDL] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_SY_WDL_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_CTRG_Soldier_3_SY_WDL_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[SY WDL] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_3_SY_WDL_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_R_Gorka_01_SY_WDL_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[SY WDL] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_O_R_Gorka_01_SY_WDL_F.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_Gorka_01_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_R_Gorka_01_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_B_HeliPilotCoveralls_SY_WDL: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[SY WDL] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\coveralls_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_B_G_HeliPilotCoveralls_SY_WDL_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_B_HeliPilotCoveralls_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_officer_noInsignia_SY_WDL_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[SY WDL] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Officer_noInsignia_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_officer_noInsignia_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_officer_noInsignia_SY_WDL_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_officer_noInsignia_SY_WDL_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[SY WDL] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Officer_noInsignia_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_officer_noInsignia_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_officer_noInsignia_SY_WDL_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_PilotCoveralls_SY_WDL: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[SY WDL] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\pilot_suit_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_PilotCoveralls_SY_WDL";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_SY_WDL_U_O_officer_SY_WDL_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[SY WDL] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\ViperOp_Suit_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_V_Soldier_Viper_SY_WDL_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_SY_WDL_Soldier_U_O_officer_SY_WDL_hex_F";
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
	class acp_gol_SY_WDL_Soldier_U_C_CBRN_Suit_01_SY_WDL_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CBRN Suit";
		uniformClass="acp_gol_SY_WDL_U_C_CBRN_Suit_01_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\CBRN_Suit_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_C_CBRN_Suit_01_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_CombatUniform_SY_WDL: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [AAF]";
		uniformClass="acp_gol_SY_WDL_U_I_CombatUniform_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_CombatUniform_shortsleeve_SY_WDL: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_SY_WDL_U_I_CombatUniform_shortsleeve_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_CombatUniform_SY_WDL_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_SY_WDL_U_I_CombatUniform_SY_WDL_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_CombatUniform_shortsleeve_SY_WDL_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_SY_WDL_U_I_CombatUniform_shortsleeve_SY_WDL_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_I_CombatUniform_shortsleeve_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_SY_WDL_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF]";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_SY_WDL_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_shortsleeve_SY_WDL_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_shortsleeve_SY_WDL_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_shortsleeve_SY_WDL_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_shortsleeve_SY_WDL_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_shortsleeve_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_sweater_SY_WDL_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_sweater_SY_WDL_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_BG_Guerrilla_6_SY_WDL: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Guerilla Apparel";
		uniformClass="acp_gol_SY_WDL_U_BG_Guerrilla_6_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_sweater_SY_WDL_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_sweater_SY_WDL_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_BG_Guerrilla_6_SY_WDL_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_SY_WDL_U_BG_Guerrilla_6_SY_WDL_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Uniform_01_Sweater_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_sweater_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_tanktop_SY_WDL_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_tanktop_SY_WDL_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_TankTop_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_tanktop_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_I_E_Uniform_SY_WDL_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_SY_WDL_U_I_E_Uniform_SY_WDL_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_I_Soldier_01_SY_WDL_CO_flag.paa",
			"\z\acp_gol\addons\SY_WDL\data\I_E_Soldier_01_gloves_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_I_E_Uniform_01_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CombatUniform_SY_WDL: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [US]";
		uniformClass="acp_gol_SY_WDL_U_B_CombatUniform_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CombatUniform_vest_SY_WDL: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_SY_WDL_U_B_CombatUniform_vest_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CombatUniform_tshirt_SY_WDL: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_SY_WDL_U_B_CombatUniform_tshirt_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\nato_tshirt_SY_WDL.paa",
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_tshirt_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CombatUniform_SY_WDL_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_SY_WDL_U_B_CombatUniform_SY_WDL_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CombatUniform_vest_SY_WDL_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_SY_WDL_U_B_CombatUniform_vest_SY_WDL_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing1_SY_WDL_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_CombatUniform_SY_WDL: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Fatigues [CSAT]";
		uniformClass="acp_gol_SY_WDL_U_O_CombatUniform_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\clothing_SY_WDL_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\tech_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_CombatUniform_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_SY_WDL_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CTRG Stealth Uniform";
		uniformClass="acp_gol_SY_WDL_U_B_CTRG_Soldier_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_3_SY_WDL_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_SY_WDL_U_B_CTRG_Soldier_3_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_2_SY_WDL_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_SY_WDL_U_B_CTRG_Soldier_2_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO.paa",
			"\z\acp_gol\addons\SY_WDL\data\nato_tshirt_SY_WDL.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_tshirt_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_SY_WDL_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_SY_WDL_U_B_CTRG_Soldier_SY_WDL_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_uniform_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_CTRG_Soldier_3_SY_WDL_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [SY WDL] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_SY_WDL_U_B_CTRG_Soldier_3_SY_WDL_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_B_CTRG_Soldier_SY_WDL_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_U_B_CTRG_vest_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_R_Gorka_01_SY_WDL_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Granit";
		uniformClass="acp_gol_SY_WDL_U_O_R_Gorka_01_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\U_O_R_Gorka_01_SY_WDL_F.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_Gorka_01_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_B_HeliPilotCoveralls_SY_WDL: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Heli Pilot Coveralls";
		uniformClass="acp_gol_SY_WDL_U_B_HeliPilotCoveralls_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\coveralls_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_B_G_HeliPilotCoveralls_SY_WDL_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_officer_noInsignia_SY_WDL_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Light Fatigues";
		uniformClass="acp_gol_SY_WDL_U_O_officer_noInsignia_SY_WDL_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Officer_noInsignia_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_officer_noInsignia_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_officer_noInsignia_SY_WDL_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Light Fatigues (Flag)";
		uniformClass="acp_gol_SY_WDL_U_O_officer_noInsignia_SY_WDL_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Officer_noInsignia_SY_WDL_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_R_officer_noInsignia_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_PilotCoveralls_SY_WDL: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Pilot Coveralls";
		uniformClass="acp_gol_SY_WDL_U_O_PilotCoveralls_SY_WDL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\pilot_suit_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_Soldier_U_O_officer_SY_WDL_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [SY WDL] Special Purpose Suit";
		uniformClass="acp_gol_SY_WDL_U_O_officer_SY_WDL_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\ViperOp_Suit_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_U_O_V_Soldier_Viper_SY_WDL_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_SY_WDL_B_AssaultPack_SY_WDL: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[SY WDL] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_compact_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_AssaultPack_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_AssaultPackEnhanced_SY_WDL: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[SY WDL] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_compact_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_AssaultPack_SY_WDL_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_SY_WDL_B_AssaultPackEnhanced_SY_WDL_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[SY WDL] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_compact_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\vests_SY_WDL_co_flag.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_AssaultPack_SY_WDL_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_SY_WDL_B_Bergen_SY_WDL_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[SY WDL] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\Bergen_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\Icon_B_Bergen_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_Carryall_SY_WDL: B_Carryall_cbr
	{
		author="Seb";
		displayName="[SY WDL] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_tortila_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_C_Tortila_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_FieldPack_SY_WDL: B_FieldPack_oli
	{
		author="Seb";
		displayName="[SY WDL] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_gorod_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_C_Gorod_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_Kitbag_rgr_SY_WDL: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[SY WDL] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_fast_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_C_Kitbag_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_LegStrapBag_SY_WDL_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[SY WDL] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\V_LegStrapBag_SY_WDL_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_V_LegStrapBag_SY_WDL_CA.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_RadioBag_01_SY_WDL_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[SY WDL] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_C_UAV_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_TacticalPack_SY_WDL: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[SY WDL] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_small_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_C_Small_SY_WDL.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_ViperHarness_SY_WDL_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[SY WDL] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_viperop_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_ViperHarness_SY_WDL_F_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_B_ViperLightHarness_SY_WDL_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[SY WDL] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\backpack_viperop_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_B_ViperLightHarness_SY_WDL_F_ca.paa";
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
	class acp_gol_SY_WDL_G_Balaclava_SY_WDL: G_Balaclava_blk
	{
		author="Seb";
		displayName="[SY WDL] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_balaclava_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Balaclava_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Balaclava_combat_SY_WDL: G_Balaclava_combat
	{
		author="Seb";
		displayName="[SY WDL] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_balaclava_SY_WDL_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\g_combat_SY_WDL_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Balaclava_combat_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Balaclava_lowprofile_SY_WDL: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[SY WDL] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_balaclava_SY_WDL_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Balaclava_lowprofile_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Bandanna_aviator_SY_WDL: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[SY WDL] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_bandMask_SY_WDL_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Bandana_aviator_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Bandanna_sport_SY_WDL: G_Bandanna_sport
	{
		author="Seb";
		displayName="[SY WDL] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_bandMask_SY_WDL_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Bandana_shades_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Bandanna_shades_SY_WDL: G_Bandanna_shades
	{
		author="Seb";
		displayName="[SY WDL] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_bandMask_SY_WDL_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Bandana_sport_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Bandanna_SY_WDL: G_Bandanna_blk
	{
		author="Seb";
		displayName="[SY WDL] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\headgear_bandMask_SY_WDL_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Bandana_clean_SY_WDL_ca.paa";
		scope=2;
	};
	class acp_gol_SY_WDL_G_Combat_SY_WDL: G_Combat
	{
		author="Seb";
		displayName="[SY WDL] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\g_combat_SY_WDL_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_g_combat_SY_WDL_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_SY_WDL_G_Balaclava_TI_G_SY_WDL_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[SY WDL] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\G_Balaclava_TI_SY_WDL_F_co.paa",
			"\z\acp_gol\addons\SY_WDL\data\g_combat_SY_WDL_ca.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Balaclava_TI_G_SY_WDL_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_SY_WDL_G_Balaclava_TI_SY_WDL_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[SY WDL] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\SY_WDL\data\G_Balaclava_TI_SY_WDL_F_co.paa"
		};
		picture="\z\acp_gol\addons\SY_WDL\data\UI\icon_G_Balaclava_TI_SY_WDL_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
