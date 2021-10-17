#pragma once
#include "pch.h"
#include "Global.h"
#include "aimbot.h"

#define W2S(WorldLocation, ScreenLocation, PlayerViewPortRelative) if(!myController->ProjectWorldLocationToScreen(WorldLocation, ScreenLocation, PlayerViewPortRelative)) std::cout << "WorldToScreen failed at line" << __LINE__ << "\n";


namespace ESP
{
	uint64 postRenderAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + Offsets::PostRender;
	auto PostRender = reinterpret_cast<void(*)(CG::UGameViewportClient*, CG::UCanvas*)>(postRenderAddress);

	inline void CanvasDrawText(CG::UCanvas*& canvas, const CG::FString& renderString, const CG::FVector2D& screenPosition, const CG::FLinearColor& color, CG::FVector2D scale = { 1.0f, 1.0f })
	{
		return canvas->K2_DrawText(GEngine->SubtitleFont, renderString, screenPosition, scale, color, false, { 0.0f, 0.0f, 0.0f, 0.0f, }, scale, true, true, true, { 0.0f, 0.0f, 0.0f, 1.0f });
	}
	
	inline void DrawCrosshairToHead(CG::UCanvas* canvas, CG::ACharacter* enemy, int headBoneIndex, CG::FLinearColor drawColor = { 255.0f, 0.0f, 0.0f, 1.0f })
	{

		CG::FVector2D vecPostProject;

		W2S(enemy->Mesh->GetBoneMatrix(29).WPlane, &vecPostProject, true);

		canvas->K2_DrawLine({ 960.0f, 540.0f }, vecPostProject, 1.0f, drawColor);
	}

	inline void DrawLineBetweenBones(CG::UCanvas* canvas, CG::ACharacter* character, int index, int otheIndex)
	{
		if (character->Mesh->GetNumBones() < index && character->Mesh->GetNumBones() < otheIndex)
		{
			return;
		}

		CG::FVector vec1PreProject, vec2PreProject;
		CG::FVector2D vec1PostProject, vec2PostProject;

		vec1PreProject = character->Mesh->GetBoneMatrix(index).WPlane;
		vec2PreProject = character->Mesh->GetBoneMatrix(otheIndex).WPlane;

		myController->ProjectWorldLocationToScreen(vec1PreProject, &vec1PostProject, true);
		myController->ProjectWorldLocationToScreen(vec2PreProject, &vec2PostProject, true);

		canvas->K2_DrawLine(vec1PostProject, vec2PostProject, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
	}

	inline void DrawBox(CG::UCanvas* canvas, CG::ACharacter* character)
	{
		// X - Left/Right
		// Y - Depth
		// Z - Up/Down
// 
//	   z|	  y
//		|	 /
//		|	/
//		|  /
//		| /
//		|/______________x
//

		CG::FBoxSphereBounds bounds = character->Mesh->CachedWorldSpaceBounds;

		CG::FVector f1, f2, f3, f4, b1, b2, b3, b4;
		CG::FVector2D w2s_f1, w2s_f2, w2s_f3, w2s_f4, w2s_b1, w2s_b2, w2s_b3, w2s_b4;

		const float X_extend = bounds.BoxExtent.X / 2;
		const float Y_extend = bounds.BoxExtent.Y / 2;
		const float Z_extend = bounds.BoxExtent.Z / 2;

		f1.X = f4.X = b1.X = b4.X = bounds.Origin.X;
		f2.X = f3.X = b2.X = b3.X = bounds.Origin.X + bounds.BoxExtent.X;

		f1.Y = f2.Y = f3.Y = f4.Y = bounds.Origin.Y;
		b1.Y = b2.Y = b3.Y = b4.Y = bounds.Origin.Y + bounds.BoxExtent.Y;

		f1.Z = f2.Z = b1.Z = b2.Z = bounds.Origin.Z;
		f3.Z = f4.Z = b3.Z = b4.Z = bounds.Origin.Z + bounds.BoxExtent.Z;


		W2S(f1, &w2s_f1, true);
		W2S(f2, &w2s_f2, true);
		W2S(f3, &w2s_f3, true);
		W2S(f4, &w2s_f4, true);

		W2S(b1, &w2s_b1, true);
		W2S(b2, &w2s_b2, true); // failing quite a lot
		W2S(b3, &w2s_b3, true);
		W2S(b4, &w2s_b4, true);

		//Front
		canvas->K2_DrawLine(w2s_f1, w2s_f2, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f2, w2s_f3, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f3, w2s_f4, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f4, w2s_f1, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });

		//Back
		canvas->K2_DrawLine(w2s_b1, w2s_b2, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_b2, w2s_b3, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_b3, w2s_b4, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_b4, w2s_b1, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });

