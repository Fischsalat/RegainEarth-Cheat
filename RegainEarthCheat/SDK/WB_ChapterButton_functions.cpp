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

// Function WB_ChapterButton.WB_ChapterButton_C.SetFrameBlockColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::SetFrameBlockColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetFrameBlockColor");

	UWB_ChapterButton_C_SetFrameBlockColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.GetCurrentScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::GetCurrentScale(struct FVector2D* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.GetCurrentScale");

	UWB_ChapterButton_C_GetCurrentScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function WB_ChapterButton.WB_ChapterButton_C.UpdateImageSaturation
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::UpdateImageSaturation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.UpdateImageSaturation");

	UWB_ChapterButton_C_UpdateImageSaturation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.UpdateImageColors
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::UpdateImageColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.UpdateImageColors");

	UWB_ChapterButton_C_UpdateImageColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.RemoveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::RemoveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.RemoveContentWidget");

	UWB_ChapterButton_C_RemoveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.CreateContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ContentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::CreateContentWidget(class UClass* ContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.CreateContentWidget");

	UWB_ChapterButton_C_CreateContentWidget_Params params;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.IsContentWidgetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_ChapterButton_C::IsContentWidgetValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.IsContentWidgetValid");

	UWB_ChapterButton_C_IsContentWidgetValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ChapterButton.WB_ChapterButton_C.Set_AllFrameColours
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::Set_AllFrameColours()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.Set_AllFrameColours");

	UWB_ChapterButton_C_Set_AllFrameColours_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.UpdateIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ChapterButton_C::UpdateIsEnabled(bool BIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.UpdateIsEnabled");

	UWB_ChapterButton_C_UpdateIsEnabled_Params params;
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnDisabled
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::SetFontInfo_OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnDisabled");

	UWB_ChapterButton_C_SetFontInfo_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetButtonSizeScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::SetButtonSizeScale(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetButtonSizeScale");

	UWB_ChapterButton_C_SetButtonSizeScale_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetResponsiveHoveringToNativeButton
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::SetResponsiveHoveringToNativeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetResponsiveHoveringToNativeButton");

	UWB_ChapterButton_C_SetResponsiveHoveringToNativeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.UnhoverAllNativeButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::UnhoverAllNativeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.UnhoverAllNativeButtons");

	UWB_ChapterButton_C_UnhoverAllNativeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              OnClicked_Sound                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              OnHovered_Sound                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::SetButtonSounds(class USoundBase* OnClicked_Sound, class USoundBase* OnHovered_Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetButtonSounds");

	UWB_ChapterButton_C_SetButtonSounds_Params params;
	params.OnClicked_Sound = OnClicked_Sound;
	params.OnHovered_Sound = OnHovered_Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.GetButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Base_Button                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::GetButton(class UButton** Base_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.GetButton");

	UWB_ChapterButton_C_GetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base_Button != nullptr)
		*Base_Button = params.Base_Button;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::SetFontInfo_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnClicked");

	UWB_ChapterButton_C_SetFontInfo_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnNormal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::SetFontInfo_OnNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnNormal");

	UWB_ChapterButton_C_SetFontInfo_OnNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::SetFontInfo_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetFontInfo_OnHovered");

	UWB_ChapterButton_C_SetFontInfo_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_7_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ChapterButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.Construct");

	UWB_ChapterButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.CheckHasFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::CheckHasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.CheckHasFocus");

	UWB_ChapterButton_C_CheckHasFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnInputSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputType_EInputType> InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::OnInputSwitched(TEnumAsByte<EInputType_EInputType> InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnInputSwitched");

	UWB_ChapterButton_C_OnInputSwitched_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_BaseButton_K2Node_ComponentBoundEvent_0_OnDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.CheckScale
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::CheckScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.CheckScale");

	UWB_ChapterButton_C_CheckScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_143_OnUnfocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature
// (BlueprintEvent)
void UWB_ChapterButton_C::BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature");

	UWB_ChapterButton_C_BndEvt__WB_NativeButton_K2Node_ComponentBoundEvent_142_OnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::Reconstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.Reconstruct");

	UWB_ChapterButton_C_Reconstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetBaseColor");

	UWB_ChapterButton_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.SetupButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonSounds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.SetupButtonSounds");

	UWB_ChapterButton_C_SetupButtonSounds_Params params;
	params.bUseButtonSounds = bUseButtonSounds;
	params.Clicked = Clicked;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ChapterButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.PreConstruct");

	UWB_ChapterButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.Tick");

	UWB_ChapterButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.ExecuteUbergraph_WB_ChapterButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ChapterButton_C::ExecuteUbergraph_WB_ChapterButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.ExecuteUbergraph_WB_ChapterButton");

	UWB_ChapterButton_C_ExecuteUbergraph_WB_ChapterButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnUnfocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnUnfocused__DelegateSignature");

	UWB_ChapterButton_C_OnUnfocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnFocused__DelegateSignature");

	UWB_ChapterButton_C_OnFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnDisabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnDisabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnDisabled__DelegateSignature");

	UWB_ChapterButton_C_OnDisabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnReleased__DelegateSignature");

	UWB_ChapterButton_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnPressed__DelegateSignature");

	UWB_ChapterButton_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnUnhovered__DelegateSignature");

	UWB_ChapterButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnHovered__DelegateSignature");

	UWB_ChapterButton_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ChapterButton.WB_ChapterButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_ChapterButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ChapterButton.WB_ChapterButton_C.OnClicked__DelegateSignature");

	UWB_ChapterButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
