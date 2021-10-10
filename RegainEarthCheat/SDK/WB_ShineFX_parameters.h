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

// Function WB_ShineFX.WB_ShineFX_C.Construct
struct UWB_ShineFX_C_Construct_Params
{
};

// Function WB_ShineFX.WB_ShineFX_C.PreConstruct
struct UWB_ShineFX_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ShineFX.WB_ShineFX_C.UpdateShineFX
struct UWB_ShineFX_C_UpdateShineFX_Params
{
	bool                                               bEnable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_ShineFX.WB_ShineFX_C.UpdateShineColor
struct UWB_ShineFX_C_UpdateShineColor_Params
{
	struct FLinearColor                                ShineFX_BG_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Small;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ShineFX_ShineColor_Big;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_ShineFX.WB_ShineFX_C.ExecuteUbergraph_WB_ShineFX
struct UWB_ShineFX_C_ExecuteUbergraph_WB_ShineFX_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
