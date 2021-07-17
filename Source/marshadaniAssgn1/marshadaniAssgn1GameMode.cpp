// Copyright Epic Games, Inc. All Rights Reserved.

#include "marshadaniAssgn1GameMode.h"
#include "marshadaniAssgn1Character.h"
#include "UObject/ConstructorHelpers.h"

AmarshadaniAssgn1GameMode::AmarshadaniAssgn1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
