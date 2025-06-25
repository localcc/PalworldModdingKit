#include "PalDungeonGimmick_MovingFloor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "PalPatrolMovementComponent.h"

APalDungeonGimmick_MovingFloor::APalDungeonGimmick_MovingFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->StartPointWaitTime = 2.00f;
    this->DefaultFXAtPatrolPoint = NULL;
    this->bCheckReachPatrolPointInDedicatedServer = false;
    this->RootComp = (USceneComponent*)RootComponent;
    this->MovementComponent = CreateDefaultSubobject<UPalPatrolMovementComponent>(TEXT("PatrolMovementComponent"));
    this->FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorMesh"));
    this->FloorMesh->SetupAttachment(RootComponent);
}

bool APalDungeonGimmick_MovingFloor::TryGetPatrolPointWorldLocation(const int32 Index, FVector& OutLocation) const {
    return false;
}

bool APalDungeonGimmick_MovingFloor::TryGetPatrolPointInfo(const int32 Index, FPalDungeonGimmickMovingFloorPoint& OutInfo) const {
    return false;
}


void APalDungeonGimmick_MovingFloor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonGimmick_MovingFloor, PatrolPointWorldLocations);
}


