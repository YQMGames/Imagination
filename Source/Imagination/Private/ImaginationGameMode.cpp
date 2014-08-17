// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Imagination.h"
#include "ImaginationGameMode.h"
#include "ImaginationPlayerController.h"
#include "ImaginationCharacter.h"

AImaginationGameMode::AImaginationGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = AImaginationPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}