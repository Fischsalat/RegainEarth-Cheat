﻿#pragma once
#include "pch.h"
#include "Global.h"

#define PI 3.14159265359

namespace Aim
{

	inline double GetDistance(CG::APawn* enemyPawn)
	{
		CG::FVector deltaVec = enemyPawn->K2_GetActorLocation() - GetPawn()->K2_GetActorLocation();
		return deltaVec.Magnitude();
		// distance = √ (x1 - x2)² + (y1 - y2)² + (z1 - z2)²
	}

	bool IsInLineOfSight(CG::APawn* enemyPawn)
	{
		if (enemyPawn)
		{
			return myController->LineOfSightTo(enemyPawn, GetCamera()->GetCameraLocation(), false);
		}
		return false;
	}

	void AimAt(const CG::FVector& targetViepoint)
	{
		myController->ControlRotation = (targetViepoint - GetCamera()->GetCameraLocation()).ToRotator();
	}

	inline void AimAtClosestEnemy(CG::AAI_Character_Base_Enemy_Pawn_C* pawnToCheck)
	{
		static CG::AAI_Character_Base_Enemy_Pawn_C* closestEnemy = nullptr;
		static float closestDistance = 999999.9f;

		if (closestEnemy && !closestEnemy->IsDead && IsInLineOfSight(closestEnemy) && GetPawn()->ActualAimingState == CG::RegainEarth_FS_EStateOfAiming::EStateOfAiming__AimZoomed)
		{
			if (closestEnemy->IsA(CG::AAI_Robot_Enemy_Pawn_C::StaticClass()))
			{
				AimAt(closestEnemy->Mesh->GetBoneMatrix(18).WPlane);
			}
			else if (closestEnemy->IsA(CG::ABP_AI_MechaBiped_Enemy_C::StaticClass()))
			{
				AimAt(closestEnemy->Mesh->GetBoneMatrix(5).WPlane);
			}
			else if (closestEnemy->IsA(CG::ABP_TwigPeople_AI_Enemy_C::StaticClass()))
			{
				AimAt(closestEnemy->Mesh->GetBoneMatrix(48).WPlane);
			}
			else if (closestEnemy->IsA(CG::AAI_PBR_Creature_Enemy_C::StaticClass()))
			{
				AimAt(closestEnemy->Mesh->GetBoneMatrix(6).WPlane);
			}
			else
			{
				AimAt(closestEnemy->Mesh->GetBoneMatrix(29).WPlane);
			}
		}
		else if(pawnToCheck && !pawnToCheck->IsDead && IsInLineOfSight(pawnToCheck))
		{
			closestEnemy = pawnToCheck;
		}
	}
	
}