#include "PalLevelGimmickJumpSpot.h"

APalLevelGimmickJumpSpot::APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpFowardVelocity = 0.00f;
    this->JumpZVelocity = 0.00f;
}

void APalLevelGimmickJumpSpot::EventOnCharacterJumpOrFly(UPalCharacterMovementComponent* MovementComponent) {
}

void APalLevelGimmickJumpSpot::EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APalLevelGimmickJumpSpot::EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


