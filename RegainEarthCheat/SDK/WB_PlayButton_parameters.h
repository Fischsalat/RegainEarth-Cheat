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

// Function WB_PlayButton.WB_PlayButton_C.SetFrameBlockColor
struct UWB_PlayButton_C_SetFrameBlockColor_Params
{
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.GetCurrentScale
struct UWB_PlayButton_C_GetCurrentScale_Params
{
	struct FVector2D                                   Scale;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.UpdateImageSaturation
struct UWB_PlayButton_C_UpdateImageSaturation_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.UpdateImageColors
struct UWB_PlayButton_C_UpdateImageColors_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.RemoveContentWidget
struct UWB_PlayButton_C_RemoveContentWidget_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.CreateContentWidget
struct UWB_PlayButton_C_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.IsContentWidgetValid
struct UWB_PlayButton_C_IsContentWidgetValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_PlayButton.WB_PlayButton_C.Set_AllFrameColours
struct UWB_PlayButton_C_Set_AllFrameColours_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.UpdateIsEnabled
struct UWB_PlayButton_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PlayButton.WB_PlayButton_C.SetFontInfo_OnDisabled
struct UWB_PlayButton_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.SetButtonSizeScale
struct UWB_PlayButton_C_SetButtonSizeScale_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.SetResponsiveHoveringToNativeButton
struct UWB_PlayButton_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.UnhoverAllNativeButtons
struct UWB_PlayButton_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.SetButtonSounds
struct UWB_PlayButton_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.GetButton
struct UWB_PlayButton_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.SetFontInfo_OnClicked
struct UWB_PlayButton_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.SetFontInfo_OnNormal
struct UWB_PlayButton_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.SetFontInfo_OnHovered
struct UWB_PlayButton_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.Construct
struct UWB_PlayButton_C_Construct_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.CheckHasFocus
struct UWB_PlayButton_C_CheckHasFocus_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnInputSwitched
struct UWB_PlayButton_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.CheckScale
struct UWB_PlayButton_C_CheckScale_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
struct UWB_PlayButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.Reconstruct
struct UWB_PlayButton_C_Reconstruct_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.SetBaseColor
struct UWB_PlayButton_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.SetupButtonSounds
struct UWB_PlayButton_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.PreConstruct
struct UWB_PlayButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_PlayButton.WB_PlayButton_C.Tick
struct UWB_PlayButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.ExecuteUbergraph_WB_PlayButton
struct UWB_PlayButton_C_ExecuteUbergraph_WB_PlayButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_PlayButton.WB_PlayButton_C.OnUnfocused__DelegateSignature
struct UWB_PlayButton_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnFocused__DelegateSignature
struct UWB_PlayButton_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnDisabled__DelegateSignature
struct UWB_PlayButton_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnReleased__DelegateSignature
struct UWB_PlayButton_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnPressed__DelegateSignature
struct UWB_PlayButton_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnUnhovered__DelegateSignature
struct UWB_PlayButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnHovered__DelegateSignature
struct UWB_PlayButton_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_PlayButton.WB_PlayButton_C.OnClicked__DelegateSignature
struct UWB_PlayButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
