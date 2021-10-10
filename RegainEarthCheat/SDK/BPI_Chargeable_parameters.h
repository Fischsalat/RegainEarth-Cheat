#pragma once

// Name: RegainEart-FirtstStrike, Version: Version-1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPI_Chargeable.BPI_Chargeable_C.OnElExpCreation
struct UBPI_Chargeable_C_OnElExpCreation_Params
{
};

// Function BPI_Chargeable.BPI_Chargeable_C.IsElExpReady
struct UBPI_Chargeable_C_IsElExpReady_Params
{
	bool                                               WasCharged;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Chargeable.BPI_Chargeable_C.ShouldTakeChargeDamage
struct UBPI_Chargeable_C_ShouldTakeChargeDamage_Params
{
	bool                                               ShouldTakeDamage;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyAllowFullChargeHits;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Chargeable.BPI_Chargeable_C.OnChargeHit
struct UBPI_Chargeable_C_OnChargeHit_Params
{
	float                                              ChargeAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
