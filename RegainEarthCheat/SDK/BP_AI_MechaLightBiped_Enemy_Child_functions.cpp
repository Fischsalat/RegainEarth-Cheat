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

// Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_MechaLightBiped_Enemy_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.UserConstructionScript");

	ABP_AI_MechaLightBiped_Enemy_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AI_MechaLightBiped_Enemy_Child_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.ReceiveBeginPlay");

	ABP_AI_MechaLightBiped_Enemy_Child_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.ExecuteUbergraph_BP_AI_MechaLightBiped_Enemy_Child
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_MechaLightBiped_Enemy_Child_C::ExecuteUbergraph_BP_AI_MechaLightBiped_Enemy_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_MechaLightBiped_Enemy_Child.BP_AI_MechaLightBiped_Enemy_Child_C.ExecuteUbergraph_BP_AI_MechaLightBiped_Enemy_Child");

	ABP_AI_MechaLightBiped_Enemy_Child_C_ExecuteUbergraph_BP_AI_MechaLightBiped_Enemy_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
