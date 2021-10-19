#pragma once
#include "pch.h"
#include "Offsets.h"

typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;


#define W2S(WorldLocation, ScreenLocation, bPlayerViewPortRelative) if(!myController->ProjectWorldLocationToScreen(WorldLocation, ScreenLocation, bPlayerViewPortRelative)) std::cout << "WorldToScreen failed at line " << __LINE__ << "\n"

#define AIMBOT_FOV 500.0f//In pixels

uintptr_t Imagebase;

CG::UEngine* GEngine;
CG::TUObjectArray* GObjects;
CG::FNamePool* GNames;

CG::ABP_Wave_REHR_PlayerController_C* myController;
CG::UBP_GameInstance_RE_C* myGameInstance;

CG::UKismetSystemLibrary* myKismet;
CG::UGameplayStatics* myStatics;
CG::UKismetMathLibrary* myMath;

// Level vars
CG::ABP_PlayerCharacter_BPBase_C* myPawn;
CG::AHUD_ShootingGameplay_C* myHud;


__forceinline CG::UWorld* GetWorld()
{
	return GEngine->GameViewport->World;
}

__forceinline CG::ULevel* GetLevel()
{
	return GetWorld()->PersistentLevel;
}

__forceinline CG::ABP_Wave_Gamemode_C* GetGameMode()
{
	return reinterpret_cast<CG::ABP_Wave_Gamemode_C*>(GetWorld()->AuthorityGameMode);
}

__forceinline CG::ABP_Wave_GameState_C* GetGamestate()
{
	return reinterpret_cast<CG::ABP_Wave_GameState_C*>(GetWorld()->GameState);
}

__forceinline CG::ABP_PlayerCharacter_BPBase_C* GetPawn()
{
	return reinterpret_cast<CG::ABP_PlayerCharacter_BPBase_C*>(myController->AcknowledgedPawn);
}

__forceinline CG::APlayerCameraManager* GetCamera()
{
	return myController->PlayerCameraManager;
}

__forceinline CG::UBP_Weapon_C* GetWeapon()
{
	return myPawn->CurrentWeapon;
}

__forceinline CG::AHUD_ShootingGameplay_C* GetHud()
{
	return reinterpret_cast<CG::AHUD_ShootingGameplay_C*>(myController->MyHUD);
}


void InitGlobals()
{
	Imagebase = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	GEngine = *Utils::Offset<CG::UEngine*>(Offsets::GEngine);
	if (!GEngine)	Utils::ThrowErrorExit("GEngine was a nullptr!");

	GObjects = CG::UObject::GObjects;
	if (!GObjects)	Utils::ThrowErrorExit("GObjects was a nullptr!");

	GNames = Utils::Offset<CG::FNamePool>(Offsets::GNames);
	if (!GNames)	Utils::ThrowErrorExit("GNames was a nullptr!");


	myGameInstance = reinterpret_cast<CG::UBP_GameInstance_RE_C*>(GetWorld()->OwningGameInstance);
	if (!myGameInstance)	Utils::ThrowErrorExit("OwningGameInstance was a nullptr!");

	myController = reinterpret_cast<CG::ABP_Wave_REHR_PlayerController_C*>(myGameInstance->LocalPlayers[0]->PlayerController);
	if (!myController)	Utils::ThrowErrorExit("PlayerController was a nullptr!");

	myPawn = GetPawn();
	if(!myPawn) Utils::ThrowErrorExit("Pawn was nullptr!");

	myKismet = reinterpret_cast<CG::UKismetSystemLibrary*>(CG::UKismetSystemLibrary::StaticClass());
		if (!myKismet)	Utils::ThrowErrorExit("KismetSystemLibrary was nullptr");

	myMath = reinterpret_cast<CG::UKismetMathLibrary*>(CG::UKismetMathLibrary::StaticClass());
	if (!myMath) Utils::ThrowErrorExit("KismetMathLibrary was nullptr!");

	myStatics = reinterpret_cast<CG::UGameplayStatics*>(CG::UGameplayStatics::StaticClass());
	if (!myStatics)	Utils::ThrowErrorExit("GameplayStatics was nullptr");
}