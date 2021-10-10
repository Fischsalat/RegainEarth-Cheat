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

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetIsServer
struct UW_ChooseMapWidget_C_SetIsServer_Params
{
	bool                                               IsServer;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetSelectedMapToUiRegardingServerOrClient
struct UW_ChooseMapWidget_C_SetSelectedMapToUiRegardingServerOrClient_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetCustomFocus
struct UW_ChooseMapWidget_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SetHovered
struct UW_ChooseMapWidget_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.RestoreValues
struct UW_ChooseMapWidget_C_RestoreValues_Params
{
	bool                                               JustForceFunctionBool;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.PreConstruct
struct UW_ChooseMapWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Construct
struct UW_ChooseMapWidget_C_Construct_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Tick
struct UW_ChooseMapWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UW_ChooseMapWidget_C_BndEvt__ComboBoxString_Map_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.SelectedMapChanged_Event_1
struct UW_ChooseMapWidget_C_SelectedMapChanged_Event_1_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.OnInitialized
struct UW_ChooseMapWidget_C_OnInitialized_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_ChooseMapWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_ChooseMapWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Left
struct UW_ChooseMapWidget_C_Left_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Right
struct UW_ChooseMapWidget_C_Right_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Accept
struct UW_ChooseMapWidget_C_Accept_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_ChooseMapWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Forward
struct UW_ChooseMapWidget_C_Forward_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.Backward
struct UW_ChooseMapWidget_C_Backward_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.MapChangedByServer
struct UW_ChooseMapWidget_C_MapChangedByServer_Params
{
};

// Function W_ChooseMapWidget.W_ChooseMapWidget_C.ExecuteUbergraph_W_ChooseMapWidget
struct UW_ChooseMapWidget_C_ExecuteUbergraph_W_ChooseMapWidget_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
