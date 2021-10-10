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

// BlueprintGeneratedClass BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_CheckFriendFoeAndAttackableInterfaces_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CheckFriendFoeAndAttackableInterfaces.BPI_CheckFriendFoeAndAttackableInterfaces_C");
		return ptr;
	}



	void IsProjectile(bool* IsProjectile);
	void GetSelfName(struct FName* Name);
	void GetMeshAndBoneToAimFor(class UMeshComponent** Mesh, struct FName* BoneToAim);
	void IsEnemiesSideAndAttackable(bool* EnemiesSideAndAttackable, bool* JustEnemiesSideButUnconsOrBrokenOrSimilar);
	void IsOnPlayersSideAndAttackable(bool* OnPlayersSideAndAttackable, bool* JustOnPlayersSideButUnconsOrBrokenOrSimilar);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
