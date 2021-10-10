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

// Function BPFL_NavigationAndMovement.BPFL_NavigationAndMovement_C.CalculateNeededVeloForJump
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFL_NavigationAndMovement_C::STATIC_CalculateNeededVeloForJump(const struct FVector& DestLocation, const struct FVector& StartLocation, float Duration, class UObject* __WorldContext, struct FVector* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_NavigationAndMovement.BPFL_NavigationAndMovement_C.CalculateNeededVeloForJump");

	UBPFL_NavigationAndMovement_C_CalculateNeededVeloForJump_Params params;
	params.DestLocation = DestLocation;
	params.StartLocation = StartLocation;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
