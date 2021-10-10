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

// Function WB_TabButton02.WB_TabButton02_C.UpdateText
struct UWB_TabButton02_C_UpdateText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WB_TabButton02.WB_TabButton02_C.RemoveContentWidget
struct UWB_TabButton02_C_RemoveContentWidget_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.CreateContentWidget
struct UWB_TabButton02_C_CreateContentWidget_Params
{
	class UClass*                                      ContentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.IsContentWidgetValid
struct UWB_TabButton02_C_IsContentWidgetValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_TabButton02.WB_TabButton02_C.Set_AllFillColors
struct UWB_TabButton02_C_Set_AllFillColors_Params
{
	struct FLinearColor                                FillColor_Normal;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Hovered;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Clicked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FillColor_Disabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.Set_FillColor
struct UWB_TabButton02_C_Set_FillColor_Params
{
	struct FLinearColor                                FillColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.Set_AllFrameColours
struct UWB_TabButton02_C_Set_AllFrameColours_Params
{
	struct FLinearColor                                FrameColor_Normal;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Hovered;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Clicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FrameColor_Disabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.Set_FrameColor
struct UWB_TabButton02_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.UpdateIsEnabled
struct UWB_TabButton02_C_UpdateIsEnabled_Params
{
	bool                                               BIsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TabButton02.WB_TabButton02_C.SetFontInfo_OnDisabled
struct UWB_TabButton02_C_SetFontInfo_OnDisabled_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.SetButtonSizeScale
struct UWB_TabButton02_C_SetButtonSizeScale_Params
{
	struct FVector2D                                   Size;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.SetResponsiveHoveringToNativeButton
struct UWB_TabButton02_C_SetResponsiveHoveringToNativeButton_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.UnhoverAllNativeButtons
struct UWB_TabButton02_C_UnhoverAllNativeButtons_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.SetButtonSounds
struct UWB_TabButton02_C_SetButtonSounds_Params
{
	class USoundBase*                                  OnClicked_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OnHovered_Sound;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.AddHintIcon
struct UWB_TabButton02_C_AddHintIcon_Params
{
	class UClass*                                      Widget20x20;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.GetButton
struct UWB_TabButton02_C_GetButton_Params
{
	class UButton*                                     Base_Button;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.SetFontInfo_OnClicked
struct UWB_TabButton02_C_SetFontInfo_OnClicked_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.SetFontInfo_OnNormal
struct UWB_TabButton02_C_SetFontInfo_OnNormal_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.SetFontInfo_OnHovered
struct UWB_TabButton02_C_SetFontInfo_OnHovered_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
	bool                                               bNativeHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.Construct
struct UWB_TabButton02_C_Construct_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.CheckHasFocus
struct UWB_TabButton02_C_CheckHasFocus_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnInputSwitched
struct UWB_TabButton02_C_OnInputSwitched_Params
{
	TEnumAsByte<EInputType_EInputType>                 InputType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
struct UWB_TabButton02_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.Reconstruct
struct UWB_TabButton02_C_Reconstruct_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.UpdateGamepadAppearance
struct UWB_TabButton02_C_UpdateGamepadAppearance_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TabButton02.WB_TabButton02_C.SetBaseColor
struct UWB_TabButton02_C_SetBaseColor_Params
{
	bool                                               bUseBaseColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Grad0;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grad3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.SetupButtonSounds
struct UWB_TabButton02_C_SetupButtonSounds_Params
{
	bool                                               bUseButtonSounds;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Clicked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  Hovered;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.PreConstruct
struct UWB_TabButton02_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_TabButton02.WB_TabButton02_C.Tick
struct UWB_TabButton02_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.ExecuteUbergraph_WB_TabButton02
struct UWB_TabButton02_C_ExecuteUbergraph_WB_TabButton02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_TabButton02.WB_TabButton02_C.OnUnfocused__DelegateSignature
struct UWB_TabButton02_C_OnUnfocused__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnFocused__DelegateSignature
struct UWB_TabButton02_C_OnFocused__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnDisabled__DelegateSignature
struct UWB_TabButton02_C_OnDisabled__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnReleased__DelegateSignature
struct UWB_TabButton02_C_OnReleased__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnPressed__DelegateSignature
struct UWB_TabButton02_C_OnPressed__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnUnhovered__DelegateSignature
struct UWB_TabButton02_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnHovered__DelegateSignature
struct UWB_TabButton02_C_OnHovered__DelegateSignature_Params
{
};

// Function WB_TabButton02.WB_TabButton02_C.OnClicked__DelegateSignature
struct UWB_TabButton02_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