		//Connection
		canvas->K2_DrawLine(w2s_f1, w2s_b1, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f2, w2s_b2, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f3, w2s_b3, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });
		canvas->K2_DrawLine(w2s_f4, w2s_b4, 1.0f, { 255.0f, 0.0f, 0.0f, 1.0f });

		//bounds.Origin.Print("bounds.Origin");
		//bounds.BoxExtent.Print("bounds.BoxExtent");
	}

	void PostRenderHook(CG::UGameViewportClient* thisPtr, CG::UCanvas* canvas)
	{
		GetWeapon()->Ammo_InClip = GetWeapon()->Ammo_ClipSize;
		GetWeapon()->RecoilIncreaseSpeed = 99999999.9f;
		GetWeapon()->bUnlimited_Ammo_Weapon = true;
		GetWeapon()->CanBurstFire = true;
		GetWeapon()->Damage = 9999999.9f;
		GetWeapon()->Spreading_Increase = 0.0f;
		GetWeapon()->ShotsPerSecond = 15.0f;

		GetPawn()->CurrentHealth = 9999999.9f;
		GetPawn()->MaxHealth = 9999999.9f;
		GetPawn()->SetModifiedSpeed(3.0f);
		myController->SetPercentForScannerEnergyToHUD(100.0f);
		GetPawn()->BP_RadialScanComponent->CanScan = true;
		GetPawn()->BP_RadialScanComponent->ScanEnergyCurrent = GetPawn()->BP_RadialScanComponent->MaxScannerEnergy;

		GetPawn()->CharacterMovement->JumpOffJumpZFactor = 80.0f;
		GetPawn()->CharacterMovement->JumpZVelocity = 1200.0f;

		GetPawn()->CharacterMovement->AirControl = 200000.0f;
		GetPawn()->CharacterMovement->AirControlBoostMultiplier = 20000.0f;
		GetPawn()->CharacterMovement->AirControlBoostVelocityThreshold = 200000.0f;

		GetWeapon()->Spreading_Decrease_Time = 0.0f;
		GetWeapon()->Degrees_of_spreading = 0.0f;
		GetWeapon()->WeaponCanShowLaserDotPointer = true;

		GetPawn()->BP_RadialScanComponent->HoldEffectTimeInSecondsAfterLastRadarWave = 300.0f;


		for (int i = 0; i < GetPawn()->Mesh->GetNumBones(); +i++)
		{

			CG::FMatrix matrix = GetPawn()->Mesh->GetBoneMatrix(i);

			std::wstring wString = std::to_wstring(i);

			CG::FString printText(wString.c_str());

			CG::FVector2D vecOnScreen;
			myController->ProjectWorldLocationToScreen(matrix.WPlane, &vecOnScreen, true);

			CanvasDrawText(canvas, printText, vecOnScreen, { 1.0f, 0.43f, 0.0f, 1.0f });
		}

		for (int i = 0; i < GetLevel()->Actors.Num(); i++)
		{
			if (!GetLevel()->Actors[i])
			{
				continue;
			}

			if (GetLevel()->Actors[i]->IsA(CG::AAI_Character_Base_Enemy_Pawn_C::StaticClass()))
			{
				CG::AAI_Character_Base_Enemy_Pawn_C* enemy = reinterpret_cast<CG::AAI_Character_Base_Enemy_Pawn_C*>(GetLevel()->Actors[i]);

				/*
				for (int j = 0; j < enemy->Mesh->GetNumBones(); j++)
				{
					CG::FMatrix matrix = enemy->Mesh->GetBoneMatrix(j);

					std::wstring wString = std::to_wstring(j);

					CG::FString printText(wString.c_str());

					CG::FVector2D vecOnScreen;
					myController->ProjectWorldLocationToScreen(matrix.WPlane, &vecOnScreen, true);

					CanvasDrawnText(canvas, printText, vecOnScreen, { 1.0f, 0.43f, 0.0f, 1.0f });
				}
				*/
				if (enemy && !enemy->IsDead && enemy->CurrentHealth > 0)
				{
					Aim::AimAtClosestEnemy(enemy);
					//DrawBox(canvas, enemy);
					
					if (enemy->IsA(CG::AAI_Robot_Enemy_Pawn_C::StaticClass()))
					{
						// Head: 18
						DrawCrosshairToHead(canvas, enemy, 18);

						DrawLineBetweenBones(canvas, enemy, 18, 17);

						DrawLineBetweenBones(canvas, enemy, 17, 40);
						DrawLineBetweenBones(canvas, enemy, 40, 41);
						DrawLineBetweenBones(canvas, enemy, 41, 42);
						DrawLineBetweenBones(canvas, enemy, 42, 33);

						DrawLineBetweenBones(canvas, enemy, 17, 20);
						DrawLineBetweenBones(canvas, enemy, 20, 21);
						DrawLineBetweenBones(canvas, enemy, 21, 22);
						DrawLineBetweenBones(canvas, enemy, 22, 23);

						DrawLineBetweenBones(canvas, enemy, 17, 16);
						DrawLineBetweenBones(canvas, enemy, 16, 15);
						DrawLineBetweenBones(canvas, enemy, 15, 14);
						DrawLineBetweenBones(canvas, enemy, 14, 1);

						DrawLineBetweenBones(canvas, enemy, 1, 8);
						DrawLineBetweenBones(canvas, enemy, 8, 9);
						DrawLineBetweenBones(canvas, enemy, 9, 10);

						DrawLineBetweenBones(canvas, enemy, 1, 2);
						DrawLineBetweenBones(canvas, enemy, 2, 3);
						DrawLineBetweenBones(canvas, enemy, 3, 4);
					}
					else if (enemy->IsA(CG::ABP_AI_MechaBiped_Enemy_C::StaticClass()))
					{

					}
					else if (enemy->IsA(CG::ABP_TwigPeople_AI_Enemy_C::StaticClass()))
					{
						//Head: 48
						DrawCrosshairToHead(canvas, enemy, 48);

						DrawLineBetweenBones(canvas, enemy, 48, 47);

						DrawLineBetweenBones(canvas, enemy, 47, 25);
						DrawLineBetweenBones(canvas, enemy, 25, 24);
						DrawLineBetweenBones(canvas, enemy, 24, 23);

						DrawLineBetweenBones(canvas, enemy, 47, 27);
						DrawLineBetweenBones(canvas, enemy, 27, 28);
						DrawLineBetweenBones(canvas, enemy, 28, 29);

						DrawLineBetweenBones(canvas, enemy, 47, 4);
						DrawLineBetweenBones(canvas, enemy, 4, 3);
						DrawLineBetweenBones(canvas, enemy, 3, 2);
						DrawLineBetweenBones(canvas, enemy, 2, 1);

						DrawLineBetweenBones(canvas, enemy, 1, 55);
						DrawLineBetweenBones(canvas, enemy, 55, 56);
						DrawLineBetweenBones(canvas, enemy, 56, 57);
						DrawLineBetweenBones(canvas, enemy, 57, 58);
						DrawLineBetweenBones(canvas, enemy, 58, 59);

						DrawLineBetweenBones(canvas, enemy, 1, 49);
						DrawLineBetweenBones(canvas, enemy, 49, 50);
						DrawLineBetweenBones(canvas, enemy, 50, 51);
						DrawLineBetweenBones(canvas, enemy, 51, 52);
						DrawLineBetweenBones(canvas, enemy, 52, 53);
					}
					else if (enemy->IsA(CG::AAI_PBR_Creature_Enemy_C::StaticClass()))
					{
						//Head: 6
						DrawCrosshairToHead(canvas, enemy, 6);

						DrawLineBetweenBones(canvas, enemy, 8, 6);

						DrawLineBetweenBones(canvas, enemy, 6, 35);
						DrawLineBetweenBones(canvas, enemy, 35, 36);
						DrawLineBetweenBones(canvas, enemy, 36, 37);

						DrawLineBetweenBones(canvas, enemy, 6, 11);
						DrawLineBetweenBones(canvas, enemy, 11, 12);
						DrawLineBetweenBones(canvas, enemy, 12, 13);

						DrawLineBetweenBones(canvas, enemy, 6, 4);
						DrawLineBetweenBones(canvas, enemy, 4, 3);
						DrawLineBetweenBones(canvas, enemy, 3, 2);
						DrawLineBetweenBones(canvas, enemy, 2, 0);

						DrawLineBetweenBones(canvas, enemy, 0, 63);
						DrawLineBetweenBones(canvas, enemy, 63, 64);
						DrawLineBetweenBones(canvas, enemy, 64, 65);

						DrawLineBetweenBones(canvas, enemy, 0, 58);
						DrawLineBetweenBones(canvas, enemy, 58, 59);
						DrawLineBetweenBones(canvas, enemy, 59, 60);
					}
					else
					{
						//Head: 29
						DrawCrosshairToHead(canvas, enemy, 29);

						DrawLineBetweenBones(canvas, enemy, 29, 28);
						DrawLineBetweenBones(canvas, enemy, 28, 31);

						DrawLineBetweenBones(canvas, enemy, 31, 32);
						DrawLineBetweenBones(canvas, enemy, 32, 33);
						DrawLineBetweenBones(canvas, enemy, 33, 34);

						DrawLineBetweenBones(canvas, enemy, 31, 4);
						DrawLineBetweenBones(canvas, enemy, 4, 5);
						DrawLineBetweenBones(canvas, enemy, 5, 6);
						DrawLineBetweenBones(canvas, enemy, 6, 7);

						DrawLineBetweenBones(canvas, enemy, 28, 3);
						DrawLineBetweenBones(canvas, enemy, 3, 2);
						DrawLineBetweenBones(canvas, enemy, 2, 1);
						DrawLineBetweenBones(canvas, enemy, 1, 0);

						DrawLineBetweenBones(canvas, enemy, 0, 55);
						DrawLineBetweenBones(canvas, enemy, 55, 56);
						DrawLineBetweenBones(canvas, enemy, 56, 57);

						DrawLineBetweenBones(canvas, enemy, 0, 60);
						DrawLineBetweenBones(canvas, enemy, 60, 61);
						DrawLineBetweenBones(canvas, enemy, 61, 62);
					}
				}
			}
		}
	

		return PostRender(thisPtr, canvas);
	}

	inline void InitPRHook()
	{
		DWORD virtualProtect;
		void** vftable = *static_cast<void***>(static_cast<void*>(GEngine->GameViewport));

		VirtualProtect((&vftable[0x62]), 0x8, PAGE_EXECUTE_READWRITE, &virtualProtect);

		vftable[0x62] = PostRenderHook;

		VirtualProtect((&vftable[0x62]), 0x8, virtualProtect, &virtualProtect);
	}
};