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

// Function WB_ProgressButton.WB_ProgressButton_C.SetProgressInfo
struct UWB_ProgressButton_C_SetProgressInfo_Params
{
	float                                              ProgressMinValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProgressMaxValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ProgressDefinition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              DefaultValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetProgressValue
struct UWB_ProgressButton_C_SetProgressValue_Params
{
	float                                              InValue;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.GetHasFocus
struct UWB_ProgressButton_C_GetHasFocus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_ProgressButton.WB_ProgressButton_C.HandleIsEnabled
struct UWB_ProgressButton_C_HandleIsEnabled_Params
{
	bool                                               IsEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Normal
struct UWB_ProgressButton_C_SetMultiState_OptionFont_Normal_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Hovered
struct UWB_ProgressButton_C_SetMultiState_OptionFont_Hovered_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetStateButtonInfo
struct UWB_ProgressButton_C_SetStateButtonInfo_Params
{
	struct FLinearColor                                ButtonIconColor_Normal;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Hovered;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Clicked;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ButtonIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_FontInfo
struct UWB_ProgressButton_C_SetMultiState_FontInfo_Params
{
	class UFont*                                       MultiState_Font_Normal;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Normal;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Normal;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Normal;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFont*                                       MultiState_Font_Hovered;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFontFace*                                   MultiState_FontFace_Hovered;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MultiState_FontSize_Hovered;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MultiState_FontColor_Hovered;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateJustification
struct UWB_ProgressButton_C_SetMultiStateJustification_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateText
struct UWB_ProgressButton_C_SetMultiStateText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_ProgressButton.WB_ProgressButton_C.UnhoverAllOptionsButton
struct UWB_ProgressButton_C_UnhoverAllOptionsButton_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetupSizes
struct UWB_ProgressButton_C_SetupSizes_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetUser_Focus
struct UWB_ProgressButton_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct
struct UWB_ProgressButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ProgressButton.WB_ProgressButton_C.Construct
struct UWB_ProgressButton_C_Construct_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature
struct UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.UnhoverProgressButton
struct UWB_ProgressButton_C_UnhoverProgressButton_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.Construct_ProgressButton
struct UWB_ProgressButton_C_Construct_ProgressButton_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct_ProgressButton
struct UWB_ProgressButton_C_PreConstruct_ProgressButton_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
struct UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetBaseColor
struct UWB_ProgressButton_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.SetupButtonSounds
struct UWB_ProgressButton_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.MultiState_CheckUserFocus
struct UWB_ProgressButton_C_MultiState_CheckUserFocus_Params
{
};

// Function WB_ProgressButton.WB_ProgressButton_C.Tick
struct UWB_ProgressButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.ExecuteUbergraph_WB_ProgressButton
struct UWB_ProgressButton_C_ExecuteUbergraph_WB_ProgressButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ProgressButton.WB_ProgressButton_C.OnProgressChanged__DelegateSignature
struct UWB_ProgressButton_C_OnProgressChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
