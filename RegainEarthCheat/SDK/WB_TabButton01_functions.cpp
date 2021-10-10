// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WB_TabButton01.WB_TabButton01_C.RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::RemoveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.RemoveContentWidget");

	UWB_TabButton01_C_RemoveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ContentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::CreateContentWidget(class UClass* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.CreateContentWidget");

	UWB_TabButton01_C_CreateContentWidget_Params params;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.IsContentWidgetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_TabButton01_C::IsContentWidgetValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.IsContentWidgetValid");

	UWB_TabButton01_C_IsContentWidgetValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_TabButton01.WB_TabButton01_C.Set_AllFillColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor_Normal               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FillColor_Hovered              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FillColor_Clicked              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FillColor_Disabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::Set_AllFillColors(const struct FLinearColor& FillColor_Normal, const struct FLinearColor& FillColor_Hovered, const struct FLinearColor& FillColor_Clicked, const struct FLinearColor& FillColor_Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Set_AllFillColors");

	UWB_TabButton01_C_Set_AllFillColors_Params params;
	params.FillColor_Normal = FillColor_Normal;
	params.FillColor_Hovered = FillColor_Hovered;
	params.FillColor_Clicked = FillColor_Clicked;
	params.FillColor_Disabled = FillColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Set_FillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::Set_FillColor(const struct FLinearColor& FillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Set_FillColor");

	UWB_TabButton01_C_Set_FillColor_Params params;
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Set_AllFrameColours
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor_Normal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Hovered             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Clicked             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColor_Disabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::Set_AllFrameColours(const struct FLinearColor& FrameColor_Normal, const struct FLinearColor& FrameColor_Hovered, const struct FLinearColor& FrameColor_Clicked, const struct FLinearColor& FrameColor_Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Set_AllFrameColours");

	UWB_TabButton01_C_Set_AllFrameColours_Params params;
	params.FrameColor_Normal = FrameColor_Normal;
	params.FrameColor_Hovered = FrameColor_Hovered;
	params.FrameColor_Clicked = FrameColor_Clicked;
	params.FrameColor_Disabled = FrameColor_Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Set_FrameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            FrameColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::Set_FrameColor(const struct FLinearColor& FrameColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Set_FrameColor");

	UWB_TabButton01_C_Set_FrameColor_Params params;
	params.FrameColor = FrameColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.UpdateIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_TabButton01_C::UpdateIsEnabled(bool BIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.UpdateIsEnabled");

	UWB_TabButton01_C_UpdateIsEnabled_Params params;
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnDisabled
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::SetFontInfo_OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnDisabled");

	UWB_TabButton01_C_SetFontInfo_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetButtonSizeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::SetButtonSizeScale(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetButtonSizeScale");

	UWB_TabButton01_C_SetButtonSizeScale_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetResponsiveHoveringToNativeButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::SetResponsiveHoveringToNativeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetResponsiveHoveringToNativeButton");

	UWB_TabButton01_C_SetResponsiveHoveringToNativeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.UnhoverAllNativeButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::UnhoverAllNativeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.UnhoverAllNativeButtons");

	UWB_TabButton01_C_UnhoverAllNativeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              OnClicked_Sound                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              OnHovered_Sound                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetButtonSounds");

	UWB_TabButton01_C_SetButtonSounds_Params params;
	params.OnClicked_Sound = OnClicked_Sound;
	params.OnHovered_Sound = OnHovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.AddHintIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget20x20                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::AddHintIcon(class UClass* Widget20x20)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.AddHintIcon");

	UWB_TabButton01_C_AddHintIcon_Params params;
	params.Widget20x20 = Widget20x20;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.GetButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Base_Button                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::GetButton(class UButton** Base_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.GetButton");

	UWB_TabButton01_C_GetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Button != nullptr)
		*Base_Button = params.Base_Button;

}


// Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::SetFontInfo_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnClicked");

	UWB_TabButton01_C_SetFontInfo_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnNormal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::SetFontInfo_OnNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnNormal");

	UWB_TabButton01_C_SetFontInfo_OnNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::SetFontInfo_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetFontInfo_OnHovered");

	UWB_TabButton01_C_SetFontInfo_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_TabButton01_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Construct");

	UWB_TabButton01_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.CheckHasFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::CheckHasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.CheckHasFocus");

	UWB_TabButton01_C_CheckHasFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnInputSwitched");

	UWB_TabButton01_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_6_OnUnfocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature
// (BlueprintEvent)
void UWB_TabButton01_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature");

	UWB_TabButton01_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_5_OnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.UpdateGamepadAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_TabButton01_C::UpdateGamepadAppearance(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.UpdateGamepadAppearance");

	UWB_TabButton01_C_UpdateGamepadAppearance_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::Reconstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Reconstruct");

	UWB_TabButton01_C_Reconstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetBaseColor");

	UWB_TabButton01_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.SetupButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonSounds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.SetupButtonSounds");

	UWB_TabButton01_C_SetupButtonSounds_Params params;
	params.bUseButtonSounds = bUseButtonSounds;
	params.Clicked = Clicked;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_TabButton01_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.PreConstruct");

	UWB_TabButton01_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.Tick");

	UWB_TabButton01_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.ExecuteUbergraph_WB_TabButton01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_TabButton01_C::ExecuteUbergraph_WB_TabButton01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.ExecuteUbergraph_WB_TabButton01");

	UWB_TabButton01_C_ExecuteUbergraph_WB_TabButton01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnUnfocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnUnfocused__DelegateSignature");

	UWB_TabButton01_C_OnUnfocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnFocused__DelegateSignature");

	UWB_TabButton01_C_OnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnDisabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnDisabled__DelegateSignature");

	UWB_TabButton01_C_OnDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnReleased__DelegateSignature");

	UWB_TabButton01_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnPressed__DelegateSignature");

	UWB_TabButton01_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnUnhovered__DelegateSignature");

	UWB_TabButton01_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnHovered__DelegateSignature");

	UWB_TabButton01_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_TabButton01.WB_TabButton01_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_TabButton01_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_TabButton01.WB_TabButton01_C.OnClicked__DelegateSignature");

	UWB_TabButton01_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
