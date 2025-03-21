#include "PalDungeonGimmick_MovingFloor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PalPatrolMovementComponent.h"

APalDungeonGimmick_MovingFloor::APalDungeonGimmick_MovingFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->StartPointWaitTime = 2.00f;
    this->RootComp = (USceneComponent*)RootComponent;
    this->MovementComponent = CreateDefaultSubobject<UPalPatrolMovementComponent>(TEXT("PatrolMovementComponent"));
    this->FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
    this->FloorMesh->SetupAttachment(RootComponent);
}


