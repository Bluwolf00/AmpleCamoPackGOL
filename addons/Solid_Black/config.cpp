class CfgPatches
{
	class acp_gol_Solid_Black
	{
		name="Solid_Black";
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
	class acp_gol_Solid_Black
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\Solid_Black\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class acp_gol_Solid_Black
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\Solid_Black\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class acp_gol_Solid_Black
	{
		init="call compile preprocessFileLineNumbers '\z\acp_gol\addons\Solid_Black\XEH_postInit.sqf'";
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
	class acp_gol_Solid_Black_LBT_G3_Solid_Black: acp_gol_main_LBT_G3_base
	{
		author="Seb";
		displayName="[Solid Black] LBT G3";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\6094G3_PC_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\6094G3_Cumberbund_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\6094G3_KangarooPanel_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_LBTG3_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_LBT_G3_NB_Solid_Black: acp_gol_main_LBT_G3_NB_base
	{
		author="Seb";
		displayName="[Solid Black] LBT G3 NB";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\6094G3_PC_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\6094G3_Cumberbund_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\6094G3_KangarooPanel_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_LBTG3_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Crye_AVS_1_Solid_Black: acp_gol_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="[Solid Black] Crye AVS Assaulter 1";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\AVS_Vest_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_AVSPouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Cumberbands_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_GPpouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Radio_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_pouch556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Sideplate_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_S20_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_AVS_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Crye_AVS_1_1_Solid_Black: acp_gol_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="[Solid Black] Crye AVS Assaulter 2";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\AVS_Vest_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Cumberbands_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_GPpouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Radio_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Kangaroo_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_pouch556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Sideplate_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_S20_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_AVS_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Crye_AVS_1_2_Solid_Black: acp_gol_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="[Solid Black] Crye AVS Assaulter 3";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\AVS_Vest_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Mk4_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Cumberbands_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_GPpouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Radio_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_pouch556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Sideplate_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_S20_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_AVS_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Crye_AVS_1_3_Solid_Black: acp_gol_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="[Solid Black] Crye AVS Assaulter 4";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\AVS_Vest_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_AVSPouchT_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Belt556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Cumberbands_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_GPpouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Radio_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_pouch556_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Sideplate_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_S20_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_AVS_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Crye_AVS_2_Solid_Black: acp_gol_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="[Solid Black] Crye AVS Gunner";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\AVS_Vest_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_AVSPouch_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BluforMed_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Cumberbands_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_BeltGBRS_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Radio_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_LMGpouches_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_glockMags_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_SFL_Holster_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_Sideplate_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\AVS_S20_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_AVS_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_PlateCarrierSpec_Solid_Black: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="[Solid Black] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\carrier_gl_rig_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_carrier_spec_rig_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_PlateCarrierGL_Solid_Black: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="[Solid Black] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\carrier_gl_rig_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_carrier_gl_rig_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_PlateCarrier1_Solid_Black: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="[Solid Black] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_plate_carrier_1_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_PlateCarrier2_Solid_Black: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="[Solid Black] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_plate_carrier_2_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_BandollierB_Solid_Black: V_BandollierB_blk
	{
		author="Seb";
		displayName="[Solid Black] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_bandollierB_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Rangemaster_belt_Solid_Black: V_Rangemaster_belt
	{
		author="Seb";
		displayName="[Solid Black] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_Rangemaster_belt_Solid_Black_ca.paa";
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
	class acp_gol_Solid_Black_V_PlateCarrier_Kerry_Solid_Black: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="[Solid Black] Carrier Lite (No belt)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_plate_carrier_1_Solid_Black_CA.paa";
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
	class acp_gol_Solid_Black_V_Chestrig_Solid_Black: V_Chestrig_oli
	{
		author="Seb";
		displayName="[Solid Black] Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip_chestrig_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_ChestrigF_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CF_CarrierRig_Solid_Black: acp_gol_main_V_CF_CarrierRig_base_F
	{
		author="Seb";
		displayName="[Solid Black] Defender Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_CF_CarrierRig_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CF_CarrierRig_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CF_CarrierRig_lite_Solid_Black: acp_gol_main_V_CF_CarrierRig_Lite_base_F
	{
		author="Seb";
		displayName="[Solid Black] Defender Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_CF_CarrierRig_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\V_CF_CarrierRig_Pouches_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CF_CarrierRig_lite_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CF_CarrierRig_MG_Solid_Black: acp_gol_main_V_CF_CarrierRig_MG_base_F
	{
		author="Seb";
		displayName="[Solid Black] Defender Rig MG";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_CF_CarrierRig_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\V_CF_CarrierRig_Pouches_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CF_CarrierRig_MG_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_EOD_Solid_Black_F: V_EOD_Olive_F
	{
		author="Seb";
		displayName="[Solid Black] EOD Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_EOD_vest_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\V_EOD_Protection_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_EOD_olive_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_PlateCarrierIA1_Solid_Black: V_PlateCarrierIA1_dgtl
	{
		author="Seb";
		displayName="[Solid Black] GA Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip_ia_vest01_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_PlateCarrierIA1_Solid_Black_ca.paa";
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
	class acp_gol_Solid_Black_V_PlateCarrierIA2_Solid_Black: V_PlateCarrierIA2_dgtl
	{
		author="Seb";
		displayName="[Solid Black] GA Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip_ia_vest01_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_PlateCarrierIA2_Solid_Black_ca.paa";
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
	class acp_gol_Solid_Black_V_PlateCarrierIAGL_Solid_Black: V_PlateCarrierIAGL_oli
	{
		author="Seb";
		displayName="[Solid Black] GA Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip_ia_vest01_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\GA_Carrier_GL_Rig_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_PlateCarrierIAGL_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_SmershVest_01_Solid_Black_F: V_SmershVest_01_F
	{
		author="Seb";
		displayName="[Solid Black] Kipchak Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Smersh_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\Smersh_miscellaneous_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_SmershVest_01_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_SmershVest_01_radio_Solid_Black_F: V_SmershVest_01_radio_F
	{
		author="Seb";
		displayName="[Solid Black] Kipchak Vest (Tactical Radio)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Smersh_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\Smersh_miscellaneous_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_SmershVest_01_radio_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_HarnessOGL_Solid_Black_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="[Solid Black] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_HarnessOGL_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_HarnessO_Solid_Black_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="[Solid Black] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_HarnessO_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_TacVestIR_Solid_Black: V_TacVestIR_blk
	{
		author="Seb";
		displayName="[Solid Black] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_TacVestIR_Solid_Black_CA.paa";
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
	class acp_gol_Solid_Black_V_LegStrapBag_Solid_Black_F: V_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[Solid Black] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_LegStrapBag_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_LegStrapBag_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_ChestRigEast_Solid_Black_F: acp_gol_main_V_ChestRigEast_base_F
	{
		author="Seb";
		displayName="[Solid Black] Lifchik-M";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_ChestrigEast_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CF_CarrierRig_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigKBT_01_heavy_Solid_Black_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="[Solid Black] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigKBT_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigKBT_01_light_Solid_Black_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="[Solid Black] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigKBT_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigKBT_01_light_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigKBT_01_Solid_Black_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="[Solid Black] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigKBT_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigKBT_01_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_Pocketed_Solid_Black_F: V_Pocketed_black_F
	{
		author="Seb";
		displayName="[Solid Black] Multi-Pocketed Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_Pocketed_cloth_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_Pocketed_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigBW_Solid_Black: acp_gol_main_V_CarrierRigBW_F
	{
		author="Seb";
		displayName="[Solid Black] Odin Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigBW_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigBW_CQB_Solid_Black: acp_gol_main_V_CarrierRigBW_CQB_F
	{
		author="Seb";
		displayName="[Solid Black] Odin Rig CQB";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Pouches_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_GL_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigBW_CQB_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigBW_GL_Solid_Black: acp_gol_main_V_CarrierRigBW_GL_F
	{
		author="Seb";
		displayName="[Solid Black] Odin Rig GL";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Pouches_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_GL_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigBW_GL_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_CarrierRigBW_Lite_Solid_Black: acp_gol_main_V_CarrierRigBW_Lite_F
	{
		author="Seb";
		displayName="[Solid Black] Odin Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\CarrierRigBW_Pouches_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_CarrierRigBW_Lite_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_TacChestrig_Solid_Black_F: V_TacChestrig_grn_F
	{
		author="Seb";
		displayName="[Solid Black] Tactical Chest Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip_TacChestrig_oli.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_ChestrigF_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_V_TacVest_Solid_Black: V_TacVest_blk
	{
		author="Seb";
		displayName="[Solid Black] Tactical Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\taticalvest_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_TacVest_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetHBK_F_Solid_Black: H_HelmetHBK_F
	{
		author="Seb";
		displayName="[Solid Black] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetHBK_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetHBK_F_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetHBK_headset_F_Solid_Black: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="[Solid Black] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetHBK_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetHBK_headset_F_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetHBK_ear_F_Solid_Black: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="[Solid Black] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetHBK_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetHBK_ear_F_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetHBK_chops_F_Solid_Black: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="[Solid Black] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetHBK_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetHBK_chops_F_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetAggressor_F_Solid_Black: H_HelmetAggressor_F
	{
		author="Seb";
		displayName="[Solid Black] Avenger Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\h_helmetaggressor_01_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetAggressor_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetAggressor_cover_F_Solid_Black: H_HelmetAggressor_cover_F
	{
		author="Seb";
		displayName="[Solid Black] Avenger Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\h_helmetaggressor_01_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetAggressor_cover_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Bandanna_Solid_Black: H_Bandanna_surfer
	{
		author="Seb";
		displayName="[Solid Black] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\h_bandana_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Bandanna_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_PASGT_basic_Solid_Black_F: H_PASGT_basic_olive_F
	{
		author="Seb";
		displayName="[Solid Black] Basic Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_PASGT_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_PASGT_basic_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Watchcap_Solid_Black: H_Watchcap_blk
	{
		author="Seb";
		displayName="[Solid Black] Beanie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\woolhat_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Cap_beanie_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Booniehat_Solid_Black: H_Booniehat_khk
	{
		author="Seb";
		displayName="[Solid Black] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\booniehat_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_booniehat_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Booniehat_Solid_Black_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="[Solid Black] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\booniehat_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Booniehat_Solid_Black_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Cap_Solid_Black: H_Cap_oli
	{
		author="Seb";
		displayName="[Solid Black] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\capb_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Cap_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Cap_Solid_Black_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="[Solid Black] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\capb_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Cap_Solid_Black_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetB_Solid_Black: H_HelmetB
	{
		author="Seb";
		displayName="[Solid Black] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip1_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetB_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetSpecB_Solid_Black: H_HelmetSpecB
	{
		author="Seb";
		displayName="[Solid Black] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip1_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetSpecB_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetB_light_Solid_Black: acp_gol_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="[Solid Black] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip1_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetB_light_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetB_light_basic_Solid_Black: acp_gol_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="[Solid Black] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip1_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetB_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetB_camo_Solid_Black: H_HelmetB_camo
	{
		author="Seb";
		displayName="[Solid Black] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\equip1_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_2_Solid_Black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetB_camo_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetCrew_Solid_Black: H_HelmetCrew_B
	{
		author="Seb";
		displayName="[Solid Black] Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\armor1_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetCrew_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetLeaderO_Solid_Black: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="[Solid Black] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetLeaderO_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetO_Solid_Black: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="[Solid Black] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetO_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetSpecO_Solid_Black: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="[Solid Black] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetO_spec_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_PilotHelmetHeli_Solid_Black: H_PilotHelmetHeli_I
	{
		author="Seb";
		displayName="[Solid Black] Heli Pilot Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\helmet_heli_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Pilot_Helmet_Heli_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_CrewHelmetHeli_Solid_Black: H_CrewHelmetHeli_I
	{
		author="Seb";
		displayName="[Solid Black] Heli Crew Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\helmet_heli_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Crew_Helmet_Heli_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetEAST_Solid_Black_F: acp_gol_main_H_HelmetEAST_base_F
	{
		author="Seb";
		displayName="[Solid Black] Luchnik Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetEAST_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetEAST_Solid_Black_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetEAST_Cover_Solid_Black_F: acp_gol_main_H_HelmetEAST_Cover_base_F
	{
		author="Seb";
		displayName="[Solid Black] Luchnik Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetEAST_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetEAST_Cover_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_cover_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetEAST_Cover_Solid_Black_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetEAST_Headset_Solid_Black_F: acp_gol_main_H_HelmetEAST_Headset_F
	{
		author="Seb";
		displayName="[Solid Black] Luchnik Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetEAST_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_cover_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetEAST_Headset_Solid_Black_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_MilCap_Solid_Black: H_MilCap_gry
	{
		author="Seb";
		displayName="[Solid Black] Military Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\cappatrol_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_MilCap_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_MK7_Solid_Black_F: acp_gol_main_H_MK7_Base_F
	{
		author="Seb";
		displayName="[Solid Black] Mk7 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\mk7_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_Solid_Black_co",
			"\z\acp_gol\addons\main\headgear\data\equip_d_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_MK7_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetIA_Solid_Black: H_HelmetIA
	{
		author="Seb";
		displayName="[Solid Black] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_helmet_canvas_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_I_Helmet_canvas_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_Cap_headphones_Solid_Black: H_Cap_marshal
	{
		author="Seb";
		displayName="[Solid Black] Rangemaster Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\capb_headphones_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_Cap_headphones_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetSpecter_Solid_Black_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="[Solid Black] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetSpecter_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetSpecter_headset_Solid_Black_F: acp_gol_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="[Solid Black] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_cover_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetSpecter_paint_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetSpecter_cover_Solid_Black_F: acp_gol_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="[Solid Black] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetSpecter_01_cover_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetSpecter_cover_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetO_ViperSP_Solid_Black_F: H_HelmetO_ViperSP_hex_F
	{
		author="Seb";
		displayName="[Solid Black] Special Purpose Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_vipersp_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetO_ViperSP_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_H_HelmetB_TI_Solid_Black_F: H_HelmetB_TI_tna_F
	{
		author="Seb";
		displayName="[Solid Black] Stealth Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\H_HelmetB_TI_Solid_Black_F_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_H_HelmetB_TI_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_U_C_CBRN_Suit_01_Solid_Black_F: U_C_CBRN_Suit_01_White_F
	{
		author="Seb";
		displayName="[Solid Black] CBRN Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CBRN_Suit_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_C_CBRN_Suit_01_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_C_CBRN_Suit_01_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_CombatUniform_Solid_Black: U_I_CombatUniform
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_CombatUniform_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_CombatUniform_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_CombatUniform_shortsleeve_Solid_Black: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_CombatUniform_shortsleeve_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_E_Uniform_Solid_Black_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_gloves_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_E_Uniform_Solid_Black_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_E_Uniform_shortsleeve_Solid_Black_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_E_Uniform_shortsleeve_Solid_Black_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Black_F: U_I_OfficerUniform
	{
		author="Seb";
		displayName="[Solid Black] Light Combat Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_E_Uniform_tanktop_Solid_Black_01_F: U_I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [LDF] (Tank Top)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_TankTop_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_gloves_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_tanktop_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_E_Uniform_tanktop_Solid_Black_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CombatUniform_Solid_Black: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_uniform_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CombatUniform_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CombatUniform_vest_Solid_Black: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [NATO] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_vest_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CombatUniform_vest_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_G_Story_Protagonist_Solid_Black_F: U_I_G_Story_Protagonist_F
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [NATO] (Kerry)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ig_guerrilla_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_BG_Guerilla_Solid_Black_F.paa";
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
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_G_Story_Protagonist_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CombatUniform_tshirt_Solid_Black: U_B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="[Solid Black] Combat Fatigues [NATO] (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\nato_tshirt_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_tshirt_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CombatUniform_tshirt_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_CombatUniform_Solid_Black: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="[Solid Black] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_CombatUniform_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_CombatUniform_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CTRG_Soldier_Solid_Black_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="[Solid Black] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_uniform_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CTRG_Soldier_3_Solid_Black_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="[Solid Black] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_vest_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_3_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_CTRG_Soldier_2_Solid_Black_F: U_B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="[Solid Black] CTRG Stealth Uniform (Tee)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\nato_tshirt_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_tshirt_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_2_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_FullGhillie_Solid_Black: U_I_FullGhillie_lsh
	{
		author="Seb";
		displayName="[Solid Black] Full Ghillie";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ghillie_coverall_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_threads_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_threads_5lod_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_FullGhillie_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_FullGhillie_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_I_GhillieSuit_Solid_Black: U_I_GhillieSuit
	{
		author="Seb";
		displayName="[Solid Black] Ghillie Suit [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_GhillieSuit_Solid_Black_ca.paa";
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
			uniformClass="acp_gol_Solid_Black_Soldier_U_I_GhillieSuit_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_GhillieSuit_Solid_Black: U_O_T_Sniper_F
	{
		author="Seb";
		displayName="[Solid Black] Ghillie Suit [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_OT_sniper_F_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_GhillieSuit_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_GhillieSuit_Solid_Black: U_B_T_Sniper_F
	{
		author="Seb";
		displayName="[Solid Black] Ghillie Suit [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_GhillieSuit_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_GhillieSuit_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_R_Gorka_01_Solid_Black_F: U_O_R_Gorka_01_black_F
	{
		author="Seb";
		displayName="[Solid Black] Granit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_O_R_Gorka_01_Solid_Black_F.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_Gorka_01_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_R_Gorka_01_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_BG_Guerrilla_6_Solid_Black: U_BG_Guerrilla_6_1
	{
		author="Seb";
		displayName="[Solid Black] Guerilla Apparel";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_E_Uniform_01_Sweater_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_sweater_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_BG_Guerrilla_6_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_BG_Guerilla_Solid_Black_F: U_BG_Guerilla2_3
	{
		author="Seb";
		displayName="[Solid Black] Guerilla Outfit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ig_guerrilla_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_BG_Guerilla_Solid_Black_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_BG_Guerilla_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_B_HeliPilotCoveralls_Solid_Black: U_B_HeliPilotCoveralls
	{
		author="Seb";
		displayName="[Solid Black] Heli Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\coveralls_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_G_HeliPilotCoveralls_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_B_HeliPilotCoveralls_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_officer_noInsignia_Solid_Black_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="[Solid Black] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_officer_noInsignia_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_officer_noInsignia_Solid_Black_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_Aegis_O_Soldier_03_Solid_Black: acp_gol_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="[Solid Black] Luchnik Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing2_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\TacGloves_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_Aegis_O_Soldier_03_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_Aegis_O_Soldier_03_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_Aegis_O_Soldier_04_Solid_Black: acp_gol_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="[Solid Black] Luchnik Fatigues (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing2_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\TacGloves_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_Aegis_O_Soldier_04_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_Aegis_O_Soldier_04_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_PilotCoveralls_Solid_Black: U_O_PilotCoveralls
	{
		author="Seb";
		displayName="[Solid Black] Pilot Coveralls";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\pilot_suit_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_PilotCoveralls_Solid_Black";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class acp_gol_Solid_Black_U_O_officer_Solid_Black_hex_F: U_O_V_Soldier_Viper_hex_F
	{
		author="Seb";
		displayName="[Solid Black] Special Purpose Suit";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ViperOp_Suit_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_V_Soldier_Viper_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="acp_gol_Solid_Black_Soldier_U_O_officer_Solid_Black_hex_F";
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
	class acp_gol_Solid_Black_Soldier_U_C_CBRN_Suit_01_Solid_Black_F: C_CBRN_Man_Oversuit_01_White_F
	{
		author="Seb";
		displayName="Unit [Solid Black] CBRN Suit";
		uniformClass="acp_gol_Solid_Black_U_C_CBRN_Suit_01_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\CBRN_Suit_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_C_CBRN_Suit_01_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_CombatUniform_Solid_Black: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [AAF]";
		uniformClass="acp_gol_Solid_Black_U_I_CombatUniform_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_CombatUniform_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_CombatUniform_shortsleeve_Solid_Black: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="acp_gol_Solid_Black_U_I_CombatUniform_shortsleeve_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_E_Uniform_Solid_Black_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [LDF]";
		uniformClass="acp_gol_Solid_Black_U_I_E_Uniform_Solid_Black_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_gloves_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_E_Uniform_shortsleeve_Solid_Black_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="acp_gol_Solid_Black_U_I_E_Uniform_shortsleeve_Solid_Black_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Black_F: I_Officer_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Light Combat Fatigues";
		uniformClass="acp_gol_Solid_Black_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Black_F_ca.paa";
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
	class acp_gol_Solid_Black_Soldier_U_I_E_Uniform_tanktop_Solid_Black_01_F: I_E_Uniform_01_tanktop_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [LDF] (Tank Top)";
		uniformClass="acp_gol_Solid_Black_U_I_E_Uniform_tanktop_Solid_Black_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_TankTop_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\I_E_Soldier_01_gloves_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_tanktop_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_CombatUniform_Solid_Black: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [NATO]";
		uniformClass="acp_gol_Solid_Black_U_B_CombatUniform_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_uniform_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_CombatUniform_vest_Solid_Black: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [NATO] (Rolled-up)";
		uniformClass="acp_gol_Solid_Black_U_B_CombatUniform_vest_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_vest_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_G_Story_Protagonist_Solid_Black_F: I_G_Story_Protagonist_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [NATO] (Kerry)";
		uniformClass="acp_gol_Solid_Black_U_I_G_Story_Protagonist_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ig_guerrilla_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_BG_Guerilla_Solid_Black_F.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
	};
	class acp_gol_Solid_Black_Soldier_U_B_CombatUniform_tshirt_Solid_Black: B_T_Soldier_AR_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Combat Fatigues [NATO] (Tee)";
		uniformClass="acp_gol_Solid_Black_U_B_CombatUniform_tshirt_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\nato_tshirt_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_tshirt_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_O_CombatUniform_Solid_Black: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Fatigues [CSAT]";
		uniformClass="acp_gol_Solid_Black_U_O_CombatUniform_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_CombatUniform_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_Solid_Black_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Black] CTRG Stealth Uniform";
		uniformClass="acp_gol_Solid_Black_U_B_CTRG_Soldier_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_uniform_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_3_Solid_Black_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [Solid Black] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="acp_gol_Solid_Black_U_B_CTRG_Soldier_3_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_vest_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_CTRG_Soldier_2_Solid_Black_F: B_CTRG_Soldier_2_F
	{
		author="Seb";
		displayName="Unit [Solid Black] CTRG Stealth Uniform (Tee)";
		uniformClass="acp_gol_Solid_Black_U_B_CTRG_Soldier_2_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\nato_tshirt_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_U_B_CTRG_tshirt_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_FullGhillie_Solid_Black: I_ghillie_lsh_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Full Ghillie";
		uniformClass="acp_gol_Solid_Black_U_I_FullGhillie_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ghillie_coverall_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_threads_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_threads_5lod_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_FullGhillie_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_I_GhillieSuit_Solid_Black: I_sniper_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Ghillie Suit [AAF]";
		uniformClass="acp_gol_Solid_Black_U_I_GhillieSuit_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_I_Soldier_01_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_I_GhillieSuit_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo",
			"camo3",
			"insignia"
		};
	};
	class acp_gol_Solid_Black_Soldier_U_O_GhillieSuit_Solid_Black: O_T_Sniper_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Ghillie Suit [CSAT]";
		uniformClass="acp_gol_Solid_Black_U_O_GhillieSuit_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\tech_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_OT_sniper_F_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_GhillieSuit_Solid_Black: B_T_Sniper_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Ghillie Suit [NATO]";
		uniformClass="acp_gol_Solid_Black_U_B_GhillieSuit_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing1_Solid_Black.paa",
			"\z\acp_gol\addons\Solid_Black\data\ghillie_Solid_Black.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_GhillieSuit_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_O_R_Gorka_01_Solid_Black_F: O_R_Gorka_black_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Granit";
		uniformClass="acp_gol_Solid_Black_U_O_R_Gorka_01_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\U_O_R_Gorka_01_Solid_Black_F.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_Gorka_01_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_BG_Guerrilla_6_Solid_Black: B_G_Soldier_LAT_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Guerilla Apparel";
		uniformClass="acp_gol_Solid_Black_U_BG_Guerrilla_6_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\I_E_Uniform_01_Sweater_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_I_E_Uniform_01_sweater_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_BG_Guerilla_Solid_Black_F: B_G_medic_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Guerilla Outfit";
		uniformClass="acp_gol_Solid_Black_U_BG_Guerilla_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ig_guerrilla_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_BG_Guerilla_Solid_Black_F.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_B_HeliPilotCoveralls_Solid_Black: B_Helipilot_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Heli Pilot Coveralls";
		uniformClass="acp_gol_Solid_Black_U_B_HeliPilotCoveralls_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\coveralls_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_B_G_HeliPilotCoveralls_Solid_Black_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_O_officer_noInsignia_Solid_Black_F: acp_gol_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Light Fatigues";
		uniformClass="acp_gol_Solid_Black_U_O_officer_noInsignia_Solid_Black_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Officer_noInsignia_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_R_officer_noInsignia_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_Aegis_O_Soldier_03_Solid_Black: acp_gol_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [Solid Black] Luchnik Fatigues";
		uniformClass="acp_gol_Solid_Black_U_Aegis_O_Soldier_03_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing2_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\TacGloves_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_Aegis_O_Soldier_03_Solid_Black.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_Aegis_O_Soldier_04_Solid_Black: acp_gol_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [Solid Black] Luchnik Fatigues (Rolled-up)";
		uniformClass="acp_gol_Solid_Black_U_Aegis_O_Soldier_04_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\clothing2_Solid_Black_CO.paa",
			"\z\acp_gol\addons\Solid_Black\data\TacGloves_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\clothing_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_Aegis_O_Soldier_04_Solid_Black.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_O_PilotCoveralls_Solid_Black: O_Pilot_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Pilot Coveralls";
		uniformClass="acp_gol_Solid_Black_U_O_PilotCoveralls_Solid_Black";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\pilot_suit_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_IR_PilotCoveralls_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_Soldier_U_O_officer_Solid_Black_hex_F: O_V_Soldier_TL_hex_F
	{
		author="Seb";
		displayName="Unit [Solid Black] Special Purpose Suit";
		uniformClass="acp_gol_Solid_Black_U_O_officer_Solid_Black_hex_F";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\ViperOp_Suit_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_U_O_V_Soldier_Viper_Solid_Black_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class acp_gol_Solid_Black_B_AssaultPack_Solid_Black: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="[Solid Black] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_compact_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_AssaultPack_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_AssaultPackEnhanced_Solid_Black: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="[Solid Black] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_compact_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\vests_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_AssaultPack_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class acp_gol_Solid_Black_B_Bergen_Solid_Black_F: B_Bergen_mcamo_F
	{
		author="Seb";
		displayName="[Solid Black] Bergen Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\Bergen_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\Icon_B_Bergen_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_Carryall_Solid_Black: B_Carryall_cbr
	{
		author="Seb";
		displayName="[Solid Black] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_tortila_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_C_Tortila_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_FieldPack_Solid_Black: B_FieldPack_oli
	{
		author="Seb";
		displayName="[Solid Black] Field Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_gorod_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_C_Gorod_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_Kitbag_rgr_Solid_Black: B_Kitbag_rgr
	{
		author="Seb";
		displayName="[Solid Black] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_fast_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_C_Kitbag_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_LegStrapBag_Solid_Black_F: B_LegStrapBag_black_F
	{
		author="Seb";
		displayName="[Solid Black] Leg Strap Bag";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\V_LegStrapBag_Solid_Black_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_V_LegStrapBag_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_RadioBag_01_Solid_Black_F: B_RadioBag_01_black_F
	{
		author="Seb";
		displayName="[Solid Black] Radio Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\B_radiobag_01_AAF_CO.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_C_UAV_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_TacticalPack_Solid_Black: B_TacticalPack_blk
	{
		author="Seb";
		displayName="[Solid Black] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_small_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_C_Small_Solid_Black.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_ViperHarness_Solid_Black_F: B_ViperHarness_blk_F
	{
		author="Seb";
		displayName="[Solid Black] Viper Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_viperop_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_ViperHarness_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_B_ViperLightHarness_Solid_Black_F: B_ViperLightHarness_blk_F
	{
		author="Seb";
		displayName="[Solid Black] Viper Light Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\backpack_viperop_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_B_ViperLightHarness_Solid_Black_F_ca.paa";
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
	class acp_gol_Solid_Black_G_Balaclava_Solid_Black: G_Balaclava_blk
	{
		author="Seb";
		displayName="[Solid Black] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_balaclava_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Balaclava_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Balaclava_combat_Solid_Black: G_Balaclava_combat
	{
		author="Seb";
		displayName="[Solid Black] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_balaclava_Solid_Black_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\g_combat_Solid_Black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Balaclava_combat_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Balaclava_lowprofile_Solid_Black: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="[Solid Black] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_balaclava_Solid_Black_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Balaclava_lowprofile_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Bandanna_aviator_Solid_Black: G_Bandanna_aviator
	{
		author="Seb";
		displayName="[Solid Black] Bandana (Aviators)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_bandMask_Solid_Black_co.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Bandana_aviator_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Bandanna_sport_Solid_Black: G_Bandanna_sport
	{
		author="Seb";
		displayName="[Solid Black] Bandana (Sport)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_bandMask_Solid_Black_co.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Bandana_shades_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Bandanna_shades_Solid_Black: G_Bandanna_shades
	{
		author="Seb";
		displayName="[Solid Black] Bandana (Shades)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_bandMask_Solid_Black_co.paa",
			"\a3\characters_f\heads\glasses\data\joeyx_black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Bandana_sport_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Bandanna_Solid_Black: G_Bandanna_blk
	{
		author="Seb";
		displayName="[Solid Black] Bandana";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\headgear_bandMask_Solid_Black_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Bandana_clean_Solid_Black_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class acp_gol_Solid_Black_G_Combat_Solid_Black: G_Combat
	{
		author="Seb";
		displayName="[Solid Black] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\g_combat_Solid_Black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_g_combat_Solid_Black_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class acp_gol_Solid_Black_G_Balaclava_TI_G_Solid_Black_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="[Solid Black] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\G_Balaclava_TI_Solid_Black_F_co.paa",
			"\z\acp_gol\addons\Solid_Black\data\g_combat_Solid_Black_ca.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Balaclava_TI_G_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class acp_gol_Solid_Black_G_Balaclava_TI_Solid_Black_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="[Solid Black] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\acp_gol\addons\Solid_Black\data\G_Balaclava_TI_Solid_Black_F_co.paa"
		};
		picture="\z\acp_gol\addons\Solid_Black\data\UI\icon_G_Balaclava_TI_Solid_Black_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
