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

// Function WB_StateButton.WB_StateButton_C.GetStateByName
struct UWB_StateButton_C_GetStateByName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.GetStateByIndex
struct UWB_StateButton_C_GetStateByIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.GetHasFocus
struct UWB_StateButton_C_GetHasFocus_Params
{
	class APlayerController*                           InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_StateButton.WB_StateButton_C.HandleIsEnabled
struct UWB_StateButton_C_HandleIsEnabled_Params
{
	bool                                               IsEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Normal
struct UWB_StateButton_C_SetMultiState_OptionFont_Normal_Params
{
};

// Function WB_StateButton.WB_StateButton_C.SetMultiState_OptionFont_Hovered
struct UWB_StateButton_C_SetMultiState_OptionFont_Hovered_Params
{
};

// Function WB_StateButton.WB_StateButton_C.SetStateButtonInfo
struct UWB_StateButton_C_SetStateButtonInfo_Params
{
	struct FLinearColor                                ButtonIconColor_Normal;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Hovered;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ButtonIconColor_Clicked;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ButtonIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.SetMultiState_FontInfo
struct UWB_StateButton_C_SetMultiState_FontInfo_Params
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

// Function WB_StateButton.WB_StateButton_C.SetMultiStateJustification
struct UWB_StateButton_C_SetMultiStateJustification_Params
{
};

// Function WB_StateButton.WB_StateButton_C.SetMultiStateText
struct UWB_StateButton_C_SetMultiStateText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_StateButton.WB_StateButton_C.UnhoverAllOptionsButton
struct UWB_StateButton_C_UnhoverAllOptionsButton_Params
{
};

// Function WB_StateButton.WB_StateButton_C.SetupSizes
struct UWB_StateButton_C_SetupSizes_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.SetStateByName
struct UWB_StateButton_C_SetStateByName_Params
{
	struct FName                                       State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.SetStateByIndex
struct UWB_StateButton_C_SetStateByIndex_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.SetUser_Focus
struct UWB_StateButton_C_SetUser_Focus_Params
{
	class APlayerController*                           Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.UpdateEnabled
struct UWB_StateButton_C_UpdateEnabled_Params
{
	bool                                               IsEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_StateButton.WB_StateButton_C.PreConstruct
struct UWB_StateButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_StateButton.WB_StateButton_C.Construct
struct UWB_StateButton_C_Construct_Params
{
};

// Function WB_StateButton.WB_StateButton_C.UnhoverStateButton
struct UWB_StateButton_C_UnhoverStateButton_Params
{
};

// Function WB_StateButton.WB_StateButton_C.Construct_State
struct UWB_StateButton_C_Construct_State_Params
{
};

// Function WB_StateButton.WB_StateButton_C.PreConstruct_State
struct UWB_StateButton_C_PreConstruct_State_Params
{
};

// Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_StateButton.WB_StateButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_StateButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature
struct UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature_Params
{
};

// Function WB_StateButton.WB_StateButton_C.BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature
struct UWB_StateButton_C_BndEvt__WB_States_K2Node_ComponentBoundEvent_38_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       State_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                State_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.Reconstruct
struct UWB_StateButton_C_Reconstruct_Params
{
};

// Function WB_StateButton.WB_StateButton_C.SetBaseColor
struct UWB_StateButton_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.SetupButtonSounds
struct UWB_StateButton_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.MultiState_CheckUserFocus
struct UWB_StateButton_C_MultiState_CheckUserFocus_Params
{
};

// Function WB_StateButton.WB_StateButton_C.Tick
struct UWB_StateButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.ExecuteUbergraph_WB_StateButton
struct UWB_StateButton_C_ExecuteUbergraph_WB_StateButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_StateButton.WB_StateButton_C.OnStateChanged__DelegateSignature
struct UWB_StateButton_C_OnStateChanged__DelegateSignature_Params
{
	struct FName                                       StateName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StateIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
