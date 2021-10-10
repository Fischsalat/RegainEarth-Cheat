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

// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsProjectile                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_CheckFriendFoeAndAttackableInterfaces_C::IsProjectile(bool* IsProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsProjectile");

	UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsProjectile != nullptr)
		*IsProjectile = params.IsProjectile;

}


// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetSelfName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_CheckFriendFoeAndAttackableInterfaces_C::GetSelfName(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetSelfName");

	UBPI_CheckFriendFoeAndAttackableInterfaces_C_GetSelfName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetMeshAndBoneToAimFor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneToAim                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_CheckFriendFoeAndAttackableInterfaces_C::GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.GetMeshAndBoneToAimFor");

	UBPI_CheckFriendFoeAndAttackableInterfaces_C_GetMeshAndBoneToAimFor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (BoneToAim != nullptr)
		*BoneToAim = params.BoneToAim;

}


// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsEnemiesSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnemiesSideAndAttackable       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustEnemiesSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_CheckFriendFoeAndAttackableInterfaces_C::IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsEnemiesSideAndAttackable");

	UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsEnemiesSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EnemiesSideAndAttackable != nullptr)
		*EnemiesSideAndAttackable = params.EnemiesSideAndAttackable;
	if (JustEnemiesSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustEnemiesSideButUnconsOrBrokenOrSimilar = params.JustEnemiesSideButUnconsOrBrokenOrSimilar;

}


// Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsOnPlayersSideAndAttackable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnPlayersSideAndAttackable     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           JustOnPlayersSideButUnconsOrBrokenOrSimilar (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_CheckFriendFoeAndAttackableInterfaces_C::IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C.IsOnPlayersSideAndAttackable");

	UBPI_CheckFriendFoeAndAttackableInterfaces_C_IsOnPlayersSideAndAttackable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OnPlayersSideAndAttackable != nullptr)
		*OnPlayersSideAndAttackable = params.OnPlayersSideAndAttackable;
	if (JustOnPlayersSideButUnconsOrBrokenOrSimilar != nullptr)
		*JustOnPlayersSideButUnconsOrBrokenOrSimilar = params.JustOnPlayersSideButUnconsOrBrokenOrSimilar;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
