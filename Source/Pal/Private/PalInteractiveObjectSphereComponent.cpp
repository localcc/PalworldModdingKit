#include "PalInteractiveObjectSphereComponent.h"

void UPalInteractiveObjectSphereComponent::SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface) {
}

void UPalInteractiveObjectSphereComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalInteractiveObjectSphereComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector UPalInteractiveObjectSphereComponent::GetIndicatorLocation() {
    return FVector{};
}

void UPalInteractiveObjectSphereComponent::EnableTriggerInteract() {
}

UPalInteractDelegates* UPalInteractiveObjectSphereComponent::Delegates() const {
    return NULL;
}

void UPalInteractiveObjectSphereComponent::CallOrRegisterOnCreateInteractDelegates(UPalInteractiveObjectSphereComponent::FOnCreateInteractsDelegates Delegate) {
}

UPalInteractiveObjectSphereComponent::UPalInteractiveObjectSphereComponent() {
    this->InteractDelegates = NULL;
    this->bIsEnableTriggerInteract = false;
    this->bIsImplementedTriggerInteract = false;
    this->bIsEnableInteractingTick = false;
    this->bIsEnableInteractingTickInClientOnly = false;
}

