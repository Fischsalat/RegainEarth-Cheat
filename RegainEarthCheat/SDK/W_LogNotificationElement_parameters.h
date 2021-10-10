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

// Function W_LogNotificationElement.W_LogNotificationElement_C.AddSubNotification
struct UW_LogNotificationElement_C_AddSubNotification_Params
{
	struct FSNotification                              Notifications;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                NotificationId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LogNotificationElement_C*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_LogNotificationElement.W_LogNotificationElement_C.RemoveNotification__DelegateSignature
struct UW_LogNotificationElement_C_RemoveNotification__DelegateSignature_Params
{
	int                                                NotificationId;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LogNotificationElement_C*                 NotificationWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
