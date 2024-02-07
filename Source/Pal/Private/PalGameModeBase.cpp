#include "PalGameModeBase.h"

APalGameModeBase::APalGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameModeType = EPalGameModeType::InGame;
}


