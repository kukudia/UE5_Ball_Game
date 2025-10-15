// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_Ball_GameGameMode.h"
#include "UE5_Ball_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_Ball_GameGameMode::AUE5_Ball_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
