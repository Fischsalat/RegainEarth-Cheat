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

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.GetInputKeyAndText
struct UW_BasicInteractionWidgetShowKeysBinding_C_GetInputKeyAndText_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FS_ActionAndKeysBind                        PossibleActionsAndTheirKeyBinds;                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Create Key Bind Widgets
struct UW_BasicInteractionWidgetShowKeysBinding_C_Create_Key_Bind_Widgets_Params
{
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.Construct
struct UW_BasicInteractionWidgetShowKeysBinding_C_Construct_Params
{
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.OnInitialized
struct UW_BasicInteractionWidgetShowKeysBinding_C_OnInitialized_Params
{
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionText
struct UW_BasicInteractionWidgetShowKeysBinding_C_SetActionText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetActionNameForInputKeySearch
struct UW_BasicInteractionWidgetShowKeysBinding_C_SetActionNameForInputKeySearch_Params
{
	TEnumAsByte<EInputKeys_BP_EInputKeys_BP>           ActionKeyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.SetTitleVisibleAndSetTitleText
struct UW_BasicInteractionWidgetShowKeysBinding_C_SetTitleVisibleAndSetTitleText_Params
{
	struct FText                                       Title;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_BasicInteractionWidgetShowKeysBinding.W_BasicInteractionWidgetShowKeysBinding_C.ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding
struct UW_BasicInteractionWidgetShowKeysBinding_C_ExecuteUbergraph_W_BasicInteractionWidgetShowKeysBinding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
