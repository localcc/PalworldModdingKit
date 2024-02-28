#include "PalInteractiveObjectCapsuleComponent.h"

UPalInteractiveObjectCapsuleComponent::UPalInteractiveObjectCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->InteractDelegates = NULL;
    this->bIsEnableTriggerInteract = false;
    this->bIsImplementedTriggerInteract = false;
    this->bIsEnableInteractingTick = false;
    this->bIsEnableInteractingTickInClientOnly = false;
    this->bIsAdjustIndicatorLocationZForPlayer = false;
}

void UPalInteractiveObjectCapsuleComponent::SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface) {
}

void UPalInteractiveObjectCapsuleComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalInteractiveObjectCapsuleComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector UPalInteractiveObjectCapsuleComponent::GetIndicatorLocation(bool bNoShapeOffset) {
    return FVector{};
}

void UPalInteractiveObjectCapsuleComponent::EnableTriggerInteract() {
}

UPalInteractDelegates* UPalInteractiveObjectCapsuleComponent::Delegates() const {
    return NULL;
}

void UPalInteractiveObjectCapsuleComponent::CallOrRegisterOnCreateInteractDelegates(UPalInteractiveObjectCapsuleComponent::FOnCreateInteractsDelegates Delegate) {
}


