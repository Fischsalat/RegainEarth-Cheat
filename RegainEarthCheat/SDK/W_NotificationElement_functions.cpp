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

// Function W_NotificationElement.W_NotificationElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_NotificationElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationElement.W_NotificationElement_C.Construct");

	UW_NotificationElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationElement.W_NotificationElement_C.RemoveNotify
// (BlueprintCallable, BlueprintEvent)
void UW_NotificationElement_C::RemoveNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationElement.W_NotificationElement_C.RemoveNotify");

	UW_NotificationElement_C_RemoveNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationElement.W_NotificationElement_C.ExecuteUbergraph_W_NotificationElement
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationElement_C::ExecuteUbergraph_W_NotificationElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationElement.W_NotificationElement_C.ExecuteUbergraph_W_NotificationElement");

	UW_NotificationElement_C_ExecuteUbergraph_W_NotificationElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
