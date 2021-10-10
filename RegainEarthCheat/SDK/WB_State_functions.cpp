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

// Function WB_State.WB_State_C.SetButtonsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::SetButtonsEnabled(bool BIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetButtonsEnabled");

	UWB_State_C_SetButtonsEnabled_Params params;
	params.BIsEnabled = BIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.SetButtonIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::SetButtonIcon(class UObject* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetButtonIcon");

	UWB_State_C_SetButtonIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.ConvertOpacityToNormal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWB_State_C::ConvertOpacityToNormal(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.ConvertOpacityToNormal");

	UWB_State_C_ConvertOpacityToNormal_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_State.WB_State_C.GetNavStateKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           Keys                           (Parm, OutParm)
void UWB_State_C::GetNavStateKeys(TArray<struct FName>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetNavStateKeys");

	UWB_State_C_GetNavStateKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function WB_State.WB_State_C.GetNavStateValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_NavState_C*>  Values                         (Parm, OutParm, ContainsInstancedReference)
void UWB_State_C::GetNavStateValues(TArray<class UWB_NavState_C*>* Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetNavStateValues");

	UWB_State_C_GetNavStateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;

}


// Function WB_State.WB_State_C.Set_FontInfoHovered
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_State_C::Set_FontInfoHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.Set_FontInfoHovered");

	UWB_State_C_Set_FontInfoHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.Set_FontInfoNormal
// (Public, BlueprintCallable, BlueprintEvent)
void UWB_State_C::Set_FontInfoNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.Set_FontInfoNormal");

	UWB_State_C_Set_FontInfoNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.HandleFontInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFontFace*               FontFace                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::HandleFontInfo(class UObject* Font, class UFontFace* FontFace, int FontSize, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.HandleFontInfo");

	UWB_State_C_HandleFontInfo_Params params;
	params.Font = Font;
	params.FontFace = FontFace;
	params.FontSize = FontSize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.HasAnyFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWB_State_C::HasAnyFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.HasAnyFocus");

	UWB_State_C_HasAnyFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_State.WB_State_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWB_State_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.OnKeyDown");

	UWB_State_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_State.WB_State_C.GetCurrentStateByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::GetCurrentStateByName(struct FName* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetCurrentStateByName");

	UWB_State_C_GetCurrentStateByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function WB_State.WB_State_C.GetCurrentStateByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWB_State_C::GetCurrentStateByIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetCurrentStateByIndex");

	UWB_State_C_GetCurrentStateByIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WB_State.WB_State_C.SetAllButtonIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::SetAllButtonIconColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetAllButtonIconColor");

	UWB_State_C_SetAllButtonIconColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.GetButtonRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Native_Button                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::GetButtonRight(class UButton** Native_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetButtonRight");

	UWB_State_C_GetButtonRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function WB_State.WB_State_C.GetButtonLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UButton*                 Native_Button                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::GetButtonLeft(class UButton** Native_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.GetButtonLeft");

	UWB_State_C_GetButtonLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Native_Button != nullptr)
		*Native_Button = params.Native_Button;

}


// Function WB_State.WB_State_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void UWB_State_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.CheckFocus");

	UWB_State_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bNativeHovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(bool bNativeHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params;
	params.bNativeHovered = bNativeHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
void UWB_State_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
// (BlueprintEvent)
void UWB_State_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature");

	UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWB_State_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.Construct");

	UWB_State_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_State_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWB_State_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
void UWB_State_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWB_State_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.InitStates
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           States                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_State_C::InitStates(TArray<struct FName> States)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.InitStates");

	UWB_State_C_InitStates_Params params;
	params.States = States;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.SetNewStateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIncrease                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::SetNewStateText(const struct FText& InText, bool bIncrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetNewStateText");

	UWB_State_C_SetNewStateText_Params params;
	params.InText = InText;
	params.bIncrease = bIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.SetStateByIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bExecute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::SetStateByIndex(int State_Index, bool bExecute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetStateByIndex");

	UWB_State_C_SetStateByIndex_Params params;
	params.State_Index = State_Index;
	params.bExecute = bExecute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.SetStateByName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   State_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bExecute                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::SetStateByName(const struct FName& State_Name, bool bExecute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.SetStateByName");

	UWB_State_C_SetStateByName_Params params;
	params.State_Name = State_Name;
	params.bExecute = bExecute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.ClickLeft
// (BlueprintCallable, BlueprintEvent)
void UWB_State_C::ClickLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.ClickLeft");

	UWB_State_C_ClickLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.ClickRight
// (BlueprintCallable, BlueprintEvent)
void UWB_State_C::ClickRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.ClickRight");

	UWB_State_C_ClickRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.HandleNavigationOverview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseNavOverview                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          NavOverviewRoom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            NavStateColor_Normal_Active    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            NavStateColor_Hovered_Active   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::HandleNavigationOverview(bool bUseNavOverview, float NavOverviewRoom, const struct FLinearColor& NavStateColor_Normal_Active, const struct FLinearColor& NavStateColor_Hovered_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.HandleNavigationOverview");

	UWB_State_C_HandleNavigationOverview_Params params;
	params.bUseNavOverview = bUseNavOverview;
	params.NavOverviewRoom = NavOverviewRoom;
	params.NavStateColor_Normal_Active = NavStateColor_Normal_Active;
	params.NavStateColor_Hovered_Active = NavStateColor_Hovered_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.CheckNavStateColor
// (BlueprintCallable, BlueprintEvent)
void UWB_State_C::CheckNavStateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.CheckNavStateColor");

	UWB_State_C_CheckNavStateColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_State_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.PreConstruct");

	UWB_State_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.Tick");

	UWB_State_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.ExecuteUbergraph_WB_State
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::ExecuteUbergraph_WB_State(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.ExecuteUbergraph_WB_State");

	UWB_State_C_ExecuteUbergraph_WB_State_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.OnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   State_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            State_Index                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_State_C::OnStateChanged__DelegateSignature(const struct FName& State_Name, int State_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.OnStateChanged__DelegateSignature");

	UWB_State_C_OnStateChanged__DelegateSignature_Params params;
	params.State_Name = State_Name;
	params.State_Index = State_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_State.WB_State_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_State_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_State.WB_State_C.OnHovered__DelegateSignature");

	UWB_State_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
