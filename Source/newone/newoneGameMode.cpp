// Copyright Epic Games, Inc. All Rights Reserved.

#include "newoneGameMode.h"
#include "newoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AnewoneGameMode::AnewoneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
