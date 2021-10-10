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

// WidgetBlueprintGeneratedClass W_Leaderboard.W_Leaderboard_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UW_Leaderboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                Players;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleTB;                                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidget*>                             CopyOfChildrenToSort;                                      // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                SortLoopCounter;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TL05[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UW_LeaderboardRow_C*>                 CopyOfChildrenLeaderBoardRowToSort;                        // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                NextHighLeaderFound;                                       // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VRAD[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_LeaderboardRow_C*                         NextlHighLeaderRowFound;                                   // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TitleLeaderboard;                                          // 0x02B0(0x0018) (Edit, BlueprintVisible)
	bool                                               ShouldPositionDisplayTheGlobalLeaderboardRanking_;         // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_15RM[0x3];                                     // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCountOfPlayersForThisBoard;                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Leaderboard.W_Leaderboard_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ClearPlayersInLeaderboard();
	void AddPlayerToLeaderboard(const struct FSLeaderboardRowData& LeaderboardRowDataStruct, TEnumAsByte<ELeaderboardTypes_ELeaderboardTypes> Leaderboardtype);
	void AddChildLeaderRowToPlayersList(class UUserWidget* ChildScoreRefToAdd);
	void UpdatePlayerAvatarAndNameOnSteamIDMatch(const struct FSteamID& SteamID, const struct FString& PlayerName, class UTexture2D* AvatarTexture);
	void ExecuteUbergraph_W_Leaderboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
