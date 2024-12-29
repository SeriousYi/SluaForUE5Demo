// Copyright Epic Games, Inc. All Rights Reserved.

#include "SluaDemoForUE5GameMode.h"
#include "SluaDemoForUE5Character.h"
#include "UObject/ConstructorHelpers.h"

ASluaDemoForUE5GameMode::ASluaDemoForUE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
