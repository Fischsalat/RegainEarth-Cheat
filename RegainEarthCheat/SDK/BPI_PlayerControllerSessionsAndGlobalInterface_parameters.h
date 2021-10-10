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

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.GetCurrentMenuRef
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_GetCurrentMenuRef_Params
{
	class UUserWidget*                                 CurrentMenuWidget;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.Client_KickDestroySessionInterface
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_Client_KickDestroySessionInterface_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.DestroySessionsWithMessagesInterface
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_DestroySessionsWithMessagesInterface_Params
{
};

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SendNotification
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_SendNotification_Params
{
	struct FSNotificationSender                        Notify;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SetIsReady
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_SetIsReady_Params
{
	bool                                               IsReady;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.IsServer
struct UBPI_PlayerControllerSessionsAndGlobalInterface_C_IsServer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
