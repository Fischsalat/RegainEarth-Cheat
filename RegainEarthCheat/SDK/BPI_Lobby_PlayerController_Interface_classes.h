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

// BlueprintGeneratedClass BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Lobby_PlayerController_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Lobby_PlayerController_Interface.BPI_Lobby_PlayerController_Interface_C");
		return ptr;
	}



	void ToClient_StartGameInterface();
	void RefreshPlayerListValuesCompletely();
	void SetReadyState(bool NewReadyState);
	void UpdatePlayerControllers(TArray<class AController*> PlayersControllerList_OnlyUseableOnServer);
	void SetPlayerListAndUpdatePlayerListValuesCompletely(TArray<class APawn*> PlayerPawnList);
	void SendChatMessage(const struct FText& TextToSend, class APlayerState* PlayerStateRefOfSender);
	void GetLobbyWidgetReference(class UW_LobbyFrame_C** LobbyWidgetLobyFrameRef);
	void ExecuteTest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
