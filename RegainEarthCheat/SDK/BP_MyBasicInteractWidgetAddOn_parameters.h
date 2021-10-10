#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Type
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes_E_WidgetTypes>           Widget_Type;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Title
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title_Text;                                                // (Parm, OutParm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Sub Title
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Sub_Title_Text;                                            // (Parm, OutParm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Level
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Level_Text;                                                // (Parm, OutParm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Amount
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Amount_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Color
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Light_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Widget Key Binds
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FS_ActionAndKeysBind>                Key_Binds;                                                 // (Parm, OutParm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 1
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 2
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 3
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Set Detail 4
struct ABP_MyBasicInteractWidgetAddOn_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.UserConstructionScript
struct ABP_MyBasicInteractWidgetAddOn_C_UserConstructionScript_Params
{
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Toggle Widget
struct ABP_MyBasicInteractWidgetAddOn_C_Toggle_Widget_Params
{
	bool                                               Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ReceiveBeginPlay
struct ABP_MyBasicInteractWidgetAddOn_C_ReceiveBeginPlay_Params
{
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetTitleVisibleAndSetTitleText
struct ABP_MyBasicInteractWidgetAddOn_C_SetTitleVisibleAndSetTitleText_Params
{
	struct FText                                       Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Clear Target and Stop Show Widget
struct ABP_MyBasicInteractWidgetAddOn_C_Clear_Target_and_Stop_Show_Widget_Params
{
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Start Display Widget Set Current Target
struct ABP_MyBasicInteractWidgetAddOn_C_Start_Display_Widget_Set_Current_Target_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionNameForInputKeySearch
struct ABP_MyBasicInteractWidgetAddOn_C_SetActionNameForInputKeySearch_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKeyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.SetActionText
struct ABP_MyBasicInteractWidgetAddOn_C_SetActionText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ParentActor
struct ABP_MyBasicInteractWidgetAddOn_C_ParentActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.Interact
struct ABP_MyBasicInteractWidgetAddOn_C_Interact_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MyBasicInteractWidgetAddOn.BP_MyBasicInteractWidgetAddOn_C.ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn
struct ABP_MyBasicInteractWidgetAddOn_C_ExecuteUbergraph_BP_MyBasicInteractWidgetAddOn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
