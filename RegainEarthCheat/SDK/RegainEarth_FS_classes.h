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

// Class RegainEarth_FS.All_Characters_Base_Class
// 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
class AAll_Characters_Base_Class : public ACharacter
{
public:
	unsigned char                                      UnknownData_KDN3[0x7];                                     // 0x04B8(0x0007) Fix Super Size
	RegainEarth_FS_EStateOfWalkSpeed                   StateOfWalkSpeedt;                                         // 0x04BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RegainEarth_FS_ECharacterGender                    StateOfCharacterGender;                                    // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNIN[0x7];                                     // 0x04C1(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.All_Characters_Base_Class");
		return ptr;
	}



};

// Class RegainEarth_FS.BPFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.BPFunctionLibrary_C");
		return ptr;
	}



	bool STATIC_SwitchSignYAxisValueOfCurveVector(class UCurveVector* CurveVector, bool SwitchToNegative);
	bool STATIC_SetSightRangeByAIPerceptionComponent(class UAIPerceptionComponent* AIPerceptionComponent, float SightRange);
	bool STATIC_SetSightRangeByAiController(class AAIController* Controller, float SightRange);
	bool STATIC_SetHearingRangeByAIPerceptionComponent(class UAIPerceptionComponent* AIPerceptionComponent, float HearingRange);
	bool STATIC_IsStandalone();
	bool STATIC_IsNonNetworkGame();
	struct FString STATIC_GetWorldType();
	class UWidget* STATIC_GetRootWidgetBP(class UUserWidget* PUserWidget);
	struct FString STATIC_GetNetMode();
	class ANavigationData* STATIC_GetNavDataForClass_NotWorking(class UObject* WorldContextObject, class UClass* InActorClass);
	class ANavigationData* STATIC_GetNavDataForAgentNameUE4(class UObject* WorldContextObject, const struct FName& AgentName);
	class ANavigationData* STATIC_GetNavDataForActorUE4(class UObject* WorldContextObject, class AActor* InActor);
	class ANavigationData* STATIC_GetNavDataForActorSelfmade(class UObject* WorldContextObject, class AActor* InActor);
};

// Class RegainEarth_FS.GameInstance_RE_Base
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UGameInstance_RE_Base : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.GameInstance_RE_Base");
		return ptr;
	}



	bool ShowGlobalWidgetScreen(class UUserWidget* Widget, int ZOrder);
	bool RemoveGlobalWidgetScreen(class UUserWidget* Widget);
};

// Class RegainEarth_FS.MyGetFriendsCallbackProxy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UMyGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CJ3[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.MyGetFriendsCallbackProxy");
		return ptr;
	}



	class UMyGetFriendsCallbackProxy* STATIC_MyGetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class RegainEarth_FS.MyGetLeaderBoardEntryIntegerCallbackProxy
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UMyGetLeaderBoardEntryIntegerCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YT4[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.MyGetLeaderBoardEntryIntegerCallbackProxy");
		return ptr;
	}



	class UMyGetLeaderBoardEntryIntegerCallbackProxy* STATIC_MyCreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};

// Class RegainEarth_FS.Projectile_Base
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class AProjectile_Base : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProjectileMovementComponent*                ProjectileMovementComponent;                               // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             OnHitEffect;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    BulletTraceEffect;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageType;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D3A3[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.Projectile_Base");
		return ptr;
	}



	void OnProjectileImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

// Class RegainEarth_FS.Projectile_PistolDefault_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UProjectile_PistolDefault_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.Projectile_PistolDefault_C");
		return ptr;
	}



};

// Class RegainEarth_FS.RegainEarth_FSGameModeBase
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class ARegainEarth_FSGameModeBase : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.RegainEarth_FSGameModeBase");
		return ptr;
	}



};

// Class RegainEarth_FS.TPS_PlayerCharacter_Base
// 0x0038 (FullSize[0x0500] - InheritedSize[0x04C8])
class ATPS_PlayerCharacter_Base : public AAll_Characters_Base_Class
{
public:
	class UDataTable*                                  DT_PlayerCharacterStats;                                   // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         CameraBoom;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            FollowCamera;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BaseTurnRate;                                              // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseLookUpRate;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxHealth;                                                 // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentHealth;                                             // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	RegainEarth_FS_EStateOfMenu                        StateOfMenu;                                               // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9Y4E[0xF];                                     // 0x04F1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.TPS_PlayerCharacter_Base");
		return ptr;
	}



	void SetMaxHealth(float healthValue);
	void SetCurrentHealth(float healthValue);
	void OnRepCPP_MaxHealthBP();
	void OnRepCPP_CurrentHealthBP();
	void OnRep_MaxHealth();
	void OnRep_CurrentHealth();
	float GetMaxHealth();
	float GetCurrentHealth();
};

// Class RegainEarth_FS.TPS_Wave_GameMode
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class ATPS_Wave_GameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.TPS_Wave_GameMode");
		return ptr;
	}



};

// Class RegainEarth_FS.Weapon_Base_Component_C
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UWeapon_Base_Component_C : public UActorComponent
{
public:
	RegainEarth_FS_EWeaponTypes                        WeaponType;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RegainEarth_FS_EWeaponPawnAnimationGroups          WeaponPawnAnimationGroup;                                  // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFLB[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               WeaponMesh;                                                // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RegainEarth_FS_EPlayerWeaponSlots                  UsedPlayerWeaponSlot;                                      // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZWV[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RegainEarth_FS.Weapon_Base_Component_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
