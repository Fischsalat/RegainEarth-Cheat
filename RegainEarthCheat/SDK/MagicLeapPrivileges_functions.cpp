﻿// Name: RegainEart-FirtstStrike, Version: Version-1

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

// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::STATIC_RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const struct FScriptDelegate& ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync");

	UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Params params;
	params.Privilege = Privilege;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::STATIC_RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege");

	UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Params params;
	params.Privilege = Privilege;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// MagicLeapPrivileges_EMagicLeapPrivilege Privilege                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapPrivilegesFunctionLibrary::STATIC_CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege");

	UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Params params;
	params.Privilege = Privilege;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
