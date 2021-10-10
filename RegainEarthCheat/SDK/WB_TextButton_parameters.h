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

// Function WB_TextButton.WB_TextButton_C.UpdateIsEnabled
struct UWB_TextButton_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TextButton.WB_TextButton_C.SetFontInfo_OnDisabled
struct UWB_TextButton_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_TextButton.WB_TextButton_C.SetNativeButtonClickAreaHeight
struct UWB_TextButton_C_SetNativeButtonClickAreaHeight_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.SetResponsiveHoveringToNativeButton
struct UWB_TextButton_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_TextButton.WB_TextButton_C.UnhoverAllNativeButtons
struct UWB_TextButton_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_TextButton.WB_TextButton_C.SetButtonSounds
struct UWB_TextButton_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.UpdateBaseButtonJustification
struct UWB_TextButton_C_UpdateBaseButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.UpdateButtonJustification
struct UWB_TextButton_C_UpdateButtonJustification_Params
{
	TEnumAsByte<EJustification_EJustification>         EJustification;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.GetButton
struct UWB_TextButton_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.SetFontInfo_OnClicked
struct UWB_TextButton_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_TextButton.WB_TextButton_C.SetFontInfo_OnNormal
struct UWB_TextButton_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_TextButton.WB_TextButton_C.SetFontInfo_OnHovered
struct UWB_TextButton_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.Construct
struct UWB_TextButton_C_Construct_Params
{
};

// Function WB_TextButton.WB_TextButton_C.CheckHasFocus
struct UWB_TextButton_C_CheckHasFocus_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnInputSwitched
struct UWB_TextButton_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_3_OnFocused__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature
struct UWB_TextButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_4_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.Reconstruct
struct UWB_TextButton_C_Reconstruct_Params
{
};

// Function WB_TextButton.WB_TextButton_C.SetBaseColor
struct UWB_TextButton_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.SetupButtonSounds
struct UWB_TextButton_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.RecheckTextSize
struct UWB_TextButton_C_RecheckTextSize_Params
{
};

// Function WB_TextButton.WB_TextButton_C.PreConstruct
struct UWB_TextButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TextButton.WB_TextButton_C.Tick
struct UWB_TextButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.ExecuteUbergraph_WB_TextButton
struct UWB_TextButton_C_ExecuteUbergraph_WB_TextButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TextButton.WB_TextButton_C.OnUnfocused__DelegateSignature
struct UWB_TextButton_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnFocused__DelegateSignature
struct UWB_TextButton_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnDisabled__DelegateSignature
struct UWB_TextButton_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnReleased__DelegateSignature
struct UWB_TextButton_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnPressed__DelegateSignature
struct UWB_TextButton_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnUnhovered__DelegateSignature
struct UWB_TextButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnHovered__DelegateSignature
struct UWB_TextButton_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_TextButton.WB_TextButton_C.OnClicked__DelegateSignature
struct UWB_TextButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
