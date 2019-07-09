// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyModioTestgroundGameMode.h"
#include "MyModioTestgroundHUD.h"
#include "MyModioTestgroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyModioTestgroundGameMode::AMyModioTestgroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyModioTestgroundHUD::StaticClass();
}
