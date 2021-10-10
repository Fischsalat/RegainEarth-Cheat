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

// Function BP_Cargo.BP_Cargo_C.AddImpulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bVelChange                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Cargo_C::AddImpulse(const struct FVector& Impulse, bool bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cargo.BP_Cargo_C.AddImpulse");

	ABP_Cargo_C_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cargo.BP_Cargo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Cargo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cargo.BP_Cargo_C.UserConstructionScript");

	ABP_Cargo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
