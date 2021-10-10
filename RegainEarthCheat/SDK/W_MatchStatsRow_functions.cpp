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

// Function W_MatchStatsRow.W_MatchStatsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MatchStatsRow_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MatchStatsRow.W_MatchStatsRow_C.PreConstruct");

	UW_MatchStatsRow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MatchStatsRow.W_MatchStatsRow_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UW_MatchStatsRow_C::SetValue(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MatchStatsRow.W_MatchStatsRow_C.SetValue");

	UW_MatchStatsRow_C_SetValue_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_MatchStatsRow.W_MatchStatsRow_C.ExecuteUbergraph_W_MatchStatsRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MatchStatsRow_C::ExecuteUbergraph_W_MatchStatsRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_MatchStatsRow.W_MatchStatsRow_C.ExecuteUbergraph_W_MatchStatsRow");

	UW_MatchStatsRow_C_ExecuteUbergraph_W_MatchStatsRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
