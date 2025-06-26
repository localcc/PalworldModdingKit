#include "PalDungeonGimmick_Pendulum.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

APalDungeonGimmick_Pendulum::APalDungeonGimmick_Pendulum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PivotPoint"));
    this->PivotPoint = (USceneComponent*)RootComponent;
    this->PendulumMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PendulumMesh"));
    this->DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollision"));
    this->SwingPeriod = 4.00f;
    this->DampingFactor = 0.00f;
    this->LaunchStrengthMultiplier = 10.00f;
    this->LaunchHeightMultiplier = 0.20f;
    this->DamageValue = 100.00f;
    this->SimulateInitialAngle = 0.00f;
    this->DamageCollision->SetupAttachment(PendulumMesh);
    this->PendulumMesh->SetupAttachment(RootComponent);
}

void APalDungeonGimmick_Pendulum::OnRep_SimulateInitialAngle() {
}

void APalDungeonGimmick_Pendulum::OnDamageOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APalDungeonGimmick_Pendulum::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonGimmick_Pendulum, SimulateInitialAngle);
}


