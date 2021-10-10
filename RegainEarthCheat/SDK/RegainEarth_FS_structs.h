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
// Enums
//---------------------------------------------------------------------------

// Enum RegainEarth_FS.EStateOfMovement
enum class RegainEarth_FS_EStateOfMovement : uint8_t
{
	EStateOfMovement__NormalMovement = 0,
	EStateOfMovement__Crouch       = 1,
	EStateOfMovement__Prone        = 2,
	EStateOfMovement__Swim         = 3,
	EStateOfMovement__Fly          = 4,
	EStateOfMovement__Jump         = 5,
	EStateOfMovement__EStateOfMovement_MAX = 6,

};

// Enum RegainEarth_FS.EStateOfWalkSpeed
enum class RegainEarth_FS_EStateOfWalkSpeed : uint8_t
{
	EStateOfWalkSpeed__Walking     = 0,
	EStateOfWalkSpeed__Running     = 1,
	EStateOfWalkSpeed__Dashing     = 2,
	EStateOfWalkSpeed__EStateOfWalkSpeed_MAX = 3,

};

// Enum RegainEarth_FS.EStateOfAiming
enum class RegainEarth_FS_EStateOfAiming : uint8_t
{
	EStateOfAiming__NoAiming       = 0,
	EStateOfAiming__AimNormal      = 1,
	EStateOfAiming__AimZoomed      = 2,
	EStateOfAiming__AimADS         = 3,
	EStateOfAiming__EStateOfAiming_MAX = 4,

};

// Enum RegainEarth_FS.EStateOfAction
enum class RegainEarth_FS_EStateOfAction : uint8_t
{
	EStateOfAction__None           = 0,
	EStateOfAction__Reloading      = 1,
	EStateOfAction__Holstering     = 2,
	EStateOfAction__SwitchingWeapons = 3,
	EStateOfAction__PickingUp      = 4,
	EStateOfAction__Throwing       = 5,
	EStateOfAction__Interacting    = 6,
	EStateOfAction__DoCustomAnimation = 7,
	EStateOfAction__Spectating     = 8,
	EStateOfAction__Unconscious    = 9,
	EStateOfAction__Dead           = 10,
	EStateOfAction__Carrying       = 11,
	EStateOfAction__Reviving       = 12,
	EStateOfAction__ForcedDancing  = 13,
	EStateOfAction__ForcedTwitchAction = 14,
	EStateOfAction__ControlExternalDevice = 15,
	EStateOfAction__ControlExternalWeapon = 16,
	EStateOfAction__LoadedWeaponCharging = 17,
	EStateOfAction__ForcedToShootAnimation = 18,
	EStateOfAction__CloseCombatWeaponCharging = 19,
	EStateOfAction__CloseCombatAnimation = 20,
	EStateOfAction__EStateOfAction_MAX = 21,

};

// Enum RegainEarth_FS.ECharacterGender
enum class RegainEarth_FS_ECharacterGender : uint8_t
{
	ECharacterGender__Man          = 0,
	ECharacterGender__Woman        = 1,
	ECharacterGender__ECharacterGender_MAX = 2,

};

// Enum RegainEarth_FS.EStateOfMenu
enum class RegainEarth_FS_EStateOfMenu : uint8_t
{
	EStateOfMenu__Gameplay         = 0,
	EStateOfMenu__GameMenu         = 1,
	EStateOfMenu__SequenceWatching = 2,
	EStateOfMenu__EStateOfMenu_MAX = 3,

};

// Enum RegainEarth_FS.ECharacterClass
enum class RegainEarth_FS_ECharacterClass : uint8_t
{
	ECharacterClass__DroneExpert   = 0,
	ECharacterClass__HeavySoldier  = 1,
	ECharacterClass__LightSoldier  = 2,
	ECharacterClass__RangeSoldier  = 3,
	ECharacterClass__ECharacterClass_MAX = 4,

};

