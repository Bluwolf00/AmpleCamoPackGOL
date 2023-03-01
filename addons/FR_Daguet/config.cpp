class CfgPatches
{
	class acp_gol_FR_Daguet
	{
		name="FR_Daguet";
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
	class acp_gol_FR_Daguet
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FR_Daguet\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_FR_Daguet
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FR_Daguet\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_FR_Daguet
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\FR_Daguet\XEH_postInit.sqf'";
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
	class acp_gol_FR_Daguet_V_PlateCarrierSpec_FR_Daguet: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\carrier_gl_rig_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_carrier_spec_rig_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrierGL_FR_Daguet: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\carrier_gl_rig_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_carrier_gl_rig_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrierSpec_FR_Daguet_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\carrier_gl_rig_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_carrier_spec_rig_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrierGL_FR_Daguet_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\carrier_gl_rig_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_carrier_gl_rig_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrier1_FR_Daguet: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_plate_carrier_1_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrier2_FR_Daguet: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_plate_carrier_2_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_BandollierB_FR_Daguet: V_BandollierB_blk
	{
		author="Seb";
		displayName="[FR Daguet] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_bandollierB_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_Rangemaster_belt_FR_Daguet: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[FR Daguet] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_Rangemaster_belt_FR_Daguet_ca.paa";
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
	class acp_gol_FR_Daguet_V_PlateCarrier1_FR_Daguet_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_plate_carrier_1_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrier2_FR_Daguet_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[FR Daguet] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_plate_carrier_2_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_Chestrig_FR_Daguet: V_Chestrig_oli
	{
		author="Seb";
		displayName="[FR Daguet] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip_chestrig_FR_Daguet.paa",
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_ChestrigF_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_EOD_FR_Daguet_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[FR Daguet] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\V_EOD_vest_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\V_EOD_Protection_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_EOD_olive_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_PlateCarrierIA1_FR_Daguet: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[FR Daguet] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip_ia_vest01_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_PlateCarrierIA1_FR_Daguet_ca.paa";
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
	class acp_gol_FR_Daguet_V_PlateCarrierIA2_FR_Daguet: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[FR Daguet] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip_ia_vest01_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_PlateCarrierIA2_FR_Daguet_ca.paa";
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
	class acp_gol_FR_Daguet_V_PlateCarrierIAGL_FR_Daguet: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[FR Daguet] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip_ia_vest01_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\GA_Carrier_GL_Rig_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_PlateCarrierIAGL_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_SmershVest_01_FR_Daguet_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[FR Daguet] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Smersh_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\Smersh_miscellaneous_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_SmershVest_01_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_SmershVest_01_radio_FR_Daguet_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[FR Daguet] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Smersh_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\Smersh_miscellaneous_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_SmershVest_01_radio_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_HarnessOGL_FR_Daguet_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[FR Daguet] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_HarnessOGL_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_HarnessO_FR_Daguet_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[FR Daguet] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_HarnessO_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_TacVestIR_FR_Daguet: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[FR Daguet] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_TacVestIR_FR_Daguet_CA.paa";
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
	class acp_gol_FR_Daguet_V_LegStrapBag_FR_Daguet_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[FR Daguet] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\V_LegStrapBag_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_LegStrapBag_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_CarrierRigKBT_01_heavy_FR_Daguet_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[FR Daguet] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\CarrierRigKBT_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_CarrierRigKBT_01_heavy_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_CarrierRigKBT_01_light_FR_Daguet_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[FR Daguet] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\CarrierRigKBT_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_CarrierRigKBT_01_light_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_CarrierRigKBT_01_FR_Daguet_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[FR Daguet] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\CarrierRigKBT_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_CarrierRigKBT_01_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_Pocketed_FR_Daguet_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[FR Daguet] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\V_Pocketed_cloth_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_Pocketed_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_TacChestrig_FR_Daguet_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[FR Daguet] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_ChestrigF_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_V_TacVest_FR_Daguet: V_TacVest_blk
	{
		author="Seb";
		displayName="[FR Daguet] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\taticalvest_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_TacVest_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetHBK_F_FR_Daguet: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[FR Daguet] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetHBK_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetHBK_F_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetHBK_headset_F_FR_Daguet: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[FR Daguet] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetHBK_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetHBK_headset_F_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetHBK_ear_F_FR_Daguet: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[FR Daguet] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetHBK_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetHBK_ear_F_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetHBK_chops_F_FR_Daguet: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[FR Daguet] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetHBK_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetHBK_chops_F_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetAggressor_F_FR_Daguet: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[FR Daguet] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\h_helmetaggressor_01_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetAggressor_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetAggressor_cover_F_FR_Daguet: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[FR Daguet] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\h_helmetaggressor_01_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetAggressor_cover_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Bandanna_FR_Daguet: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[FR Daguet] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\h_bandana_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Bandanna_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_PASGT_basic_FR_Daguet_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[FR Daguet] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_PASGT_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_PASGT_basic_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Watchcap_FR_Daguet: H_Watchcap_blk
	{
		author="Seb";
		displayName="[FR Daguet] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\woolhat_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Cap_beanie_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Booniehat_FR_Daguet: H_Booniehat_khk
	{
		author="Seb";
		displayName="[FR Daguet] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\booniehat_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_booniehat_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Booniehat_FR_Daguet_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[FR Daguet] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\booniehat_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Booniehat_FR_Daguet_hs_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Cap_FR_Daguet: H_Cap_oli
	{
		author="Seb";
		displayName="[FR Daguet] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\capb_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Cap_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Cap_FR_Daguet_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[FR Daguet] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\capb_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Cap_FR_Daguet_hs_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_FR_Daguet: H_HelmetB
	{
		author="Seb";
		displayName="[FR Daguet] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecB_FR_Daguet: H_HelmetSpecB
	{
		author="Seb";
		displayName="[FR Daguet] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetSpecB_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_light_FR_Daguet: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[FR Daguet] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_light_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_light_basic_FR_Daguet: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[FR Daguet] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_camo_FR_Daguet: H_HelmetB_camo
	{
		author="Seb";
		displayName="[FR Daguet] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\ghillie_2_FR_Daguet_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_camo_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecB_FR_Daguet_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[FR Daguet] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetSpecB_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_light_FR_Daguet_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[FR Daguet] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\equip1_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_light_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetLeaderO_FR_Daguet: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[FR Daguet] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetLeaderO_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetO_FR_Daguet: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[FR Daguet] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetO_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecO_FR_Daguet: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[FR Daguet] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetO_spec_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_MilCap_FR_Daguet: H_MilCap_gry
	{
		author="Seb";
		displayName="[FR Daguet] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\cappatrol_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_MilCap_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_MK7_FR_Daguet_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[FR Daguet] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\mk7_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_FR_Daguet_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_MK7_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetIA_FR_Daguet: H_HelmetIA
	{
		author="Seb";
		displayName="[FR Daguet] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_helmet_canvas_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_I_Helmet_canvas_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_Cap_headphones_FR_Daguet: H_Cap_marshal
	{
		author="Seb";
		displayName="[FR Daguet] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\capb_headphones_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_Cap_headphones_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecter_FR_Daguet_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[FR Daguet] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetSpecter_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecter_headset_FR_Daguet_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[FR Daguet] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_cover_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetSpecter_paint_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetSpecter_cover_FR_Daguet_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[FR Daguet] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetSpecter_01_cover_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetSpecter_cover_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetO_ViperSP_FR_Daguet_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[FR Daguet] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_vipersp_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetO_ViperSP_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_H_HelmetB_TI_FR_Daguet_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[FR Daguet] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\H_HelmetB_TI_FR_Daguet_F_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_H_HelmetB_TI_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_U_C_CBRN_Suit_01_FR_Daguet_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[FR Daguet] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\CBRN_Suit_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_C_CBRN_Suit_01_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_C_CBRN_Suit_01_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_CombatUniform_FR_Daguet: U_I_CombatUniform
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_CombatUniform_shortsleeve_FR_Daguet: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_shortsleeve_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_CombatUniform_FR_Daguet_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_FR_Daguet_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_CombatUniform_shortsleeve_FR_Daguet_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_shortsleeve_FR_Daguet_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_FR_Daguet_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_FR_Daguet_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_sweater_FR_Daguet_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_sweater_FR_Daguet_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_BG_Guerrilla_6_FR_Daguet: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[FR Daguet] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_BG_Guerrilla_6_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_sweater_FR_Daguet_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_sweater_FR_Daguet_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_BG_Guerrilla_6_FR_Daguet_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[FR Daguet] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_BG_Guerrilla_6_FR_Daguet_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_tanktop_FR_Daguet_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_TankTop_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_tanktop_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_tanktop_FR_Daguet_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_I_E_Uniform_FR_Daguet_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_FR_Daguet_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CombatUniform_FR_Daguet: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CombatUniform_vest_FR_Daguet: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_vest_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CombatUniform_tshirt_FR_Daguet: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\nato_tshirt_FR_Daguet.paa",
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_tshirt_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_tshirt_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CombatUniform_FR_Daguet_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_FR_Daguet_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CombatUniform_vest_FR_Daguet_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[FR Daguet] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_vest_FR_Daguet_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_CombatUniform_FR_Daguet: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[FR Daguet] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_CombatUniform_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_CombatUniform_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CTRG_Soldier_FR_Daguet_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[FR Daguet] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CTRG_Soldier_3_FR_Daguet_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[FR Daguet] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_3_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CTRG_Soldier_2_FR_Daguet_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[FR Daguet] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\nato_tshirt_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_tshirt_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_2_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CTRG_Soldier_FR_Daguet_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[FR Daguet] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_FR_Daguet_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_CTRG_Soldier_3_FR_Daguet_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[FR Daguet] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_3_FR_Daguet_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_R_Gorka_01_FR_Daguet_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[FR Daguet] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_O_R_Gorka_01_FR_Daguet_F.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_Gorka_01_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_R_Gorka_01_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_B_HeliPilotCoveralls_FR_Daguet: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[FR Daguet] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\coveralls_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_B_G_HeliPilotCoveralls_FR_Daguet_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_B_HeliPilotCoveralls_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_officer_noInsignia_FR_Daguet_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[FR Daguet] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Officer_noInsignia_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_officer_noInsignia_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_officer_noInsignia_FR_Daguet_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_officer_noInsignia_FR_Daguet_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[FR Daguet] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Officer_noInsignia_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_officer_noInsignia_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_officer_noInsignia_FR_Daguet_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_PilotCoveralls_FR_Daguet: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[FR Daguet] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\pilot_suit_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_PilotCoveralls_FR_Daguet";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_FR_Daguet_U_O_officer_FR_Daguet_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[FR Daguet] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\ViperOp_Suit_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_V_Soldier_Viper_FR_Daguet_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_FR_Daguet_Soldier_U_O_officer_FR_Daguet_hex_F";
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
	class acp_gol_FR_Daguet_Soldier_U_C_CBRN_Suit_01_FR_Daguet_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CBRN Suit";
		uniformClass="acp_gol_FR_Daguet_U_C_CBRN_Suit_01_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\CBRN_Suit_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_C_CBRN_Suit_01_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_FR_Daguet: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [AAF]";
		uniformClass="acp_gol_FR_Daguet_U_I_CombatUniform_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_shortsleeve_FR_Daguet: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_FR_Daguet_U_I_CombatUniform_shortsleeve_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_FR_Daguet_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_I_CombatUniform_FR_Daguet_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_CombatUniform_shortsleeve_FR_Daguet_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_FR_Daguet_U_I_CombatUniform_shortsleeve_FR_Daguet_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_I_CombatUniform_shortsleeve_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_FR_Daguet_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF]";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_FR_Daguet_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_shortsleeve_FR_Daguet_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_shortsleeve_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_sweater_FR_Daguet_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_sweater_FR_Daguet_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_BG_Guerrilla_6_FR_Daguet: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Guerilla Apparel";
		uniformClass="acp_gol_FR_Daguet_U_BG_Guerrilla_6_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_sweater_FR_Daguet_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_sweater_FR_Daguet_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_BG_Guerrilla_6_FR_Daguet_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_BG_Guerrilla_6_FR_Daguet_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Uniform_01_Sweater_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_sweater_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_tanktop_FR_Daguet_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_tanktop_FR_Daguet_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_TankTop_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_tanktop_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_I_E_Uniform_FR_Daguet_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_I_E_Uniform_FR_Daguet_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_I_Soldier_01_FR_Daguet_CO_flag.paa",
			"\z\acp_gol\addons\FR_Daguet\data\I_E_Soldier_01_gloves_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_I_E_Uniform_01_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_FR_Daguet: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [US]";
		uniformClass="acp_gol_FR_Daguet_U_B_CombatUniform_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_vest_FR_Daguet: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_FR_Daguet_U_B_CombatUniform_vest_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_tshirt_FR_Daguet: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_FR_Daguet_U_B_CombatUniform_tshirt_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\nato_tshirt_FR_Daguet.paa",
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_tshirt_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_FR_Daguet_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_B_CombatUniform_FR_Daguet_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CombatUniform_vest_FR_Daguet_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_FR_Daguet_U_B_CombatUniform_vest_FR_Daguet_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing1_FR_Daguet_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_CombatUniform_FR_Daguet: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Fatigues [CSAT]";
		uniformClass="acp_gol_FR_Daguet_U_O_CombatUniform_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\clothing_FR_Daguet_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\tech_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_CombatUniform_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_FR_Daguet_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CTRG Stealth Uniform";
		uniformClass="acp_gol_FR_Daguet_U_B_CTRG_Soldier_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_3_FR_Daguet_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_FR_Daguet_U_B_CTRG_Soldier_3_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_2_FR_Daguet_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_FR_Daguet_U_B_CTRG_Soldier_2_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO.paa",
			"\z\acp_gol\addons\FR_Daguet\data\nato_tshirt_FR_Daguet.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_tshirt_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_FR_Daguet_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_B_CTRG_Soldier_FR_Daguet_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_uniform_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_CTRG_Soldier_3_FR_Daguet_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_FR_Daguet_U_B_CTRG_Soldier_3_FR_Daguet_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_B_CTRG_Soldier_FR_Daguet_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_U_B_CTRG_vest_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_R_Gorka_01_FR_Daguet_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Granit";
		uniformClass="acp_gol_FR_Daguet_U_O_R_Gorka_01_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\U_O_R_Gorka_01_FR_Daguet_F.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_Gorka_01_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_B_HeliPilotCoveralls_FR_Daguet: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Heli Pilot Coveralls";
		uniformClass="acp_gol_FR_Daguet_U_B_HeliPilotCoveralls_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\coveralls_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_B_G_HeliPilotCoveralls_FR_Daguet_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_officer_noInsignia_FR_Daguet_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Light Fatigues";
		uniformClass="acp_gol_FR_Daguet_U_O_officer_noInsignia_FR_Daguet_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Officer_noInsignia_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_officer_noInsignia_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_officer_noInsignia_FR_Daguet_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Light Fatigues (Flag)";
		uniformClass="acp_gol_FR_Daguet_U_O_officer_noInsignia_FR_Daguet_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Officer_noInsignia_FR_Daguet_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_R_officer_noInsignia_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_PilotCoveralls_FR_Daguet: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Pilot Coveralls";
		uniformClass="acp_gol_FR_Daguet_U_O_PilotCoveralls_FR_Daguet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\pilot_suit_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_Soldier_U_O_officer_FR_Daguet_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [FR Daguet] Special Purpose Suit";
		uniformClass="acp_gol_FR_Daguet_U_O_officer_FR_Daguet_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\ViperOp_Suit_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_U_O_V_Soldier_Viper_FR_Daguet_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_FR_Daguet_B_AssaultPack_FR_Daguet: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[FR Daguet] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_compact_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_AssaultPack_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_AssaultPackEnhanced_FR_Daguet: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[FR Daguet] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_compact_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_AssaultPack_FR_Daguet_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_FR_Daguet_B_AssaultPackEnhanced_FR_Daguet_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[FR Daguet] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_compact_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\vests_FR_Daguet_co_flag.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_AssaultPack_FR_Daguet_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_FR_Daguet_B_Bergen_FR_Daguet_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[FR Daguet] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\Bergen_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\Icon_B_Bergen_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_Carryall_FR_Daguet: B_Carryall_cbr
	{
		author="Seb";
		displayName="[FR Daguet] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_tortila_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_C_Tortila_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_FieldPack_FR_Daguet: B_FieldPack_oli
	{
		author="Seb";
		displayName="[FR Daguet] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_gorod_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_C_Gorod_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_Kitbag_rgr_FR_Daguet: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[FR Daguet] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_fast_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_C_Kitbag_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_LegStrapBag_FR_Daguet_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[FR Daguet] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\V_LegStrapBag_FR_Daguet_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_V_LegStrapBag_FR_Daguet_CA.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_RadioBag_01_FR_Daguet_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[FR Daguet] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_C_UAV_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_TacticalPack_FR_Daguet: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[FR Daguet] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_small_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_C_Small_FR_Daguet.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_ViperHarness_FR_Daguet_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[FR Daguet] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_viperop_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_ViperHarness_FR_Daguet_F_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_B_ViperLightHarness_FR_Daguet_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[FR Daguet] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\backpack_viperop_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_B_ViperLightHarness_FR_Daguet_F_ca.paa";
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
	class acp_gol_FR_Daguet_G_Balaclava_FR_Daguet: G_Balaclava_blk
	{
		author="Seb";
		displayName="[FR Daguet] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_balaclava_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Balaclava_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Balaclava_combat_FR_Daguet: G_Balaclava_combat
	{
		author="Seb";
		displayName="[FR Daguet] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_balaclava_FR_Daguet_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\g_combat_FR_Daguet_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Balaclava_combat_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Balaclava_lowprofile_FR_Daguet: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[FR Daguet] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_balaclava_FR_Daguet_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Balaclava_lowprofile_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Bandanna_aviator_FR_Daguet: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[FR Daguet] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_bandMask_FR_Daguet_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Bandana_aviator_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Bandanna_sport_FR_Daguet: G_Bandanna_sport
	{
		author="Seb";
		displayName="[FR Daguet] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_bandMask_FR_Daguet_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Bandana_shades_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Bandanna_shades_FR_Daguet: G_Bandanna_shades
	{
		author="Seb";
		displayName="[FR Daguet] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_bandMask_FR_Daguet_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Bandana_sport_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Bandanna_FR_Daguet: G_Bandanna_blk
	{
		author="Seb";
		displayName="[FR Daguet] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\headgear_bandMask_FR_Daguet_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Bandana_clean_FR_Daguet_ca.paa";
		scope=2;
	};
	class acp_gol_FR_Daguet_G_Combat_FR_Daguet: G_Combat
	{
		author="Seb";
		displayName="[FR Daguet] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\g_combat_FR_Daguet_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_g_combat_FR_Daguet_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_FR_Daguet_G_Balaclava_TI_G_FR_Daguet_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[FR Daguet] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\G_Balaclava_TI_FR_Daguet_F_co.paa",
			"\z\acp_gol\addons\FR_Daguet\data\g_combat_FR_Daguet_ca.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Balaclava_TI_G_FR_Daguet_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_FR_Daguet_G_Balaclava_TI_FR_Daguet_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[FR Daguet] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\FR_Daguet\data\G_Balaclava_TI_FR_Daguet_F_co.paa"
		};
		picture="\z\acp_gol\addons\FR_Daguet\data\UI\icon_G_Balaclava_TI_FR_Daguet_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
