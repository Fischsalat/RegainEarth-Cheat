// Name: RegainEart-FirtstStrike, Version: Version-1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.GetCurrentMenuRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             CurrentMenuWidget              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerControllerSessionsAndGlobalInterface_C::GetCurrentMenuRef(class UUserWidget** CurrentMenuWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.GetCurrentMenuRef");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_GetCurrentMenuRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentMenuWidget != nullptr)
		*CurrentMenuWidget = params.CurrentMenuWidget;

}


// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.Client_KickDestroySessionInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_PlayerControllerSessionsAndGlobalInterface_C::Client_KickDestroySessionInterface(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.Client_KickDestroySessionInterface");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_Client_KickDestroySessionInterface_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.DestroySessionsWithMessagesInterface
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerControllerSessionsAndGlobalInterface_C::DestroySessionsWithMessagesInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.DestroySessionsWithMessagesInterface");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_DestroySessionsWithMessagesInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SendNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotificationSender    Notify                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_PlayerControllerSessionsAndGlobalInterface_C::SendNotification(const struct FSNotificationSender& Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SendNotification");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_SendNotification_Params params;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SetIsReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReady                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_PlayerControllerSessionsAndGlobalInterface_C::SetIsReady(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.SetIsReady");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_SetIsReady_Params params;
	params.IsReady = IsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.IsServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBPI_PlayerControllerSessionsAndGlobalInterface_C::IsServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C.IsServer");

	UBPI_PlayerControllerSessionsAndGlobalInterface_C_IsServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
