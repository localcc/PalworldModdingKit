#include "PalWorkEffectComponent.h"
#include "Net/UnrealNetwork.h"

UPalWorkEffectComponent::UPalWorkEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->LocationIndex = -1;
    this->bActiveFX = false;
}

void UPalWorkEffectComponent::OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectComponent::OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectComponent::OnRep_ActiveFX() {
}

void UPalWorkEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkEffectComponent, bActiveFX);
}


