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

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetIsServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsServer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChooseMapWidget_C::SetIsServer(bool IsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetIsServer");

	UW_ChooseMapWidget_C_SetIsServer_Params params;
	params.IsServer = IsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetSelectedMapToUiRegardingServerOrClient
// (Public, BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::SetSelectedMapToUiRegardingServerOrClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetSelectedMapToUiRegardingServerOrClient");

	UW_ChooseMapWidget_C_SetSelectedMapToUiRegardingServerOrClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetCustomFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChooseMapWidget_C::SetCustomFocus(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetCustomFocus");

	UW_ChooseMapWidget_C_SetCustomFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChooseMapWidget_C::SetHovered(bool IsHovered, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetHovered");

	UW_ChooseMapWidget_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.RestoreValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           JustForceFunctionBool          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChooseMapWidget_C::RestoreValues(bool* JustForceFunctionBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.RestoreValues");

	UW_ChooseMapWidget_C_RestoreValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JustForceFunctionBool != nullptr)
		*JustForceFunctionBool = params.JustForceFunctionBool;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ChooseMapWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.PreConstruct");

	UW_ChooseMapWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChooseMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Construct");

	UW_ChooseMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChooseMapWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Tick");

	UW_ChooseMapWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChooseMapWidget_C::BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UW_ChooseMapWidget_C_BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SelectedMapChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::SelectedMapChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.SelectedMapChanged_Event_1");

	UW_ChooseMapWidget_C_SelectedMapChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_ChooseMapWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.OnInitialized");

	UW_ChooseMapWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_ChooseMapWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_ChooseMapWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_ChooseMapWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UW_ChooseMapWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Left
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Left");

	UW_ChooseMapWidget_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Right
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Right");

	UW_ChooseMapWidget_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Accept");

	UW_ChooseMapWidget_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UW_ChooseMapWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_ChooseMapWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Forward
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::Forward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Forward");

	UW_ChooseMapWidget_C_Forward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Backward
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::Backward()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.Backward");

	UW_ChooseMapWidget_C_Backward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.MapChangedByServer
// (BlueprintCallable, BlueprintEvent)
void UW_ChooseMapWidget_C::MapChangedByServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.MapChangedByServer");

	UW_ChooseMapWidget_C_MapChangedByServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ChooseMapWidget.W_ChooseMapWidget_C.ExecuteUbergraph_W_ChooseMapWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ChooseMapWidget_C::ExecuteUbergraph_W_ChooseMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ChooseMapWidget.W_ChooseMapWidget_C.ExecuteUbergraph_W_ChooseMapWidget");

	UW_ChooseMapWidget_C_ExecuteUbergraph_W_ChooseMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
