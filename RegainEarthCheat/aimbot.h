#pragma once
#include "pch.h"
#include "Global.h"

#define PI 3.14159265359

namespace ab
{
	inline float RadToDeg(float radius)
	{
		return radius * 180.0f / PI;
	}

	inline float DegToRad(float degree)
	{
		return degree * PI / 180.0f;
	}

	inline double GetDistance(CG::APawn* enemyPawn)
	{
		CG::FVector deltaVec = enemyPawn->K2_GetActorLocation() - GetPawn()->K2_GetActorLocation();
		return sqrt(pow(deltaVec.X, 2) + pow(deltaVec.Y, 2) + pow(deltaVec.Z, 2)); // |deltaVec| = √ x² + y² + z²
		// distance = √ (x1 - x2)² + (y1 - y2)² + (z1 - z2)²
	}

	bool CheckLineOfSight(CG::APawn* enemyPawn)
	{
		return myController->LineOfSightTo(enemyPawn, GetCamera()->GetCameraLocation(), false);
	}

	inline CG::AAI_Character_Base_Enemy_Pawn_C* CheckForClosestEnemy(CG::AAI_Character_Base_Enemy_Pawn_C* pawnToCheck)
	{
		static CG::AAI_Character_Base_Enemy_Pawn_C* closestEnemy = nullptr;
		static double closestDistance = 99999.9f;

		if (pawnToCheck)
		{
			if (CheckLineOfSight(pawnToCheck))
			{
				double actorDistance = GetDistance(pawnToCheck);

				if (actorDistance < closestDistance)
				{
					closestDistance = actorDistance;
					closestEnemy = pawnToCheck;
				}
			}
		}
		return closestEnemy;
	}

	void AimAt(const CG::FVector& targetViepoint)
	{
		myController->ControlRotation;

		//myController->Client_SetControlRotation();
	}
	
}