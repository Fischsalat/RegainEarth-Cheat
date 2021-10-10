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

// Function WB_State.WB_State_C.SetButtonsEnabled
struct UWB_State_C_SetButtonsEnabled_Params
{
	bool                                               BIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.SetButtonIcon
struct UWB_State_C_SetButtonIcon_Params
{
	class UObject*                                     Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.ConvertOpacityToNormal
struct UWB_State_C_ConvertOpacityToNormal_Params
{
	struct FLinearColor                                InColor;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.GetNavStateKeys
struct UWB_State_C_GetNavStateKeys_Params
{
	TArray<struct FName>                               Keys;                                                      // (Parm, OutParm)
};

// Function WB_State.WB_State_C.GetNavStateValues
struct UWB_State_C_GetNavStateValues_Params
{
	TArray<class UWB_NavState_C*>                      Values;                                                    // (Parm, OutParm, ContainsInstancedReference)
};

// Function WB_State.WB_State_C.Set_FontInfoHovered
struct UWB_State_C_Set_FontInfoHovered_Params
{
};

// Function WB_State.WB_State_C.Set_FontInfoNormal
struct UWB_State_C_Set_FontInfoNormal_Params
{
};

// Function WB_State.WB_State_C.HandleFontInfo
struct UWB_State_C_HandleFontInfo_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.HasAnyFocus
struct UWB_State_C_HasAnyFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.OnKeyDown
struct UWB_State_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_State.WB_State_C.GetCurrentStateByName
struct UWB_State_C_GetCurrentStateByName_Params
{
	struct FName                                       State;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.GetCurrentStateByIndex
struct UWB_State_C_GetCurrentStateByIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.SetAllButtonIconColor
struct UWB_State_C_SetAllButtonIconColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.GetButtonRight
struct UWB_State_C_GetButtonRight_Params
{
	class UButton*                                     Native_Button;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.GetButtonLeft
struct UWB_State_C_GetButtonLeft_Params
{
	class UButton*                                     Native_Button;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.CheckFocus
struct UWB_State_C_CheckFocus_Params
{
};

// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_State.WB_State_C.Construct
struct UWB_State_C_Construct_Params
{
};

// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WB_State.WB_State_C.InitStates
struct UWB_State_C_InitStates_Params
{
	TArray<struct FName>                               States;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_State.WB_State_C.SetNewStateText
struct UWB_State_C_SetNewStateText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIncrease;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.SetStateByIndex
struct UWB_State_C_SetStateByIndex_Params
{
	int                                                State_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExecute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.SetStateByName
struct UWB_State_C_SetStateByName_Params
{
	struct FName                                       State_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExecute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.ClickLeft
struct UWB_State_C_ClickLeft_Params
{
};

// Function WB_State.WB_State_C.ClickRight
struct UWB_State_C_ClickRight_Params
{
};

// Function WB_State.WB_State_C.HandleNavigationOverview
struct UWB_State_C_HandleNavigationOverview_Params
{
	bool                                               bUseNavOverview;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NavOverviewRoom;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Normal_Active;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NavStateColor_Hovered_Active;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.CheckNavStateColor
struct UWB_State_C_CheckNavStateColor_Params
{
};

// Function WB_State.WB_State_C.PreConstruct
struct UWB_State_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_State.WB_State_C.Tick
struct UWB_State_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.ExecuteUbergraph_WB_State
struct UWB_State_C_ExecuteUbergraph_WB_State_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.OnStateChanged__DelegateSignature
struct UWB_State_C_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       State_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_State.WB_State_C.OnHovered__DelegateSignature
struct UWB_State_C_OnHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
