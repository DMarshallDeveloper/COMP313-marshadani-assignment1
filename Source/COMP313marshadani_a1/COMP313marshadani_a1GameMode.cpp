// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMP313marshadani_a1GameMode.h"
#include "COMP313marshadani_a1Character.h"
#include "UObject/ConstructorHelpers.h"

ACOMP313marshadani_a1GameMode::ACOMP313marshadani_a1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
