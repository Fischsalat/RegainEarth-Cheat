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

// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.GetInvestigator
struct UBPI_ProjectileInterface_C_GetInvestigator_Params
{
	class APawn*                                       PawnInvestigator;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileSizeScaleFactor
struct UBPI_ProjectileInterface_C_SetProjectileSizeScaleFactor_Params
{
	float                                              SizeScaleFactor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_ProjectileInterface.BPI_ProjectileInterface_C.SetProjectileDamage
struct UBPI_ProjectileInterface_C_SetProjectileDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
