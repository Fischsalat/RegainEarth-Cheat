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

// Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnViewTriggerPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_SpawnMarker_C::GetSpawnViewTriggerPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnViewTriggerPoint");

	ABP_SpawnMarker_C_GetSpawnViewTriggerPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnPointRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_SpawnMarker_C::GetSpawnPointRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnPointRotation");

	ABP_SpawnMarker_C_GetSpawnPointRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnPointLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_SpawnMarker_C::GetSpawnPointLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMarker.BP_SpawnMarker_C.GetSpawnPointLocation");

	ABP_SpawnMarker_C_GetSpawnPointLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_SpawnMarker.BP_SpawnMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_SpawnMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMarker.BP_SpawnMarker_C.ReceiveBeginPlay");

	ABP_SpawnMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpawnMarker.BP_SpawnMarker_C.ExecuteUbergraph_BP_SpawnMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnMarker_C::ExecuteUbergraph_BP_SpawnMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMarker.BP_SpawnMarker_C.ExecuteUbergraph_BP_SpawnMarker");

	ABP_SpawnMarker_C_ExecuteUbergraph_BP_SpawnMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
