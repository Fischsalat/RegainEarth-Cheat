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

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.IsNotificationsEquial
struct UW_NotificationsLogFrame_C_IsNotificationsEquial_Params
{
	struct FSNotification                              A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FSNotification                              B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.SendNotification
struct UW_NotificationsLogFrame_C_SendNotification_Params
{
	struct FSNotification                              Notification;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.StartRemovingNotice
struct UW_NotificationsLogFrame_C_StartRemovingNotice_Params
{
};

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.ExecuteUbergraph_W_NotificationsLogFrame
struct UW_NotificationsLogFrame_C_ExecuteUbergraph_W_NotificationsLogFrame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_NotificationsLogFrame.W_NotificationsLogFrame_C.AddNewNotification__DelegateSignature
struct UW_NotificationsLogFrame_C_AddNewNotification__DelegateSignature_Params
{
	int                                                NotificationAmmount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
