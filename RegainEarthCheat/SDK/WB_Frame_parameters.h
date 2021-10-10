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

// Function WB_Frame.WB_Frame_C.HasColor
struct UWB_Frame_C_HasColor_Params
{
	struct FLinearColor                                InColor;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WB_Frame.WB_Frame_C.Set_ShineColor
struct UWB_Frame_C_Set_ShineColor_Params
{
	struct FLinearColor                                FrameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Frame.WB_Frame_C.Set_FrameColor
struct UWB_Frame_C_Set_FrameColor_Params
{
	struct FLinearColor                                FrameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Frame.WB_Frame_C.PreConstruct
struct UWB_Frame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_Frame.WB_Frame_C.Construct
struct UWB_Frame_C_Construct_Params
{
};

// Function WB_Frame.WB_Frame_C.OnHovered
struct UWB_Frame_C_OnHovered_Params
{
};

// Function WB_Frame.WB_Frame_C.OnClicked
struct UWB_Frame_C_OnClicked_Params
{
};

// Function WB_Frame.WB_Frame_C.OnUnhovered
struct UWB_Frame_C_OnUnhovered_Params
{
};

// Function WB_Frame.WB_Frame_C.OnDisabled
struct UWB_Frame_C_OnDisabled_Params
{
};

// Function WB_Frame.WB_Frame_C.UpdateFrameThickness
struct UWB_Frame_C_UpdateFrameThickness_Params
{
	float                                              FrameThickness;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_Frame.WB_Frame_C.ExecuteUbergraph_WB_Frame
struct UWB_Frame_C_ExecuteUbergraph_WB_Frame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
