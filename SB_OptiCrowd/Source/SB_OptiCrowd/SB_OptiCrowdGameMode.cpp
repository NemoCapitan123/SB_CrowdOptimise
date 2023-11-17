// Copyright Epic Games, Inc. All Rights Reserved.

#include "SB_OptiCrowdGameMode.h"
#include "SB_OptiCrowdCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASB_OptiCrowdGameMode::ASB_OptiCrowdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
