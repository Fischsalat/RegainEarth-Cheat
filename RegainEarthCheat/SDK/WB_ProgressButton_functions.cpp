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

// Function WB_ProgressButton.WB_ProgressButton_C.SetProgressInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressMinValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ProgressMaxValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ProgressDefinition             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          DefaultValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetProgressInfo(float ProgressMinValue, float ProgressMaxValue, const struct FString& ProgressDefinition, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetProgressInfo");

	UWB_ProgressButton_C_SetProgressInfo_Params params;
	params.ProgressMinValue = ProgressMinValue;
	params.ProgressMaxValue = ProgressMaxValue;
	params.ProgressDefinition = ProgressDefinition;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetProgressValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetProgressValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetProgressValue");

	UWB_ProgressButton_C_SetProgressValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.GetHasFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_ProgressButton_C::GetHasFocus(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.GetHasFocus");

	UWB_ProgressButton_C_GetHasFocus_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_ProgressButton.WB_ProgressButton_C.HandleIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProgressButton_C::HandleIsEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.HandleIsEnabled");

	UWB_ProgressButton_C_HandleIsEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Normal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::SetMultiState_OptionFont_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Normal");

	UWB_ProgressButton_C_SetMultiState_OptionFont_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Hovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::SetMultiState_OptionFont_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_OptionFont_Hovered");

	UWB_ProgressButton_C_SetMultiState_OptionFont_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetStateButtonInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ButtonIconColor_Normal         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ButtonIconColor_Hovered        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ButtonIconColor_Clicked        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 ButtonIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetStateButtonInfo(const struct FLinearColor& ButtonIconColor_Normal, const struct FLinearColor& ButtonIconColor_Hovered, const struct FLinearColor& ButtonIconColor_Clicked, class UObject* ButtonIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetStateButtonInfo");

	UWB_ProgressButton_C_SetStateButtonInfo_Params params;
	params.ButtonIconColor_Normal = ButtonIconColor_Normal;
	params.ButtonIconColor_Hovered = ButtonIconColor_Hovered;
	params.ButtonIconColor_Clicked = ButtonIconColor_Clicked;
	params.ButtonIcon = ButtonIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_FontInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFont*                   MultiState_Font_Normal         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               MultiState_FontFace_Normal     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MultiState_FontSize_Normal     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            MultiState_FontColor_Normal    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFont*                   MultiState_Font_Hovered        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               MultiState_FontFace_Hovered    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MultiState_FontSize_Hovered    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            MultiState_FontColor_Hovered   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetMultiState_FontInfo(class UFont* MultiState_Font_Normal, class UFontFace* MultiState_FontFace_Normal, int MultiState_FontSize_Normal, const struct FLinearColor& MultiState_FontColor_Normal, class UFont* MultiState_Font_Hovered, class UFontFace* MultiState_FontFace_Hovered, int MultiState_FontSize_Hovered, const struct FLinearColor& MultiState_FontColor_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetMultiState_FontInfo");

	UWB_ProgressButton_C_SetMultiState_FontInfo_Params params;
	params.MultiState_Font_Normal = MultiState_Font_Normal;
	params.MultiState_FontFace_Normal = MultiState_FontFace_Normal;
	params.MultiState_FontSize_Normal = MultiState_FontSize_Normal;
	params.MultiState_FontColor_Normal = MultiState_FontColor_Normal;
	params.MultiState_Font_Hovered = MultiState_Font_Hovered;
	params.MultiState_FontFace_Hovered = MultiState_FontFace_Hovered;
	params.MultiState_FontSize_Hovered = MultiState_FontSize_Hovered;
	params.MultiState_FontColor_Hovered = MultiState_FontColor_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateJustification
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::SetMultiStateJustification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateJustification");

	UWB_ProgressButton_C_SetMultiStateJustification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWB_ProgressButton_C::SetMultiStateText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetMultiStateText");

	UWB_ProgressButton_C_SetMultiStateText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.UnhoverAllOptionsButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::UnhoverAllOptionsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.UnhoverAllOptionsButton");

	UWB_ProgressButton_C_UnhoverAllOptionsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetupSizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetupSizes(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetupSizes");

	UWB_ProgressButton_C_SetupSizes_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetUser_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetUser_Focus(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetUser_Focus");

	UWB_ProgressButton_C_SetUser_Focus_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_ProgressButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct");

	UWB_ProgressButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_ProgressButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.Construct");

	UWB_ProgressButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature
// (BlueprintEvent)
void UWB_ProgressButton_C::BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature");

	UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_42_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.UnhoverProgressButton
// (BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::UnhoverProgressButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.UnhoverProgressButton");

	UWB_ProgressButton_C_UnhoverProgressButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.Construct_ProgressButton
// (BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::Construct_ProgressButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.Construct_ProgressButton");

	UWB_ProgressButton_C_Construct_ProgressButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct_ProgressButton
// (BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::PreConstruct_ProgressButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.PreConstruct_ProgressButton");

	UWB_ProgressButton_C_PreConstruct_ProgressButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_ProgressButton_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWB_ProgressButton_C::BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_ProgressButton_C_BndEvt__Button_Multistate_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature");

	UWB_ProgressButton_C_BndEvt__WB_Progress_K2Node_ComponentBoundEvent_0_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetBaseColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseBaseColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            Grad0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Grad3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetBaseColor(bool bUseBaseColor, const struct FLinearColor& Grad0, const struct FLinearColor& Grad1, const struct FLinearColor& Grad2, const struct FLinearColor& Grad3)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetBaseColor");

	UWB_ProgressButton_C_SetBaseColor_Params params;
	params.bUseBaseColor = bUseBaseColor;
	params.Grad0 = Grad0;
	params.Grad1 = Grad1;
	params.Grad2 = Grad2;
	params.Grad3 = Grad3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.SetupButtonSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseButtonSounds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*              Clicked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*              Hovered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::SetupButtonSounds(bool bUseButtonSounds, class USoundBase* Clicked, class USoundBase* Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.SetupButtonSounds");

	UWB_ProgressButton_C_SetupButtonSounds_Params params;
	params.bUseButtonSounds = bUseButtonSounds;
	params.Clicked = Clicked;
	params.Hovered = Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.MultiState_CheckUserFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_ProgressButton_C::MultiState_CheckUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.MultiState_CheckUserFocus");

	UWB_ProgressButton_C_MultiState_CheckUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.Tick");

	UWB_ProgressButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.ExecuteUbergraph_WB_ProgressButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::ExecuteUbergraph_WB_ProgressButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.ExecuteUbergraph_WB_ProgressButton");

	UWB_ProgressButton_C_ExecuteUbergraph_WB_ProgressButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_ProgressButton.WB_ProgressButton_C.OnProgressChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_ProgressButton_C::OnProgressChanged__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProgressButton.WB_ProgressButton_C.OnProgressChanged__DelegateSignature");

	UWB_ProgressButton_C_OnProgressChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
