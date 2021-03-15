// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_GameGameMode.h"
#include "Test_GamePawn.h"
#include "Test_GameHud.h"

ATest_GameGameMode::ATest_GameGameMode()
{
	DefaultPawnClass = ATest_GamePawn::StaticClass();
	HUDClass = ATest_GameHud::StaticClass();
}
