#include "PalSpeedCollisionComponent.h"

UPalSpeedCollisionComponent::UPalSpeedCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->ShapeBodySetup = NULL;
    this->bDynamicObstacle = true;
    this->IsSelfEnable = true;
}

void UPalSpeedCollisionComponent::OnAllActionEnd(const UPalActionComponent* ActionComponent) {
}

void UPalSpeedCollisionComponent::OnActionBegin(const UPalActionBase* action) {
}

void UPalSpeedCollisionComponent::DelayRemoveInterval() {
}

void UPalSpeedCollisionComponent::BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


