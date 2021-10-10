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

// BlueprintGeneratedClass BPFL_EasyNotification.BPFL_EasyNotification_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_EasyNotification_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_EasyNotification.BPFL_EasyNotification_C");
		return ptr;
	}



	class UW_NotificationsFrame_C* STATIC_InitNotification(class UObject* __WorldContext);
	void STATIC_OpenNotification(bool IsHidden, class UObject* __WorldContext);
	void STATIC_SendNotification(const struct FSNotificationSender& Notification, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
