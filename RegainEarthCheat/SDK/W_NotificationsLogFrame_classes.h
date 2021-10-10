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

// WidgetBlueprintGeneratedClass W_NotificationsLogFrame.W_NotificationsLogFrame_C
// 0x0045 (FullSize[0x02A5] - InheritedSize[0x0260])
class UW_NotificationsLogFrame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSNotification>                      Notifications;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    AddNewNotification;                                        // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UW_NotificationElement_C*>            NotificationWidgets;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                              NotificationAutoRemoveTimer;                               // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsReverse;                                                 // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_NotificationsLogFrame.W_NotificationsLogFrame_C");
		return ptr;
	}



	bool IsNotificationsEquial(const struct FSNotification& A, const struct FSNotification& B);
	void SendNotification(const struct FSNotification& Notification);
	void StartRemovingNotice();
	void ExecuteUbergraph_W_NotificationsLogFrame(int EntryPoint);
	void AddNewNotification__DelegateSignature(int NotificationAmmount);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
