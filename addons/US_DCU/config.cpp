class CfgPatches
{
	class acp_gol_US_DCU
	{
		name="US_DCU";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"acp_gol_main"
		};
		author="Seb";
		version="2.9.0.0";
		versionStr="2.9.0.0";
		versionAr[]={2,9,0,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class acp_gol_US_DCU
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\US_DCU\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_US_DCU
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\US_DCU\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_US_DCU
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\US_DCU\XEH_postInit.sqf'";
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
	class H_HelmetCrew_B;
	class H_HelmetLeaderO_ocamo;
	class H_HelmetO_ocamo;
	class H_HelmetSpecO_ocamo;
	class H_PilotHelmetHeli_I;
	class H_CrewHelmetHeli_I;
	class acp_gol_main_H_HelmetEAST_base_F;
	class acp_gol_main_H_HelmetEAST_Cover_base_F;
	class acp_gol_main_H_HelmetEAST_Headset_F;
	class H_MilCap_gry;
	class acp_gol_main_H_MK7_Base_F;
	class H_HelmetIA;
	class H_Cap_marshal;
	class acp_gol_main_H_HelmetSpecter_base_F;
	class acp_gol_main_H_HelmetSpecter_headset_base_F;
	class acp_gol_main_H_HelmetSpecter_cover_base_F;
	class H_HelmetO_ViperSP_hex_F;
	class H_HelmetB_TI_tna_F;
	class acp_gol_main_LBT_G3_base;
	class acp_gol_main_LBT_G3_NB_base;
	class acp_gol_main_Crye_AVS_1_base;
	class acp_gol_main_Crye_AVS_1_1_base;
	class acp_gol_main_Crye_AVS_1_2_base;
	class acp_gol_main_Crye_AVS_1_3_base;
	class acp_gol_main_Crye_AVS_2_base;
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
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class V_Chestrig_oli;
	class acp_gol_main_V_CF_CarrierRig_base_F;
	class acp_gol_main_V_CF_CarrierRig_Lite_base_F;
	class acp_gol_main_V_CF_CarrierRig_MG_base_F;
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
	class acp_gol_main_V_ChestRigEast_base_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_Olive_F;
	class V_Pocketed_black_F;
	class acp_gol_main_V_CarrierRigBW_F;
	class acp_gol_main_V_CarrierRigBW_CQB_F;
	class acp_gol_main_V_CarrierRigBW_GL_F;
	class acp_gol_main_V_CarrierRigBW_Lite_F;
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
	class U_I_OfficerUniform: Uniform_Base
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
	class U_I_G_Story_Protagonist_F: Uniform_Base
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
	class U_I_FullGhillie_lsh: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_GhillieSuit: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_T_Sniper_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_T_Sniper_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_R_Gorka_01_black_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_BG_Guerrilla_6_1: Uniform_Base
	{
		class ItemInfo;
	};
	class U_BG_Guerilla2_3: Uniform_Base
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
	class acp_gol_main_U_Aegis_O_Soldier_03_base: U_O_officer_noInsignia_hex_F
	{
		class ItemInfo;
	};
	class acp_gol_main_U_Aegis_O_Soldier_04_base: U_O_officer_noInsignia_hex_F
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
	class acp_gol_US_DCU_LBT_G3_US_DCU: acp_gol_main_LBT_G3_base
	{
		author="Seb";
		displayName="[US DCU] LBT G3";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\6094G3_PC_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\6094G3_Cumberbund_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\6094G3_KangarooPanel_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_LBTG3_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_LBT_G3_NB_US_DCU: acp_gol_main_LBT_G3_NB_base
	{
		author="Seb";
		displayName="[US DCU] LBT G3 NB";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\6094G3_PC_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\6094G3_Cumberbund_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\6094G3_KangarooPanel_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_LBTG3_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_US_DCU: acp_gol_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 1";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_US_DCU_insignia: acp_gol_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 1 (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_1_US_DCU: acp_gol_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 2";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Kangaroo_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_1_US_DCU_insignia: acp_gol_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 2 (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Kangaroo_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_2_US_DCU: acp_gol_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 3";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Mk4_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_2_US_DCU_insignia: acp_gol_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 3 (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Mk4_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_3_US_DCU: acp_gol_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 4";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouchT_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_1_3_US_DCU_insignia: acp_gol_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Assaulter 4 (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouchT_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Belt556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_GPpouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_pouch556_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_2_US_DCU: acp_gol_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Gunner";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_LMGpouches_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Crye_AVS_2_US_DCU_insignia: acp_gol_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="[US DCU] Crye AVS Gunner (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\AVS_Vest_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_AVSPouch_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BluforMed_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Cumberbands_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_BeltGBRS_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Radio_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_LMGpouches_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_glockMags_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_SFL_Holster_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_Sideplate_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\AVS_S20_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_AVS_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrierSpec_US_DCU: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\carrier_gl_rig_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_carrier_spec_rig_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrierGL_US_DCU: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\carrier_gl_rig_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_carrier_gl_rig_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrierSpec_US_DCU_insignia: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Special Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\carrier_gl_rig_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_carrier_spec_rig_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrierGL_US_DCU_insignia: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier GL Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\carrier_gl_rig_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_carrier_gl_rig_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrier1_US_DCU: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrier2_US_DCU: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_2_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_BandollierB_US_DCU: V_BandollierB_blk
	{
		author="Seb";
		displayName="[US DCU] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_bandollierB_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Rangemaster_belt_US_DCU: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[US DCU] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_Rangemaster_belt_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_PlateCarrier_Kerry_US_DCU: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="[US DCU] Carrier Lite (No belt)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_PlateCarrier1_US_DCU_insignia: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Lite (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrier2_US_DCU_insignia: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[US DCU] Carrier Rig (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_2_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrier_Kerry_US_DCU_insignia: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="[US DCU] Carrier Lite (No belt, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_Chestrig_US_DCU: V_Chestrig_oli
	{
		author="Seb";
		displayName="[US DCU] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip_chestrig_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_ChestrigF_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CF_CarrierRig_US_DCU: acp_gol_main_V_CF_CarrierRig_base_F
	{
		author="Seb";
		displayName="[US DCU] Defender Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_CF_CarrierRig_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CF_CarrierRig_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CF_CarrierRig_lite_US_DCU: acp_gol_main_V_CF_CarrierRig_Lite_base_F
	{
		author="Seb";
		displayName="[US DCU] Defender Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_CF_CarrierRig_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\V_CF_CarrierRig_Pouches_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CF_CarrierRig_lite_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CF_CarrierRig_MG_US_DCU: acp_gol_main_V_CF_CarrierRig_MG_base_F
	{
		author="Seb";
		displayName="[US DCU] Defender Rig MG";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_CF_CarrierRig_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\V_CF_CarrierRig_Pouches_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CF_CarrierRig_MG_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_EOD_US_DCU_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[US DCU] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_EOD_vest_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\V_EOD_Protection_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_EOD_olive_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_PlateCarrierIA1_US_DCU: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[US DCU] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip_ia_vest01_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_PlateCarrierIA1_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_PlateCarrierIA2_US_DCU: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[US DCU] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip_ia_vest01_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_PlateCarrierIA2_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_PlateCarrierIAGL_US_DCU: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[US DCU] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip_ia_vest01_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\GA_Carrier_GL_Rig_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_PlateCarrierIAGL_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_SmershVest_01_US_DCU_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[US DCU] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Smersh_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\Smersh_miscellaneous_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_SmershVest_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_SmershVest_01_radio_US_DCU_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[US DCU] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Smersh_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\Smersh_miscellaneous_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_SmershVest_01_radio_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_HarnessOGL_US_DCU_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[US DCU] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_HarnessOGL_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_HarnessO_US_DCU_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[US DCU] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_HarnessO_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_TacVestIR_US_DCU: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[US DCU] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_TacVestIR_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_V_LegStrapBag_US_DCU_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[US DCU] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_LegStrapBag_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_LegStrapBag_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_ChestRigEast_US_DCU_F: acp_gol_main_V_ChestRigEast_base_F
	{
		author="Seb";
		displayName="[US DCU] Lifchik-M";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_ChestrigEast_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CF_CarrierRig_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigKBT_01_heavy_US_DCU_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[US DCU] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigKBT_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigKBT_01_heavy_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigKBT_01_light_US_DCU_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[US DCU] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigKBT_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigKBT_01_light_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigKBT_01_US_DCU_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[US DCU] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigKBT_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigKBT_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_Pocketed_US_DCU_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[US DCU] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_Pocketed_cloth_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_Pocketed_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigBW_US_DCU: acp_gol_main_V_CarrierRigBW_F
	{
		author="Seb";
		displayName="[US DCU] Odin Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigBW_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigBW_CQB_US_DCU: acp_gol_main_V_CarrierRigBW_CQB_F
	{
		author="Seb";
		displayName="[US DCU] Odin Rig CQB";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_Pouches_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_GL_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigBW_CQB_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigBW_GL_US_DCU: acp_gol_main_V_CarrierRigBW_GL_F
	{
		author="Seb";
		displayName="[US DCU] Odin Rig GL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_Pouches_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_GL_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigBW_GL_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_CarrierRigBW_Lite_US_DCU: acp_gol_main_V_CarrierRigBW_Lite_F
	{
		author="Seb";
		displayName="[US DCU] Odin Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\CarrierRigBW_Pouches_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_CarrierRigBW_Lite_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_TacChestrig_US_DCU_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[US DCU] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_ChestrigF_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_V_TacVest_US_DCU: V_TacVest_blk
	{
		author="Seb";
		displayName="[US DCU] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\taticalvest_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_TacVest_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetHBK_F_US_DCU: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[US DCU] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetHBK_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetHBK_F_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetHBK_headset_F_US_DCU: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[US DCU] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetHBK_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetHBK_headset_F_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetHBK_ear_F_US_DCU: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[US DCU] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetHBK_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetHBK_ear_F_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetHBK_chops_F_US_DCU: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[US DCU] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetHBK_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetHBK_chops_F_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetAggressor_F_US_DCU: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[US DCU] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\h_helmetaggressor_01_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetAggressor_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetAggressor_cover_F_US_DCU: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[US DCU] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\h_helmetaggressor_01_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetAggressor_cover_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Bandanna_US_DCU: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[US DCU] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\h_bandana_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Bandanna_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_PASGT_basic_US_DCU_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[US DCU] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_PASGT_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_PASGT_basic_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Watchcap_US_DCU: H_Watchcap_blk
	{
		author="Seb";
		displayName="[US DCU] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\woolhat_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Cap_beanie_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Booniehat_US_DCU: H_Booniehat_khk
	{
		author="Seb";
		displayName="[US DCU] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\booniehat_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_booniehat_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Booniehat_US_DCU_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[US DCU] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\booniehat_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Booniehat_US_DCU_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Cap_US_DCU: H_Cap_oli
	{
		author="Seb";
		displayName="[US DCU] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\capb_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Cap_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Cap_US_DCU_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[US DCU] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\capb_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Cap_US_DCU_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_US_DCU: H_HelmetB
	{
		author="Seb";
		displayName="[US DCU] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecB_US_DCU: H_HelmetSpecB
	{
		author="Seb";
		displayName="[US DCU] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetSpecB_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_light_US_DCU: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[US DCU] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_light_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_light_basic_US_DCU: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[US DCU] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_camo_US_DCU: H_HelmetB_camo
	{
		author="Seb";
		displayName="[US DCU] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_2_US_DCU_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_camo_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecB_US_DCU_insignia: H_HelmetSpecB
	{
		author="Seb";
		displayName="[US DCU] Enhanced Combat Helmet (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetSpecB_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_light_US_DCU_insignia: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[US DCU] Light Combat Helmet (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\equip1_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_light_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetCrew_US_DCU: H_HelmetCrew_B
	{
		author="Seb";
		displayName="[US DCU] Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\armor1_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetCrew_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetLeaderO_US_DCU: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[US DCU] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetLeaderO_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetO_US_DCU: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[US DCU] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetO_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecO_US_DCU: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[US DCU] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetO_spec_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_PilotHelmetHeli_US_DCU: H_PilotHelmetHeli_I
	{
		author="Seb";
		displayName="[US DCU] Heli Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\helmet_heli_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Pilot_Helmet_Heli_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_CrewHelmetHeli_US_DCU: H_CrewHelmetHeli_I
	{
		author="Seb";
		displayName="[US DCU] Heli Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\helmet_heli_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Crew_Helmet_Heli_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetEAST_US_DCU_F: acp_gol_main_H_HelmetEAST_base_F
	{
		author="Seb";
		displayName="[US DCU] Luchnik Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetEAST_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetEAST_US_DCU_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetEAST_Cover_US_DCU_F: acp_gol_main_H_HelmetEAST_Cover_base_F
	{
		author="Seb";
		displayName="[US DCU] Luchnik Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetEAST_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetEAST_Cover_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_cover_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetEAST_Cover_US_DCU_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetEAST_Headset_US_DCU_F: acp_gol_main_H_HelmetEAST_Headset_F
	{
		author="Seb";
		displayName="[US DCU] Luchnik Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetEAST_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_cover_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetEAST_Headset_US_DCU_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_MilCap_US_DCU: H_MilCap_gry
	{
		author="Seb";
		displayName="[US DCU] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\cappatrol_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_MilCap_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_MK7_US_DCU_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[US DCU] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\mk7_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_US_DCU_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_MK7_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetIA_US_DCU: H_HelmetIA
	{
		author="Seb";
		displayName="[US DCU] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_helmet_canvas_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_I_Helmet_canvas_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_Cap_headphones_US_DCU: H_Cap_marshal
	{
		author="Seb";
		displayName="[US DCU] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\capb_headphones_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_Cap_headphones_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecter_US_DCU_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[US DCU] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetSpecter_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecter_headset_US_DCU_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[US DCU] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_cover_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetSpecter_paint_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetSpecter_cover_US_DCU_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[US DCU] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\H_HelmetSpecter_01_cover_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetSpecter_cover_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetO_ViperSP_US_DCU_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[US DCU] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_vipersp_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetO_ViperSP_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_H_HelmetB_TI_US_DCU_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[US DCU] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\H_HelmetB_TI_US_DCU_F_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_H_HelmetB_TI_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_U_C_CBRN_Suit_01_US_DCU_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[US DCU] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CBRN_Suit_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_C_CBRN_Suit_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_C_CBRN_Suit_01_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_CombatUniform_US_DCU: U_I_CombatUniform
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_CombatUniform_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_CombatUniform_shortsleeve_US_DCU: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_CombatUniform_shortsleeve_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_CombatUniform_US_DCU_insignia: U_I_CombatUniform
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [AAF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_CombatUniform_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_CombatUniform_shortsleeve_US_DCU_insignia: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [AAF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_CombatUniform_shortsleeve_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_US_DCU_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_US_DCU_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_shortsleeve_US_DCU_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_shortsleeve_US_DCU_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F: U_I_OfficerUniform
	{
		author="Seb";
		displayName="[US DCU] Light Combat Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_shortsleeve_US_DCU_01_F_flag: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [LDF] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_shortsleeve_US_DCU_01_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F_flag: U_I_OfficerUniform
	{
		author="Seb";
		displayName="[US DCU] Light Combat Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F_flag";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_tanktop_US_DCU_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_TankTop_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_tanktop_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_tanktop_US_DCU_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_E_Uniform_US_DCU_01_F_insignia: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [LDF] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_E_Uniform_US_DCU_01_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CombatUniform_US_DCU: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CombatUniform_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CombatUniform_vest_US_DCU: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CombatUniform_vest_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_G_Story_Protagonist_US_DCU_F: U_I_G_Story_Protagonist_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO] (Kerry)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ig_guerrilla_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_BG_Guerilla_US_DCU_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_G_Story_Protagonist_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CombatUniform_tshirt_US_DCU: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\nato_tshirt_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_tshirt_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CombatUniform_tshirt_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CombatUniform_US_DCU_insignia: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO] (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CombatUniform_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CombatUniform_vest_US_DCU_insignia: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[US DCU] Combat Fatigues [NATO] (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CombatUniform_vest_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_CombatUniform_US_DCU: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[US DCU] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_CombatUniform_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_CombatUniform_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CTRG_Soldier_US_DCU_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[US DCU] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CTRG_Soldier_3_US_DCU_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[US DCU] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CTRG_Soldier_2_US_DCU_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[US DCU] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\nato_tshirt_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_tshirt_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_2_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CTRG_Soldier_US_DCU_F_insignia: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[US DCU] CTRG Stealth Uniform (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_CTRG_Soldier_3_US_DCU_F_insignia: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[US DCU] CTRG Stealth Uniform (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_FullGhillie_US_DCU: U_I_FullGhillie_lsh
	{
		author="Seb";
		displayName="[US DCU] Full Ghillie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ghillie_coverall_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_threads_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_threads_5lod_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_FullGhillie_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_FullGhillie_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_I_GhillieSuit_US_DCU: U_I_GhillieSuit
	{
		author="Seb";
		displayName="[US DCU] Ghillie Suit [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_GhillieSuit_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"insignia"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_I_GhillieSuit_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_GhillieSuit_US_DCU: U_O_T_Sniper_F
	{
		author="Seb";
		displayName="[US DCU] Ghillie Suit [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_OT_sniper_F_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_GhillieSuit_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_GhillieSuit_US_DCU: U_B_T_Sniper_F
	{
		author="Seb";
		displayName="[US DCU] Ghillie Suit [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_GhillieSuit_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_GhillieSuit_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_R_Gorka_01_US_DCU_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[US DCU] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_O_R_Gorka_01_US_DCU_F.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_Gorka_01_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_R_Gorka_01_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_BG_Guerrilla_6_US_DCU: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[US DCU] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Uniform_01_Sweater_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_sweater_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_BG_Guerrilla_6_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_BG_Guerrilla_6_US_DCU_insignia: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[US DCU] Guerilla Apparel (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Uniform_01_Sweater_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_sweater_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_BG_Guerrilla_6_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_BG_Guerilla_US_DCU_F: U_BG_Guerilla2_3
	{
		author="Seb";
		displayName="[US DCU] Guerilla Outfit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ig_guerrilla_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_BG_Guerilla_US_DCU_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_BG_Guerilla_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_B_HeliPilotCoveralls_US_DCU: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[US DCU] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\coveralls_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_G_HeliPilotCoveralls_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_B_HeliPilotCoveralls_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_officer_noInsignia_US_DCU_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[US DCU] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_officer_noInsignia_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_officer_noInsignia_US_DCU_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_officer_noInsignia_US_DCU_F_insignia: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[US DCU] Light Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_officer_noInsignia_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_officer_noInsignia_US_DCU_F_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_Aegis_O_Soldier_03_US_DCU: acp_gol_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="[US DCU] Luchnik Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_03_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_03_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_Aegis_O_Soldier_04_US_DCU: acp_gol_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="[US DCU] Luchnik Fatigues (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_04_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_04_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_Aegis_O_Soldier_03_US_DCU_insignia: acp_gol_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="[US DCU] Luchnik Fatigues (Flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_03_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_03_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_Aegis_O_Soldier_04_US_DCU_insignia: acp_gol_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="[US DCU] Luchnik Fatigues (Rolled-up, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_04_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_04_US_DCU_insignia";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_PilotCoveralls_US_DCU: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[US DCU] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\pilot_suit_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_PilotCoveralls_US_DCU";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_US_DCU_U_O_officer_US_DCU_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[US DCU] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ViperOp_Suit_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_V_Soldier_Viper_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_US_DCU_Soldier_U_O_officer_US_DCU_hex_F";
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
	class I_Officer_F;
	class I_E_Uniform_01_tanktop_F;
	class B_Soldier_F;
	class B_Soldier_SL_F;
	class I_G_Story_Protagonist_F;
	class B_T_Soldier_AR_F;
	class O_Soldier_F;
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_3_F;
	class B_CTRG_Soldier_2_F;
	class I_ghillie_lsh_F;
	class I_sniper_F;
	class O_T_Sniper_F;
	class B_T_Sniper_F;
	class O_R_Gorka_black_F;
	class B_G_Soldier_LAT_F;
	class B_G_medic_F;
	class B_Helipilot_F;
	class acp_gol_main_O_A_officer_F;
	class acp_gol_main_Aegis_O_Soldier_03_base;
	class acp_gol_main_Aegis_O_Soldier_04_base;
	class O_Pilot_F;
	class O_V_Soldier_TL_hex_F;
	class acp_gol_US_DCU_Soldier_U_C_CBRN_Suit_01_US_DCU_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [US DCU] CBRN Suit";
		uniformClass="acp_gol_US_DCU_U_C_CBRN_Suit_01_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\CBRN_Suit_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_C_CBRN_Suit_01_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_CombatUniform_US_DCU: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [AAF]";
		uniformClass="acp_gol_US_DCU_U_I_CombatUniform_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_CombatUniform_shortsleeve_US_DCU: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_US_DCU_U_I_CombatUniform_shortsleeve_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_CombatUniform_US_DCU_insignia: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [AAF] (Flag)";
		uniformClass="acp_gol_US_DCU_U_I_CombatUniform_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_CombatUniform_shortsleeve_US_DCU_insignia: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [AAF] (Rolled-up, flag)";
		uniformClass="acp_gol_US_DCU_U_I_CombatUniform_shortsleeve_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_US_DCU_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [LDF]";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_US_DCU_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_shortsleeve_US_DCU_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_shortsleeve_US_DCU_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F: I_Officer_F
	{
		author="Seb";
		displayName="Unit [US DCU] Light Combat Fatigues";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\acp_gol\addons\main\uniforms\data\officer_noinsignia.rvmat",
			"a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_shortsleeve_US_DCU_01_F_flag: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [LDF] (Rolled-up, flag)";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_shortsleeve_US_DCU_01_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F_flag: I_Officer_F
	{
		author="Seb";
		displayName="Unit [US DCU] Light Combat Fatigues (Flag)";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_OfficerUniformNoInsignia_US_DCU_F_flag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\acp_gol\addons\main\uniforms\data\officer_noinsignia.rvmat",
			"a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_tanktop_US_DCU_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_tanktop_US_DCU_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_TankTop_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_tanktop_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_E_Uniform_US_DCU_01_F_insignia: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [LDF] (Flag)";
		uniformClass="acp_gol_US_DCU_U_I_E_Uniform_US_DCU_01_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\I_E_Soldier_01_gloves_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CombatUniform_US_DCU: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO]";
		uniformClass="acp_gol_US_DCU_U_B_CombatUniform_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CombatUniform_vest_US_DCU: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO] (Rolled-up)";
		uniformClass="acp_gol_US_DCU_U_B_CombatUniform_vest_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_G_Story_Protagonist_US_DCU_F: I_G_Story_Protagonist_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO] (Kerry)";
		uniformClass="acp_gol_US_DCU_U_I_G_Story_Protagonist_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ig_guerrilla_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_BG_Guerilla_US_DCU_F.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	};
	class acp_gol_US_DCU_Soldier_U_B_CombatUniform_tshirt_US_DCU: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO] (Tee)";
		uniformClass="acp_gol_US_DCU_U_B_CombatUniform_tshirt_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\nato_tshirt_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_tshirt_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CombatUniform_US_DCU_insignia: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO] (Flag)";
		uniformClass="acp_gol_US_DCU_U_B_CombatUniform_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CombatUniform_vest_US_DCU_insignia: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [US DCU] Combat Fatigues [NATO] (Rolled-up, flag)";
		uniformClass="acp_gol_US_DCU_U_B_CombatUniform_vest_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_CombatUniform_US_DCU: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] Fatigues [CSAT]";
		uniformClass="acp_gol_US_DCU_U_O_CombatUniform_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_CombatUniform_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] CTRG Stealth Uniform";
		uniformClass="acp_gol_US_DCU_U_B_CTRG_Soldier_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [US DCU] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_US_DCU_U_B_CTRG_Soldier_3_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_2_US_DCU_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [US DCU] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_US_DCU_U_B_CTRG_Soldier_2_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\nato_tshirt_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_tshirt_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F_insignia: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [US DCU] CTRG Stealth Uniform (Flag)";
		uniformClass="acp_gol_US_DCU_U_B_CTRG_Soldier_US_DCU_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F_insignia: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [US DCU] CTRG Stealth Uniform (Rolled-up, flag)";
		uniformClass="acp_gol_US_DCU_U_B_CTRG_Soldier_3_US_DCU_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_B_CTRG_Soldier_US_DCU_F_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_FullGhillie_US_DCU: I_ghillie_lsh_F
	{
		author="Seb";
		displayName="Unit [US DCU] Full Ghillie";
		uniformClass="acp_gol_US_DCU_U_I_FullGhillie_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ghillie_coverall_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_threads_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_threads_5lod_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_FullGhillie_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_I_GhillieSuit_US_DCU: I_sniper_F
	{
		author="Seb";
		displayName="Unit [US DCU] Ghillie Suit [AAF]";
		uniformClass="acp_gol_US_DCU_U_I_GhillieSuit_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_I_Soldier_01_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_I_GhillieSuit_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"insignia"
		};
	};
	class acp_gol_US_DCU_Soldier_U_O_GhillieSuit_US_DCU: O_T_Sniper_F
	{
		author="Seb";
		displayName="Unit [US DCU] Ghillie Suit [CSAT]";
		uniformClass="acp_gol_US_DCU_U_O_GhillieSuit_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\tech_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_OT_sniper_F_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_GhillieSuit_US_DCU: B_T_Sniper_F
	{
		author="Seb";
		displayName="Unit [US DCU] Ghillie Suit [NATO]";
		uniformClass="acp_gol_US_DCU_U_B_GhillieSuit_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing1_US_DCU.paa",
			"\z\acp_gol\addons\US_DCU\data\ghillie_US_DCU.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_GhillieSuit_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_R_Gorka_01_US_DCU_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [US DCU] Granit";
		uniformClass="acp_gol_US_DCU_U_O_R_Gorka_01_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\U_O_R_Gorka_01_US_DCU_F.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_Gorka_01_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_BG_Guerrilla_6_US_DCU: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [US DCU] Guerilla Apparel";
		uniformClass="acp_gol_US_DCU_U_BG_Guerrilla_6_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Uniform_01_Sweater_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_sweater_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_BG_Guerrilla_6_US_DCU_insignia: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [US DCU] Guerilla Apparel (Flag)";
		uniformClass="acp_gol_US_DCU_U_BG_Guerrilla_6_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\I_E_Uniform_01_Sweater_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_I_E_Uniform_01_sweater_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_BG_Guerilla_US_DCU_F: B_G_medic_F
	{
		author="Seb";
		displayName="Unit [US DCU] Guerilla Outfit";
		uniformClass="acp_gol_US_DCU_U_BG_Guerilla_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ig_guerrilla_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_BG_Guerilla_US_DCU_F.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_B_HeliPilotCoveralls_US_DCU: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [US DCU] Heli Pilot Coveralls";
		uniformClass="acp_gol_US_DCU_U_B_HeliPilotCoveralls_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\coveralls_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_B_G_HeliPilotCoveralls_US_DCU_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_officer_noInsignia_US_DCU_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [US DCU] Light Fatigues";
		uniformClass="acp_gol_US_DCU_U_O_officer_noInsignia_US_DCU_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_officer_noInsignia_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_officer_noInsignia_US_DCU_F_insignia: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [US DCU] Light Fatigues (Flag)";
		uniformClass="acp_gol_US_DCU_U_O_officer_noInsignia_US_DCU_F_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Officer_noInsignia_US_DCU_CO_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_R_officer_noInsignia_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_03_US_DCU: acp_gol_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [US DCU] Luchnik Fatigues";
		uniformClass="acp_gol_US_DCU_U_Aegis_O_Soldier_03_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_03_US_DCU.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_04_US_DCU: acp_gol_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [US DCU] Luchnik Fatigues (Rolled-up)";
		uniformClass="acp_gol_US_DCU_U_Aegis_O_Soldier_04_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_04_US_DCU.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_03_US_DCU_insignia: acp_gol_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [US DCU] Luchnik Fatigues (Flag)";
		uniformClass="acp_gol_US_DCU_U_Aegis_O_Soldier_03_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_03_US_DCU.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_Aegis_O_Soldier_04_US_DCU_insignia: acp_gol_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [US DCU] Luchnik Fatigues (Rolled-up, flag)";
		uniformClass="acp_gol_US_DCU_U_Aegis_O_Soldier_04_US_DCU_insignia";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\clothing2_US_DCU_CO_flag.paa",
			"\z\acp_gol\addons\US_DCU\data\TacGloves_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\clothing_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_Aegis_O_Soldier_04_US_DCU.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_PilotCoveralls_US_DCU: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [US DCU] Pilot Coveralls";
		uniformClass="acp_gol_US_DCU_U_O_PilotCoveralls_US_DCU";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\pilot_suit_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_Soldier_U_O_officer_US_DCU_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [US DCU] Special Purpose Suit";
		uniformClass="acp_gol_US_DCU_U_O_officer_US_DCU_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\ViperOp_Suit_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_U_O_V_Soldier_Viper_US_DCU_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_US_DCU_B_AssaultPack_US_DCU: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[US DCU] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_compact_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_AssaultPack_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_AssaultPackEnhanced_US_DCU: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[US DCU] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_compact_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_AssaultPack_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_US_DCU_B_AssaultPackEnhanced_US_DCU_insignia: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[US DCU] Assault Pack (Enhanced, flag)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_compact_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\vests_US_DCU_co_flag.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_AssaultPack_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_US_DCU_B_Bergen_US_DCU_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[US DCU] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\Bergen_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\Icon_B_Bergen_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_Carryall_US_DCU: B_Carryall_cbr
	{
		author="Seb";
		displayName="[US DCU] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_tortila_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_C_Tortila_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_FieldPack_US_DCU: B_FieldPack_oli
	{
		author="Seb";
		displayName="[US DCU] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_gorod_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_C_Gorod_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_Kitbag_rgr_US_DCU: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[US DCU] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_fast_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_C_Kitbag_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_LegStrapBag_US_DCU_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[US DCU] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\V_LegStrapBag_US_DCU_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_V_LegStrapBag_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_RadioBag_01_US_DCU_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[US DCU] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_C_UAV_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_TacticalPack_US_DCU: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[US DCU] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_small_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_C_Small_US_DCU.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_ViperHarness_US_DCU_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[US DCU] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_viperop_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_ViperHarness_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_B_ViperLightHarness_US_DCU_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[US DCU] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\backpack_viperop_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_B_ViperLightHarness_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
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
	class acp_gol_US_DCU_G_Balaclava_US_DCU: G_Balaclava_blk
	{
		author="Seb";
		displayName="[US DCU] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_balaclava_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Balaclava_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Balaclava_combat_US_DCU: G_Balaclava_combat
	{
		author="Seb";
		displayName="[US DCU] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_balaclava_US_DCU_co.paa",
			"\z\acp_gol\addons\US_DCU\data\g_combat_US_DCU_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Balaclava_combat_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Balaclava_lowprofile_US_DCU: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[US DCU] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_balaclava_US_DCU_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Balaclava_lowprofile_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Bandanna_aviator_US_DCU: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[US DCU] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_bandMask_US_DCU_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Bandana_aviator_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Bandanna_sport_US_DCU: G_Bandanna_sport
	{
		author="Seb";
		displayName="[US DCU] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_bandMask_US_DCU_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Bandana_shades_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Bandanna_shades_US_DCU: G_Bandanna_shades
	{
		author="Seb";
		displayName="[US DCU] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_bandMask_US_DCU_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Bandana_sport_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Bandanna_US_DCU: G_Bandanna_blk
	{
		author="Seb";
		displayName="[US DCU] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\headgear_bandMask_US_DCU_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Bandana_clean_US_DCU_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_US_DCU_G_Combat_US_DCU: G_Combat
	{
		author="Seb";
		displayName="[US DCU] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\g_combat_US_DCU_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_g_combat_US_DCU_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_US_DCU_G_Balaclava_TI_G_US_DCU_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[US DCU] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\G_Balaclava_TI_US_DCU_F_co.paa",
			"\z\acp_gol\addons\US_DCU\data\g_combat_US_DCU_ca.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Balaclava_TI_G_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_US_DCU_G_Balaclava_TI_US_DCU_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[US DCU] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\US_DCU\data\G_Balaclava_TI_US_DCU_F_co.paa"
		};
		picture="\z\acp_gol\addons\US_DCU\data\UI\icon_G_Balaclava_TI_US_DCU_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
