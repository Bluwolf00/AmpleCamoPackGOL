class CfgPatches
{
	class acp_gol_DE_Flecktarn
	{
		name="DE_Flecktarn";
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
	class acp_gol_DE_Flecktarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Flecktarn\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_DE_Flecktarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Flecktarn\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_DE_Flecktarn
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\DE_Flecktarn\XEH_postInit.sqf'";
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
	class acp_gol_DE_Flecktarn_V_PlateCarrierSpec_DE_Flecktarn: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\carrier_gl_rig_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_carrier_spec_rig_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrierGL_DE_Flecktarn: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\carrier_gl_rig_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_carrier_gl_rig_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrierSpec_DE_Flecktarn_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\carrier_gl_rig_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_carrier_spec_rig_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrierGL_DE_Flecktarn_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\carrier_gl_rig_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_carrier_gl_rig_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrier1_DE_Flecktarn: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_plate_carrier_1_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrier2_DE_Flecktarn: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_plate_carrier_2_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_BandollierB_DE_Flecktarn: V_BandollierB_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_bandollierB_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_Rangemaster_belt_DE_Flecktarn: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[DE Flecktarn] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_Rangemaster_belt_DE_Flecktarn_ca.paa";
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
	class acp_gol_DE_Flecktarn_V_PlateCarrier1_DE_Flecktarn_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_plate_carrier_1_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrier2_DE_Flecktarn_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_plate_carrier_2_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_Chestrig_DE_Flecktarn: V_Chestrig_oli
	{
		author="Seb";
		displayName="[DE Flecktarn] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip_chestrig_DE_Flecktarn.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_ChestrigF_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_EOD_DE_Flecktarn_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[DE Flecktarn] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\V_EOD_vest_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\V_EOD_Protection_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_EOD_olive_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_PlateCarrierIA1_DE_Flecktarn: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[DE Flecktarn] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip_ia_vest01_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_PlateCarrierIA1_DE_Flecktarn_ca.paa";
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
	class acp_gol_DE_Flecktarn_V_PlateCarrierIA2_DE_Flecktarn: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[DE Flecktarn] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip_ia_vest01_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_PlateCarrierIA2_DE_Flecktarn_ca.paa";
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
	class acp_gol_DE_Flecktarn_V_PlateCarrierIAGL_DE_Flecktarn: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[DE Flecktarn] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip_ia_vest01_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\GA_Carrier_GL_Rig_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_PlateCarrierIAGL_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_SmershVest_01_DE_Flecktarn_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Smersh_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\Smersh_miscellaneous_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_SmershVest_01_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_SmershVest_01_radio_DE_Flecktarn_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Smersh_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\Smersh_miscellaneous_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_SmershVest_01_radio_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_HarnessOGL_DE_Flecktarn_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_HarnessOGL_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_HarnessO_DE_Flecktarn_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_HarnessO_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_TacVestIR_DE_Flecktarn: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_TacVestIR_DE_Flecktarn_CA.paa";
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
	class acp_gol_DE_Flecktarn_V_LegStrapBag_DE_Flecktarn_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\V_LegStrapBag_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_LegStrapBag_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_CarrierRigKBT_01_heavy_DE_Flecktarn_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\CarrierRigKBT_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_CarrierRigKBT_01_heavy_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_CarrierRigKBT_01_light_DE_Flecktarn_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\CarrierRigKBT_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_CarrierRigKBT_01_light_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_CarrierRigKBT_01_DE_Flecktarn_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\CarrierRigKBT_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_CarrierRigKBT_01_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_Pocketed_DE_Flecktarn_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\V_Pocketed_cloth_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_Pocketed_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_TacChestrig_DE_Flecktarn_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_ChestrigF_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_V_TacVest_DE_Flecktarn: V_TacVest_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\taticalvest_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_TacVest_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetHBK_F_DE_Flecktarn: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetHBK_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetHBK_F_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetHBK_headset_F_DE_Flecktarn: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetHBK_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetHBK_headset_F_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetHBK_ear_F_DE_Flecktarn: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetHBK_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetHBK_ear_F_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetHBK_chops_F_DE_Flecktarn: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetHBK_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetHBK_chops_F_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetAggressor_F_DE_Flecktarn: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\h_helmetaggressor_01_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetAggressor_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetAggressor_cover_F_DE_Flecktarn: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\h_helmetaggressor_01_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetAggressor_cover_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Bandanna_DE_Flecktarn: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[DE Flecktarn] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\h_bandana_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Bandanna_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_PASGT_basic_DE_Flecktarn_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_PASGT_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_PASGT_basic_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Watchcap_DE_Flecktarn: H_Watchcap_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\woolhat_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Cap_beanie_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Booniehat_DE_Flecktarn: H_Booniehat_khk
	{
		author="Seb";
		displayName="[DE Flecktarn] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\booniehat_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_booniehat_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Booniehat_DE_Flecktarn_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[DE Flecktarn] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\booniehat_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Booniehat_DE_Flecktarn_hs_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Cap_DE_Flecktarn: H_Cap_oli
	{
		author="Seb";
		displayName="[DE Flecktarn] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\capb_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Cap_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Cap_DE_Flecktarn_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[DE Flecktarn] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\capb_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Cap_DE_Flecktarn_hs_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_DE_Flecktarn: H_HelmetB
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecB_DE_Flecktarn: H_HelmetSpecB
	{
		author="Seb";
		displayName="[DE Flecktarn] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetSpecB_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_light_DE_Flecktarn: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[DE Flecktarn] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_light_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_light_basic_DE_Flecktarn: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[DE Flecktarn] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_camo_DE_Flecktarn: H_HelmetB_camo
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\ghillie_2_DE_Flecktarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_camo_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecB_DE_Flecktarn_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[DE Flecktarn] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetSpecB_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_light_DE_Flecktarn_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[DE Flecktarn] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\equip1_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_light_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetLeaderO_DE_Flecktarn: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[DE Flecktarn] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetLeaderO_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetO_DE_Flecktarn: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[DE Flecktarn] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetO_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecO_DE_Flecktarn: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[DE Flecktarn] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetO_spec_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_MilCap_DE_Flecktarn: H_MilCap_gry
	{
		author="Seb";
		displayName="[DE Flecktarn] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\cappatrol_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_MilCap_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_MK7_DE_Flecktarn_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\mk7_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_DE_Flecktarn_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_MK7_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetIA_DE_Flecktarn: H_HelmetIA
	{
		author="Seb";
		displayName="[DE Flecktarn] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_helmet_canvas_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_I_Helmet_canvas_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_Cap_headphones_DE_Flecktarn: H_Cap_marshal
	{
		author="Seb";
		displayName="[DE Flecktarn] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\capb_headphones_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_Cap_headphones_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecter_DE_Flecktarn_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetSpecter_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecter_headset_DE_Flecktarn_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_cover_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetSpecter_paint_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetSpecter_cover_DE_Flecktarn_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetSpecter_01_cover_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetSpecter_cover_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetO_ViperSP_DE_Flecktarn_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_vipersp_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetO_ViperSP_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_H_HelmetB_TI_DE_Flecktarn_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\H_HelmetB_TI_DE_Flecktarn_F_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_H_HelmetB_TI_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_U_C_CBRN_Suit_01_DE_Flecktarn_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\CBRN_Suit_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_C_CBRN_Suit_01_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_C_CBRN_Suit_01_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_CombatUniform_DE_Flecktarn: U_I_CombatUniform
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_CombatUniform_shortsleeve_DE_Flecktarn: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_CombatUniform_DE_Flecktarn_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_DE_Flecktarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_CombatUniform_shortsleeve_DE_Flecktarn_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Flecktarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_DE_Flecktarn_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_DE_Flecktarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_sweater_DE_Flecktarn_01_F: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Sweater)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_sweater_DE_Flecktarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_BG_Guerrilla_6_DE_Flecktarn: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[DE Flecktarn] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_BG_Guerrilla_6_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_sweater_DE_Flecktarn_01_F_insignia: U_I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Sweater, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_sweater_DE_Flecktarn_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_BG_Guerrilla_6_DE_Flecktarn_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[DE Flecktarn] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_BG_Guerrilla_6_DE_Flecktarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_tanktop_DE_Flecktarn_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_TankTop_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_tanktop_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_tanktop_DE_Flecktarn_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_I_E_Uniform_DE_Flecktarn_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_DE_Flecktarn_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CombatUniform_DE_Flecktarn: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [US]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CombatUniform_vest_DE_Flecktarn: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [US] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_vest_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CombatUniform_tshirt_DE_Flecktarn: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [US] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\nato_tshirt_DE_Flecktarn.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_tshirt_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CombatUniform_DE_Flecktarn_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [US] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_DE_Flecktarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CombatUniform_vest_DE_Flecktarn_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Fatigues [US] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_vest_DE_Flecktarn_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_CombatUniform_DE_Flecktarn: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[DE Flecktarn] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_CombatUniform_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_CombatUniform_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_DE_Flecktarn_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_3_DE_Flecktarn_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_3_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_2_DE_Flecktarn_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\nato_tshirt_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_2_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_DE_Flecktarn_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_DE_Flecktarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_3_DE_Flecktarn_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[DE Flecktarn] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_3_DE_Flecktarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_R_Gorka_01_DE_Flecktarn_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_O_R_Gorka_01_DE_Flecktarn_F.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_Gorka_01_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_R_Gorka_01_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_B_HeliPilotCoveralls_DE_Flecktarn: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[DE Flecktarn] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\coveralls_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_B_G_HeliPilotCoveralls_DE_Flecktarn_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_B_HeliPilotCoveralls_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_officer_noInsignia_DE_Flecktarn_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Officer_noInsignia_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_officer_noInsignia_DE_Flecktarn_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_officer_noInsignia_DE_Flecktarn_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Officer_noInsignia_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_officer_noInsignia_DE_Flecktarn_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_PilotCoveralls_DE_Flecktarn: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[DE Flecktarn] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\pilot_suit_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_PilotCoveralls_DE_Flecktarn";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_DE_Flecktarn_U_O_officer_DE_Flecktarn_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\ViperOp_Suit_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_V_Soldier_Viper_DE_Flecktarn_F_ca.paa";
		scope=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_DE_Flecktarn_Soldier_U_O_officer_DE_Flecktarn_hex_F";
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
	class acp_gol_DE_Flecktarn_Soldier_U_C_CBRN_Suit_01_DE_Flecktarn_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CBRN Suit";
		uniformClass="acp_gol_DE_Flecktarn_U_C_CBRN_Suit_01_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\CBRN_Suit_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_C_CBRN_Suit_01_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_DE_Flecktarn: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [AAF]";
		uniformClass="acp_gol_DE_Flecktarn_U_I_CombatUniform_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Flecktarn: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_CombatUniform_shortsleeve_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_DE_Flecktarn_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_CombatUniform_DE_Flecktarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_CombatUniform_shortsleeve_DE_Flecktarn_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_CombatUniform_shortsleeve_DE_Flecktarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_I_CombatUniform_shortsleeve_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_DE_Flecktarn_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF]";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_DE_Flecktarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_shortsleeve_DE_Flecktarn_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_shortsleeve_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_sweater_DE_Flecktarn_01_F: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Sweater)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_sweater_DE_Flecktarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_BG_Guerrilla_6_DE_Flecktarn: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Guerilla Apparel";
		uniformClass="acp_gol_DE_Flecktarn_U_BG_Guerrilla_6_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_sweater_DE_Flecktarn_01_F_insignia: I_E_Uniform_01_sweater_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Sweater, flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_sweater_DE_Flecktarn_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_BG_Guerrilla_6_DE_Flecktarn_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_BG_Guerrilla_6_DE_Flecktarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Uniform_01_Sweater_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_sweater_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_tanktop_DE_Flecktarn_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_tanktop_DE_Flecktarn_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_TankTop_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_tanktop_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_I_E_Uniform_DE_Flecktarn_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_I_E_Uniform_DE_Flecktarn_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_I_Soldier_01_DE_Flecktarn_CO_flag.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\I_E_Soldier_01_gloves_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_I_E_Uniform_01_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_DE_Flecktarn: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [US]";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CombatUniform_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_vest_DE_Flecktarn: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [US] (Rolled-up)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CombatUniform_vest_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_tshirt_DE_Flecktarn: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [US] (Tee)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CombatUniform_tshirt_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\nato_tshirt_DE_Flecktarn.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_DE_Flecktarn_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [US] (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CombatUniform_DE_Flecktarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CombatUniform_vest_DE_Flecktarn_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Combat Fatigues [US] (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CombatUniform_vest_DE_Flecktarn_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing1_DE_Flecktarn_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_CombatUniform_DE_Flecktarn: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Fatigues [CSAT]";
		uniformClass="acp_gol_DE_Flecktarn_U_O_CombatUniform_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\clothing_DE_Flecktarn_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\tech_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_CombatUniform_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_DE_Flecktarn_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CTRG Stealth Uniform";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_3_DE_Flecktarn_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_3_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_2_DE_Flecktarn_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_2_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\nato_tshirt_DE_Flecktarn.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_tshirt_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_DE_Flecktarn_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_DE_Flecktarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_uniform_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_CTRG_Soldier_3_DE_Flecktarn_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_B_CTRG_Soldier_3_DE_Flecktarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_B_CTRG_Soldier_DE_Flecktarn_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_U_B_CTRG_vest_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_R_Gorka_01_DE_Flecktarn_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Granit";
		uniformClass="acp_gol_DE_Flecktarn_U_O_R_Gorka_01_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\U_O_R_Gorka_01_DE_Flecktarn_F.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_Gorka_01_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_B_HeliPilotCoveralls_DE_Flecktarn: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Heli Pilot Coveralls";
		uniformClass="acp_gol_DE_Flecktarn_U_B_HeliPilotCoveralls_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\coveralls_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_B_G_HeliPilotCoveralls_DE_Flecktarn_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_officer_noInsignia_DE_Flecktarn_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Light Fatigues";
		uniformClass="acp_gol_DE_Flecktarn_U_O_officer_noInsignia_DE_Flecktarn_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Officer_noInsignia_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_officer_noInsignia_DE_Flecktarn_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Light Fatigues (Flag)";
		uniformClass="acp_gol_DE_Flecktarn_U_O_officer_noInsignia_DE_Flecktarn_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Officer_noInsignia_DE_Flecktarn_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_R_officer_noInsignia_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_PilotCoveralls_DE_Flecktarn: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Pilot Coveralls";
		uniformClass="acp_gol_DE_Flecktarn_U_O_PilotCoveralls_DE_Flecktarn";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\pilot_suit_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_Soldier_U_O_officer_DE_Flecktarn_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [DE Flecktarn] Special Purpose Suit";
		uniformClass="acp_gol_DE_Flecktarn_U_O_officer_DE_Flecktarn_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\ViperOp_Suit_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_U_O_V_Soldier_Viper_DE_Flecktarn_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_DE_Flecktarn_B_AssaultPack_DE_Flecktarn: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[DE Flecktarn] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_compact_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_AssaultPack_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_AssaultPackEnhanced_DE_Flecktarn: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[DE Flecktarn] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_compact_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_AssaultPack_DE_Flecktarn_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_DE_Flecktarn_B_AssaultPackEnhanced_DE_Flecktarn_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[DE Flecktarn] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_compact_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\vests_DE_Flecktarn_co_flag.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_AssaultPack_DE_Flecktarn_ca.paa";
		scope=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_DE_Flecktarn_B_Bergen_DE_Flecktarn_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\Bergen_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\Icon_B_Bergen_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_Carryall_DE_Flecktarn: B_Carryall_cbr
	{
		author="Seb";
		displayName="[DE Flecktarn] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_tortila_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_C_Tortila_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_FieldPack_DE_Flecktarn: B_FieldPack_oli
	{
		author="Seb";
		displayName="[DE Flecktarn] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_gorod_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_C_Gorod_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_Kitbag_rgr_DE_Flecktarn: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[DE Flecktarn] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_fast_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_C_Kitbag_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_LegStrapBag_DE_Flecktarn_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\V_LegStrapBag_DE_Flecktarn_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_V_LegStrapBag_DE_Flecktarn_CA.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_RadioBag_01_DE_Flecktarn_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_C_UAV_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_TacticalPack_DE_Flecktarn: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_small_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_C_Small_DE_Flecktarn.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_ViperHarness_DE_Flecktarn_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_viperop_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_ViperHarness_DE_Flecktarn_F_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_B_ViperLightHarness_DE_Flecktarn_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\backpack_viperop_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_B_ViperLightHarness_DE_Flecktarn_F_ca.paa";
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
	class acp_gol_DE_Flecktarn_G_Balaclava_DE_Flecktarn: G_Balaclava_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_balaclava_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Balaclava_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Balaclava_combat_DE_Flecktarn: G_Balaclava_combat
	{
		author="Seb";
		displayName="[DE Flecktarn] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_balaclava_DE_Flecktarn_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\g_combat_DE_Flecktarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Balaclava_combat_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Balaclava_lowprofile_DE_Flecktarn: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[DE Flecktarn] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_balaclava_DE_Flecktarn_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Balaclava_lowprofile_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Bandanna_aviator_DE_Flecktarn: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[DE Flecktarn] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_bandMask_DE_Flecktarn_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Bandana_aviator_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Bandanna_sport_DE_Flecktarn: G_Bandanna_sport
	{
		author="Seb";
		displayName="[DE Flecktarn] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_bandMask_DE_Flecktarn_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Bandana_shades_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Bandanna_shades_DE_Flecktarn: G_Bandanna_shades
	{
		author="Seb";
		displayName="[DE Flecktarn] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_bandMask_DE_Flecktarn_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Bandana_sport_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Bandanna_DE_Flecktarn: G_Bandanna_blk
	{
		author="Seb";
		displayName="[DE Flecktarn] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\headgear_bandMask_DE_Flecktarn_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Bandana_clean_DE_Flecktarn_ca.paa";
		scope=2;
	};
	class acp_gol_DE_Flecktarn_G_Combat_DE_Flecktarn: G_Combat
	{
		author="Seb";
		displayName="[DE Flecktarn] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\g_combat_DE_Flecktarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_g_combat_DE_Flecktarn_CA.paa";
		scope=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_DE_Flecktarn_G_Balaclava_TI_G_DE_Flecktarn_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\G_Balaclava_TI_DE_Flecktarn_F_co.paa",
			"\z\acp_gol\addons\DE_Flecktarn\data\g_combat_DE_Flecktarn_ca.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Balaclava_TI_G_DE_Flecktarn_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_DE_Flecktarn_G_Balaclava_TI_DE_Flecktarn_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[DE Flecktarn] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\DE_Flecktarn\data\G_Balaclava_TI_DE_Flecktarn_F_co.paa"
		};
		picture="\z\acp_gol\addons\DE_Flecktarn\data\UI\icon_G_Balaclava_TI_DE_Flecktarn_F_ca.paa";
		scope=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
