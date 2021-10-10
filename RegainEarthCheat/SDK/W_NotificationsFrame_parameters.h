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

// Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotificationTemplate
struct UW_NotificationsFrame_C_GetNotificationTemplate_Params
{
	TEnumAsByte<ENotificationType_ENotificationType>   Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.GetNotifications
struct UW_NotificationsFrame_C_GetNotifications_Params
{
	bool                                               IsReverse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FSNotification>                      Notifications;                                             // (Parm, OutParm)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.SendNotification
struct UW_NotificationsFrame_C_SendNotification_Params
{
	struct FSNotificationSender                        Notification;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.RemoveNotification
struct UW_NotificationsFrame_C_RemoveNotification_Params
{
	int                                                NotificationId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LogNotificationElement_C*                 NotificationWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.PreConstruct
struct UW_NotificationsFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.OpenNotificationLog
struct UW_NotificationsFrame_C_OpenNotificationLog_Params
{
	bool                                               IsHidden;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.ExecuteUbergraph_W_NotificationsFrame
struct UW_NotificationsFrame_C_ExecuteUbergraph_W_NotificationsFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.AddNewNotification__DelegateSignature
struct UW_NotificationsFrame_C_AddNewNotification__DelegateSignature_Params
{
	int                                                NotificationAmmount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationsFrame.W_NotificationsFrame_C.OnCloseNotifications__DelegateSignature
struct UW_NotificationsFrame_C_OnCloseNotifications__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
