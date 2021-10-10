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

// Function BPI_ToAnimBP_Interface.BPI_ToAnimBP_Interface_C.ToggleForceDancingAnimBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetDancing_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ToAnimBP_Interface_C::ToggleForceDancingAnimBP(bool SetDancing_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ToAnimBP_Interface.BPI_ToAnimBP_Interface_C.ToggleForceDancingAnimBP");

	UBPI_ToAnimBP_Interface_C_ToggleForceDancingAnimBP_Params params;
	params.SetDancing_ = SetDancing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
