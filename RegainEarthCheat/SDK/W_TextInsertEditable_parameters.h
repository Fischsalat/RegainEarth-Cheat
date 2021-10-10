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

// Function W_TextInsertEditable.W_TextInsertEditable_C.GetEnteredText
struct UW_TextInsertEditable_C_GetEnteredText_Params
{
	struct FString                                     Text;                                                      // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.SetExampleText
struct UW_TextInsertEditable_C_SetExampleText_Params
{
	struct FText                                       InText;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.SetCustomFocus
struct UW_TextInsertEditable_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.SetHovered
struct UW_TextInsertEditable_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.PreConstruct
struct UW_TextInsertEditable_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.Tick
struct UW_TextInsertEditable_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_TextInsertEditable_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.Accept
struct UW_TextInsertEditable_C_Accept_Params
{
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.Cancel
struct UW_TextInsertEditable_C_Cancel_Params
{
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.OnTextCommitted_Event_1
struct UW_TextInsertEditable_C_OnTextCommitted_Event_1_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_TextInsertEditable.W_TextInsertEditable_C.ExecuteUbergraph_W_TextInsertEditable
struct UW_TextInsertEditable_C_ExecuteUbergraph_W_TextInsertEditable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
