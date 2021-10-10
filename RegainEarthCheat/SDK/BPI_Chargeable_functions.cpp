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

// Function BPI_Chargeable.BPI_Chargeable_C.OnElExpCreation
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Chargeable_C::OnElExpCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Chargeable.BPI_Chargeable_C.OnElExpCreation");

	UBPI_Chargeable_C_OnElExpCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Chargeable.BPI_Chargeable_C.IsElExpReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasCharged                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Chargeable_C::IsElExpReady(bool* WasCharged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Chargeable.BPI_Chargeable_C.IsElExpReady");

	UBPI_Chargeable_C_IsElExpReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasCharged != nullptr)
		*WasCharged = params.WasCharged;

}


// Function BPI_Chargeable.BPI_Chargeable_C.ShouldTakeChargeDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldTakeDamage               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OnlyAllowFullChargeHits        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Chargeable_C::ShouldTakeChargeDamage(bool* ShouldTakeDamage, bool* OnlyAllowFullChargeHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Chargeable.BPI_Chargeable_C.ShouldTakeChargeDamage");

	UBPI_Chargeable_C_ShouldTakeChargeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldTakeDamage != nullptr)
		*ShouldTakeDamage = params.ShouldTakeDamage;
	if (OnlyAllowFullChargeHits != nullptr)
		*OnlyAllowFullChargeHits = params.OnlyAllowFullChargeHits;

}


// Function BPI_Chargeable.BPI_Chargeable_C.OnChargeHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChargeAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Chargeable_C::OnChargeHit(float ChargeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Chargeable.BPI_Chargeable_C.OnChargeHit");

	UBPI_Chargeable_C_OnChargeHit_Params params;
	params.ChargeAmount = ChargeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
