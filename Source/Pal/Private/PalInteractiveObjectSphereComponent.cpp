#include "PalInteractiveObjectSphereComponent.h"

UPalInteractiveObjectSphereComponent::UPalInteractiveObjectSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->ShapeBodySetup = NULL;
    this->InteractDelegates = NULL;
    this->bIsEnableTriggerInteract = false;
    this->bIsImplementedTriggerInteract = false;
    this->bIsEnableInteractingTick = false;
    this->bIsEnableInteractingTickInClientOnly = false;
}

void UPalInteractiveObjectSphereComponent::SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface) {
}

void UPalInteractiveObjectSphereComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalInteractiveObjectSphereComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector UPalInteractiveObjectSphereComponent::GetIndicatorLocation(bool bNoShapeOffset) {
    return FVector{};
}

void UPalInteractiveObjectSphereComponent::EnableTriggerInteract() {
}

UPalInteractDelegates* UPalInteractiveObjectSphereComponent::Delegates() const {
    return NULL;
}

void UPalInteractiveObjectSphereComponent::CallOrRegisterOnCreateInteractDelegates(UPalInteractiveObjectSphereComponent::FOnCreateInteractsDelegates Delegate) {
}


