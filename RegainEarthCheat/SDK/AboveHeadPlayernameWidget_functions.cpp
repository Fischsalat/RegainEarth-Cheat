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

// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutColorDEPR
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BleedOutTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BleedOutCounter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAboveHeadPlayernameWidget_C::SetBleedOutColorDEPR(float BleedOutTime, float BleedOutCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutColorDEPR");

	UAboveHeadPlayernameWidget_C_SetBleedOutColorDEPR_Params params;
	params.BleedOutTime = BleedOutTime;
	params.BleedOutCounter = BleedOutCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.HideSelf
// (BlueprintCallable, BlueprintEvent)
void UAboveHeadPlayernameWidget_C::HideSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.HideSelf");

	UAboveHeadPlayernameWidget_C_HideSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAboveHeadPlayernameWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.Construct");

	UAboveHeadPlayernameWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetReviveSignActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAboveHeadPlayernameWidget_C::SetReviveSignActive(bool SetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetReviveSignActive");

	UAboveHeadPlayernameWidget_C_SetReviveSignActive_Params params;
	params.SetActive = SetActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UAboveHeadPlayernameWidget_C::SetPlayerName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetPlayerName");

	UAboveHeadPlayernameWidget_C_SetPlayerName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxBleetOutTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ActualBleetOutTime             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAboveHeadPlayernameWidget_C::SetBleedOutValues(float MaxBleetOutTime, float ActualBleetOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.SetBleedOutValues");

	UAboveHeadPlayernameWidget_C_SetBleedOutValues_Params params;
	params.MaxBleetOutTime = MaxBleetOutTime;
	params.ActualBleetOutTime = ActualBleetOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.ExecuteUbergraph_AboveHeadPlayernameWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAboveHeadPlayernameWidget_C::ExecuteUbergraph_AboveHeadPlayernameWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AboveHeadPlayernameWidget.AboveHeadPlayernameWidget_C.ExecuteUbergraph_AboveHeadPlayernameWidget");

	UAboveHeadPlayernameWidget_C_ExecuteUbergraph_AboveHeadPlayernameWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
