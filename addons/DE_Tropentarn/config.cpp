class CfgPatches
{
	class acp_gol_DE_Tropentarn
	{
		name="DE_Tropentarn";
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
	class acp_gol_DE_Tropentarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Tropentarn\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_DE_Tropentarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Tropentarn\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_DE_Tropentarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Tropentarn\XEH_postInit.sqf'";
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
	class acp_gol_DE_Tropentarn_V_PlateCarrierSpec_DE_Tropentarn: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\carrier_gl_rig_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_carrier_spec_rig_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrierGL_DE_Tropentarn: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\carrier_gl_rig_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_carrier_gl_rig_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrierSpec_DE_Tropentarn_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\carrier_gl_rig_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_carrier_spec_rig_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrierGL_DE_Tropentarn_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\carrier_gl_rig_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_carrier_gl_rig_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrier1_DE_Tropentarn: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_plate_carrier_1_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrier2_DE_Tropentarn: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_plate_carrier_2_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_BandollierB_DE_Tropentarn: V_BandollierB_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_bandollierB_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_Rangemaster_belt_DE_Tropentarn: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[DE Tropentarn] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_Rangemaster_belt_DE_Tropentarn_ca.paa";
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
	class acp_gol_DE_Tropentarn_V_PlateCarrier1_DE_Tropentarn_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_plate_carrier_1_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrier2_DE_Tropentarn_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_plate_carrier_2_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_Chestrig_DE_Tropentarn: V_Chestrig_oli
	{
		author="Seb";
		displayName="[DE Tropentarn] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip_chestrig_DE_Tropentarn.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_ChestrigF_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_EOD_DE_Tropentarn_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[DE Tropentarn] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\V_EOD_vest_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\V_EOD_Protection_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_EOD_olive_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_PlateCarrierIA1_DE_Tropentarn: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[DE Tropentarn] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip_ia_vest01_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_PlateCarrierIA1_DE_Tropentarn_ca.paa";
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
	class acp_gol_DE_Tropentarn_V_PlateCarrierIA2_DE_Tropentarn: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[DE Tropentarn] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip_ia_vest01_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_PlateCarrierIA2_DE_Tropentarn_ca.paa";
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
	class acp_gol_DE_Tropentarn_V_PlateCarrierIAGL_DE_Tropentarn: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[DE Tropentarn] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip_ia_vest01_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\GA_Carrier_GL_Rig_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_PlateCarrierIAGL_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_SmershVest_01_DE_Tropentarn_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Smersh_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\Smersh_miscellaneous_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_SmershVest_01_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_SmershVest_01_radio_DE_Tropentarn_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Smersh_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\Smersh_miscellaneous_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_SmershVest_01_radio_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_HarnessOGL_DE_Tropentarn_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_HarnessOGL_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_HarnessO_DE_Tropentarn_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_HarnessO_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_TacVestIR_DE_Tropentarn: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_TacVestIR_DE_Tropentarn_CA.paa";
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
	class acp_gol_DE_Tropentarn_V_LegStrapBag_DE_Tropentarn_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\V_LegStrapBag_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_LegStrapBag_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_CarrierRigKBT_01_heavy_DE_Tropentarn_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\CarrierRigKBT_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_CarrierRigKBT_01_heavy_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_CarrierRigKBT_01_light_DE_Tropentarn_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\CarrierRigKBT_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_CarrierRigKBT_01_light_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_CarrierRigKBT_01_DE_Tropentarn_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\CarrierRigKBT_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_CarrierRigKBT_01_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_Pocketed_DE_Tropentarn_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\V_Pocketed_cloth_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_Pocketed_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_TacChestrig_DE_Tropentarn_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_ChestrigF_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_V_TacVest_DE_Tropentarn: V_TacVest_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\taticalvest_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_TacVest_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetHBK_F_DE_Tropentarn: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetHBK_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetHBK_F_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetHBK_headset_F_DE_Tropentarn: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetHBK_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetHBK_headset_F_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetHBK_ear_F_DE_Tropentarn: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetHBK_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetHBK_ear_F_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetHBK_chops_F_DE_Tropentarn: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetHBK_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetHBK_chops_F_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetAggressor_F_DE_Tropentarn: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\h_helmetaggressor_01_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetAggressor_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetAggressor_cover_F_DE_Tropentarn: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\h_helmetaggressor_01_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetAggressor_cover_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Bandanna_DE_Tropentarn: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[DE Tropentarn] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\h_bandana_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Bandanna_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_PASGT_basic_DE_Tropentarn_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_PASGT_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_PASGT_basic_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Watchcap_DE_Tropentarn: H_Watchcap_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\woolhat_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Cap_beanie_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Booniehat_DE_Tropentarn: H_Booniehat_khk
	{
		author="Seb";
		displayName="[DE Tropentarn] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\booniehat_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_booniehat_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Booniehat_DE_Tropentarn_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[DE Tropentarn] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\booniehat_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Booniehat_DE_Tropentarn_hs_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Cap_DE_Tropentarn: H_Cap_oli
	{
		author="Seb";
		displayName="[DE Tropentarn] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\capb_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Cap_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Cap_DE_Tropentarn_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[DE Tropentarn] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\capb_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Cap_DE_Tropentarn_hs_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_DE_Tropentarn: H_HelmetB
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecB_DE_Tropentarn: H_HelmetSpecB
	{
		author="Seb";
		displayName="[DE Tropentarn] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetSpecB_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_light_DE_Tropentarn: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[DE Tropentarn] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_light_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_light_basic_DE_Tropentarn: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[DE Tropentarn] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_camo_DE_Tropentarn: H_HelmetB_camo
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\ghillie_2_DE_Tropentarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_camo_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecB_DE_Tropentarn_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[DE Tropentarn] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetSpecB_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_light_DE_Tropentarn_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[DE Tropentarn] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\equip1_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_light_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetLeaderO_DE_Tropentarn: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[DE Tropentarn] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetLeaderO_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetO_DE_Tropentarn: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[DE Tropentarn] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetO_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecO_DE_Tropentarn: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[DE Tropentarn] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetO_spec_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_MilCap_DE_Tropentarn: H_MilCap_gry
	{
		author="Seb";
		displayName="[DE Tropentarn] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\cappatrol_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_MilCap_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_MK7_DE_Tropentarn_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\mk7_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_DE_Tropentarn_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_MK7_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetIA_DE_Tropentarn: H_HelmetIA
	{
		author="Seb";
		displayName="[DE Tropentarn] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_helmet_canvas_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_I_Helmet_canvas_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_Cap_headphones_DE_Tropentarn: H_Cap_marshal
	{
		author="Seb";
		displayName="[DE Tropentarn] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\capb_headphones_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_Cap_headphones_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecter_DE_Tropentarn_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetSpecter_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecter_headset_DE_Tropentarn_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_cover_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetSpecter_paint_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetSpecter_cover_DE_Tropentarn_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetSpecter_01_cover_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetSpecter_cover_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetO_ViperSP_DE_Tropentarn_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_vipersp_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetO_ViperSP_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_H_HelmetB_TI_DE_Tropentarn_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\H_HelmetB_TI_DE_Tropentarn_F_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_H_HelmetB_TI_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_U_C_CBRN_Suit_01_DE_Tropentarn_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\CBRN_Suit_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_C_CBRN_Suit_01_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_C_CBRN_Suit_01_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_CombatUniform_DE_Tropentarn: U_I_CombatUniform
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_CombatUniform_shortsleeve_DE_Tropentarn: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_CombatUniform_DE_Tropentarn_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_DE_Tropentarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_CombatUniform_shortsleeve_DE_Tropentarn_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Tropentarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_DE_Tropentarn_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_DE_Tropentarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_sweater_DE_Tropentarn_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_sweater_DE_Tropentarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_BG_Guerrilla_6_DE_Tropentarn: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[DE Tropentarn] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_BG_Guerrilla_6_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_sweater_DE_Tropentarn_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_sweater_DE_Tropentarn_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_BG_Guerrilla_6_DE_Tropentarn_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[DE Tropentarn] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_BG_Guerrilla_6_DE_Tropentarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_tanktop_DE_Tropentarn_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_TankTop_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_tanktop_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_tanktop_DE_Tropentarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_I_E_Uniform_DE_Tropentarn_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_DE_Tropentarn_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CombatUniform_DE_Tropentarn: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CombatUniform_vest_DE_Tropentarn: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_vest_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CombatUniform_tshirt_DE_Tropentarn: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\nato_tshirt_DE_Tropentarn.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_tshirt_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CombatUniform_DE_Tropentarn_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_DE_Tropentarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CombatUniform_vest_DE_Tropentarn_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_vest_DE_Tropentarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_CombatUniform_DE_Tropentarn: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[DE Tropentarn] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_CombatUniform_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_CombatUniform_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_DE_Tropentarn_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_3_DE_Tropentarn_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_3_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_2_DE_Tropentarn_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\nato_tshirt_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_2_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_DE_Tropentarn_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_DE_Tropentarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_3_DE_Tropentarn_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[DE Tropentarn] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_3_DE_Tropentarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_R_Gorka_01_DE_Tropentarn_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_O_R_Gorka_01_DE_Tropentarn_F.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_Gorka_01_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_R_Gorka_01_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_B_HeliPilotCoveralls_DE_Tropentarn: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[DE Tropentarn] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\coveralls_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_B_G_HeliPilotCoveralls_DE_Tropentarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_B_HeliPilotCoveralls_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_officer_noInsignia_DE_Tropentarn_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Officer_noInsignia_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_officer_noInsignia_DE_Tropentarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_officer_noInsignia_DE_Tropentarn_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Officer_noInsignia_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_officer_noInsignia_DE_Tropentarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_PilotCoveralls_DE_Tropentarn: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[DE Tropentarn] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\pilot_suit_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_PilotCoveralls_DE_Tropentarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Tropentarn_U_O_officer_DE_Tropentarn_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\ViperOp_Suit_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_V_Soldier_Viper_DE_Tropentarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Tropentarn_Soldier_U_O_officer_DE_Tropentarn_hex_F";
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
	class acp_gol_DE_Tropentarn_Soldier_U_C_CBRN_Suit_01_DE_Tropentarn_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CBRN Suit";
		uniformClass="acp_gol_DE_Tropentarn_U_C_CBRN_Suit_01_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\CBRN_Suit_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_C_CBRN_Suit_01_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_DE_Tropentarn: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [AAF]";
		uniformClass="acp_gol_DE_Tropentarn_U_I_CombatUniform_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Tropentarn: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_CombatUniform_shortsleeve_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_DE_Tropentarn_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_CombatUniform_DE_Tropentarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Tropentarn_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_CombatUniform_shortsleeve_DE_Tropentarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_DE_Tropentarn_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF]";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_DE_Tropentarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_shortsleeve_DE_Tropentarn_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_sweater_DE_Tropentarn_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_sweater_DE_Tropentarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_BG_Guerrilla_6_DE_Tropentarn: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Guerilla Apparel";
		uniformClass="acp_gol_DE_Tropentarn_U_BG_Guerrilla_6_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_sweater_DE_Tropentarn_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_sweater_DE_Tropentarn_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_BG_Guerrilla_6_DE_Tropentarn_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_BG_Guerrilla_6_DE_Tropentarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Uniform_01_Sweater_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_tanktop_DE_Tropentarn_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_tanktop_DE_Tropentarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_TankTop_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_tanktop_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_I_E_Uniform_DE_Tropentarn_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_I_E_Uniform_DE_Tropentarn_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_I_Soldier_01_DE_Tropentarn_CO_flag.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\I_E_Soldier_01_gloves_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_I_E_Uniform_01_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_DE_Tropentarn: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [US]";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CombatUniform_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_vest_DE_Tropentarn: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CombatUniform_vest_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_tshirt_DE_Tropentarn: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CombatUniform_tshirt_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\nato_tshirt_DE_Tropentarn.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_DE_Tropentarn_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CombatUniform_DE_Tropentarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CombatUniform_vest_DE_Tropentarn_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CombatUniform_vest_DE_Tropentarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing1_DE_Tropentarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_CombatUniform_DE_Tropentarn: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Fatigues [CSAT]";
		uniformClass="acp_gol_DE_Tropentarn_U_O_CombatUniform_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\clothing_DE_Tropentarn_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\tech_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_CombatUniform_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_DE_Tropentarn_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CTRG Stealth Uniform";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_3_DE_Tropentarn_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_3_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_2_DE_Tropentarn_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_2_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\nato_tshirt_DE_Tropentarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_DE_Tropentarn_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_DE_Tropentarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_uniform_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_CTRG_Soldier_3_DE_Tropentarn_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_B_CTRG_Soldier_3_DE_Tropentarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_B_CTRG_Soldier_DE_Tropentarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_U_B_CTRG_vest_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_R_Gorka_01_DE_Tropentarn_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Granit";
		uniformClass="acp_gol_DE_Tropentarn_U_O_R_Gorka_01_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\U_O_R_Gorka_01_DE_Tropentarn_F.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_Gorka_01_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_B_HeliPilotCoveralls_DE_Tropentarn: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Heli Pilot Coveralls";
		uniformClass="acp_gol_DE_Tropentarn_U_B_HeliPilotCoveralls_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\coveralls_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_B_G_HeliPilotCoveralls_DE_Tropentarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_officer_noInsignia_DE_Tropentarn_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Light Fatigues";
		uniformClass="acp_gol_DE_Tropentarn_U_O_officer_noInsignia_DE_Tropentarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Officer_noInsignia_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_officer_noInsignia_DE_Tropentarn_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Light Fatigues (Flag)";
		uniformClass="acp_gol_DE_Tropentarn_U_O_officer_noInsignia_DE_Tropentarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Officer_noInsignia_DE_Tropentarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_PilotCoveralls_DE_Tropentarn: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Pilot Coveralls";
		uniformClass="acp_gol_DE_Tropentarn_U_O_PilotCoveralls_DE_Tropentarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\pilot_suit_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_Soldier_U_O_officer_DE_Tropentarn_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [DE Tropentarn] Special Purpose Suit";
		uniformClass="acp_gol_DE_Tropentarn_U_O_officer_DE_Tropentarn_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\ViperOp_Suit_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_U_O_V_Soldier_Viper_DE_Tropentarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Tropentarn_B_AssaultPack_DE_Tropentarn: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[DE Tropentarn] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_compact_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_AssaultPack_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_AssaultPackEnhanced_DE_Tropentarn: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[DE Tropentarn] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_compact_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_AssaultPack_DE_Tropentarn_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_DE_Tropentarn_B_AssaultPackEnhanced_DE_Tropentarn_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[DE Tropentarn] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_compact_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\vests_DE_Tropentarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_AssaultPack_DE_Tropentarn_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_DE_Tropentarn_B_Bergen_DE_Tropentarn_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\Bergen_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\Icon_B_Bergen_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_Carryall_DE_Tropentarn: B_Carryall_cbr
	{
		author="Seb";
		displayName="[DE Tropentarn] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_tortila_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_C_Tortila_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_FieldPack_DE_Tropentarn: B_FieldPack_oli
	{
		author="Seb";
		displayName="[DE Tropentarn] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_gorod_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_C_Gorod_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_Kitbag_rgr_DE_Tropentarn: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[DE Tropentarn] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_fast_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_C_Kitbag_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_LegStrapBag_DE_Tropentarn_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\V_LegStrapBag_DE_Tropentarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_V_LegStrapBag_DE_Tropentarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_RadioBag_01_DE_Tropentarn_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_C_UAV_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_TacticalPack_DE_Tropentarn: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_small_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_C_Small_DE_Tropentarn.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_ViperHarness_DE_Tropentarn_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_viperop_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_ViperHarness_DE_Tropentarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_B_ViperLightHarness_DE_Tropentarn_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\backpack_viperop_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_B_ViperLightHarness_DE_Tropentarn_F_ca.paa";
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
	class acp_gol_DE_Tropentarn_G_Balaclava_DE_Tropentarn: G_Balaclava_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_balaclava_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Balaclava_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Balaclava_combat_DE_Tropentarn: G_Balaclava_combat
	{
		author="Seb";
		displayName="[DE Tropentarn] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_balaclava_DE_Tropentarn_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\g_combat_DE_Tropentarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Balaclava_combat_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Balaclava_lowprofile_DE_Tropentarn: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[DE Tropentarn] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_balaclava_DE_Tropentarn_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Balaclava_lowprofile_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Bandanna_aviator_DE_Tropentarn: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[DE Tropentarn] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_bandMask_DE_Tropentarn_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Bandana_aviator_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Bandanna_sport_DE_Tropentarn: G_Bandanna_sport
	{
		author="Seb";
		displayName="[DE Tropentarn] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_bandMask_DE_Tropentarn_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Bandana_shades_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Bandanna_shades_DE_Tropentarn: G_Bandanna_shades
	{
		author="Seb";
		displayName="[DE Tropentarn] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_bandMask_DE_Tropentarn_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Bandana_sport_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Bandanna_DE_Tropentarn: G_Bandanna_blk
	{
		author="Seb";
		displayName="[DE Tropentarn] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\headgear_bandMask_DE_Tropentarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Bandana_clean_DE_Tropentarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Tropentarn_G_Combat_DE_Tropentarn: G_Combat
	{
		author="Seb";
		displayName="[DE Tropentarn] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\g_combat_DE_Tropentarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_g_combat_DE_Tropentarn_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_DE_Tropentarn_G_Balaclava_TI_G_DE_Tropentarn_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\G_Balaclava_TI_DE_Tropentarn_F_co.paa",
			"\z\acp_gol\addons\DE_Tropentarn\data\g_combat_DE_Tropentarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Balaclava_TI_G_DE_Tropentarn_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_DE_Tropentarn_G_Balaclava_TI_DE_Tropentarn_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[DE Tropentarn] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Tropentarn\data\G_Balaclava_TI_DE_Tropentarn_F_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Tropentarn\data\UI\icon_G_Balaclava_TI_DE_Tropentarn_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
