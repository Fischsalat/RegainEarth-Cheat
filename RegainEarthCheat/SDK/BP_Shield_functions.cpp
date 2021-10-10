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

// Function BP_Shield.BP_Shield_C.OnRep_ShieldTypeColor
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::OnRep_ShieldTypeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.OnRep_ShieldTypeColor");

	UBP_Shield_C_OnRep_ShieldTypeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.AdjustShieldVisualsToCurrentShieldAmount
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::AdjustShieldVisualsToCurrentShieldAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.AdjustShieldVisualsToCurrentShieldAmount");

	UBP_Shield_C_AdjustShieldVisualsToCurrentShieldAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.OnRep_CurrentShieldAmount
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::OnRep_CurrentShieldAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.OnRep_CurrentShieldAmount");

	UBP_Shield_C_OnRep_CurrentShieldAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.ApplyDamageToShield_CallOnServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TakenDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SkipShowingHitEffect           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          RestDamageNotShieldAbsorbed    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Shield_C::ApplyDamageToShield_CallOnServer(float TakenDamage, class UDamageType* DamageType, bool SkipShowingHitEffect, float* RestDamageNotShieldAbsorbed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.ApplyDamageToShield_CallOnServer");

	UBP_Shield_C_ApplyDamageToShield_CallOnServer_Params params;
	params.TakenDamage = TakenDamage;
	params.DamageType = DamageType;
	params.SkipShowingHitEffect = SkipShowingHitEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RestDamageNotShieldAbsorbed != nullptr)
		*RestDamageNotShieldAbsorbed = params.RestDamageNotShieldAbsorbed;

}


// Function BP_Shield.BP_Shield_C.Server_CreateBodyShieldOnSelf
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxShieldAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DestroyShieldAfterDuration     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ShieldTypeColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Shield_C::Server_CreateBodyShieldOnSelf(float MaxShieldAmount, float DestroyShieldAfterDuration, const struct FVector& ShieldTypeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.Server_CreateBodyShieldOnSelf");

	UBP_Shield_C_Server_CreateBodyShieldOnSelf_Params params;
	params.MaxShieldAmount = MaxShieldAmount;
	params.DestroyShieldAfterDuration = DestroyShieldAfterDuration;
	params.ShieldTypeColor = ShieldTypeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.DoShieldStartAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::DoShieldStartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.DoShieldStartAnimation");

	UBP_Shield_C_DoShieldStartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.Multicast_DoHitAnimation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::Multicast_DoHitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.Multicast_DoHitAnimation");

	UBP_Shield_C_Multicast_DoHitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.SpawnShieldVisuals
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::SpawnShieldVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.SpawnShieldVisuals");

	UBP_Shield_C_SpawnShieldVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.RemoveShieldAnimation
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::RemoveShieldAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.RemoveShieldAnimation");

	UBP_Shield_C_RemoveShieldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.StopDoHitAnimationVisuals
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::StopDoHitAnimationVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.StopDoHitAnimationVisuals");

	UBP_Shield_C_StopDoHitAnimationVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.DestoryShieldMesh
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::DestoryShieldMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.DestoryShieldMesh");

	UBP_Shield_C_DestoryShieldMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.StopDoRemoveAnimationVisuals
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::StopDoRemoveAnimationVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.StopDoRemoveAnimationVisuals");

	UBP_Shield_C_StopDoRemoveAnimationVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Shield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.ReceiveBeginPlay");

	UBP_Shield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.ShieldVisualAnimState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Shield_C::ShieldVisualAnimState_Event(TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.ShieldVisualAnimState_Event");

	UBP_Shield_C_ShieldVisualAnimState_Event_Params params;
	params.ShieldVisualAnimState = ShieldVisualAnimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.StopSpawnShieldAnimationVisuals
// (BlueprintCallable, BlueprintEvent)
void UBP_Shield_C::StopSpawnShieldAnimationVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.StopSpawnShieldAnimationVisuals");

	UBP_Shield_C_StopSpawnShieldAnimationVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.ExecuteUbergraph_BP_Shield
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Shield_C::ExecuteUbergraph_BP_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.ExecuteUbergraph_BP_Shield");

	UBP_Shield_C_ExecuteUbergraph_BP_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Shield.BP_Shield_C.ShieldVisualAnimStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Shield_C::ShieldVisualAnimStateChange__DelegateSignature(TEnumAsByte<EImportantShieldAnimStates_EImportantShieldAnimStates> ShieldVisualAnimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield.BP_Shield_C.ShieldVisualAnimStateChange__DelegateSignature");

	UBP_Shield_C_ShieldVisualAnimStateChange__DelegateSignature_Params params;
	params.ShieldVisualAnimState = ShieldVisualAnimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
