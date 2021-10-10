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

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Type
struct UW_MasterInteractionWidget_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes_E_WidgetTypes>           Widget_Type;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Title
struct UW_MasterInteractionWidget_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title_Text;                                                // (Parm, OutParm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Sub Title
struct UW_MasterInteractionWidget_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Sub_Title_Text;                                            // (Parm, OutParm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Level
struct UW_MasterInteractionWidget_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Level_Text;                                                // (Parm, OutParm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Amount
struct UW_MasterInteractionWidget_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Amount_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Color
struct UW_MasterInteractionWidget_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Light_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Widget Key Binds
struct UW_MasterInteractionWidget_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FS_ActionAndKeysBind>                Key_Binds;                                                 // (Parm, OutParm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Detail 1
struct UW_MasterInteractionWidget_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Detail 2
struct UW_MasterInteractionWidget_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Detail 3
struct UW_MasterInteractionWidget_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Set Detail 4
struct UW_MasterInteractionWidget_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_DetailsSettings                          Detail_Settings;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Start Display Widget Set Current Target
struct UW_MasterInteractionWidget_C_Start_Display_Widget_Set_Current_Target_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Clear Target and Stop Show Widget
struct UW_MasterInteractionWidget_C_Clear_Target_and_Stop_Show_Widget_Params
{
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Toggle Widget
struct UW_MasterInteractionWidget_C_Toggle_Widget_Params
{
	bool                                               Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.Interact
struct UW_MasterInteractionWidget_C_Interact_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.ParentActor
struct UW_MasterInteractionWidget_C_ParentActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.SetActionText
struct UW_MasterInteractionWidget_C_SetActionText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.SetActionNameForInputKeySearch
struct UW_MasterInteractionWidget_C_SetActionNameForInputKeySearch_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKeyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.SetTitleVisibleAndSetTitleText
struct UW_MasterInteractionWidget_C_SetTitleVisibleAndSetTitleText_Params
{
	struct FText                                       Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_MasterInteractionWidget.W_MasterInteractionWidget_C.ExecuteUbergraph_W_MasterInteractionWidget
struct UW_MasterInteractionWidget_C_ExecuteUbergraph_W_MasterInteractionWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
