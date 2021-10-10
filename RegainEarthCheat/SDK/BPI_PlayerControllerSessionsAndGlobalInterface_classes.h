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

// BlueprintGeneratedClass BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerControllerSessionsAndGlobalInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerControllerSessionsAndGlobalInterface.BPI_PlayerControllerSessionsAndGlobalInterface_C");
		return ptr;
	}



	void GetCurrentMenuRef(class UUserWidget** CurrentMenuWidget);
	void Client_KickDestroySessionInterface(const struct FString& Message);
	void DestroySessionsWithMessagesInterface();
	void SendNotification(const struct FSNotificationSender& Notify);
	void SetIsReady(bool IsReady);
	bool IsServer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
