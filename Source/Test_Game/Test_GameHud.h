// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Test_GameHud.generated.h"


UCLASS(config = Game)
class ATest_GameHud : public AHUD
{
	GENERATED_BODY()

public:
	ATest_GameHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
