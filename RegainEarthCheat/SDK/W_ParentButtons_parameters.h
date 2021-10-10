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

// Function W_ParentButtons.W_ParentButtons_C.SetIsInNonHoverWritingMode
struct UW_ParentButtons_C_SetIsInNonHoverWritingMode_Params
{
	bool                                               NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ParentButtons.W_ParentButtons_C.SetButtonAndTextColorToButtonCategory
struct UW_ParentButtons_C_SetButtonAndTextColorToButtonCategory_Params
{
	class UTextBlock*                                  TextBlock;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentButtons.W_ParentButtons_C.OnKeyDown
struct UW_ParentButtons_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_ParentButtons.W_ParentButtons_C.OnKeyUp
struct UW_ParentButtons_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function W_ParentButtons.W_ParentButtons_C.ClearMousePosition
struct UW_ParentButtons_C_ClearMousePosition_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.SetCustomFocus
struct UW_ParentButtons_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ParentButtons.W_ParentButtons_C.SetHovered
struct UW_ParentButtons_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ParentButtons.W_ParentButtons_C.Up
struct UW_ParentButtons_C_Up_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Down
struct UW_ParentButtons_C_Down_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Left
struct UW_ParentButtons_C_Left_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Right
struct UW_ParentButtons_C_Right_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Accept
struct UW_ParentButtons_C_Accept_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Cancel
struct UW_ParentButtons_C_Cancel_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.SetFocus_Delay
struct UW_ParentButtons_C_SetFocus_Delay_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.Pause
struct UW_ParentButtons_C_Pause_Params
{
};

// Function W_ParentButtons.W_ParentButtons_C.ExecuteUbergraph_W_ParentButtons
struct UW_ParentButtons_C_ExecuteUbergraph_W_ParentButtons_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentButtons.W_ParentButtons_C.OnBack__DelegateSignature
struct UW_ParentButtons_C_OnBack__DelegateSignature_Params
{
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentButtons.W_ParentButtons_C.OnPressed__DelegateSignature
struct UW_ParentButtons_C_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ParentButtons.W_ParentButtons_C.OnHovered__DelegateSignature
struct UW_ParentButtons_C_OnHovered__DelegateSignature_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
