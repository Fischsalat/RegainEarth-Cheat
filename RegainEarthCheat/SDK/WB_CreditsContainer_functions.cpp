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

// Function WB_CreditsContainer.WB_CreditsContainer_C.LaunchCredits
// (BlueprintCallable, BlueprintEvent)
void UWB_CreditsContainer_C::LaunchCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.LaunchCredits");

	UWB_CreditsContainer_C_LaunchCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CreditsContainer.WB_CreditsContainer_C.RemoveCredits
// (BlueprintCallable, BlueprintEvent)
void UWB_CreditsContainer_C::RemoveCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.RemoveCredits");

	UWB_CreditsContainer_C_RemoveCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CreditsContainer.WB_CreditsContainer_C.ClearCreditData
// (BlueprintCallable, BlueprintEvent)
void UWB_CreditsContainer_C::ClearCreditData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.ClearCreditData");

	UWB_CreditsContainer_C_ClearCreditData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CreditsContainer.WB_CreditsContainer_C.AddCreditData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Field                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FName>           Names                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWB_CreditsContainer_C::AddCreditData(const struct FText& Field, TArray<struct FName> Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.AddCreditData");

	UWB_CreditsContainer_C_AddCreditData_Params params;
	params.Field = Field;
	params.Names = Names;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CreditsContainer.WB_CreditsContainer_C.ExecuteUbergraph_WB_CreditsContainer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_CreditsContainer_C::ExecuteUbergraph_WB_CreditsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.ExecuteUbergraph_WB_CreditsContainer");

	UWB_CreditsContainer_C_ExecuteUbergraph_WB_CreditsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WB_CreditsContainer.WB_CreditsContainer_C.OnCreditsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWB_CreditsContainer_C::OnCreditsFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CreditsContainer.WB_CreditsContainer_C.OnCreditsFinished__DelegateSignature");

	UWB_CreditsContainer_C_OnCreditsFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
