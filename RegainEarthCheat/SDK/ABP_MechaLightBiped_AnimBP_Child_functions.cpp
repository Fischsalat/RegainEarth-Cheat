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

// Function ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_MechaLightBiped_AnimBP_Child_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C.BlueprintUpdateAnimation");

	UABP_MechaLightBiped_AnimBP_Child_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C.ExecuteUbergraph_ABP_MechaLightBiped_AnimBP_Child
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_MechaLightBiped_AnimBP_Child_C::ExecuteUbergraph_ABP_MechaLightBiped_AnimBP_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MechaLightBiped_AnimBP_Child.ABP_MechaLightBiped_AnimBP_Child_C.ExecuteUbergraph_ABP_MechaLightBiped_AnimBP_Child");

	UABP_MechaLightBiped_AnimBP_Child_C_ExecuteUbergraph_ABP_MechaLightBiped_AnimBP_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
