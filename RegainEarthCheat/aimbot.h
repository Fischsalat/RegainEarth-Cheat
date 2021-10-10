#pragma once
#include "pch.h"
#include "Global.h"

#define PI 3.14159265359

class ab
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

public:
	bool CheckLineOfSight(CG::APawn* enemyPawn)
	{
		myController->LineOfSightTo(enemyPawn, GetCamera()->GetCameraLocation(), false);
	}

	void SetViewRotation(CG::FVector targetViepoint)
	{
		myController->ControlRotation;
		CG::FRotator;
		CG::FMatrix;
	}
	
}

/*
	fVec3 diff = enemy->skeleton->meshInstance->model->pMesh[6].pos - player->skeleton->meshInstance->model->pMesh[6].pos;
	float m = diff.GetMagnitude();
	float q = atan2(diff.y , diff.x)  * 180 / PI;
	float z = asinf(diff.z / m) * 180 / PI;
	camera->angle.x = (int)(z / 360 * 65535);//pich
	camera->angle.y = (int)(q / 360 * 65535);//yaw
*/