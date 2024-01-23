#include "PalSpeedCollisionComponent.h"

void UPalSpeedCollisionComponent::OnAllActionEnd(const UPalActionComponent* ActionComponent) {
}

void UPalSpeedCollisionComponent::OnActionBegin(const UPalActionBase* action) {
}

void UPalSpeedCollisionComponent::DelayRemoveInterval() {
}

void UPalSpeedCollisionComponent::BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPalSpeedCollisionComponent::UPalSpeedCollisionComponent() {
    this->IsSelfEnable = true;
}

