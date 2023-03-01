class CfgPatches
{
	class acp_gol_TUR_TLF
	{
		name="TUR_TLF";
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
	class acp_gol_TUR_TLF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\TUR_TLF\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_TUR_TLF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\TUR_TLF\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_TUR_TLF
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\TUR_TLF\XEH_postInit.sqf'";
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
	class acp_gol_TUR_TLF_V_PlateCarrierSpec_TUR_TLF: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\carrier_gl_rig_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_carrier_spec_rig_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrierGL_TUR_TLF: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\carrier_gl_rig_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_carrier_gl_rig_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrierSpec_TUR_TLF_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\carrier_gl_rig_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_carrier_spec_rig_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrierGL_TUR_TLF_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\carrier_gl_rig_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_carrier_gl_rig_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrier1_TUR_TLF: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_plate_carrier_1_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrier2_TUR_TLF: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_plate_carrier_2_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_BandollierB_TUR_TLF: V_BandollierB_blk
	{
		author="Seb";
		displayName="[TUR TLF] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_bandollierB_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_Rangemaster_belt_TUR_TLF: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[TUR TLF] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_Rangemaster_belt_TUR_TLF_ca.paa";
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
	class acp_gol_TUR_TLF_V_PlateCarrier1_TUR_TLF_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_plate_carrier_1_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrier2_TUR_TLF_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[TUR TLF] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_plate_carrier_2_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_Chestrig_TUR_TLF: V_Chestrig_oli
	{
		author="Seb";
		displayName="[TUR TLF] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip_chestrig_TUR_TLF.paa",
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_ChestrigF_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_EOD_TUR_TLF_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[TUR TLF] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\V_EOD_vest_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\V_EOD_Protection_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_EOD_olive_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_PlateCarrierIA1_TUR_TLF: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[TUR TLF] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip_ia_vest01_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_PlateCarrierIA1_TUR_TLF_ca.paa";
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
	class acp_gol_TUR_TLF_V_PlateCarrierIA2_TUR_TLF: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[TUR TLF] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip_ia_vest01_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_PlateCarrierIA2_TUR_TLF_ca.paa";
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
	class acp_gol_TUR_TLF_V_PlateCarrierIAGL_TUR_TLF: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[TUR TLF] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip_ia_vest01_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\GA_Carrier_GL_Rig_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_PlateCarrierIAGL_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_SmershVest_01_TUR_TLF_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[TUR TLF] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Smersh_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\Smersh_miscellaneous_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_SmershVest_01_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_SmershVest_01_radio_TUR_TLF_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[TUR TLF] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Smersh_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\Smersh_miscellaneous_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_SmershVest_01_radio_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_HarnessOGL_TUR_TLF_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[TUR TLF] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_HarnessOGL_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_HarnessO_TUR_TLF_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[TUR TLF] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_HarnessO_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_TacVestIR_TUR_TLF: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[TUR TLF] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_TacVestIR_TUR_TLF_CA.paa";
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
	class acp_gol_TUR_TLF_V_LegStrapBag_TUR_TLF_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[TUR TLF] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\V_LegStrapBag_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_LegStrapBag_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_CarrierRigKBT_01_heavy_TUR_TLF_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[TUR TLF] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\CarrierRigKBT_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_CarrierRigKBT_01_heavy_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_CarrierRigKBT_01_light_TUR_TLF_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[TUR TLF] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\CarrierRigKBT_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_CarrierRigKBT_01_light_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_CarrierRigKBT_01_TUR_TLF_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[TUR TLF] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\CarrierRigKBT_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_CarrierRigKBT_01_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_Pocketed_TUR_TLF_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[TUR TLF] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\V_Pocketed_cloth_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_Pocketed_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_TacChestrig_TUR_TLF_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[TUR TLF] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_ChestrigF_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_V_TacVest_TUR_TLF: V_TacVest_blk
	{
		author="Seb";
		displayName="[TUR TLF] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\taticalvest_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_TacVest_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetHBK_F_TUR_TLF: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[TUR TLF] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetHBK_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetHBK_F_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetHBK_headset_F_TUR_TLF: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[TUR TLF] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetHBK_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetHBK_headset_F_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetHBK_ear_F_TUR_TLF: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[TUR TLF] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetHBK_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetHBK_ear_F_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetHBK_chops_F_TUR_TLF: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[TUR TLF] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetHBK_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetHBK_chops_F_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetAggressor_F_TUR_TLF: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[TUR TLF] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\h_helmetaggressor_01_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetAggressor_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetAggressor_cover_F_TUR_TLF: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[TUR TLF] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\h_helmetaggressor_01_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetAggressor_cover_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Bandanna_TUR_TLF: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[TUR TLF] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\h_bandana_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Bandanna_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_PASGT_basic_TUR_TLF_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[TUR TLF] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_PASGT_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_PASGT_basic_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Watchcap_TUR_TLF: H_Watchcap_blk
	{
		author="Seb";
		displayName="[TUR TLF] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\woolhat_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Cap_beanie_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Booniehat_TUR_TLF: H_Booniehat_khk
	{
		author="Seb";
		displayName="[TUR TLF] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\booniehat_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_booniehat_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Booniehat_TUR_TLF_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[TUR TLF] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\booniehat_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Booniehat_TUR_TLF_hs_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Cap_TUR_TLF: H_Cap_oli
	{
		author="Seb";
		displayName="[TUR TLF] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\capb_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Cap_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Cap_TUR_TLF_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[TUR TLF] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\capb_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Cap_TUR_TLF_hs_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_TUR_TLF: H_HelmetB
	{
		author="Seb";
		displayName="[TUR TLF] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecB_TUR_TLF: H_HelmetSpecB
	{
		author="Seb";
		displayName="[TUR TLF] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetSpecB_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_light_TUR_TLF: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[TUR TLF] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_light_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_light_basic_TUR_TLF: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[TUR TLF] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_camo_TUR_TLF: H_HelmetB_camo
	{
		author="Seb";
		displayName="[TUR TLF] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\ghillie_2_TUR_TLF_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_camo_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecB_TUR_TLF_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[TUR TLF] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetSpecB_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_light_TUR_TLF_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[TUR TLF] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\equip1_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_light_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetLeaderO_TUR_TLF: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[TUR TLF] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetLeaderO_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetO_TUR_TLF: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[TUR TLF] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetO_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecO_TUR_TLF: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[TUR TLF] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetO_spec_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_MilCap_TUR_TLF: H_MilCap_gry
	{
		author="Seb";
		displayName="[TUR TLF] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\cappatrol_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_MilCap_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_MK7_TUR_TLF_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[TUR TLF] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\mk7_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_TUR_TLF_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_MK7_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetIA_TUR_TLF: H_HelmetIA
	{
		author="Seb";
		displayName="[TUR TLF] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_helmet_canvas_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_I_Helmet_canvas_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_Cap_headphones_TUR_TLF: H_Cap_marshal
	{
		author="Seb";
		displayName="[TUR TLF] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\capb_headphones_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_Cap_headphones_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecter_TUR_TLF_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[TUR TLF] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetSpecter_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecter_headset_TUR_TLF_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[TUR TLF] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_cover_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetSpecter_paint_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetSpecter_cover_TUR_TLF_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[TUR TLF] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetSpecter_01_cover_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetSpecter_cover_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetO_ViperSP_TUR_TLF_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[TUR TLF] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_vipersp_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetO_ViperSP_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_H_HelmetB_TI_TUR_TLF_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[TUR TLF] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\H_HelmetB_TI_TUR_TLF_F_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_H_HelmetB_TI_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_U_C_CBRN_Suit_01_TUR_TLF_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[TUR TLF] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\CBRN_Suit_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_C_CBRN_Suit_01_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_C_CBRN_Suit_01_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_CombatUniform_TUR_TLF: U_I_CombatUniform
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_CombatUniform_shortsleeve_TUR_TLF: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_shortsleeve_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_CombatUniform_TUR_TLF_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_TUR_TLF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_CombatUniform_shortsleeve_TUR_TLF_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_shortsleeve_TUR_TLF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_TUR_TLF_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_TUR_TLF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_sweater_TUR_TLF_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_sweater_TUR_TLF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_BG_Guerrilla_6_TUR_TLF: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[TUR TLF] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_BG_Guerrilla_6_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_sweater_TUR_TLF_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_sweater_TUR_TLF_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_BG_Guerrilla_6_TUR_TLF_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[TUR TLF] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_BG_Guerrilla_6_TUR_TLF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_tanktop_TUR_TLF_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TankTop_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_tanktop_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_tanktop_TUR_TLF_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_I_E_Uniform_TUR_TLF_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_TUR_TLF_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CombatUniform_TUR_TLF: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CombatUniform_vest_TUR_TLF: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_vest_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CombatUniform_tshirt_TUR_TLF: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\nato_tshirt_TUR_TLF.paa",
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_tshirt_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_tshirt_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CombatUniform_TUR_TLF_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_TUR_TLF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CombatUniform_vest_TUR_TLF_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[TUR TLF] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_vest_TUR_TLF_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_CombatUniform_TUR_TLF: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[TUR TLF] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_CombatUniform_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_CombatUniform_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CTRG_Soldier_TUR_TLF_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[TUR TLF] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CTRG_Soldier_3_TUR_TLF_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[TUR TLF] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_3_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CTRG_Soldier_2_TUR_TLF_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[TUR TLF] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\nato_tshirt_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_tshirt_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_2_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CTRG_Soldier_TUR_TLF_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[TUR TLF] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_TUR_TLF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_CTRG_Soldier_3_TUR_TLF_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[TUR TLF] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_3_TUR_TLF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_R_Gorka_01_TUR_TLF_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[TUR TLF] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_O_R_Gorka_01_TUR_TLF_F.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_Gorka_01_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_R_Gorka_01_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_B_HeliPilotCoveralls_TUR_TLF: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[TUR TLF] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\coveralls_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_B_G_HeliPilotCoveralls_TUR_TLF_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_B_HeliPilotCoveralls_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_officer_noInsignia_TUR_TLF_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[TUR TLF] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Officer_noInsignia_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_officer_noInsignia_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_officer_noInsignia_TUR_TLF_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_officer_noInsignia_TUR_TLF_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[TUR TLF] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Officer_noInsignia_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_officer_noInsignia_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_officer_noInsignia_TUR_TLF_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_PilotCoveralls_TUR_TLF: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[TUR TLF] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\pilot_suit_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_PilotCoveralls_TUR_TLF";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_TUR_TLF_U_O_officer_TUR_TLF_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[TUR TLF] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\ViperOp_Suit_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_V_Soldier_Viper_TUR_TLF_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_TUR_TLF_Soldier_U_O_officer_TUR_TLF_hex_F";
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
	class acp_gol_TUR_TLF_Soldier_U_C_CBRN_Suit_01_TUR_TLF_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CBRN Suit";
		uniformClass="acp_gol_TUR_TLF_U_C_CBRN_Suit_01_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\CBRN_Suit_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_C_CBRN_Suit_01_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_TUR_TLF: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [AAF]";
		uniformClass="acp_gol_TUR_TLF_U_I_CombatUniform_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_shortsleeve_TUR_TLF: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_TUR_TLF_U_I_CombatUniform_shortsleeve_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_TUR_TLF_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_I_CombatUniform_TUR_TLF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_CombatUniform_shortsleeve_TUR_TLF_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_TUR_TLF_U_I_CombatUniform_shortsleeve_TUR_TLF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_I_CombatUniform_shortsleeve_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_TUR_TLF_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF]";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_TUR_TLF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_shortsleeve_TUR_TLF_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_shortsleeve_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_sweater_TUR_TLF_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_sweater_TUR_TLF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_BG_Guerrilla_6_TUR_TLF: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Guerilla Apparel";
		uniformClass="acp_gol_TUR_TLF_U_BG_Guerrilla_6_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_sweater_TUR_TLF_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_sweater_TUR_TLF_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_BG_Guerrilla_6_TUR_TLF_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_BG_Guerrilla_6_TUR_TLF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Uniform_01_Sweater_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_sweater_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_tanktop_TUR_TLF_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_tanktop_TUR_TLF_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TankTop_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_tanktop_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_I_E_Uniform_TUR_TLF_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_I_E_Uniform_TUR_TLF_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_I_Soldier_01_TUR_TLF_CO_flag.paa",
			"\z\acp_gol\addons\TUR_TLF\data\I_E_Soldier_01_gloves_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_I_E_Uniform_01_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_TUR_TLF: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [US]";
		uniformClass="acp_gol_TUR_TLF_U_B_CombatUniform_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_vest_TUR_TLF: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_TUR_TLF_U_B_CombatUniform_vest_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_tshirt_TUR_TLF: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_TUR_TLF_U_B_CombatUniform_tshirt_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\nato_tshirt_TUR_TLF.paa",
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_tshirt_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_TUR_TLF_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_B_CombatUniform_TUR_TLF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CombatUniform_vest_TUR_TLF_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_TUR_TLF_U_B_CombatUniform_vest_TUR_TLF_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing1_TUR_TLF_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_CombatUniform_TUR_TLF: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Fatigues [CSAT]";
		uniformClass="acp_gol_TUR_TLF_U_O_CombatUniform_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\clothing_TUR_TLF_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\tech_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_CombatUniform_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_TUR_TLF_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CTRG Stealth Uniform";
		uniformClass="acp_gol_TUR_TLF_U_B_CTRG_Soldier_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_3_TUR_TLF_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_TUR_TLF_U_B_CTRG_Soldier_3_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_2_TUR_TLF_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_TUR_TLF_U_B_CTRG_Soldier_2_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO.paa",
			"\z\acp_gol\addons\TUR_TLF\data\nato_tshirt_TUR_TLF.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_tshirt_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_TUR_TLF_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_B_CTRG_Soldier_TUR_TLF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_uniform_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_CTRG_Soldier_3_TUR_TLF_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_TUR_TLF_U_B_CTRG_Soldier_3_TUR_TLF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_B_CTRG_Soldier_TUR_TLF_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_U_B_CTRG_vest_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_R_Gorka_01_TUR_TLF_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Granit";
		uniformClass="acp_gol_TUR_TLF_U_O_R_Gorka_01_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\U_O_R_Gorka_01_TUR_TLF_F.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_Gorka_01_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_B_HeliPilotCoveralls_TUR_TLF: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Heli Pilot Coveralls";
		uniformClass="acp_gol_TUR_TLF_U_B_HeliPilotCoveralls_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\coveralls_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_B_G_HeliPilotCoveralls_TUR_TLF_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_officer_noInsignia_TUR_TLF_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Light Fatigues";
		uniformClass="acp_gol_TUR_TLF_U_O_officer_noInsignia_TUR_TLF_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Officer_noInsignia_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_officer_noInsignia_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_officer_noInsignia_TUR_TLF_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Light Fatigues (Flag)";
		uniformClass="acp_gol_TUR_TLF_U_O_officer_noInsignia_TUR_TLF_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Officer_noInsignia_TUR_TLF_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_R_officer_noInsignia_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_PilotCoveralls_TUR_TLF: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Pilot Coveralls";
		uniformClass="acp_gol_TUR_TLF_U_O_PilotCoveralls_TUR_TLF";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\pilot_suit_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_Soldier_U_O_officer_TUR_TLF_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [TUR TLF] Special Purpose Suit";
		uniformClass="acp_gol_TUR_TLF_U_O_officer_TUR_TLF_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\ViperOp_Suit_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_U_O_V_Soldier_Viper_TUR_TLF_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_TUR_TLF_B_AssaultPack_TUR_TLF: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[TUR TLF] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_compact_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_AssaultPack_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_AssaultPackEnhanced_TUR_TLF: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[TUR TLF] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_compact_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_AssaultPack_TUR_TLF_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_TUR_TLF_B_AssaultPackEnhanced_TUR_TLF_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[TUR TLF] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_compact_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\vests_TUR_TLF_co_flag.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_AssaultPack_TUR_TLF_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_TUR_TLF_B_Bergen_TUR_TLF_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[TUR TLF] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\Bergen_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\Icon_B_Bergen_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_Carryall_TUR_TLF: B_Carryall_cbr
	{
		author="Seb";
		displayName="[TUR TLF] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_tortila_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_C_Tortila_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_FieldPack_TUR_TLF: B_FieldPack_oli
	{
		author="Seb";
		displayName="[TUR TLF] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_gorod_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_C_Gorod_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_Kitbag_rgr_TUR_TLF: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[TUR TLF] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_fast_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_C_Kitbag_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_LegStrapBag_TUR_TLF_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[TUR TLF] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\V_LegStrapBag_TUR_TLF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_V_LegStrapBag_TUR_TLF_CA.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_RadioBag_01_TUR_TLF_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[TUR TLF] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_C_UAV_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_TacticalPack_TUR_TLF: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[TUR TLF] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_small_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_C_Small_TUR_TLF.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_ViperHarness_TUR_TLF_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[TUR TLF] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_viperop_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_ViperHarness_TUR_TLF_F_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_B_ViperLightHarness_TUR_TLF_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[TUR TLF] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\backpack_viperop_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_B_ViperLightHarness_TUR_TLF_F_ca.paa";
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
	class acp_gol_TUR_TLF_G_Balaclava_TUR_TLF: G_Balaclava_blk
	{
		author="Seb";
		displayName="[TUR TLF] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_balaclava_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Balaclava_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Balaclava_combat_TUR_TLF: G_Balaclava_combat
	{
		author="Seb";
		displayName="[TUR TLF] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_balaclava_TUR_TLF_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\g_combat_TUR_TLF_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Balaclava_combat_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Balaclava_lowprofile_TUR_TLF: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[TUR TLF] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_balaclava_TUR_TLF_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Balaclava_lowprofile_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Bandanna_aviator_TUR_TLF: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[TUR TLF] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_bandMask_TUR_TLF_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Bandana_aviator_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Bandanna_sport_TUR_TLF: G_Bandanna_sport
	{
		author="Seb";
		displayName="[TUR TLF] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_bandMask_TUR_TLF_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Bandana_shades_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Bandanna_shades_TUR_TLF: G_Bandanna_shades
	{
		author="Seb";
		displayName="[TUR TLF] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_bandMask_TUR_TLF_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Bandana_sport_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Bandanna_TUR_TLF: G_Bandanna_blk
	{
		author="Seb";
		displayName="[TUR TLF] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\headgear_bandMask_TUR_TLF_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Bandana_clean_TUR_TLF_ca.paa";
		scope=2;
	};
	class acp_gol_TUR_TLF_G_Combat_TUR_TLF: G_Combat
	{
		author="Seb";
		displayName="[TUR TLF] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\g_combat_TUR_TLF_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_g_combat_TUR_TLF_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_TUR_TLF_G_Balaclava_TI_G_TUR_TLF_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[TUR TLF] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\G_Balaclava_TI_TUR_TLF_F_co.paa",
			"\z\acp_gol\addons\TUR_TLF\data\g_combat_TUR_TLF_ca.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Balaclava_TI_G_TUR_TLF_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_TUR_TLF_G_Balaclava_TI_TUR_TLF_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[TUR TLF] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\TUR_TLF\data\G_Balaclava_TI_TUR_TLF_F_co.paa"
		};
		picture="\z\acp_gol\addons\TUR_TLF\data\UI\icon_G_Balaclava_TI_TUR_TLF_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