// Enum RegainEarth_FS.EShootingMode
enum class RegainEarth_FS_EShootingMode : uint8_t
{
	EShootingMode__AutoFireSingleShotReplicate = 0,
	EShootingMode__SingleFire      = 1,
	EShootingMode__BurstFire       = 2,
	EShootingMode__AutoFireOnOffReplicate = 3,
	EShootingMode__ChargeGunFire   = 4,
	EShootingMode__HeavyMiniFunFire = 5,
	EShootingMode__EShootingMode_MAX = 6,

};

// Enum RegainEarth_FS.EPlayerWeaponSlots
enum class RegainEarth_FS_EPlayerWeaponSlots : uint8_t
{
	EPlayerWeaponSlots__NoWeaponSlot = 0,
	EPlayerWeaponSlots__WeaponSlot1 = 1,
	EPlayerWeaponSlots__WeaponSlot2 = 2,
	EPlayerWeaponSlots__WeaponSlot3 = 3,
	EPlayerWeaponSlots__WeaponSlot4 = 4,
	EPlayerWeaponSlots__EPlayerWeaponSlots_MAX = 5,

};

// Enum RegainEarth_FS.EWeaponPawnAnimationGroups
enum class RegainEarth_FS_EWeaponPawnAnimationGroups : uint8_t
{
	EWeaponPawnAnimationGroups__NoWeapon = 0,
	EWeaponPawnAnimationGroups__Pistol = 1,
	EWeaponPawnAnimationGroups__Rifle = 2,
	EWeaponPawnAnimationGroups__Shotgun = 3,
	EWeaponPawnAnimationGroups__MiniGun = 4,
	EWeaponPawnAnimationGroups__CloseCombatOneHanded = 5,
	EWeaponPawnAnimationGroups__CloseCombatTwoHanded = 6,
	EWeaponPawnAnimationGroups__EWeaponPawnAnimationGroups_MAX = 7,

};

// Enum RegainEarth_FS.EWeaponTypes
enum class RegainEarth_FS_EWeaponTypes : uint8_t
{
	EWeaponTypes__NoWeapon         = 0,
	EWeaponTypes__CloseCombatOneHanded = 1,
	EWeaponTypes__CloseCombatTwoHanded = 2,
	EWeaponTypes__AssaultRifleAuto = 3,
	EWeaponTypes__RifleSemi        = 4,
	EWeaponTypes__Sniper           = 5,
	EWeaponTypes__Pistol           = 6,
	EWeaponTypes__Shotgun          = 7,
	EWeaponTypes__Smg              = 8,
	EWeaponTypes__MechHeavyMiniGun = 9,
	EWeaponTypes__ChargeRifle      = 10,
	EWeaponTypes__RocketLauncher   = 11,
	EWeaponTypes__GrenadeLauncher  = 12,
	EWeaponTypes__RangedGeneral    = 13,
	EWeaponTypes__CloseCombatGeneral = 14,
	EWeaponTypes__MechHeavyRocketLauncher = 15,
	EWeaponTypes__EWeaponTypes_MAX = 16,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RegainEarth_FS.CharacterStatsStruct
// 0x0050 (0x0058 - 0x0008)
struct FCharacterStatsStruct : public FTableRowBase
{
	struct FString                                     Name;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RegainEarth_FS_ECharacterClass                     CharacterClass;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RegainEarth_FS_ECharacterGender                    Gender;                                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PL5K[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaminaMax;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaminaReductionRate;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaminaRegenerationRate;                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthMax;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthRegenerationRate;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WalkingSpeed;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AimWalkingSpeed;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CrouchSpeed;                                               // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RunningSpeed;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SprintingSpeed;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryWeaponCount;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlobalAttackDamageMultiplier;                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct RegainEarth_FS.WeaponPawnAnimations_struct
// 0x0068 (0x0070 - 0x0008)
struct FWeaponPawnAnimations_struct : public FTableRowBase
{
	RegainEarth_FS_EWeaponPawnAnimationGroups          WeaponPawnAnimationGroup;                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZLW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             AimWalkMovementBlendSpace;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             NonAimingMovementBlendSpace;                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           UnHolster;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Holster;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Reload;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             ShootBlendSpace;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             AimOffset;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AimIn;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AimOut;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           JumpStart;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           JumpInAirLoop;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           JumpEndLanding;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
