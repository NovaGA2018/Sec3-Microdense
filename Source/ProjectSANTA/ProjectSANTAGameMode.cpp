// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectSANTAGameMode.h"
#include "ProjectSANTAHUD.h"
#include "ProjectSANTACharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectSANTAGameMode::AProjectSANTAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectSANTAHUD::StaticClass();
}
