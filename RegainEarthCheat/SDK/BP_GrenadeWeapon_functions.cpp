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

// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.CheckWeaponReloadPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Possible_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GrenadeWeapon_C::CheckWeaponReloadPossible(bool* Possible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.CheckWeaponReloadPossible");

	UBP_GrenadeWeapon_C_CheckWeaponReloadPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Possible_ != nullptr)
		*Possible_ = params.Possible_;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Is Allowed to Throw Grenade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GrenadeWeapon_C::Is_Allowed_to_Throw_Grenade(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Is Allowed to Throw Grenade");

	UBP_GrenadeWeapon_C_Is_Allowed_to_Throw_Grenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartExpandToFullSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::StartExpandToFullSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartExpandToFullSize");

	UBP_GrenadeWeapon_C_StartExpandToFullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartShrinkToSmallSize
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::StartShrinkToSmallSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartShrinkToSmallSize");

	UBP_GrenadeWeapon_C_StartShrinkToSmallSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeThrow_Pressed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::GrenadeThrow_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeThrow_Pressed");

	UBP_GrenadeWeapon_C_GrenadeThrow_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Server_SpawnGrenadeProjectile_Replicated
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int                            EquipedGrenadeAmount           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GrenadeWeapon_C::Server_SpawnGrenadeProjectile_Replicated(const struct FTransform& SpawnTransform, int EquipedGrenadeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Server_SpawnGrenadeProjectile_Replicated");

	UBP_GrenadeWeapon_C_Server_SpawnGrenadeProjectile_Replicated_Params params;
	params.SpawnTransform = SpawnTransform;
	params.EquipedGrenadeAmount = EquipedGrenadeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartTrajectoryBeam
// (BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::StartTrajectoryBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StartTrajectoryBeam");

	UBP_GrenadeWeapon_C_StartTrajectoryBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StopTrajectoryBeam
// (BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::StopTrajectoryBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.StopTrajectoryBeam");

	UBP_GrenadeWeapon_C_StopTrajectoryBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.UpdateTrajectoryBeam
// (BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::UpdateTrajectoryBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.UpdateTrajectoryBeam");

	UBP_GrenadeWeapon_C_UpdateTrajectoryBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Finished_SetClipFull
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Reload_Finished_SetClipFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Finished_SetClipFull");

	UBP_GrenadeWeapon_C_Reload_Finished_SetClipFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Clip_Drop
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Clip_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Clip_Drop");

	UBP_GrenadeWeapon_C_Clip_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeConstructionScriptManual
// (BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::GrenadeConstructionScriptManual()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.GrenadeConstructionScriptManual");

	UBP_GrenadeWeapon_C_GrenadeConstructionScriptManual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Change_ShootingMode
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Change_ShootingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Change_ShootingMode");

	UBP_GrenadeWeapon_C_Change_ShootingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Released
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Shoot_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Released");

	UBP_GrenadeWeapon_C_Shoot_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Presssed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Shoot_Presssed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Shoot_Presssed");

	UBP_GrenadeWeapon_C_Shoot_Presssed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Interrupt
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Reload_Interrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Interrupt");

	UBP_GrenadeWeapon_C_Reload_Interrupt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Start
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_GrenadeWeapon_C::Reload_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.Reload_Start");

	UBP_GrenadeWeapon_C_Reload_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.ExecuteUbergraph_BP_GrenadeWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GrenadeWeapon_C::ExecuteUbergraph_BP_GrenadeWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GrenadeWeapon.BP_GrenadeWeapon_C.ExecuteUbergraph_BP_GrenadeWeapon");

	UBP_GrenadeWeapon_C_ExecuteUbergraph_BP_GrenadeWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
