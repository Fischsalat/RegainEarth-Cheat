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

// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.GetCurrentWeaponSkelMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CurrentWeaponSkelMesh          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Robot_Enemy_Pawn_C::GetCurrentWeaponSkelMesh(class USceneComponent** CurrentWeaponSkelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.GetCurrentWeaponSkelMesh");

	AAI_Robot_Enemy_Pawn_C_GetCurrentWeaponSkelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWeaponSkelMesh != nullptr)
		*CurrentWeaponSkelMesh = params.CurrentWeaponSkelMesh;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.UserConstructionScript");

	AAI_Robot_Enemy_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ReceiveBeginPlay");

	AAI_Robot_Enemy_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Robot_Enemy_Pawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ReceiveTick");

	AAI_Robot_Enemy_Pawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.Start attack Event manual
// (BlueprintCallable, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::Start_attack_Event_manual()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.Start attack Event manual");

	AAI_Robot_Enemy_Pawn_C_Start_attack_Event_manual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.StartAttack
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.StartAttack");

	AAI_Robot_Enemy_Pawn_C_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.WeaponMeshAndPropertiesHaveChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Weapon_C*            BPWeaponComponentRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Robot_Enemy_Pawn_C::WeaponMeshAndPropertiesHaveChanged(class UBP_Weapon_C* BPWeaponComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.WeaponMeshAndPropertiesHaveChanged");

	AAI_Robot_Enemy_Pawn_C_WeaponMeshAndPropertiesHaveChanged_Params params;
	params.BPWeaponComponentRef = BPWeaponComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ShootCharEffectsSingleShot
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::ShootCharEffectsSingleShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ShootCharEffectsSingleShot");

	AAI_Robot_Enemy_Pawn_C_ShootCharEffectsSingleShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime
// (Public, BlueprintCallable, BlueprintEvent)
void AAI_Robot_Enemy_Pawn_C::ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime");

	AAI_Robot_Enemy_Pawn_C_ResetMakeShortDelayBeforeShootWhenSpotPlayerNextTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ExecuteUbergraph_AI_Robot_Enemy_Pawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAI_Robot_Enemy_Pawn_C::ExecuteUbergraph_AI_Robot_Enemy_Pawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AI_Robot_Enemy_Pawn.AI_Robot_Enemy_Pawn_C.ExecuteUbergraph_AI_Robot_Enemy_Pawn");

	AAI_Robot_Enemy_Pawn_C_ExecuteUbergraph_AI_Robot_Enemy_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
