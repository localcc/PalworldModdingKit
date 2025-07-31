#include "PalLevelGimmickJumpSpot.h"
#include "Components/SceneComponent.h"

APalLevelGimmickJumpSpot::APalLevelGimmickJumpSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->JumpFowardVelocity = 0.00f;
    this->JumpZVelocity = 0.00f;
    this->Root = (USceneComponent*)RootComponent;
}

void APalLevelGimmickJumpSpot::EventOnCharacterMovementModeChanged(UPalCharacterMovementComponent* MovementComponent, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}

void APalLevelGimmickJumpSpot::EventOnCharacterJumpOrFly(UPalCharacterMovementComponent* MovementComponent) {
}

void APalLevelGimmickJumpSpot::EventOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void APalLevelGimmickJumpSpot::EventOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


