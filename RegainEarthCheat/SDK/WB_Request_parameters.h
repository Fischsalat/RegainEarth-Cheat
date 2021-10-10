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

// Function WB_Request.WB_Request_C.NavToConfirmButton
struct UWB_Request_C_NavToConfirmButton_Params
{
};

// Function WB_Request.WB_Request_C.GetIsGamepad
struct UWB_Request_C_GetIsGamepad_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Request.WB_Request_C.NavToCancelButton
struct UWB_Request_C_NavToCancelButton_Params
{
};

// Function WB_Request.WB_Request_C.OnPreviewKeyDown
struct UWB_Request_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Request.WB_Request_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWB_Request_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WB_Request.WB_Request_C.ActivateWidget
struct UWB_Request_C_ActivateWidget_Params
{
	bool                                               bShowOnlyOkButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseCancelCountdown;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       HeadText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MessageText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_Request.WB_Request_C.OnInputSwitched
struct UWB_Request_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Request.WB_Request_C.CheckFocus
struct UWB_Request_C_CheckFocus_Params
{
};

// Function WB_Request.WB_Request_C.ClickCancel
struct UWB_Request_C_ClickCancel_Params
{
};

// Function WB_Request.WB_Request_C.SetGamepadAppearance
struct UWB_Request_C_SetGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Request.WB_Request_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_Request_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_Request.WB_Request_C.ClickOK
struct UWB_Request_C_ClickOK_Params
{
};

// Function WB_Request.WB_Request_C.RemoveRequest
struct UWB_Request_C_RemoveRequest_Params
{
};

// Function WB_Request.WB_Request_C.SetBaseColor
struct UWB_Request_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Request.WB_Request_C.Countdown
struct UWB_Request_C_Countdown_Params
{
};

// Function WB_Request.WB_Request_C.Tick
struct UWB_Request_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Request.WB_Request_C.ExecuteUbergraph_WB_Request
struct UWB_Request_C_ExecuteUbergraph_WB_Request_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Request.WB_Request_C.OnClicked_Ok__DelegateSignature
struct UWB_Request_C_OnClicked_Ok__DelegateSignature_Params
{
};

// Function WB_Request.WB_Request_C.OnClicked_Cancel__DelegateSignature
struct UWB_Request_C_OnClicked_Cancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
