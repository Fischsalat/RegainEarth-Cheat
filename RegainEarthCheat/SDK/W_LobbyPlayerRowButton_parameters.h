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

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetCustomFocus
struct UW_LobbyPlayerRowButton_C_SetCustomFocus_Params
{
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.SetHovered
struct UW_LobbyPlayerRowButton_C_SetHovered_Params
{
	bool                                               IsHovered;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Tick
struct UW_LobbyPlayerRowButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_LobbyPlayerRowButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Accept
struct UW_LobbyPlayerRowButton_C_Accept_Params
{
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.Construct
struct UW_LobbyPlayerRowButton_C_Construct_Params
{
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.ExecuteUbergraph_W_LobbyPlayerRowButton
struct UW_LobbyPlayerRowButton_C_ExecuteUbergraph_W_LobbyPlayerRowButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyPlayerRowButton.W_LobbyPlayerRowButton_C.OnAdminMenu__DelegateSignature
struct UW_LobbyPlayerRowButton_C_OnAdminMenu__DelegateSignature_Params
{
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
