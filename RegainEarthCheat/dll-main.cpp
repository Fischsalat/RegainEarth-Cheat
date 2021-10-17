#pragma once 
#include "pch.h"
#include "Global.h"
#include "esp.h"

template<typename T, typename ... Args>
inline void DbgMeasureTime(T* func, Args&& ... params)
{
	auto now = std::chrono::high_resolution_clock::now();

	func(params...);

	auto after = std::chrono::high_resolution_clock::now();
	auto something = std::chrono::duration_cast<std::chrono::milliseconds>(after - now);
	std::cout << "Execution took: " << something.count() / 1000 << "s (" << something.count() << "ms)" << std::endl;
}

struct Kontrollr
{
	CG::APlayerState*& playerState = myController->PlayerState;

	CG::FName& stateName = myController->StateName;

	CG::APawn*& pawn = myController->Pawn;

	CG::ACharacter*& character = myController->Character;
};

DWORD MainThread(LPVOID param)
{
	CG::InitSdk();
	Utils::CreateConsoleWindow();

	DbgMeasureTime(InitGlobals);
	DbgMeasureTime(ESP::InitPRHook);

	DbgMeasureTime(CG::AAI_Character_Base_Enemy_Pawn_C::StaticClass);

	std::cout << "\n\n done" << std::endl;

	//CG::UBP_Weapon_C;
	//CG::UW_HUD_Shooting_RE_HR_C;
	
	/*
	while (true)
	{
		std::cout << myController->ControlRotation.Pitch << "\n";

		Sleep(60);
	}*/

	/*
	CG::UObject*& objPtrRef = *(CG::UObject**)((uint64)myController + 0x20);

	std::cout << myController->Outer->Outer << std::endl;

	objPtrRef->Outer = myController;

	std::cout << myController << std::endl;
	std::cout << myController->Outer->Outer << std::endl;
	Sleep(4000);
	*/
	
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID reserved)
{

	if (reason == DLL_PROCESS_ATTACH) 
	{
		CreateThread(0, 0, MainThread, hModule, 0, 0);
	}

	return TRUE;
}