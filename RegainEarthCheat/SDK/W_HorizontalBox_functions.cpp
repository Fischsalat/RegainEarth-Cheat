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

// Function W_HorizontalBox.W_HorizontalBox_C.AddChildCustom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HorizontalBox_C::AddChildCustom(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HorizontalBox.W_HorizontalBox_C.AddChildCustom");

	UW_HorizontalBox_C_AddChildCustom_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HorizontalBox.W_HorizontalBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_HorizontalBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HorizontalBox.W_HorizontalBox_C.PreConstruct");

	UW_HorizontalBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_HorizontalBox.W_HorizontalBox_C.ExecuteUbergraph_W_HorizontalBox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_HorizontalBox_C::ExecuteUbergraph_W_HorizontalBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_HorizontalBox.W_HorizontalBox_C.ExecuteUbergraph_W_HorizontalBox");

	UW_HorizontalBox_C_ExecuteUbergraph_W_HorizontalBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
