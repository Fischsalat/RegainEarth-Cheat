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

// Function W_LogNotificationElement.W_LogNotificationElement_C.AddSubNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSNotification          Notifications                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int                            NotificationId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LogNotificationElement_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UW_LogNotificationElement_C* UW_LogNotificationElement_C::AddSubNotification(const struct FSNotification& Notifications, int NotificationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LogNotificationElement.W_LogNotificationElement_C.AddSubNotification");

	UW_LogNotificationElement_C_AddSubNotification_Params params;
	params.Notifications = Notifications;
	params.NotificationId = NotificationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function W_LogNotificationElement.W_LogNotificationElement_C.RemoveNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NotificationId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LogNotificationElement_C* NotificationWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_LogNotificationElement_C::RemoveNotification__DelegateSignature(int NotificationId, class UW_LogNotificationElement_C* NotificationWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_LogNotificationElement.W_LogNotificationElement_C.RemoveNotification__DelegateSignature");

	UW_LogNotificationElement_C_RemoveNotification__DelegateSignature_Params params;
	params.NotificationId = NotificationId;
	params.NotificationWidget = NotificationWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
