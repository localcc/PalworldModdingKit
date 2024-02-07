#include "ModularGameMode.h"
#include "ModularGameState.h"
#include "ModularPawn.h"
#include "ModularPlayerController.h"
#include "ModularPlayerState.h"

AModularGameMode::AModularGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AModularGameState::StaticClass();
    this->PlayerControllerClass = AModularPlayerController::StaticClass();
    this->PlayerStateClass = AModularPlayerState::StaticClass();
    this->DefaultPawnClass = AModularPawn::StaticClass();
}


