// Copyright Epic Games, Inc. All Rights Reserved.

#include "MaskGameMode.h"
#include "MaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMaskGameMode::AMaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
