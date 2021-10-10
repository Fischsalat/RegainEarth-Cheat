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

// Function W_LobbyFrame.W_LobbyFrame_C.SetButtonsDisabled
struct UW_LobbyFrame_C_SetButtonsDisabled_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.IsReadyChecker
struct UW_LobbyFrame_C_IsReadyChecker_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.SetReadyStateToUI
struct UW_LobbyFrame_C_SetReadyStateToUI_Params
{
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LobbyFrame.W_LobbyFrame_C.ActiveWidget
struct UW_LobbyFrame_C_ActiveWidget_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_LobbyFrame.W_LobbyFrame_C.OnHovered
struct UW_LobbyFrame_C_OnHovered_Params
{
	struct FText                                       Description;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyFrame.W_LobbyFrame_C.Construct
struct UW_LobbyFrame_C_Construct_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.AddNewPlayer
struct UW_LobbyFrame_C_AddNewPlayer_Params
{
	struct FString                                     inString;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                inInt;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                       PlayerPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyFrame.W_LobbyFrame_C.ClearPlayers
struct UW_LobbyFrame_C_ClearPlayers_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature
struct UW_LobbyFrame_C_BndEvt__W_Lobby_TimerButton_K2Node_ComponentBoundEvent_95_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyFrame.W_LobbyFrame_C.OpenAdminMenu
struct UW_LobbyFrame_C_OpenAdminMenu_Params
{
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature
struct UW_LobbyFrame_C_BndEvt__W_AdminMenu_PopUp_K2Node_ComponentBoundEvent_0_OnBack__DelegateSignature_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature
struct UW_LobbyFrame_C_BndEvt__W_BoolButton_K2Node_ComponentBoundEvent_362_OnChangeValue__DelegateSignature_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
struct UW_LobbyFrame_C_BndEvt__W_Back_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
{
	struct FName                                       ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ParentButtons_C*                          ParentButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LobbyFrame.W_LobbyFrame_C.BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_LobbyFrame_C_BndEvt__Button_211_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.MapChangedByServer
struct UW_LobbyFrame_C_MapChangedByServer_Params
{
};

// Function W_LobbyFrame.W_LobbyFrame_C.ExecuteUbergraph_W_LobbyFrame
struct UW_LobbyFrame_C_ExecuteUbergraph_W_LobbyFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
