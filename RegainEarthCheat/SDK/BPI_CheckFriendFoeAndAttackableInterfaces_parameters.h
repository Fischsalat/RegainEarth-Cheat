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

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsProjectile
struct UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsProjectile_Params
{
	bool                                               IsProjectile;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetSelfName
struct UBPI_CheckFriendFoeAndAttackableInterfaces_C_GetSelfName_Params
{
	struct FName                                       Name;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetMeshAndBoneToAimFor
struct UBPI_CheckFriendFoeAndAttackableInterfaces_C_GetMeshAndBoneToAimFor_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneToAim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsEnemiesSideAndAttackable
struct UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsEnemiesSideAndAttackable_Params
{
	bool                                               EnemiesSideAndAttackable;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustEnemiesSideButUnconsOrBrokenOrSimilar;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsOnPlayersSideAndAttackable
struct UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsOnPlayersSideAndAttackable_Params
{
	bool                                               OnPlayersSideAndAttackable;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               JustOnPlayersSideButUnconsOrBrokenOrSimilar;               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
