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

// BlueprintGeneratedClass BP_SaveGame.BP_SaveGame_C
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UBP_SaveGame_C : public USaveGame
{
public:
	unsigned char                                      UnknownData_NW5I[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  PlayerPosition;                                            // 0x0030(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FTransform>                          BlocksPositions;                                           // 0x0060(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsHavePlayerPosition;                                      // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0GTS[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSPlayerInformation                         PlayerInfo;                                                // 0x0078(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SaveGame.BP_SaveGame_C");
		return ptr;
	}



	void FSetPlayerLevel(int PlayerLevel);
	void FSetPlayerScore(int PlayerScore);
	void FSetPlayerName(const struct FString& PlayerName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
