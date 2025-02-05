// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BET.h"
#include "BETGameMode.h"
#include "BETHUD.h"
#include "BETCharacter.h"

ABETGameMode::ABETGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABETHUD::StaticClass();
}
