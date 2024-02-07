#include "ModularGameModeBase.h"
#include "ModularGameStateBase.h"
#include "ModularPawn.h"
#include "ModularPlayerController.h"
#include "ModularPlayerState.h"

AModularGameModeBase::AModularGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AModularGameStateBase::StaticClass();
    this->PlayerControllerClass = AModularPlayerController::StaticClass();
    this->PlayerStateClass = AModularPlayerState::StaticClass();
    this->DefaultPawnClass = AModularPawn::StaticClass();
}


