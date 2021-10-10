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

// Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__FinishedFunc
// (BlueprintEvent)
void ABP_PickupBase_C::TimelineShrinkAndRemove__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__FinishedFunc");

	ABP_PickupBase_C_TimelineShrinkAndRemove__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__UpdateFunc
// (BlueprintEvent)
void ABP_PickupBase_C::TimelineShrinkAndRemove__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.TimelineShrinkAndRemove__UpdateFunc");

	ABP_PickupBase_C_TimelineShrinkAndRemove__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__FinishedFunc
// (BlueprintEvent)
void ABP_PickupBase_C::LocationAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__FinishedFunc");

	ABP_PickupBase_C_LocationAlpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__UpdateFunc
// (BlueprintEvent)
void ABP_PickupBase_C::LocationAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.LocationAlpha__UpdateFunc");

	ABP_PickupBase_C_LocationAlpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PickupBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay");

	ABP_PickupBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.LifeTimeCounter
// (BlueprintCallable, BlueprintEvent)
void ABP_PickupBase_C::LifeTimeCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.LifeTimeCounter");

	ABP_PickupBase_C_LifeTimeCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.Multicast_StartShrinkDisapear
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_PickupBase_C::Multicast_StartShrinkDisapear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.Multicast_StartShrinkDisapear");

	ABP_PickupBase_C_Multicast_StartShrinkDisapear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.PickItUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PawnWhoPicksItUp               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PickupBase_C::PickItUp(class APawn* PawnWhoPicksItUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.PickItUp");

	ABP_PickupBase_C_PickItUp_Params params;
	params.PawnWhoPicksItUp = PawnWhoPicksItUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.Multicast_StartLocationTransitionVisualParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TransistionVisualStartPosition (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PickupBase_C::Multicast_StartLocationTransitionVisualParticle(const struct FVector& TransistionVisualStartPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.Multicast_StartLocationTransitionVisualParticle");

	ABP_PickupBase_C_Multicast_StartLocationTransitionVisualParticle_Params params;
	params.TransistionVisualStartPosition = TransistionVisualStartPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.CloseGateForTransitionVisuials
// (BlueprintCallable, BlueprintEvent)
void ABP_PickupBase_C::CloseGateForTransitionVisuials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.CloseGateForTransitionVisuials");

	ABP_PickupBase_C_CloseGateForTransitionVisuials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PickupBase_C::ExecuteUbergraph_BP_PickupBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase");

	ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PickupBase.BP_PickupBase_C.IsPickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             PickedUpControllerOnlyValidOnServer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   PickedUpPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PickupBase_C::IsPickedUp__DelegateSignature(class AController* PickedUpControllerOnlyValidOnServer, class APawn* PickedUpPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.IsPickedUp__DelegateSignature");

	ABP_PickupBase_C_IsPickedUp__DelegateSignature_Params params;
	params.PickedUpControllerOnlyValidOnServer = PickedUpControllerOnlyValidOnServer;
	params.PickedUpPawn = PickedUpPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
