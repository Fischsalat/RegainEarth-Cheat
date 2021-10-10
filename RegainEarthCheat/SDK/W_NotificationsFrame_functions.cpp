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

// Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotificationTemplate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENotificationType_ENotificationType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsFrame_C::GetNotificationTemplate(TEnumAsByte<ENotificationType_ENotificationType> Type, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotificationTemplate");

	UW_NotificationsFrame_C_GetNotificationTemplate_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotifications
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReverse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSNotification>  Notifications                  (Parm, OutParm)
void UW_NotificationsFrame_C::GetNotifications(bool IsReverse, TArray<struct FSNotification>* Notifications)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotifications");

	UW_NotificationsFrame_C_GetNotifications_Params params;
	params.IsReverse = IsReverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Notifications != nullptr)
		*Notifications = params.Notifications;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.SendNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotificationSender    Notification                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UW_NotificationsFrame_C::SendNotification(const struct FSNotificationSender& Notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.SendNotification");

	UW_NotificationsFrame_C_SendNotification_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.RemoveNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NotificationId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LogNotificationElement_C* NotificationWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsFrame_C::RemoveNotification(int NotificationId, class UW_LogNotificationElement_C* NotificationWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.RemoveNotification");

	UW_NotificationsFrame_C_RemoveNotification_Params params;
	params.NotificationId = NotificationId;
	params.NotificationWidget = NotificationWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_NotificationsFrame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.PreConstruct");

	UW_NotificationsFrame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.OpenNotificationLog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_NotificationsFrame_C::OpenNotificationLog(bool IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.OpenNotificationLog");

	UW_NotificationsFrame_C_OpenNotificationLog_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.ExecuteUbergraph_W_NotificationsFrame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsFrame_C::ExecuteUbergraph_W_NotificationsFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.ExecuteUbergraph_W_NotificationsFrame");

	UW_NotificationsFrame_C_ExecuteUbergraph_W_NotificationsFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.AddNewNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NotificationAmmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_NotificationsFrame_C::AddNewNotification__DelegateSignature(int NotificationAmmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.AddNewNotification__DelegateSignature");

	UW_NotificationsFrame_C_AddNewNotification__DelegateSignature_Params params;
	params.NotificationAmmount = NotificationAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_NotificationsFrame.W_NotificationsFrame_C.OnCloseNotifications__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UW_NotificationsFrame_C::OnCloseNotifications__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_NotificationsFrame.W_NotificationsFrame_C.OnCloseNotifications__DelegateSignature");

	UW_NotificationsFrame_C_OnCloseNotifications__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
