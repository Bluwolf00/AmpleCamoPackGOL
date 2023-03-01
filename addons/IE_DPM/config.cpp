class CfgPatches
{
	class acp_gol_IE_DPM
	{
		name="IE_DPM";
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
	class acp_gol_IE_DPM
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IE_DPM\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_IE_DPM
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IE_DPM\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_IE_DPM
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\IE_DPM\XEH_postInit.sqf'";
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
	class acp_gol_IE_DPM_V_PlateCarrierSpec_IE_DPM: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\carrier_gl_rig_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_carrier_spec_rig_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrierGL_IE_DPM: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\carrier_gl_rig_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_carrier_gl_rig_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrierSpec_IE_DPM_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\carrier_gl_rig_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_carrier_spec_rig_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrierGL_IE_DPM_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\carrier_gl_rig_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_carrier_gl_rig_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrier1_IE_DPM: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_plate_carrier_1_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrier2_IE_DPM: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_plate_carrier_2_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_BandollierB_IE_DPM: V_BandollierB_blk
	{
		author="Seb";
		displayName="[IE DPM] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_bandollierB_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_Rangemaster_belt_IE_DPM: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[IE DPM] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_Rangemaster_belt_IE_DPM_ca.paa";
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
	class acp_gol_IE_DPM_V_PlateCarrier1_IE_DPM_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_plate_carrier_1_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrier2_IE_DPM_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[IE DPM] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_plate_carrier_2_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_Chestrig_IE_DPM: V_Chestrig_oli
	{
		author="Seb";
		displayName="[IE DPM] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip_chestrig_IE_DPM.paa",
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_ChestrigF_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_EOD_IE_DPM_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[IE DPM] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\V_EOD_vest_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\V_EOD_Protection_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_EOD_olive_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_PlateCarrierIA1_IE_DPM: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[IE DPM] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip_ia_vest01_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_PlateCarrierIA1_IE_DPM_ca.paa";
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
	class acp_gol_IE_DPM_V_PlateCarrierIA2_IE_DPM: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[IE DPM] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip_ia_vest01_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_PlateCarrierIA2_IE_DPM_ca.paa";
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
	class acp_gol_IE_DPM_V_PlateCarrierIAGL_IE_DPM: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[IE DPM] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip_ia_vest01_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\GA_Carrier_GL_Rig_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_PlateCarrierIAGL_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_SmershVest_01_IE_DPM_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[IE DPM] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Smersh_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\Smersh_miscellaneous_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_SmershVest_01_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_SmershVest_01_radio_IE_DPM_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[IE DPM] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Smersh_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\Smersh_miscellaneous_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_SmershVest_01_radio_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_HarnessOGL_IE_DPM_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[IE DPM] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_HarnessOGL_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_HarnessO_IE_DPM_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[IE DPM] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_HarnessO_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_TacVestIR_IE_DPM: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[IE DPM] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_TacVestIR_IE_DPM_CA.paa";
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
	class acp_gol_IE_DPM_V_LegStrapBag_IE_DPM_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[IE DPM] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\V_LegStrapBag_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_LegStrapBag_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_CarrierRigKBT_01_heavy_IE_DPM_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[IE DPM] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\CarrierRigKBT_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_CarrierRigKBT_01_heavy_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_CarrierRigKBT_01_light_IE_DPM_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[IE DPM] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\CarrierRigKBT_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_CarrierRigKBT_01_light_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_CarrierRigKBT_01_IE_DPM_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[IE DPM] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\CarrierRigKBT_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_CarrierRigKBT_01_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_Pocketed_IE_DPM_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[IE DPM] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\V_Pocketed_cloth_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_Pocketed_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_TacChestrig_IE_DPM_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[IE DPM] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_ChestrigF_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_V_TacVest_IE_DPM: V_TacVest_blk
	{
		author="Seb";
		displayName="[IE DPM] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\taticalvest_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_TacVest_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetHBK_F_IE_DPM: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[IE DPM] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetHBK_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetHBK_F_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetHBK_headset_F_IE_DPM: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[IE DPM] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetHBK_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetHBK_headset_F_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetHBK_ear_F_IE_DPM: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[IE DPM] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetHBK_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetHBK_ear_F_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetHBK_chops_F_IE_DPM: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[IE DPM] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetHBK_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetHBK_chops_F_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetAggressor_F_IE_DPM: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[IE DPM] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\h_helmetaggressor_01_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetAggressor_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetAggressor_cover_F_IE_DPM: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[IE DPM] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\h_helmetaggressor_01_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetAggressor_cover_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Bandanna_IE_DPM: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[IE DPM] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\h_bandana_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Bandanna_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_PASGT_basic_IE_DPM_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[IE DPM] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_PASGT_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_PASGT_basic_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Watchcap_IE_DPM: H_Watchcap_blk
	{
		author="Seb";
		displayName="[IE DPM] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\woolhat_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Cap_beanie_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Booniehat_IE_DPM: H_Booniehat_khk
	{
		author="Seb";
		displayName="[IE DPM] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\booniehat_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_booniehat_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Booniehat_IE_DPM_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[IE DPM] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\booniehat_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Booniehat_IE_DPM_hs_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Cap_IE_DPM: H_Cap_oli
	{
		author="Seb";
		displayName="[IE DPM] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\capb_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Cap_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Cap_IE_DPM_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[IE DPM] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\capb_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Cap_IE_DPM_hs_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_IE_DPM: H_HelmetB
	{
		author="Seb";
		displayName="[IE DPM] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecB_IE_DPM: H_HelmetSpecB
	{
		author="Seb";
		displayName="[IE DPM] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetSpecB_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_light_IE_DPM: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[IE DPM] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_light_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_light_basic_IE_DPM: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[IE DPM] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_camo_IE_DPM: H_HelmetB_camo
	{
		author="Seb";
		displayName="[IE DPM] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\ghillie_2_IE_DPM_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_camo_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecB_IE_DPM_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[IE DPM] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetSpecB_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_light_IE_DPM_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[IE DPM] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\equip1_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_light_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetLeaderO_IE_DPM: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[IE DPM] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetLeaderO_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetO_IE_DPM: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[IE DPM] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetO_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecO_IE_DPM: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[IE DPM] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetO_spec_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_MilCap_IE_DPM: H_MilCap_gry
	{
		author="Seb";
		displayName="[IE DPM] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\cappatrol_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_MilCap_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_MK7_IE_DPM_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[IE DPM] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\mk7_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_IE_DPM_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_MK7_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetIA_IE_DPM: H_HelmetIA
	{
		author="Seb";
		displayName="[IE DPM] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_helmet_canvas_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_I_Helmet_canvas_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_Cap_headphones_IE_DPM: H_Cap_marshal
	{
		author="Seb";
		displayName="[IE DPM] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\capb_headphones_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_Cap_headphones_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecter_IE_DPM_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[IE DPM] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetSpecter_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecter_headset_IE_DPM_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[IE DPM] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_cover_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetSpecter_paint_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetSpecter_cover_IE_DPM_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[IE DPM] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetSpecter_01_cover_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetSpecter_cover_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetO_ViperSP_IE_DPM_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[IE DPM] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_vipersp_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetO_ViperSP_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_H_HelmetB_TI_IE_DPM_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[IE DPM] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\H_HelmetB_TI_IE_DPM_F_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_H_HelmetB_TI_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_U_C_CBRN_Suit_01_IE_DPM_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[IE DPM] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\CBRN_Suit_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_C_CBRN_Suit_01_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_C_CBRN_Suit_01_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_CombatUniform_IE_DPM: U_I_CombatUniform
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_CombatUniform_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_CombatUniform_shortsleeve_IE_DPM: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_CombatUniform_shortsleeve_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_CombatUniform_IE_DPM_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_CombatUniform_IE_DPM_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_CombatUniform_shortsleeve_IE_DPM_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_CombatUniform_shortsleeve_IE_DPM_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_IE_DPM_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_IE_DPM_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_shortsleeve_IE_DPM_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_shortsleeve_IE_DPM_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_shortsleeve_IE_DPM_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_shortsleeve_IE_DPM_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_sweater_IE_DPM_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_sweater_IE_DPM_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_BG_Guerrilla_6_IE_DPM: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[IE DPM] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_BG_Guerrilla_6_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_sweater_IE_DPM_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_sweater_IE_DPM_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_BG_Guerrilla_6_IE_DPM_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[IE DPM] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_BG_Guerrilla_6_IE_DPM_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_tanktop_IE_DPM_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_TankTop_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_tanktop_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_tanktop_IE_DPM_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_I_E_Uniform_IE_DPM_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_I_E_Uniform_IE_DPM_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CombatUniform_IE_DPM: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CombatUniform_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CombatUniform_vest_IE_DPM: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CombatUniform_vest_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CombatUniform_tshirt_IE_DPM: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\nato_tshirt_IE_DPM.paa",
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_tshirt_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CombatUniform_tshirt_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CombatUniform_IE_DPM_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CombatUniform_IE_DPM_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CombatUniform_vest_IE_DPM_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[IE DPM] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CombatUniform_vest_IE_DPM_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_CombatUniform_IE_DPM: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[IE DPM] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_CombatUniform_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_CombatUniform_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CTRG_Soldier_IE_DPM_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[IE DPM] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CTRG_Soldier_3_IE_DPM_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[IE DPM] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_3_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CTRG_Soldier_2_IE_DPM_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[IE DPM] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\nato_tshirt_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_tshirt_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_2_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CTRG_Soldier_IE_DPM_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[IE DPM] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_IE_DPM_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_CTRG_Soldier_3_IE_DPM_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[IE DPM] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_3_IE_DPM_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_R_Gorka_01_IE_DPM_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[IE DPM] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_O_R_Gorka_01_IE_DPM_F.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_Gorka_01_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_R_Gorka_01_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_B_HeliPilotCoveralls_IE_DPM: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[IE DPM] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\coveralls_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_B_G_HeliPilotCoveralls_IE_DPM_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_B_HeliPilotCoveralls_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_officer_noInsignia_IE_DPM_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[IE DPM] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Officer_noInsignia_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_officer_noInsignia_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_officer_noInsignia_IE_DPM_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_officer_noInsignia_IE_DPM_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[IE DPM] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Officer_noInsignia_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_officer_noInsignia_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_officer_noInsignia_IE_DPM_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_PilotCoveralls_IE_DPM: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[IE DPM] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\pilot_suit_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_PilotCoveralls_IE_DPM";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_IE_DPM_U_O_officer_IE_DPM_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[IE DPM] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\ViperOp_Suit_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_V_Soldier_Viper_IE_DPM_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_IE_DPM_Soldier_U_O_officer_IE_DPM_hex_F";
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
	class acp_gol_IE_DPM_Soldier_U_C_CBRN_Suit_01_IE_DPM_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CBRN Suit";
		uniformClass="acp_gol_IE_DPM_U_C_CBRN_Suit_01_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\CBRN_Suit_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_C_CBRN_Suit_01_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_CombatUniform_IE_DPM: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [AAF]";
		uniformClass="acp_gol_IE_DPM_U_I_CombatUniform_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_CombatUniform_shortsleeve_IE_DPM: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_IE_DPM_U_I_CombatUniform_shortsleeve_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_CombatUniform_IE_DPM_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_IE_DPM_U_I_CombatUniform_IE_DPM_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_CombatUniform_shortsleeve_IE_DPM_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_IE_DPM_U_I_CombatUniform_shortsleeve_IE_DPM_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_I_CombatUniform_shortsleeve_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_IE_DPM_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF]";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_IE_DPM_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_shortsleeve_IE_DPM_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_shortsleeve_IE_DPM_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_shortsleeve_IE_DPM_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_shortsleeve_IE_DPM_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_shortsleeve_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_sweater_IE_DPM_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_sweater_IE_DPM_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_BG_Guerrilla_6_IE_DPM: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Guerilla Apparel";
		uniformClass="acp_gol_IE_DPM_U_BG_Guerrilla_6_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_sweater_IE_DPM_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_sweater_IE_DPM_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_BG_Guerrilla_6_IE_DPM_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_IE_DPM_U_BG_Guerrilla_6_IE_DPM_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Uniform_01_Sweater_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_sweater_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_tanktop_IE_DPM_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_tanktop_IE_DPM_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_TankTop_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_tanktop_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_I_E_Uniform_IE_DPM_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_IE_DPM_U_I_E_Uniform_IE_DPM_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_I_Soldier_01_IE_DPM_CO_flag.paa",
			"\z\acp_gol\addons\IE_DPM\data\I_E_Soldier_01_gloves_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_I_E_Uniform_01_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CombatUniform_IE_DPM: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [US]";
		uniformClass="acp_gol_IE_DPM_U_B_CombatUniform_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CombatUniform_vest_IE_DPM: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_IE_DPM_U_B_CombatUniform_vest_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CombatUniform_tshirt_IE_DPM: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_IE_DPM_U_B_CombatUniform_tshirt_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\nato_tshirt_IE_DPM.paa",
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_tshirt_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CombatUniform_IE_DPM_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_IE_DPM_U_B_CombatUniform_IE_DPM_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CombatUniform_vest_IE_DPM_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_IE_DPM_U_B_CombatUniform_vest_IE_DPM_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing1_IE_DPM_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_CombatUniform_IE_DPM: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Fatigues [CSAT]";
		uniformClass="acp_gol_IE_DPM_U_O_CombatUniform_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\clothing_IE_DPM_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\tech_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_CombatUniform_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_IE_DPM_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CTRG Stealth Uniform";
		uniformClass="acp_gol_IE_DPM_U_B_CTRG_Soldier_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_3_IE_DPM_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_IE_DPM_U_B_CTRG_Soldier_3_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_2_IE_DPM_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_IE_DPM_U_B_CTRG_Soldier_2_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO.paa",
			"\z\acp_gol\addons\IE_DPM\data\nato_tshirt_IE_DPM.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_tshirt_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_IE_DPM_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_IE_DPM_U_B_CTRG_Soldier_IE_DPM_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_uniform_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_CTRG_Soldier_3_IE_DPM_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [IE DPM] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_IE_DPM_U_B_CTRG_Soldier_3_IE_DPM_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_B_CTRG_Soldier_IE_DPM_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_U_B_CTRG_vest_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_R_Gorka_01_IE_DPM_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Granit";
		uniformClass="acp_gol_IE_DPM_U_O_R_Gorka_01_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\U_O_R_Gorka_01_IE_DPM_F.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_Gorka_01_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_B_HeliPilotCoveralls_IE_DPM: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Heli Pilot Coveralls";
		uniformClass="acp_gol_IE_DPM_U_B_HeliPilotCoveralls_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\coveralls_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_B_G_HeliPilotCoveralls_IE_DPM_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_officer_noInsignia_IE_DPM_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Light Fatigues";
		uniformClass="acp_gol_IE_DPM_U_O_officer_noInsignia_IE_DPM_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Officer_noInsignia_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_officer_noInsignia_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_officer_noInsignia_IE_DPM_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Light Fatigues (Flag)";
		uniformClass="acp_gol_IE_DPM_U_O_officer_noInsignia_IE_DPM_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Officer_noInsignia_IE_DPM_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_R_officer_noInsignia_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_PilotCoveralls_IE_DPM: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Pilot Coveralls";
		uniformClass="acp_gol_IE_DPM_U_O_PilotCoveralls_IE_DPM";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\pilot_suit_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_Soldier_U_O_officer_IE_DPM_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [IE DPM] Special Purpose Suit";
		uniformClass="acp_gol_IE_DPM_U_O_officer_IE_DPM_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\ViperOp_Suit_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_U_O_V_Soldier_Viper_IE_DPM_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_IE_DPM_B_AssaultPack_IE_DPM: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[IE DPM] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_compact_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_AssaultPack_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_AssaultPackEnhanced_IE_DPM: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[IE DPM] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_compact_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_AssaultPack_IE_DPM_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_IE_DPM_B_AssaultPackEnhanced_IE_DPM_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[IE DPM] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_compact_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\vests_IE_DPM_co_flag.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_AssaultPack_IE_DPM_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_IE_DPM_B_Bergen_IE_DPM_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[IE DPM] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\Bergen_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\Icon_B_Bergen_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_Carryall_IE_DPM: B_Carryall_cbr
	{
		author="Seb";
		displayName="[IE DPM] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_tortila_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_C_Tortila_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_FieldPack_IE_DPM: B_FieldPack_oli
	{
		author="Seb";
		displayName="[IE DPM] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_gorod_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_C_Gorod_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_Kitbag_rgr_IE_DPM: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[IE DPM] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_fast_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_C_Kitbag_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_LegStrapBag_IE_DPM_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[IE DPM] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\V_LegStrapBag_IE_DPM_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_V_LegStrapBag_IE_DPM_CA.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_RadioBag_01_IE_DPM_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[IE DPM] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_C_UAV_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_TacticalPack_IE_DPM: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[IE DPM] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_small_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_C_Small_IE_DPM.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_ViperHarness_IE_DPM_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[IE DPM] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_viperop_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_ViperHarness_IE_DPM_F_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_B_ViperLightHarness_IE_DPM_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[IE DPM] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\backpack_viperop_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_B_ViperLightHarness_IE_DPM_F_ca.paa";
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
	class acp_gol_IE_DPM_G_Balaclava_IE_DPM: G_Balaclava_blk
	{
		author="Seb";
		displayName="[IE DPM] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_balaclava_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Balaclava_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Balaclava_combat_IE_DPM: G_Balaclava_combat
	{
		author="Seb";
		displayName="[IE DPM] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_balaclava_IE_DPM_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\g_combat_IE_DPM_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Balaclava_combat_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Balaclava_lowprofile_IE_DPM: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[IE DPM] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_balaclava_IE_DPM_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Balaclava_lowprofile_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Bandanna_aviator_IE_DPM: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[IE DPM] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_bandMask_IE_DPM_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Bandana_aviator_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Bandanna_sport_IE_DPM: G_Bandanna_sport
	{
		author="Seb";
		displayName="[IE DPM] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_bandMask_IE_DPM_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Bandana_shades_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Bandanna_shades_IE_DPM: G_Bandanna_shades
	{
		author="Seb";
		displayName="[IE DPM] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_bandMask_IE_DPM_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Bandana_sport_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Bandanna_IE_DPM: G_Bandanna_blk
	{
		author="Seb";
		displayName="[IE DPM] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\headgear_bandMask_IE_DPM_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Bandana_clean_IE_DPM_ca.paa";
		scope=2;
	};
	class acp_gol_IE_DPM_G_Combat_IE_DPM: G_Combat
	{
		author="Seb";
		displayName="[IE DPM] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\g_combat_IE_DPM_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_g_combat_IE_DPM_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_IE_DPM_G_Balaclava_TI_G_IE_DPM_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[IE DPM] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\G_Balaclava_TI_IE_DPM_F_co.paa",
			"\z\acp_gol\addons\IE_DPM\data\g_combat_IE_DPM_ca.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Balaclava_TI_G_IE_DPM_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_IE_DPM_G_Balaclava_TI_IE_DPM_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[IE DPM] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\IE_DPM\data\G_Balaclava_TI_IE_DPM_F_co.paa"
		};
		picture="\z\acp_gol\addons\IE_DPM\data\UI\icon_G_Balaclava_TI_IE_DPM_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
