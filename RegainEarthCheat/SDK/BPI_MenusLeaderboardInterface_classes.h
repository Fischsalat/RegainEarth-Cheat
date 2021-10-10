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

// BlueprintGeneratedClass BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_MenusLeaderboardInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MenusLeaderboardInterface.BPI_MenusLeaderboardInterface_C");
		return ptr;
	}



	void GetLeaderBoardFrame(class UW_LeaderboardFrame_C** LeaderBoardFrame);
	void UpdatePlayerAvatarAndNameOnAllBoardsWhereSteamIdIsUsed(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
