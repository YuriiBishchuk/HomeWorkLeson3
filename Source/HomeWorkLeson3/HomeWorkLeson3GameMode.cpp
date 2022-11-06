// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeWorkLeson3GameMode.h"
#include "HomeWorkLeson3Character.h"
#include "UObject/ConstructorHelpers.h"

AHomeWorkLeson3GameMode::AHomeWorkLeson3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
