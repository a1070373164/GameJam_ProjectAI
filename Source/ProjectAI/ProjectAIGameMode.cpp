// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectAIGameMode.h"
#include "ProjectAICharacter.h"

AProjectAIGameMode::AProjectAIGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AProjectAICharacter::StaticClass();	
}
