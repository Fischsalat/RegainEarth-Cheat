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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_NotificationsFrame.W_NotificationsFrame_C
// 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
class UW_NotificationsFrame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            NewAnimation_2;                                            // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NotificationsLogFrame_C*                  W_NotificationsLogFrame;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCloseNotifications;                                      // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSNotification>                      Notifications;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    AddNewNotification;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              NotificationAutoRemoveTimer;                               // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLogOpened;                                               // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsReverse;                                                 // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6UUB[0x2];                                     // 0x02B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSNotificationTemplates>             NotificationTemplates;                                     // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NotificationsFrame.W_NotificationsFrame_C");
		return ptr;
	}



	void GetNotificationTemplate(TEnumAsByte<ENotificationType_ENotificationType> Type, struct FLinearColor* Color);
	void GetNotifications(bool IsReverse, TArray<struct FSNotification>* Notifications);
	void SendNotification(const struct FSNotificationSender& Notification);
	void RemoveNotification(int NotificationId, class UW_LogNotificationElement_C* NotificationWidget);
	void PreConstruct(bool IsDesignTime);
	void OpenNotificationLog(bool IsHidden);
	void ExecuteUbergraph_W_NotificationsFrame(int EntryPoint);
	void AddNewNotification__DelegateSignature(int NotificationAmmount);
	void OnCloseNotifications__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
