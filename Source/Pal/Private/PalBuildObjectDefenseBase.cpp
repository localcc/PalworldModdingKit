#include "PalBuildObjectDefenseBase.h"

APalBuildObjectDefenseBase::APalBuildObjectDefenseBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefenseAIActionClass = NULL;
}


void APalBuildObjectDefenseBase::GetCharacterLocationAndRotationWithOffset(APalCharacter* OwnerCharacter, FVector PreCharaLocation, FVector& OutLocation, FRotator& OutRotation) {
}



