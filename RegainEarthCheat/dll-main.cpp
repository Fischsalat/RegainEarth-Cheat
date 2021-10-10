#pragma once 
#include "pch.h"
#include "Global.h"
#include "esp.h"

template<typename... types>
void Log(types... params)
{
	std::cout << params << std::endl;;
}

DWORD MainThread(LPVOID param)
{
	CG::InitSdk();
	Utils::CreateConsoleWindow();

	InitGlobals();
	ESP::InitPRHook();

	std::cout << "\n\n done" << std::endl;

	//CG::UBP_Weapon_C;
	//CG::UW_HUD_Shooting_RE_HR_C;

	
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