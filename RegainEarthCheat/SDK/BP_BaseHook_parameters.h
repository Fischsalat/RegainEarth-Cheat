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

// Function BP_BaseHook.BP_BaseHook_C.HookAction
struct ABP_BaseHook_C_HookAction_Params
{
};

// Function BP_BaseHook.BP_BaseHook_C.UnhookAction
struct ABP_BaseHook_C_UnhookAction_Params
{
};

// Function BP_BaseHook.BP_BaseHook_C.LadleClose
struct ABP_BaseHook_C_LadleClose_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseHook.BP_BaseHook_C.LadleOpen
struct ABP_BaseHook_C_LadleOpen_Params
{
	bool                                               Enable;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseHook.BP_BaseHook_C.ExecuteUbergraph_BP_BaseHook
struct ABP_BaseHook_C_ExecuteUbergraph_BP_BaseHook_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
