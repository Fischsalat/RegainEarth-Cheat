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

// Function BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C.ReceiveSmartLinkReached
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Destination                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JumpNavLinkTwoWay_BaseClass_C::ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C.ReceiveSmartLinkReached");

	ABP_JumpNavLinkTwoWay_BaseClass_C_ReceiveSmartLinkReached_Params params;
	params.Agent = Agent;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C.ExecuteUbergraph_BP_JumpNavLinkTwoWay_BaseClass
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JumpNavLinkTwoWay_BaseClass_C::ExecuteUbergraph_BP_JumpNavLinkTwoWay_BaseClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JumpNavLinkTwoWay_BaseClass.BP_JumpNavLinkTwoWay_BaseClass_C.ExecuteUbergraph_BP_JumpNavLinkTwoWay_BaseClass");

	ABP_JumpNavLinkTwoWay_BaseClass_C_ExecuteUbergraph_BP_JumpNavLinkTwoWay_BaseClass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
