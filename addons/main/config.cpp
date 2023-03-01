class CfgPatches
{
	class acp_gol_main
	{
		name="main";
		units[]={};
		weapons[]={};
		requiredVersion=1.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Enoch",
			"A3_Supplies_F_Enoch_Bags"
		};
		author="Seb";
		version="2.9.0.0";
		versionStr="2.9.0.0";
		versionAr[]={2,9,0,0};
	};
};
class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_HelmetB_plain_mcamo;
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		class ItemInfo;
	};
	class H_HelmetB_light: H_HelmetB
	{
		class ItemInfo;
	};
	class acp_gol_main_H_HelmetSpecter_base_F: H_HelmetSpecB
	{
		author="AveryTheKitty, DeathStruck & Midnas";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		model="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="Raven Helmet";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_F.p3d";
		};
	};
	class acp_gol_main_H_HelmetSpecter_headset_base_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		model="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_headset_F.p3d";
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
			uniformModel="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_headset_F.p3d";
		};
	};
	class acp_gol_main_H_HelmetSpecter_cover_base_F: acp_gol_main_H_HelmetSpecter_base_F
	{
		model="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_cover_F.p3d";
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
			uniformModel="\z\acp_gol\addons\main\Headgear\H_HelmetSpecter_cover_F.p3d";
		};
	};
	class acp_gol_main_H_MK7_Base_F: H_HelmetSpecB
	{
		author="Bran Flakes and TacticalDruid";
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		displayName="MK7";
		descriptionShort="MK7 Helmet";
		model="\z\acp_gol\addons\main\Headgear\H_Mk7_F";
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo"
			};
			uniformModel="\z\acp_gol\addons\main\Headgear\H_Mk7_F";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class acp_gol_main_H_HelmetB_light_basic_base: H_HelmetB_light
	{
		scope=0;
		model="\A3\Characters_F\Common\headgear_placeholder.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Common\headgear_placeholder.p3d";
		};
	};
	class acp_gol_main_H_HelmetB_light_base: H_HelmetB_light
	{
		scope=0;
		model="\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\headgear_B_Helmet_light.p3d";
		};
	};
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrier2_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class Vest_Camo_Base;
	class V_Chestrig_khk: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class Uniform_Base;
	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		class ItemInfo;
	};
};
class CfgVehicles
{
	class O_A_officer_F;
	class O_A_soldier_F;
	class acp_gol_main_O_A_officer_F: O_A_officer_F
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		hiddenSelectionsMaterials[]=
		{
			"\z\acp_gol\addons\main\uniforms\data\officer_noinsignia.rvmat"
		};
	};
};
