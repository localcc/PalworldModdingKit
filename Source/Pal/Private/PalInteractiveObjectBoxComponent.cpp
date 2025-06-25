#include "PalInteractiveObjectBoxComponent.h"

UPalInteractiveObjectBoxComponent::UPalInteractiveObjectBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bIsEnableTriggerInteract = false;
    this->bIsImplementedTriggerInteract = false;
    this->bIsEnableInteractingTick = false;
    this->bIsEnableInteractingTickInClientOnly = false;
    this->bIsAdjustIndicatorLocationZForPlayer = false;
    this->bNeedTraceToPlayer = false;
}

void UPalInteractiveObjectBoxComponent::SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface) {
}

void UPalInteractiveObjectBoxComponent::SetForceDisableInteract() {
}

void UPalInteractiveObjectBoxComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPalInteractiveObjectBoxComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FVector UPalInteractiveObjectBoxComponent::GetIndicatorLocation(bool bNoShapeOffset) {
    return FVector{};
}

void UPalInteractiveObjectBoxComponent::EnableTriggerInteract() {
}

void UPalInteractiveObjectBoxComponent::CallOrRegisterOnCreateInteractDelegates(FOnCreateInteractDelegates Delegate) {
}


