#include "PalWorkEffectComponent.h"
#include "Net/UnrealNetwork.h"

UPalWorkEffectComponent::UPalWorkEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->bActiveFX = false;
    this->bWorkFacingChild = false;
}

void UPalWorkEffectComponent::OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectComponent::OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectComponent::OnWorkDisposed(UPalWorkBase* Work) {
}

void UPalWorkEffectComponent::OnRep_ActiveFX() {
}

void UPalWorkEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkEffectComponent, bActiveFX);
    DOREPLIFETIME(UPalWorkEffectComponent, bWorkFacingChild);
}


