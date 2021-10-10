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

// Function WB_Progress.WB_Progress_C.DecreaseSliderValue
struct UWB_Progress_C_DecreaseSliderValue_Params
{
	float                                              StepSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.IncreaseSliderValue
struct UWB_Progress_C_IncreaseSliderValue_Params
{
	float                                              StepSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.SetProgressTextValue
struct UWB_Progress_C_SetProgressTextValue_Params
{
	float                                              ProgressValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Definition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.SetProgressFont
struct UWB_Progress_C_SetProgressFont_Params
{
	class UObject*                                     Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   FontFace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.SetSliderColor
struct UWB_Progress_C_SetSliderColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.SetButtonsEnabled
struct UWB_Progress_C_SetButtonsEnabled_Params
{
	bool                                               BIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Progress.WB_Progress_C.ConvertOpacityToNormal
struct UWB_Progress_C_ConvertOpacityToNormal_Params
{
	struct FLinearColor                                InColor;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.Set_FontInfoHovered
struct UWB_Progress_C_Set_FontInfoHovered_Params
{
};

// Function WB_Progress.WB_Progress_C.Set_FontInfoNormal
struct UWB_Progress_C_Set_FontInfoNormal_Params
{
};

// Function WB_Progress.WB_Progress_C.HasAnyFocus
struct UWB_Progress_C_HasAnyFocus_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Progress.WB_Progress_C.OnKeyDown
struct UWB_Progress_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WB_Progress.WB_Progress_C.GetButtonRight
struct UWB_Progress_C_GetButtonRight_Params
{
	class UButton*                                     Native_Button;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.GetButtonLeft
struct UWB_Progress_C_GetButtonLeft_Params
{
	class UButton*                                     Native_Button;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.CheckFocus
struct UWB_Progress_C_CheckFocus_Params
{
};

// Function WB_Progress.WB_Progress_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
struct UWB_Progress_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Progress.WB_Progress_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWB_Progress_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Progress.WB_Progress_C.Construct
struct UWB_Progress_C_Construct_Params
{
};

// Function WB_Progress.WB_Progress_C.BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
struct UWB_Progress_C_BndEvt__ProgressSlider_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.UpdateSliderText
struct UWB_Progress_C_UpdateSliderText_Params
{
};

// Function WB_Progress.WB_Progress_C.SliderClickLeft
struct UWB_Progress_C_SliderClickLeft_Params
{
};

// Function WB_Progress.WB_Progress_C.SliderClickRight
struct UWB_Progress_C_SliderClickRight_Params
{
};

// Function WB_Progress.WB_Progress_C.CheckSliderHovered
struct UWB_Progress_C_CheckSliderHovered_Params
{
};

// Function WB_Progress.WB_Progress_C.OnValueChanged
struct UWB_Progress_C_OnValueChanged_Params
{
	float                                              SliderValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.PreConstruct
struct UWB_Progress_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Progress.WB_Progress_C.Tick
struct UWB_Progress_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.ExecuteUbergraph_WB_Progress
struct UWB_Progress_C_ExecuteUbergraph_WB_Progress_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.OnProgressChanged__DelegateSignature
struct UWB_Progress_C_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Progress.WB_Progress_C.OnHovered__DelegateSignature
struct UWB_Progress_C_OnHovered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
