// Copyright Epic Games, Inc. All Rights Reserved.

#include "Minesweeper3DGameMode.h"
#include "Minesweeper3DHUD.h"
#include "Minesweeper3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinesweeper3DGameMode::AMinesweeper3DGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMinesweeper3DHUD::StaticClass();

	//Tile* tile;
	//tile = (Tile*)GetWorld()->SpawnActor(Tile::StaticClass(), NAME_None, Location(0, 0, 0);
}
