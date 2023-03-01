class CfgPatches
{
	class acp_gol_CZ_vz95_Desert
	{
		name="CZ_vz95_Desert";
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
	class acp_gol_CZ_vz95_Desert
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CZ_vz95_Desert\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_CZ_vz95_Desert
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CZ_vz95_Desert\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_CZ_vz95_Desert
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\CZ_vz95_Desert\XEH_postInit.sqf'";
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
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierSpec_CZ_vz95_Desert: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\carrier_gl_rig_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_carrier_spec_rig_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierGL_CZ_vz95_Desert: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\carrier_gl_rig_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_carrier_gl_rig_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierSpec_CZ_vz95_Desert_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\carrier_gl_rig_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_carrier_spec_rig_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierGL_CZ_vz95_Desert_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\carrier_gl_rig_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_carrier_gl_rig_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrier1_CZ_vz95_Desert: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_plate_carrier_1_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrier2_CZ_vz95_Desert: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_plate_carrier_2_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_BandollierB_CZ_vz95_Desert: V_BandollierB_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_bandollierB_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_Rangemaster_belt_CZ_vz95_Desert: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_Rangemaster_belt_CZ_vz95_Desert_ca.paa";
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
	class acp_gol_CZ_vz95_Desert_V_PlateCarrier1_CZ_vz95_Desert_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_plate_carrier_1_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrier2_CZ_vz95_Desert_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_plate_carrier_2_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_Chestrig_CZ_vz95_Desert: V_Chestrig_oli
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip_chestrig_CZ_vz95_Desert.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_ChestrigF_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_EOD_CZ_vz95_Desert_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\V_EOD_vest_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\V_EOD_Protection_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_EOD_olive_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierIA1_CZ_vz95_Desert: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[CZ vz95 Desert] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip_ia_vest01_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_PlateCarrierIA1_CZ_vz95_Desert_ca.paa";
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
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierIA2_CZ_vz95_Desert: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[CZ vz95 Desert] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip_ia_vest01_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_PlateCarrierIA2_CZ_vz95_Desert_ca.paa";
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
	class acp_gol_CZ_vz95_Desert_V_PlateCarrierIAGL_CZ_vz95_Desert: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[CZ vz95 Desert] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip_ia_vest01_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\GA_Carrier_GL_Rig_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_PlateCarrierIAGL_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_SmershVest_01_CZ_vz95_Desert_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Smersh_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Smersh_miscellaneous_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_SmershVest_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_SmershVest_01_radio_CZ_vz95_Desert_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Smersh_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Smersh_miscellaneous_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_SmershVest_01_radio_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_HarnessOGL_CZ_vz95_Desert_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_HarnessOGL_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_HarnessO_CZ_vz95_Desert_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_HarnessO_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_TacVestIR_CZ_vz95_Desert: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_TacVestIR_CZ_vz95_Desert_CA.paa";
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
	class acp_gol_CZ_vz95_Desert_V_LegStrapBag_CZ_vz95_Desert_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\V_LegStrapBag_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_LegStrapBag_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_CarrierRigKBT_01_heavy_CZ_vz95_Desert_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\CarrierRigKBT_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_CarrierRigKBT_01_heavy_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_CarrierRigKBT_01_light_CZ_vz95_Desert_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\CarrierRigKBT_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_CarrierRigKBT_01_light_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_CarrierRigKBT_01_CZ_vz95_Desert_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\CarrierRigKBT_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_CarrierRigKBT_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_Pocketed_CZ_vz95_Desert_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\V_Pocketed_cloth_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_Pocketed_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_TacChestrig_CZ_vz95_Desert_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_ChestrigF_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_V_TacVest_CZ_vz95_Desert: V_TacVest_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\taticalvest_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_TacVest_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetHBK_F_CZ_vz95_Desert: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetHBK_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetHBK_F_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetHBK_headset_F_CZ_vz95_Desert: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetHBK_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetHBK_headset_F_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetHBK_ear_F_CZ_vz95_Desert: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetHBK_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetHBK_ear_F_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetHBK_chops_F_CZ_vz95_Desert: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetHBK_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetHBK_chops_F_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetAggressor_F_CZ_vz95_Desert: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\h_helmetaggressor_01_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetAggressor_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetAggressor_cover_F_CZ_vz95_Desert: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\h_helmetaggressor_01_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetAggressor_cover_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Bandanna_CZ_vz95_Desert: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\h_bandana_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Bandanna_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_PASGT_basic_CZ_vz95_Desert_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_PASGT_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_PASGT_basic_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Watchcap_CZ_vz95_Desert: H_Watchcap_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\woolhat_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Cap_beanie_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Booniehat_CZ_vz95_Desert: H_Booniehat_khk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\booniehat_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_booniehat_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Booniehat_CZ_vz95_Desert_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\booniehat_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Booniehat_CZ_vz95_Desert_hs_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Cap_CZ_vz95_Desert: H_Cap_oli
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\capb_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Cap_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Cap_CZ_vz95_Desert_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\capb_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Cap_CZ_vz95_Desert_hs_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_CZ_vz95_Desert: H_HelmetB
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecB_CZ_vz95_Desert: H_HelmetSpecB
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetSpecB_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_light_CZ_vz95_Desert: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_light_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_light_basic_CZ_vz95_Desert: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_camo_CZ_vz95_Desert: H_HelmetB_camo
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\ghillie_2_CZ_vz95_Desert_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_camo_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecB_CZ_vz95_Desert_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetSpecB_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_light_CZ_vz95_Desert_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\equip1_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_light_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetLeaderO_CZ_vz95_Desert: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetLeaderO_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetO_CZ_vz95_Desert: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetO_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecO_CZ_vz95_Desert: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetO_spec_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_MilCap_CZ_vz95_Desert: H_MilCap_gry
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\cappatrol_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_MilCap_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_MK7_CZ_vz95_Desert_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\mk7_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_CZ_vz95_Desert_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_MK7_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetIA_CZ_vz95_Desert: H_HelmetIA
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_helmet_canvas_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_I_Helmet_canvas_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_Cap_headphones_CZ_vz95_Desert: H_Cap_marshal
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\capb_headphones_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_Cap_headphones_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecter_CZ_vz95_Desert_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetSpecter_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecter_headset_CZ_vz95_Desert_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_cover_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetSpecter_paint_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetSpecter_cover_CZ_vz95_Desert_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetSpecter_01_cover_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetSpecter_cover_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetO_ViperSP_CZ_vz95_Desert_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_vipersp_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetO_ViperSP_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_H_HelmetB_TI_CZ_vz95_Desert_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\H_HelmetB_TI_CZ_vz95_Desert_F_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_H_HelmetB_TI_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_U_C_CBRN_Suit_01_CZ_vz95_Desert_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\CBRN_Suit_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_C_CBRN_Suit_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_C_CBRN_Suit_01_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_CombatUniform_CZ_vz95_Desert: U_I_CombatUniform
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_CombatUniform_CZ_vz95_Desert_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_CZ_vz95_Desert_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_CZ_vz95_Desert_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_CZ_vz95_Desert_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_BG_Guerrilla_6_CZ_vz95_Desert: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_BG_Guerrilla_6_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_BG_Guerrilla_6_CZ_vz95_Desert_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_BG_Guerrilla_6_CZ_vz95_Desert_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_tanktop_CZ_vz95_Desert_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_TankTop_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_tanktop_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_tanktop_CZ_vz95_Desert_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_I_E_Uniform_CZ_vz95_Desert_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_CZ_vz95_Desert_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CombatUniform_CZ_vz95_Desert: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CombatUniform_vest_CZ_vz95_Desert: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_vest_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CombatUniform_tshirt_CZ_vz95_Desert: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\nato_tshirt_CZ_vz95_Desert.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_tshirt_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_tshirt_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CombatUniform_CZ_vz95_Desert_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_CZ_vz95_Desert_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CombatUniform_vest_CZ_vz95_Desert_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_vest_CZ_vz95_Desert_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_CombatUniform_CZ_vz95_Desert: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_CombatUniform_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_CombatUniform_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_CZ_vz95_Desert_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_2_CZ_vz95_Desert_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\nato_tshirt_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_tshirt_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_2_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_CZ_vz95_Desert_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_CZ_vz95_Desert_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_R_Gorka_01_CZ_vz95_Desert_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_O_R_Gorka_01_CZ_vz95_Desert_F.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_Gorka_01_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_R_Gorka_01_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_B_HeliPilotCoveralls_CZ_vz95_Desert: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\coveralls_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_B_G_HeliPilotCoveralls_CZ_vz95_Desert_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_B_HeliPilotCoveralls_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_officer_noInsignia_CZ_vz95_Desert_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Officer_noInsignia_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_officer_noInsignia_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_noInsignia_CZ_vz95_Desert_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_officer_noInsignia_CZ_vz95_Desert_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Officer_noInsignia_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_officer_noInsignia_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_noInsignia_CZ_vz95_Desert_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_PilotCoveralls_CZ_vz95_Desert: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\pilot_suit_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_PilotCoveralls_CZ_vz95_Desert";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_CZ_vz95_Desert_U_O_officer_CZ_vz95_Desert_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\ViperOp_Suit_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_V_Soldier_Viper_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_CZ_vz95_Desert_hex_F";
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
	class acp_gol_CZ_vz95_Desert_Soldier_U_C_CBRN_Suit_01_CZ_vz95_Desert_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CBRN Suit";
		uniformClass="acp_gol_CZ_vz95_Desert_U_C_CBRN_Suit_01_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\CBRN_Suit_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_C_CBRN_Suit_01_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_CZ_vz95_Desert: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [AAF]";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_CombatUniform_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_CZ_vz95_Desert_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_CombatUniform_CZ_vz95_Desert_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_CombatUniform_shortsleeve_CZ_vz95_Desert_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_I_CombatUniform_shortsleeve_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_CZ_vz95_Desert_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF]";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_CZ_vz95_Desert_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_shortsleeve_CZ_vz95_Desert_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_shortsleeve_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_BG_Guerrilla_6_CZ_vz95_Desert: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Guerilla Apparel";
		uniformClass="acp_gol_CZ_vz95_Desert_U_BG_Guerrilla_6_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_sweater_CZ_vz95_Desert_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_BG_Guerrilla_6_CZ_vz95_Desert_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_BG_Guerrilla_6_CZ_vz95_Desert_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Uniform_01_Sweater_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_sweater_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_tanktop_CZ_vz95_Desert_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_tanktop_CZ_vz95_Desert_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_TankTop_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_tanktop_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_I_E_Uniform_CZ_vz95_Desert_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_I_E_Uniform_CZ_vz95_Desert_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_I_Soldier_01_CZ_vz95_Desert_CO_flag.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\I_E_Soldier_01_gloves_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_I_E_Uniform_01_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_CZ_vz95_Desert: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [US]";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CombatUniform_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_vest_CZ_vz95_Desert: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CombatUniform_vest_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_tshirt_CZ_vz95_Desert: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CombatUniform_tshirt_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\nato_tshirt_CZ_vz95_Desert.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_tshirt_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_CZ_vz95_Desert_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CombatUniform_CZ_vz95_Desert_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CombatUniform_vest_CZ_vz95_Desert_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CombatUniform_vest_CZ_vz95_Desert_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing1_CZ_vz95_Desert_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_CombatUniform_CZ_vz95_Desert: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Fatigues [CSAT]";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_CombatUniform_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\clothing_CZ_vz95_Desert_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\tech_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_CombatUniform_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_CZ_vz95_Desert_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CTRG Stealth Uniform";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_2_CZ_vz95_Desert_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_2_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\nato_tshirt_CZ_vz95_Desert.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_tshirt_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_CZ_vz95_Desert_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_CZ_vz95_Desert_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_uniform_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_CTRG_Soldier_3_CZ_vz95_Desert_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_B_CTRG_Soldier_CZ_vz95_Desert_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_U_B_CTRG_vest_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_R_Gorka_01_CZ_vz95_Desert_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Granit";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_R_Gorka_01_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\U_O_R_Gorka_01_CZ_vz95_Desert_F.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_Gorka_01_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_B_HeliPilotCoveralls_CZ_vz95_Desert: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Heli Pilot Coveralls";
		uniformClass="acp_gol_CZ_vz95_Desert_U_B_HeliPilotCoveralls_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\coveralls_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_B_G_HeliPilotCoveralls_CZ_vz95_Desert_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_noInsignia_CZ_vz95_Desert_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Light Fatigues";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_officer_noInsignia_CZ_vz95_Desert_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Officer_noInsignia_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_officer_noInsignia_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_noInsignia_CZ_vz95_Desert_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Light Fatigues (Flag)";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_officer_noInsignia_CZ_vz95_Desert_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Officer_noInsignia_CZ_vz95_Desert_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_R_officer_noInsignia_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_PilotCoveralls_CZ_vz95_Desert: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Pilot Coveralls";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_PilotCoveralls_CZ_vz95_Desert";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\pilot_suit_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_Soldier_U_O_officer_CZ_vz95_Desert_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [CZ vz95 Desert] Special Purpose Suit";
		uniformClass="acp_gol_CZ_vz95_Desert_U_O_officer_CZ_vz95_Desert_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\ViperOp_Suit_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_U_O_V_Soldier_Viper_CZ_vz95_Desert_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_CZ_vz95_Desert_B_AssaultPack_CZ_vz95_Desert: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_compact_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_AssaultPack_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_AssaultPackEnhanced_CZ_vz95_Desert: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_compact_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_AssaultPack_CZ_vz95_Desert_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_CZ_vz95_Desert_B_AssaultPackEnhanced_CZ_vz95_Desert_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_compact_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\vests_CZ_vz95_Desert_co_flag.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_AssaultPack_CZ_vz95_Desert_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_CZ_vz95_Desert_B_Bergen_CZ_vz95_Desert_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\Bergen_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\Icon_B_Bergen_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_Carryall_CZ_vz95_Desert: B_Carryall_cbr
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_tortila_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_C_Tortila_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_FieldPack_CZ_vz95_Desert: B_FieldPack_oli
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_gorod_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_C_Gorod_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_Kitbag_rgr_CZ_vz95_Desert: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_fast_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_C_Kitbag_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_LegStrapBag_CZ_vz95_Desert_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\V_LegStrapBag_CZ_vz95_Desert_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_V_LegStrapBag_CZ_vz95_Desert_CA.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_RadioBag_01_CZ_vz95_Desert_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_C_UAV_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_TacticalPack_CZ_vz95_Desert: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_small_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_C_Small_CZ_vz95_Desert.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_ViperHarness_CZ_vz95_Desert_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_viperop_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_ViperHarness_CZ_vz95_Desert_F_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_B_ViperLightHarness_CZ_vz95_Desert_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\backpack_viperop_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_B_ViperLightHarness_CZ_vz95_Desert_F_ca.paa";
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
	class acp_gol_CZ_vz95_Desert_G_Balaclava_CZ_vz95_Desert: G_Balaclava_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_balaclava_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Balaclava_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Balaclava_combat_CZ_vz95_Desert: G_Balaclava_combat
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_balaclava_CZ_vz95_Desert_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\g_combat_CZ_vz95_Desert_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Balaclava_combat_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Balaclava_lowprofile_CZ_vz95_Desert: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_balaclava_CZ_vz95_Desert_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Balaclava_lowprofile_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Bandanna_aviator_CZ_vz95_Desert: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_bandMask_CZ_vz95_Desert_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Bandana_aviator_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Bandanna_sport_CZ_vz95_Desert: G_Bandanna_sport
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_bandMask_CZ_vz95_Desert_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Bandana_shades_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Bandanna_shades_CZ_vz95_Desert: G_Bandanna_shades
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_bandMask_CZ_vz95_Desert_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Bandana_sport_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Bandanna_CZ_vz95_Desert: G_Bandanna_blk
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\headgear_bandMask_CZ_vz95_Desert_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Bandana_clean_CZ_vz95_Desert_ca.paa";
		scope=2;
	};
	class acp_gol_CZ_vz95_Desert_G_Combat_CZ_vz95_Desert: G_Combat
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\g_combat_CZ_vz95_Desert_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_g_combat_CZ_vz95_Desert_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_CZ_vz95_Desert_G_Balaclava_TI_G_CZ_vz95_Desert_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\G_Balaclava_TI_CZ_vz95_Desert_F_co.paa",
			"\z\acp_gol\addons\CZ_vz95_Desert\data\g_combat_CZ_vz95_Desert_ca.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Balaclava_TI_G_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_CZ_vz95_Desert_G_Balaclava_TI_CZ_vz95_Desert_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[CZ vz95 Desert] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\CZ_vz95_Desert\data\G_Balaclava_TI_CZ_vz95_Desert_F_co.paa"
		};
		picture="\z\acp_gol\addons\CZ_vz95_Desert\data\UI\icon_G_Balaclava_TI_CZ_vz95_Desert_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
