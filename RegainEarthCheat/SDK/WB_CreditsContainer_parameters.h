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

// Function WB_CreditsContainer.WB_CreditsContainer_C.LaunchCredits
struct UWB_CreditsContainer_C_LaunchCredits_Params
{
};

// Function WB_CreditsContainer.WB_CreditsContainer_C.RemoveCredits
struct UWB_CreditsContainer_C_RemoveCredits_Params
{
};

// Function WB_CreditsContainer.WB_CreditsContainer_C.ClearCreditData
struct UWB_CreditsContainer_C_ClearCreditData_Params
{
};

// Function WB_CreditsContainer.WB_CreditsContainer_C.AddCreditData
struct UWB_CreditsContainer_C_AddCreditData_Params
{
	struct FText                                       Field;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FName>                               Names;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WB_CreditsContainer.WB_CreditsContainer_C.ExecuteUbergraph_WB_CreditsContainer
struct UWB_CreditsContainer_C_ExecuteUbergraph_WB_CreditsContainer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_CreditsContainer.WB_CreditsContainer_C.OnCreditsFinished__DelegateSignature
struct UWB_CreditsContainer_C_OnCreditsFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
