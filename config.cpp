class CfgPatches
{
	class Hannibal_Weapons_Systems_Main
	{
		units[]=
		{
			""
		};
		weapons[]=
		{
			"Campaign_Hat"
		};
    magazines[]=
		{
      ""
		};
    ammo[]=
		{
      ""
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_f",
		};
	};
};

class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;

	class Campaign_Hat: ItemCore
	{
		author="Can1mex & Frosty";
		scope=2;
		scopeCurator=2;
		weaponPoolAvailable=1;
		displayName="Campaign Hat Base";
		picture="\A3\characters_f\Data\UI\icon_h_booniehat_desert_ca.paa";
		model="\Hannibal_Weapons_Systems_Main\data\Campaign_Hat.p3d";
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Hannibal_Weapons_Systems_Main\data\Headgear\Campaign\Campaign_Hat_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Hannibal_Weapons_Systems_Main\data\Headgear\Campaign\Campaign_Hat.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\Hannibal_Weapons_Systems_Main\data\Campaign_Hat.p3d";
			hiddenSelections[]=
			{
				"Camo_1"
			};
			hiddenSelectionsTextures[]=
			{
				"Hannibal_Weapons_Systems_Main\data\Headgear\Campaign\Campaign_Hat_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"Hannibal_Weapons_Systems_Main\data\Headgear\Campaign\Campaign_Hat.rvmat"
			};
		};
	};
};
