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

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.IsNotificationsEquial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSNotification          A                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FSNotification          B                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UW_NotificationsLogFrame_C::IsNotificationsEquial(const struct FSNotification& A, const struct FSNotification& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.IsNotificationsEquial");

	UW_NotificationsLogFrame_C_IsNotificationsEquial_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.SendNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotification          Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_NotificationsLogFrame_C::SendNotification(const struct FSNotification& Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.SendNotification");

	UW_NotificationsLogFrame_C_SendNotification_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.StartRemovingNotice
// (BlueprintCallable, BlueprintEvent)
void UW_NotificationsLogFrame_C::StartRemovingNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.StartRemovingNotice");

	UW_NotificationsLogFrame_C_StartRemovingNotice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.ExecuteUbergraph_W_NotificationsLogFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsLogFrame_C::ExecuteUbergraph_W_NotificationsLogFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.ExecuteUbergraph_W_NotificationsLogFrame");

	UW_NotificationsLogFrame_C_ExecuteUbergraph_W_NotificationsLogFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.AddNewNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NotificationAmmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsLogFrame_C::AddNewNotification__DelegateSignature(int NotificationAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.AddNewNotification__DelegateSignature");

	UW_NotificationsLogFrame_C_AddNewNotification__DelegateSignature_Params params;
	params.NotificationAmmount = NotificationAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
