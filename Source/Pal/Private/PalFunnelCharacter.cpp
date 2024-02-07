#include "PalFunnelCharacter.h"
#include "Net/UnrealNetwork.h"

APalFunnelCharacter::APalFunnelCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FunnelSkillAIActionClass = NULL;
    this->FunnelSkillModuleClass = NULL;
}

void APalFunnelCharacter::SetOwnerCharacterId(const FPalInstanceID NewOwnerCharacterId) {
}


void APalFunnelCharacter::OnTrainerMoveToRespawnLocation(APalPlayerCharacter* Player, FVector Location) {
}

void APalFunnelCharacter::OnTrainerDead(FPalDeadInfo DeadInfo) {
}

void APalFunnelCharacter::OnSpawned_Implementation() {
}

void APalFunnelCharacter::OnRep_OwnerCharacterId() {
}

void APalFunnelCharacter::OnOwnerDead(FPalDeadInfo DeadInfo) {
}

void APalFunnelCharacter::OnInactive_Implementation() {
}

void APalFunnelCharacter::OnActive_Implementation() {
}

void APalFunnelCharacter::InactivateSelf() {
}

APalCharacter* APalFunnelCharacter::GetTrainer() const {
    return NULL;
}

int32 APalFunnelCharacter::GetRank() const {
    return 0;
}

APalCharacter* APalFunnelCharacter::GetOwnerPal() const {
    return NULL;
}

FName APalFunnelCharacter::GetCharacterID() const {
    return NAME_None;
}

void APalFunnelCharacter::ActivateSelf() {
}

void APalFunnelCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalFunnelCharacter, OwnerCharacterId);
}


