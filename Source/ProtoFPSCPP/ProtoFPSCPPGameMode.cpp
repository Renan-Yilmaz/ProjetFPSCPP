// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProtoFPSCPPGameMode.h"
#include "ProtoFPSCPPHUD.h"
#include "ProtoFPSCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProtoFPSCPPGameMode::AProtoFPSCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProtoFPSCPPHUD::StaticClass();
}
