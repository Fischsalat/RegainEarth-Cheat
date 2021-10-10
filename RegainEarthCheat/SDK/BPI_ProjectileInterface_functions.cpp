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

// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.GetInvestigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnInvestigator               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ProjectileInterface_C::GetInvestigator(class APawn** PawnInvestigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.GetInvestigator");

	UBPI_ProjectileInterface_C_GetInvestigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PawnInvestigator != nullptr)
		*PawnInvestigator = params.PawnInvestigator;

}


// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileSizeScaleFactor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SizeScaleFactor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ProjectileInterface_C::SetProjectileSizeScaleFactor(float SizeScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileSizeScaleFactor");

	UBPI_ProjectileInterface_C_SetProjectileSizeScaleFactor_Params params;
	params.SizeScaleFactor = SizeScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ProjectileInterface_C::SetProjectileDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileDamage");

	UBPI_ProjectileInterface_C_SetProjectileDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
