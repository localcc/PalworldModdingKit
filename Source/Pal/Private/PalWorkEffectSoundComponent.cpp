#include "PalWorkEffectSoundComponent.h"
#include "Net/UnrealNetwork.h"

UPalWorkEffectSoundComponent::UPalWorkEffectSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bActiveFX = false;
}

void UPalWorkEffectSoundComponent::OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectSoundComponent::OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalWorkEffectSoundComponent::OnWorkDisposed(UPalWorkBase* Work) {
}

void UPalWorkEffectSoundComponent::OnRep_ActiveFX(const bool bOldValue) {
}

void UPalWorkEffectSoundComponent::OnChangedInProgress(UPalWorkProgress* WorkProgress) {
}

void UPalWorkEffectSoundComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkEffectSoundComponent, bActiveFX);
}


